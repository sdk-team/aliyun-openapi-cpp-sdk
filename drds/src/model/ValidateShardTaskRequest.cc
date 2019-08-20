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

#include <alibabacloud/drds/model/ValidateShardTaskRequest.h>

using AlibabaCloud::Drds::Model::ValidateShardTaskRequest;

ValidateShardTaskRequest::ValidateShardTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "ValidateShardTask")
{}

ValidateShardTaskRequest::~ValidateShardTaskRequest()
{}

std::string ValidateShardTaskRequest::getTaskType()const
{
	return taskType_;
}

void ValidateShardTaskRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setCoreParameter("TaskType", taskType);
}

std::string ValidateShardTaskRequest::getDbName()const
{
	return dbName_;
}

void ValidateShardTaskRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string ValidateShardTaskRequest::getRegionId()const
{
	return regionId_;
}

void ValidateShardTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ValidateShardTaskRequest::getSourceTableName()const
{
	return sourceTableName_;
}

void ValidateShardTaskRequest::setSourceTableName(const std::string& sourceTableName)
{
	sourceTableName_ = sourceTableName;
	setCoreParameter("SourceTableName", sourceTableName);
}

std::string ValidateShardTaskRequest::getTargetTableName()const
{
	return targetTableName_;
}

void ValidateShardTaskRequest::setTargetTableName(const std::string& targetTableName)
{
	targetTableName_ = targetTableName;
	setCoreParameter("TargetTableName", targetTableName);
}

std::string ValidateShardTaskRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ValidateShardTaskRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

