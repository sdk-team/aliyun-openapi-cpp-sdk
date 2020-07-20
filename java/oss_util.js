const fs = require('fs');
const path = require('path');
const cp = require('child_process');
const promisify = require('util').promisify;
const exec = promisify(cp.exec);
const config = require('./setting');

function prefixFileName(filename) {
  return `u-${uuidv4()}-u-${filename}`;
}

exports.updateConfig = async function (endpoint, options) {
  const cwd = config['oss_cwd'];
  await exec(`${config['oss_cmd']} config -e ${endpoint} -i ${config['oss_accessKeyId']} -k ${config['oss_accessKeySecret']}`, Object.assign({ cwd }, options));
}

exports.upload = async function (filename, osspath, options) {
  const dir = path.dirname(filename);
  const basename = path.basename(filename);
  const cwd = config['oss_cwd'];
  if (options && options.prefix) {
    filename = `${dir}${prefixFileName(basename)}`;
    config.log(filename);
  }
  await exec(`${config['oss_cmd']} cp ${filename} oss://${config['oss_bucket']}/${osspath}`, Object.assign({ cwd }, options));
}

exports.uploadDir = async function (dirname, osspath, options) {
  const cwd = config['oss_cwd'];
  await exec(`${config['oss_cmd']} cp -rf ${dirname} oss://${config['oss_bucket']}/${osspath}`, Object.assign({ cwd }, options));
}

exports.download = async function (osspath, filename, options) {
  const cwd = config['oss_cwd'];
  await exec(`${config['oss_cmd']} cp oss://${config['oss_bucket']}/${osspath} ${filename}`, Object.assign({ cwd }, options));
}

exports.downloadDir = async function (osspath, dirname, options) {
  const cwd = config['oss_cwd'];
  await exec(`${config['oss_cmd']} cp -r oss://${config['oss_bucket']}/${osspath} ${dirname}`, Object.assign({ cwd }, options));
}

exports.deleteFile = async function (osspath, filename, options) {
  const cwd = config['oss_cwd'];
  await exec(`${config['oss_cmd']} rm oss://${config['oss_bucket']}/${osspath}/${filename}`, Object.assign({ cwd }, options))
}

exports.list = async function (options) {
  await exec(`${config['oss_cmd']} ls oss://${config['oss_bucket']}`, Object.assign({ cwd }, options));
}

exports.uploadZipDir = async function (file, target, osspath, options, ignoreFiles = []) {
  let cwd = path.dirname(file);
  const basename = path.basename(file);
  const cmd = 'zip -q -x *.pyc ' +
    ignoreFiles.map(file => {
      if (file.isFile) {
        return `-x ${basename}/${file.file}`;
      }
      if (file.isDir) {
        return `-x "${basename}/${file.file}/*"`;
      }
    }).join(' ') +
    ` -r ${target} ./${basename}`;
  await exec(cmd, Object.assign({ cwd }, options));
  //ctx.logger.info(`package cmd: ${cmd}`);
  const targetPath = path.join(cwd, target);
  cwd = config['oss_cwd'];
  await exec(`${config['oss_cmd']} cp ${targetPath} oss://${config['oss_bucket']}/${osspath}`, Object.assign({ cwd }, options));
}