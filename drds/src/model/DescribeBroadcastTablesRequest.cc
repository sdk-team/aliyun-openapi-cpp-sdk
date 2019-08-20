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

#include <alibabacloud/drds/model/DescribeBroadcastTablesRequest.h>

using AlibabaCloud::Drds::Model::DescribeBroadcastTablesRequest;

DescribeBroadcastTablesRequest::DescribeBroadcastTablesRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeBroadcastTables")
{}

DescribeBroadcastTablesRequest::~DescribeBroadcastTablesRequest()
{}

std::string DescribeBroadcastTablesRequest::getDbName()const
{
	return dbName_;
}

void DescribeBroadcastTablesRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string DescribeBroadcastTablesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBroadcastTablesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeBroadcastTablesRequest::getQuery()const
{
	return query_;
}

void DescribeBroadcastTablesRequest::setQuery(const std::string& query)
{
	query_ = query;
	setCoreParameter("Query", query);
}

int DescribeBroadcastTablesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBroadcastTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeBroadcastTablesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeBroadcastTablesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeBroadcastTablesRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeBroadcastTablesRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

