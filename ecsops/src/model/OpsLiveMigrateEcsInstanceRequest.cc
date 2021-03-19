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

#include <alibabacloud/ecsops/model/OpsLiveMigrateEcsInstanceRequest.h>

using AlibabaCloud::Ecsops::Model::OpsLiveMigrateEcsInstanceRequest;

OpsLiveMigrateEcsInstanceRequest::OpsLiveMigrateEcsInstanceRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsLiveMigrateEcsInstance")
{
	setMethod(HttpRequest::Method::Post);
}

OpsLiveMigrateEcsInstanceRequest::~OpsLiveMigrateEcsInstanceRequest()
{}

std::string OpsLiveMigrateEcsInstanceRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsLiveMigrateEcsInstanceRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsLiveMigrateEcsInstanceRequest::getDestinationNcId()const
{
	return destinationNcId_;
}

void OpsLiveMigrateEcsInstanceRequest::setDestinationNcId(const std::string& destinationNcId)
{
	destinationNcId_ = destinationNcId;
	setParameter("DestinationNcId", destinationNcId);
}

std::string OpsLiveMigrateEcsInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsLiveMigrateEcsInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsLiveMigrateEcsInstanceRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsLiveMigrateEcsInstanceRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

int OpsLiveMigrateEcsInstanceRequest::getRate()const
{
	return rate_;
}

void OpsLiveMigrateEcsInstanceRequest::setRate(int rate)
{
	rate_ = rate;
	setParameter("Rate", std::to_string(rate));
}

