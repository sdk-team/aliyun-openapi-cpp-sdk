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

#include <alibabacloud/r-kvstore/model/ActivateInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::ActivateInstanceRequest;

ActivateInstanceRequest::ActivateInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ActivateInstance")
{}

ActivateInstanceRequest::~ActivateInstanceRequest()
{}

long ActivateInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ActivateInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ActivateInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void ActivateInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ActivateInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void ActivateInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ActivateInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ActivateInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ActivateInstanceRequest::getRegionId()const
{
	return regionId_;
}

void ActivateInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ActivateInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ActivateInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ActivateInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void ActivateInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ActivateInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ActivateInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

