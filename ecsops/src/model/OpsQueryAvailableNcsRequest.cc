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

#include <alibabacloud/ecsops/model/OpsQueryAvailableNcsRequest.h>

using AlibabaCloud::Ecsops::Model::OpsQueryAvailableNcsRequest;

OpsQueryAvailableNcsRequest::OpsQueryAvailableNcsRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsQueryAvailableNcs")
{
	setMethod(HttpRequest::Method::Post);
}

OpsQueryAvailableNcsRequest::~OpsQueryAvailableNcsRequest()
{}

std::string OpsQueryAvailableNcsRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsQueryAvailableNcsRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsQueryAvailableNcsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsQueryAvailableNcsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsQueryAvailableNcsRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsQueryAvailableNcsRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

int OpsQueryAvailableNcsRequest::getPageNo()const
{
	return pageNo_;
}

void OpsQueryAvailableNcsRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

int OpsQueryAvailableNcsRequest::getPageSize()const
{
	return pageSize_;
}

void OpsQueryAvailableNcsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

