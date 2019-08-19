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

#include <alibabacloud/r-kvstore/model/CreateInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateInstancesRequest;

CreateInstancesRequest::CreateInstancesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateInstances")
{}

CreateInstancesRequest::~CreateInstancesRequest()
{}

long CreateInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateInstancesRequest::getAgentId()const
{
	return agentId_;
}

void CreateInstancesRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

bool CreateInstancesRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateInstancesRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateInstancesRequest::getInstances()const
{
	return instances_;
}

void CreateInstancesRequest::setInstances(const std::string& instances)
{
	instances_ = instances;
	setCoreParameter("Instances", instances);
}

std::string CreateInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateInstancesRequest::getToken()const
{
	return token_;
}

void CreateInstancesRequest::setToken(const std::string& token)
{
	token_ = token;
	setCoreParameter("Token", token);
}

std::string CreateInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateInstancesRequest::getRegionId()const
{
	return regionId_;
}

void CreateInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateInstancesRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void CreateInstancesRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

