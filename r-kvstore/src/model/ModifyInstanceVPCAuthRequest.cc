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

#include <alibabacloud/r-kvstore/model/ModifyInstanceVPCAuthRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceVPCAuthRequest;

ModifyInstanceVPCAuthRequest::ModifyInstanceVPCAuthRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceVPCAuth")
{}

ModifyInstanceVPCAuthRequest::~ModifyInstanceVPCAuthRequest()
{}

bool ModifyInstanceVPCAuthRequest::getIsVPCAuth()const
{
	return isVPCAuth_;
}

void ModifyInstanceVPCAuthRequest::setIsVPCAuth(bool isVPCAuth)
{
	isVPCAuth_ = isVPCAuth;
	setCoreParameter("IsVPCAuth", isVPCAuth ? "true" : "false");
}

long ModifyInstanceVPCAuthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceVPCAuthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceVPCAuthRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceVPCAuthRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceVPCAuthRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceVPCAuthRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyInstanceVPCAuthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceVPCAuthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceVPCAuthRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceVPCAuthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyInstanceVPCAuthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceVPCAuthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyInstanceVPCAuthRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceVPCAuthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceVPCAuthRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceVPCAuthRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

