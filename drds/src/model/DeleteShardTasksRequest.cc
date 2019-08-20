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

#include <alibabacloud/drds/model/DeleteShardTasksRequest.h>

using AlibabaCloud::Drds::Model::DeleteShardTasksRequest;

DeleteShardTasksRequest::DeleteShardTasksRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DeleteShardTasks")
{}

DeleteShardTasksRequest::~DeleteShardTasksRequest()
{}

std::string DeleteShardTasksRequest::getDbName()const
{
	return dbName_;
}

void DeleteShardTasksRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string DeleteShardTasksRequest::getRegionId()const
{
	return regionId_;
}

void DeleteShardTasksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<DeleteShardTasksRequest::TableName> DeleteShardTasksRequest::getTableName()const
{
	return tableName_;
}

void DeleteShardTasksRequest::setTableName(const std::vector<TableName>& tableName)
{
	tableName_ = tableName;
	int i = 0;
	for(int i = 0; i!= tableName.size(); i++)	{
		auto obj = tableName.at(i);
		std::string str ="TableName."+ std::to_string(i);
		setCoreParameter(str + ".SourceTableName", obj.sourceTableName);
		setCoreParameter(str + ".TargetTableName", obj.targetTableName);
	}
}

std::string DeleteShardTasksRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DeleteShardTasksRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

