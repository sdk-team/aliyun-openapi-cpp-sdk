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

#include <alibabacloud/r-kvstore/model/DeactivateInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::DeactivateInstanceRequest;

DeactivateInstanceRequest::DeactivateInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DeactivateInstance")
{}

DeactivateInstanceRequest::~DeactivateInstanceRequest()
{}

long DeactivateInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeactivateInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeactivateInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void DeactivateInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DeactivateInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeactivateInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeactivateInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeactivateInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeactivateInstanceRequest::getRegionId()const
{
	return regionId_;
}

void DeactivateInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeactivateInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeactivateInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeactivateInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DeactivateInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeactivateInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeactivateInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

