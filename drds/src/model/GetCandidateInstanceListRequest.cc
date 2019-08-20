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

#include <alibabacloud/drds/model/GetCandidateInstanceListRequest.h>

using AlibabaCloud::Drds::Model::GetCandidateInstanceListRequest;

GetCandidateInstanceListRequest::GetCandidateInstanceListRequest() :
	RpcServiceRequest("drds", "2019-01-23", "GetCandidateInstanceList")
{}

GetCandidateInstanceListRequest::~GetCandidateInstanceListRequest()
{}

std::string GetCandidateInstanceListRequest::getSearch()const
{
	return search_;
}

void GetCandidateInstanceListRequest::setSearch(const std::string& search)
{
	search_ = search;
	setCoreParameter("Search", search);
}

std::string GetCandidateInstanceListRequest::getDbName()const
{
	return dbName_;
}

void GetCandidateInstanceListRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

bool GetCandidateInstanceListRequest::getAcrossZone()const
{
	return acrossZone_;
}

void GetCandidateInstanceListRequest::setAcrossZone(bool acrossZone)
{
	acrossZone_ = acrossZone;
	setCoreParameter("AcrossZone", acrossZone ? "true" : "false");
}

int GetCandidateInstanceListRequest::getPageSize()const
{
	return pageSize_;
}

void GetCandidateInstanceListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string GetCandidateInstanceListRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void GetCandidateInstanceListRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

int GetCandidateInstanceListRequest::getPageNumber()const
{
	return pageNumber_;
}

void GetCandidateInstanceListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string GetCandidateInstanceListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetCandidateInstanceListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

