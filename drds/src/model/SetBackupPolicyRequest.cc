/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/drds/model/SetBackupPolicyRequest.h>

using AlibabaCloud::Drds::Model::SetBackupPolicyRequest;

SetBackupPolicyRequest::SetBackupPolicyRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SetBackupPolicy")
{}

SetBackupPolicyRequest::~SetBackupPolicyRequest()
{}

std::string SetBackupPolicyRequest::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

void SetBackupPolicyRequest::setPreferredBackupPeriod(const std::string& preferredBackupPeriod)
{
	preferredBackupPeriod_ = preferredBackupPeriod;
	setCoreParameter("PreferredBackupPeriod", preferredBackupPeriod);
}

std::string SetBackupPolicyRequest::getBackupDbNames()const
{
	return backupDbNames_;
}

void SetBackupPolicyRequest::setBackupDbNames(const std::string& backupDbNames)
{
	backupDbNames_ = backupDbNames;
	setCoreParameter("BackupDbNames", backupDbNames);
}

std::string SetBackupPolicyRequest::getDataBackupRetentionPeriod()const
{
	return dataBackupRetentionPeriod_;
}

void SetBackupPolicyRequest::setDataBackupRetentionPeriod(const std::string& dataBackupRetentionPeriod)
{
	dataBackupRetentionPeriod_ = dataBackupRetentionPeriod;
	setCoreParameter("DataBackupRetentionPeriod", dataBackupRetentionPeriod);
}

std::string SetBackupPolicyRequest::getPreferredBackupStartTime()const
{
	return preferredBackupStartTime_;
}

void SetBackupPolicyRequest::setPreferredBackupStartTime(const std::string& preferredBackupStartTime)
{
	preferredBackupStartTime_ = preferredBackupStartTime;
	setCoreParameter("PreferredBackupStartTime", preferredBackupStartTime);
}

std::string SetBackupPolicyRequest::getPreferredBackupEndTime()const
{
	return preferredBackupEndTime_;
}

void SetBackupPolicyRequest::setPreferredBackupEndTime(const std::string& preferredBackupEndTime)
{
	preferredBackupEndTime_ = preferredBackupEndTime;
	setCoreParameter("PreferredBackupEndTime", preferredBackupEndTime);
}

std::string SetBackupPolicyRequest::getBackupMode()const
{
	return backupMode_;
}

void SetBackupPolicyRequest::setBackupMode(const std::string& backupMode)
{
	backupMode_ = backupMode;
	setCoreParameter("BackupMode", backupMode);
}

std::string SetBackupPolicyRequest::getBackupLog()const
{
	return backupLog_;
}

void SetBackupPolicyRequest::setBackupLog(const std::string& backupLog)
{
	backupLog_ = backupLog;
	setCoreParameter("BackupLog", backupLog);
}

std::string SetBackupPolicyRequest::getBackupLevel()const
{
	return backupLevel_;
}

void SetBackupPolicyRequest::setBackupLevel(const std::string& backupLevel)
{
	backupLevel_ = backupLevel;
	setCoreParameter("BackupLevel", backupLevel);
}

std::string SetBackupPolicyRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SetBackupPolicyRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string SetBackupPolicyRequest::getLogBackupRetentionPeriod()const
{
	return logBackupRetentionPeriod_;
}

void SetBackupPolicyRequest::setLogBackupRetentionPeriod(const std::string& logBackupRetentionPeriod)
{
	logBackupRetentionPeriod_ = logBackupRetentionPeriod;
	setCoreParameter("LogBackupRetentionPeriod", logBackupRetentionPeriod);
}

std::string SetBackupPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetBackupPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

