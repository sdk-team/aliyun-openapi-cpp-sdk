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

#include <alibabacloud/r-kvstore/model/RenewInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::RenewInstancesRequest;

RenewInstancesRequest::RenewInstancesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "RenewInstances")
{}

RenewInstancesRequest::~RenewInstancesRequest()
{}

long RenewInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long RenewInstancesRequest::getPeriod()const
{
	return period_;
}

void RenewInstancesRequest::setPeriod(long period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string RenewInstancesRequest::getInstanceId()const
{
	return instanceId_;
}

void RenewInstancesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

bool RenewInstancesRequest::getAutoPay()const
{
	return autoPay_;
}

void RenewInstancesRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string RenewInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenewInstancesRequest::getRegionId()const
{
	return regionId_;
}

void RenewInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RenewInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RenewInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RenewInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RenewInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RenewInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

