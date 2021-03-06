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

#include <alibabacloud/r-kvstore/model/ModifyDynamicModeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyDynamicModeRequest;

ModifyDynamicModeRequest::ModifyDynamicModeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyDynamicMode")
{}

ModifyDynamicModeRequest::~ModifyDynamicModeRequest()
{}

long ModifyDynamicModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDynamicModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDynamicModeRequest::getDynamicMode()const
{
	return dynamicMode_;
}

void ModifyDynamicModeRequest::setDynamicMode(const std::string& dynamicMode)
{
	dynamicMode_ = dynamicMode;
	setCoreParameter("DynamicMode", dynamicMode);
}

std::string ModifyDynamicModeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDynamicModeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDynamicModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDynamicModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDynamicModeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDynamicModeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDynamicModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDynamicModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDynamicModeRequest::getReplicaId()const
{
	return replicaId_;
}

void ModifyDynamicModeRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

long ModifyDynamicModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDynamicModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDynamicModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDynamicModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

