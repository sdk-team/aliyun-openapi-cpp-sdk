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

#include <alibabacloud/drds/model/DescribeDbInstancesRequest.h>

using AlibabaCloud::Drds::Model::DescribeDbInstancesRequest;

DescribeDbInstancesRequest::DescribeDbInstancesRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeDbInstances")
{}

DescribeDbInstancesRequest::~DescribeDbInstancesRequest()
{}

std::string DescribeDbInstancesRequest::getSearch()const
{
	return search_;
}

void DescribeDbInstancesRequest::setSearch(const std::string& search)
{
	search_ = search;
	setCoreParameter("Search", search);
}

int DescribeDbInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDbInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDbInstancesRequest::getDbInstType()const
{
	return dbInstType_;
}

void DescribeDbInstancesRequest::setDbInstType(const std::string& dbInstType)
{
	dbInstType_ = dbInstType;
	setCoreParameter("DbInstType", dbInstType);
}

std::string DescribeDbInstancesRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeDbInstancesRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

int DescribeDbInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDbInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDbInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDbInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

