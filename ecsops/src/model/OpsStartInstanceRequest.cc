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

#include <alibabacloud/ecsops/model/OpsStartInstanceRequest.h>

using AlibabaCloud::Ecsops::Model::OpsStartInstanceRequest;

OpsStartInstanceRequest::OpsStartInstanceRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsStartInstance")
{
	setMethod(HttpRequest::Method::Post);
}

OpsStartInstanceRequest::~OpsStartInstanceRequest()
{}

std::string OpsStartInstanceRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsStartInstanceRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsStartInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsStartInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsStartInstanceRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsStartInstanceRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsStartInstanceRequest::getMode()const
{
	return mode_;
}

void OpsStartInstanceRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

