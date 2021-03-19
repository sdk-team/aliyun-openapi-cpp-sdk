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

#include <alibabacloud/ecsops/model/OpsQueryAvailableIsosRequest.h>

using AlibabaCloud::Ecsops::Model::OpsQueryAvailableIsosRequest;

OpsQueryAvailableIsosRequest::OpsQueryAvailableIsosRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsQueryAvailableIsos")
{
	setMethod(HttpRequest::Method::Post);
}

OpsQueryAvailableIsosRequest::~OpsQueryAvailableIsosRequest()
{}

std::string OpsQueryAvailableIsosRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsQueryAvailableIsosRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsQueryAvailableIsosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsQueryAvailableIsosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsQueryAvailableIsosRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsQueryAvailableIsosRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

int OpsQueryAvailableIsosRequest::getPageNo()const
{
	return pageNo_;
}

void OpsQueryAvailableIsosRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

int OpsQueryAvailableIsosRequest::getPageSize()const
{
	return pageSize_;
}

void OpsQueryAvailableIsosRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

