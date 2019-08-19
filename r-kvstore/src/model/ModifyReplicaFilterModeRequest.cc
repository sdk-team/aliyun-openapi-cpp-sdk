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

#include <alibabacloud/r-kvstore/model/ModifyReplicaFilterModeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyReplicaFilterModeRequest;

ModifyReplicaFilterModeRequest::ModifyReplicaFilterModeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyReplicaFilterMode")
{}

ModifyReplicaFilterModeRequest::~ModifyReplicaFilterModeRequest()
{}

long ModifyReplicaFilterModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReplicaFilterModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyReplicaFilterModeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyReplicaFilterModeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyReplicaFilterModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReplicaFilterModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyReplicaFilterModeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyReplicaFilterModeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyReplicaFilterModeRequest::getFillterDDL()const
{
	return fillterDDL_;
}

void ModifyReplicaFilterModeRequest::setFillterDDL(const std::string& fillterDDL)
{
	fillterDDL_ = fillterDDL;
	setCoreParameter("FillterDDL", fillterDDL);
}

std::string ModifyReplicaFilterModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReplicaFilterModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyReplicaFilterModeRequest::getReplicaId()const
{
	return replicaId_;
}

void ModifyReplicaFilterModeRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

long ModifyReplicaFilterModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReplicaFilterModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyReplicaFilterModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReplicaFilterModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

