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

#include <alibabacloud/drds/model/PutRestorePreCheckRequest.h>

using AlibabaCloud::Drds::Model::PutRestorePreCheckRequest;

PutRestorePreCheckRequest::PutRestorePreCheckRequest() :
	RpcServiceRequest("drds", "2019-01-23", "PutRestorePreCheck")
{}

PutRestorePreCheckRequest::~PutRestorePreCheckRequest()
{}

std::string PutRestorePreCheckRequest::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

void PutRestorePreCheckRequest::setPreferredBackupTime(const std::string& preferredBackupTime)
{
	preferredBackupTime_ = preferredBackupTime;
	setCoreParameter("PreferredBackupTime", preferredBackupTime);
}

std::string PutRestorePreCheckRequest::getBackupDbNames()const
{
	return backupDbNames_;
}

void PutRestorePreCheckRequest::setBackupDbNames(const std::string& backupDbNames)
{
	backupDbNames_ = backupDbNames;
	setCoreParameter("BackupDbNames", backupDbNames);
}

std::string PutRestorePreCheckRequest::getBackupId()const
{
	return backupId_;
}

void PutRestorePreCheckRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

std::string PutRestorePreCheckRequest::getBackupMode()const
{
	return backupMode_;
}

void PutRestorePreCheckRequest::setBackupMode(const std::string& backupMode)
{
	backupMode_ = backupMode;
	setCoreParameter("BackupMode", backupMode);
}

std::string PutRestorePreCheckRequest::getBackupLevel()const
{
	return backupLevel_;
}

void PutRestorePreCheckRequest::setBackupLevel(const std::string& backupLevel)
{
	backupLevel_ = backupLevel;
	setCoreParameter("BackupLevel", backupLevel);
}

std::string PutRestorePreCheckRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void PutRestorePreCheckRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string PutRestorePreCheckRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PutRestorePreCheckRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

