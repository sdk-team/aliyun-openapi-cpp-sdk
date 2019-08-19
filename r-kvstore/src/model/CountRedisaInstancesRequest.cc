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

#include <alibabacloud/r-kvstore/model/CountRedisaInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::CountRedisaInstancesRequest;

CountRedisaInstancesRequest::CountRedisaInstancesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CountRedisaInstances")
{}

CountRedisaInstancesRequest::~CountRedisaInstancesRequest()
{}

long CountRedisaInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CountRedisaInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CountRedisaInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CountRedisaInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CountRedisaInstancesRequest::getRegionId()const
{
	return regionId_;
}

void CountRedisaInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CountRedisaInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CountRedisaInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CountRedisaInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void CountRedisaInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CountRedisaInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CountRedisaInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

