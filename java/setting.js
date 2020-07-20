const path = require('path');

module.exports = {
    'sasl_plain_username': 'alikafka_post-cn-n6w1qd9m300e',
    'sasl_plain_password': 'pk7O3UGGTEJNb3ycwog2vlx4FYoFLyZn',
    'ca': path.join(__dirname, './ca-cert.pem'),
    'bootstrap_servers': ['120.26.74.35:9093', '120.26.75.224:9093', '120.26.75.183:9093'],
    'java_topic_name': 'SDK_PORTAL_JAVA',
    'result_topic_name': 'SDK_PORTAL_RESULT',
    'consumer_id': 'JAVA_CONSUMER_GROUP',
    'reset': 'earliest',
    'repo': path.join(__dirname, 'repo'),
    'sdkCoreDir': path.join(__dirname, 'repo/java'),
    'jarPrefix': '',
    'ossDir': 'tarfiles',
    'oss_accessKeyId': 'LTAI4GKMk2dN5v4LjbgNcvFG',
    'oss_accessKeySecret': 'DslGcUdqNXGyjrTtWRZYkRP0wcAUSR',
    'oss_bucket': 'sdk-portal-test',
    'oss_endpoint': 'oss-ap-southeast-1.aliyuncs.com',
    'oss_region': 'oss-ap-southeast-1',
    'oss_cwd': '/Users/dyn/',
    'oss_cmd': './ossutilmac64',
    'oss_output': 'output/',
    'oss_publish': 'publish/',
    'output': path.join(__dirname, 'output/')
}