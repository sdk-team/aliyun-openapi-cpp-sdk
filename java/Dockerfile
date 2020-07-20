FROM centos:7.2.1511

RUN curl -SLO "http://alinode.aliyun.com/dist/new-alinode/v4.9.0/alinode-v4.9.0-linux-x64.tar.gz" && \
    tar -zxvf "alinode-v4.9.0-linux-x64.tar.gz" -C /usr/local --strip-components=1 --no-same-owner && \
    rm /alinode-v4.9.0-linux-x64.tar.gz  && \
    yum install -y openssl-devel zlib zlib-devel lz4 lz4-devel cyrus-sasl-lib cyrus-sasl-devel cyrus-sasl-plain make gcc gcc+ gcc-c++

COPY worker_java.js /root/java-test/
COPY producer.js /root/java-test/
COPY consumer.js /root/java-test/
COPY package.json /root/java-test/

RUN yum install java-1.8.0-openjdk* -y && \
    npm install @ali/tea-cli -g --registry=https://registry.npm.alibaba-inc.com && \
    mkdir -p /root/sdk-portal-java

ENV JAVA_HOME=/usr/lib/jvm/jre-1.8.0-openjdk
ENV PATH=$PATH:$JAVA_HOME/bin
ENV CLASSPATH=.:$JAVA_HOME/lib/dt.jar:$JAVA_HOME/lib/tools.jar
ENV LANG=zh_CN.utf8

# OSS mount
COPY oss-access /root/
RUN cd /root/ && \
    curl -SLO "http://gosspublic.alicdn.com/ossfs/ossfs_1.80.6_centos7.0_x86_64.rpm" && \
    sudo yum localinstall ossfs_1.80.6_centos7.0_x86_64.rpm && \
    echo sdk-portal-test:`cat oss-access` > /etc/passwd-ossfs && \
    chmod 640 /etc/passwd-ossfs && \
    mkdir /root/ossfs && \
    ossfs sdk-portal-test /root/ossfs -ourl=oss-ap-southeast-1.aliyuncs.com

WORKDIR /root/sdk-portal-java

RUN npm install --registry=https://registry.npm.alibaba-inc.com

ENTRYPOINT /usr/local/bin/node /root/java-test/worker_java.js