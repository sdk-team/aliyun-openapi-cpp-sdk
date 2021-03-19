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

#include <alibabacloud/ecsops/model/OpsStopInstanceRequest.h>

using AlibabaCloud::Ecsops::Model::OpsStopInstanceRequest;

OpsStopInstanceRequest::OpsStopInstanceRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsStopInstance")
{
	setMethod(HttpRequest::Method::Post);
}

OpsStopInstanceRequest::~OpsStopInstanceRequest()
{}

std::string OpsStopInstanceRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsStopInstanceRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsStopInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsStopInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsStopInstanceRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsStopInstanceRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

bool OpsStopInstanceRequest::getForce()const
{
	return force_;
}

void OpsStopInstanceRequest::setForce(bool force)
{
	force_ = force;
	setParameter("Force", force ? "true" : "false");
}

