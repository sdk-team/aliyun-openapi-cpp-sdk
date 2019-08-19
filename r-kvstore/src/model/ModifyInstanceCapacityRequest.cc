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

#include <alibabacloud/r-kvstore/model/ModifyInstanceCapacityRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyInstanceCapacityRequest;

ModifyInstanceCapacityRequest::ModifyInstanceCapacityRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyInstanceCapacity")
{}

ModifyInstanceCapacityRequest::~ModifyInstanceCapacityRequest()
{}

long ModifyInstanceCapacityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceCapacityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceCapacityRequest::getFromApp()const
{
	return fromApp_;
}

void ModifyInstanceCapacityRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setCoreParameter("FromApp", fromApp);
}

std::string ModifyInstanceCapacityRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceCapacityRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceCapacityRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceCapacityRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyInstanceCapacityRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceCapacityRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceCapacityRequest::getInstanceClass()const
{
	return instanceClass_;
}

void ModifyInstanceCapacityRequest::setInstanceClass(const std::string& instanceClass)
{
	instanceClass_ = instanceClass;
	setCoreParameter("InstanceClass", instanceClass);
}

std::string ModifyInstanceCapacityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceCapacityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyInstanceCapacityRequest::getCapacity()const
{
	return capacity_;
}

void ModifyInstanceCapacityRequest::setCapacity(const std::string& capacity)
{
	capacity_ = capacity;
	setCoreParameter("Capacity", capacity);
}

std::string ModifyInstanceCapacityRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceCapacityRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyInstanceCapacityRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyInstanceCapacityRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyInstanceCapacityRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceCapacityRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyInstanceCapacityRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void ModifyInstanceCapacityRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

