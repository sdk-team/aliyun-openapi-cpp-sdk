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

#include <alibabacloud/r-kvstore/model/ModifyReplicaRecoverModeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyReplicaRecoverModeRequest;

ModifyReplicaRecoverModeRequest::ModifyReplicaRecoverModeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyReplicaRecoverMode")
{}

ModifyReplicaRecoverModeRequest::~ModifyReplicaRecoverModeRequest()
{}

long ModifyReplicaRecoverModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReplicaRecoverModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyReplicaRecoverModeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyReplicaRecoverModeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyReplicaRecoverModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReplicaRecoverModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyReplicaRecoverModeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyReplicaRecoverModeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyReplicaRecoverModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReplicaRecoverModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyReplicaRecoverModeRequest::getReplicaId()const
{
	return replicaId_;
}

void ModifyReplicaRecoverModeRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

std::string ModifyReplicaRecoverModeRequest::getRecoverMode()const
{
	return recoverMode_;
}

void ModifyReplicaRecoverModeRequest::setRecoverMode(const std::string& recoverMode)
{
	recoverMode_ = recoverMode;
	setCoreParameter("RecoverMode", recoverMode);
}

long ModifyReplicaRecoverModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReplicaRecoverModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyReplicaRecoverModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReplicaRecoverModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

