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

#include <alibabacloud/r-kvstore/model/CreateMultiInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateMultiInstanceRequest;

CreateMultiInstanceRequest::CreateMultiInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateMultiInstance")
{}

CreateMultiInstanceRequest::~CreateMultiInstanceRequest()
{}

long CreateMultiInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateMultiInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool CreateMultiInstanceRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateMultiInstanceRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateMultiInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateMultiInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateMultiInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateMultiInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateMultiInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateMultiInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateMultiInstanceRequest::getKVStoreInstances()const
{
	return kVStoreInstances_;
}

void CreateMultiInstanceRequest::setKVStoreInstances(const std::string& kVStoreInstances)
{
	kVStoreInstances_ = kVStoreInstances;
	setCoreParameter("KVStoreInstances", kVStoreInstances);
}

long CreateMultiInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateMultiInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateMultiInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateMultiInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateMultiInstanceRequest::getToken()const
{
	return token_;
}

void CreateMultiInstanceRequest::setToken(const std::string& token)
{
	token_ = token;
	setCoreParameter("Token", token);
}

