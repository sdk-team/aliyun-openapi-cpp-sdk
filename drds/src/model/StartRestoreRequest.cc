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

#include <alibabacloud/drds/model/StartRestoreRequest.h>

using AlibabaCloud::Drds::Model::StartRestoreRequest;

StartRestoreRequest::StartRestoreRequest() :
	RpcServiceRequest("drds", "2019-01-23", "StartRestore")
{}

StartRestoreRequest::~StartRestoreRequest()
{}

std::string StartRestoreRequest::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

void StartRestoreRequest::setPreferredBackupTime(const std::string& preferredBackupTime)
{
	preferredBackupTime_ = preferredBackupTime;
	setCoreParameter("PreferredBackupTime", preferredBackupTime);
}

std::string StartRestoreRequest::getBackupDbNames()const
{
	return backupDbNames_;
}

void StartRestoreRequest::setBackupDbNames(const std::string& backupDbNames)
{
	backupDbNames_ = backupDbNames;
	setCoreParameter("BackupDbNames", backupDbNames);
}

std::string StartRestoreRequest::getBackupId()const
{
	return backupId_;
}

void StartRestoreRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

std::string StartRestoreRequest::getBackupMode()const
{
	return backupMode_;
}

void StartRestoreRequest::setBackupMode(const std::string& backupMode)
{
	backupMode_ = backupMode;
	setCoreParameter("BackupMode", backupMode);
}

std::string StartRestoreRequest::getBackupLevel()const
{
	return backupLevel_;
}

void StartRestoreRequest::setBackupLevel(const std::string& backupLevel)
{
	backupLevel_ = backupLevel;
	setCoreParameter("BackupLevel", backupLevel);
}

std::string StartRestoreRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void StartRestoreRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string StartRestoreRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartRestoreRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

