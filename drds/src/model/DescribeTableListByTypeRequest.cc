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

#include <alibabacloud/drds/model/DescribeTableListByTypeRequest.h>

using AlibabaCloud::Drds::Model::DescribeTableListByTypeRequest;

DescribeTableListByTypeRequest::DescribeTableListByTypeRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeTableListByType")
{}

DescribeTableListByTypeRequest::~DescribeTableListByTypeRequest()
{}

std::string DescribeTableListByTypeRequest::getTableType()const
{
	return tableType_;
}

void DescribeTableListByTypeRequest::setTableType(const std::string& tableType)
{
	tableType_ = tableType;
	setCoreParameter("TableType", tableType);
}

std::string DescribeTableListByTypeRequest::getDbName()const
{
	return dbName_;
}

void DescribeTableListByTypeRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string DescribeTableListByTypeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTableListByTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeTableListByTypeRequest::getQuery()const
{
	return query_;
}

void DescribeTableListByTypeRequest::setQuery(const std::string& query)
{
	query_ = query;
	setCoreParameter("Query", query);
}

int DescribeTableListByTypeRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTableListByTypeRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeTableListByTypeRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeTableListByTypeRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeTableListByTypeRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeTableListByTypeRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

