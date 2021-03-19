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

#include <alibabacloud/ecsops/model/OpsMigrateEcsInstanceRequest.h>

using AlibabaCloud::Ecsops::Model::OpsMigrateEcsInstanceRequest;

OpsMigrateEcsInstanceRequest::OpsMigrateEcsInstanceRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsMigrateEcsInstance")
{
	setMethod(HttpRequest::Method::Post);
}

OpsMigrateEcsInstanceRequest::~OpsMigrateEcsInstanceRequest()
{}

std::string OpsMigrateEcsInstanceRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsMigrateEcsInstanceRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsMigrateEcsInstanceRequest::getDestinationNcId()const
{
	return destinationNcId_;
}

void OpsMigrateEcsInstanceRequest::setDestinationNcId(const std::string& destinationNcId)
{
	destinationNcId_ = destinationNcId;
	setParameter("DestinationNcId", destinationNcId);
}

std::string OpsMigrateEcsInstanceRequest::getDestinationRackId()const
{
	return destinationRackId_;
}

void OpsMigrateEcsInstanceRequest::setDestinationRackId(const std::string& destinationRackId)
{
	destinationRackId_ = destinationRackId;
	setParameter("DestinationRackId", destinationRackId);
}

std::string OpsMigrateEcsInstanceRequest::getStartupMode()const
{
	return startupMode_;
}

void OpsMigrateEcsInstanceRequest::setStartupMode(const std::string& startupMode)
{
	startupMode_ = startupMode;
	setParameter("StartupMode", startupMode);
}

std::string OpsMigrateEcsInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsMigrateEcsInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsMigrateEcsInstanceRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsMigrateEcsInstanceRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsMigrateEcsInstanceRequest::getRecoverPolicy()const
{
	return recoverPolicy_;
}

void OpsMigrateEcsInstanceRequest::setRecoverPolicy(const std::string& recoverPolicy)
{
	recoverPolicy_ = recoverPolicy;
	setParameter("RecoverPolicy", recoverPolicy);
}

std::string OpsMigrateEcsInstanceRequest::getRecoverMode()const
{
	return recoverMode_;
}

void OpsMigrateEcsInstanceRequest::setRecoverMode(const std::string& recoverMode)
{
	recoverMode_ = recoverMode;
	setParameter("RecoverMode", recoverMode);
}

