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

#include <alibabacloud/ecsops/model/OpsUpgradeInstanceRequest.h>

using AlibabaCloud::Ecsops::Model::OpsUpgradeInstanceRequest;

OpsUpgradeInstanceRequest::OpsUpgradeInstanceRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsUpgradeInstance")
{
	setMethod(HttpRequest::Method::Post);
}

OpsUpgradeInstanceRequest::~OpsUpgradeInstanceRequest()
{}

std::string OpsUpgradeInstanceRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsUpgradeInstanceRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsUpgradeInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsUpgradeInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsUpgradeInstanceRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsUpgradeInstanceRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

int OpsUpgradeInstanceRequest::getCores()const
{
	return cores_;
}

void OpsUpgradeInstanceRequest::setCores(int cores)
{
	cores_ = cores;
	setParameter("Cores", std::to_string(cores));
}

int OpsUpgradeInstanceRequest::getMem()const
{
	return mem_;
}

void OpsUpgradeInstanceRequest::setMem(int mem)
{
	mem_ = mem;
	setParameter("Mem", std::to_string(mem));
}

int OpsUpgradeInstanceRequest::getExcessivePolicy()const
{
	return excessivePolicy_;
}

void OpsUpgradeInstanceRequest::setExcessivePolicy(int excessivePolicy)
{
	excessivePolicy_ = excessivePolicy;
	setParameter("ExcessivePolicy", std::to_string(excessivePolicy));
}

