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

#include <alibabacloud/ecsops/model/OpsRenameInstanceRequest.h>

using AlibabaCloud::Ecsops::Model::OpsRenameInstanceRequest;

OpsRenameInstanceRequest::OpsRenameInstanceRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsRenameInstance")
{
	setMethod(HttpRequest::Method::Post);
}

OpsRenameInstanceRequest::~OpsRenameInstanceRequest()
{}

std::string OpsRenameInstanceRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsRenameInstanceRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsRenameInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsRenameInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsRenameInstanceRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsRenameInstanceRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsRenameInstanceRequest::getHostname()const
{
	return hostname_;
}

void OpsRenameInstanceRequest::setHostname(const std::string& hostname)
{
	hostname_ = hostname;
	setParameter("Hostname", hostname);
}

