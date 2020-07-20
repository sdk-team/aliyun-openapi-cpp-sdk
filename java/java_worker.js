const config = require('./setting');
const publish = require('./publish');
const consumer = require('./consumer');
const producer = require('./producer');
const ossutil = require('./oss_util');
const fs = require('fs');
const path = require('path');
const cp = require('child_process');
const promisify = require('util').promisify;
const exec = promisify(cp.exec);
const readFile = promisify(fs.readFile);
const writeFile = promisify(fs.writeFile);
const xml2js = require('xml2js');

async function testRuning() {
  while (true) {
    const task = await consumer.getTask();
    console.log('-'.repeat(20));
    console.log(task);
    console.log('-'.repeat(20));
    let options = task.baseExecOptions;
    options.env = Object.assign(options.env, process.env);
    let output = `${config['output']}`;
    await ossutil.downloadDir(task.output, output, options);
    output = `${output}${task.taskId}`;
    //await publish.clone(config['repo'], config['sdkCoreDir'], `https://github.com/${task.gitbub_username}/${task.repository}.git`);
    // Step1：进行预构建
    //await publish.preBuild(task, config['sdkCoreDir'], options);
    // Step2: 校验代码
    await checkSdkSyntax(task, output, options);
    // Step3: 场景化测试（问题场景发起实际的调用测试验证）
    await checkSdkScene(output, options);
    // Step4: 发布至 Github, php composer 钩子在 github，因此仅需推送至 github 即可
    if (task.type === 'download') {
      await publishToOssForDownload(task, output, options);
    } else {
      await publishSdk(task, output, options);
    }
    ossutil.uploadDir(output, task.output, options);
    console.log('-'.repeat(20));
  }

}

async function publishSdk(task, output, options) {
  //const output = task.output;
  const codeGenPath = path.join(output, `${task.dirPrefix}-${task.productId.toLowerCase()}${config['jarPrefix']}`);
  const gitPath = path.join(output, task.gitCodePath);
  const mvnPath = `${codeGenPath}-mvn`;
  const ossPath = `${codeGenPath}-oss`;
  await exec(`cp -rf ${codeGenPath} ${ossPath}`, Object.assign({ cwd: output }, options));
  await exec(`cp -rf ${codeGenPath} ${mvnPath}`, Object.assign({ cwd: output }, options));
  await Promise.all([
    publish.publishSdkToGithub(task, gitPath, options),
    publishSdkToMaven(task, mvnPath, options),
    publishSdkToOss(task, ossPath, options)
  ]);
}

exports.conflictDeal = async function (task, options, err) {
  //只有go composer cpp需要
  return;
}

async function checkSdkSyntax(task, output, options) {
  // need to implement by the language's service.
  const codeGenPath = path.join(output, `${task.dirPrefix}-${task.productId.toLowerCase()}${config['jarPrefix']}`);
  const origin = path.join(output, path.basename(config['sdkCoreDir']));
  // apply version
  const pom = path.join(codeGenPath, 'pom.xml');
  const json = await parse(await readFile(pom));
  if (config.publishToTestRepo) {
    task.version = `${task.version}-SNAPSHOT`;
  }
  json.project.version[0] = task.version;
  const builder = new xml2js.Builder();
  const newPom = builder.buildObject(json);
  await writeFile(pom, newPom);
  // copy generate code to git path
  await exec(`cp -rf ${codeGenPath} ${origin}`, options);
  // TODO: check java syntax
}

async function checkSdkScene(output, options) {
  // TODO: add scene test case
}

async function publishSdkToMaven(task, mvnPath, options) {
  try {
    const productId = task.productId.toLowerCase();
    const push = 'mvn clean source:jar javadoc:jar package deploy -Dmaven.test.skip=true';
    // ctx.logger.info(`push maven [${mvnPath}]: ${push}`);
    await exec(push, Object.assign({ cwd: mvnPath }, options));
    const address = `https://oss.sonatype.org/#nexus-search;quick~aliyun-java-sdk-${productId}${config['jarPrefix']}`;
    console.log(address);
    // await releaseTask.addSuccessPackageReleaseTask(task, address, this.language, 'maven');
    // sdkList.updateReleaseLog({ url: address }, task.taskId, this.language);
  } catch (err) {
    // ctx.logger.error(err);
    console.log(err);
    const address = `/task/${task.redisKey}/maven?type=history`;
    console.log(address);
    //await this.updatePublishError(task, 'maven', address, err);
  }
}

async function publishSdkToOss(task, ossPath, options) {
  try {
    await exec('mvn package', Object.assign({ cwd: ossPath }, options));
    const productId = task.productId.toLowerCase();
    const name = `${task.dirPrefix}-${productId}${config['jarPrefix']}`;
    const targetName = `${name}-${task.version}.jar`;
    const targetPath = path.join(ossPath, 'target', targetName);
    await publish.publishSdkToOss(task, targetPath);
  } catch (err) {
    // ctx.logger.error(err);
    console.log(err);
    const address = `/task/${task.redisKey}/oss?type=history`;
    console.log(address);
    //await this.updatePublishError(task, 'oss', address, err);
  }
}

async function publishToOssForDownload(task, output, options) {
  const codeGenPath = path.join(output, `${task.dirPrefix}-${task.productId.toLowerCase()}${config['jarPrefix']}`);
  await exec('mvn package', Object.assign({ cwd: codeGenPath }, options));
  await publish.publishToOssForDownload(task, codeGenPath, options);
}

async function parse(xml) {
  return new Promise((resolve, reject) => {
    xml2js.parseString(xml, function (err, result) {
      if (err) {
        return reject(err);
      }
      return resolve(result);
    });
  });
}

testRuning();