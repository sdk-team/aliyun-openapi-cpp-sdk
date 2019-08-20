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

#include <alibabacloud/drds/model/PreCheckSqlFlashbackTaskRequest.h>

using AlibabaCloud::Drds::Model::PreCheckSqlFlashbackTaskRequest;

PreCheckSqlFlashbackTaskRequest::PreCheckSqlFlashbackTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "PreCheckSqlFlashbackTask")
{}

PreCheckSqlFlashbackTaskRequest::~PreCheckSqlFlashbackTaskRequest()
{}

std::string PreCheckSqlFlashbackTaskRequest::getDbName()const
{
	return dbName_;
}

void PreCheckSqlFlashbackTaskRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string PreCheckSqlFlashbackTaskRequest::getEndTime()const
{
	return endTime_;
}

void PreCheckSqlFlashbackTaskRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string PreCheckSqlFlashbackTaskRequest::getStartTime()const
{
	return startTime_;
}

void PreCheckSqlFlashbackTaskRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string PreCheckSqlFlashbackTaskRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void PreCheckSqlFlashbackTaskRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string PreCheckSqlFlashbackTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckSqlFlashbackTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

