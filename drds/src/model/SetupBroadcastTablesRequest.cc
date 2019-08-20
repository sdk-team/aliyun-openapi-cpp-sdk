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

#include <alibabacloud/drds/model/SetupBroadcastTablesRequest.h>

using AlibabaCloud::Drds::Model::SetupBroadcastTablesRequest;

SetupBroadcastTablesRequest::SetupBroadcastTablesRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SetupBroadcastTables")
{}

SetupBroadcastTablesRequest::~SetupBroadcastTablesRequest()
{}

std::string SetupBroadcastTablesRequest::getDbName()const
{
	return dbName_;
}

void SetupBroadcastTablesRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string SetupBroadcastTablesRequest::getRegionId()const
{
	return regionId_;
}

void SetupBroadcastTablesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool SetupBroadcastTablesRequest::getActive()const
{
	return active_;
}

void SetupBroadcastTablesRequest::setActive(bool active)
{
	active_ = active;
	setCoreParameter("Active", active ? "true" : "false");
}

std::vector<std::string> SetupBroadcastTablesRequest::getTableName()const
{
	return tableName_;
}

void SetupBroadcastTablesRequest::setTableName(const std::vector<std::string>& tableName)
{
	tableName_ = tableName;
	for(int i = 0; i!= tableName.size(); i++)
		setCoreParameter("TableName."+ std::to_string(i), tableName.at(i));
}

std::string SetupBroadcastTablesRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SetupBroadcastTablesRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

