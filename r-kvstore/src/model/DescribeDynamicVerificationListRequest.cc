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

#include <alibabacloud/r-kvstore/model/DescribeDynamicVerificationListRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeDynamicVerificationListRequest;

DescribeDynamicVerificationListRequest::DescribeDynamicVerificationListRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeDynamicVerificationList")
{}

DescribeDynamicVerificationListRequest::~DescribeDynamicVerificationListRequest()
{}

long DescribeDynamicVerificationListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDynamicVerificationListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDynamicVerificationListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDynamicVerificationListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDynamicVerificationListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDynamicVerificationListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDynamicVerificationListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDynamicVerificationListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDynamicVerificationListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDynamicVerificationListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeDynamicVerificationListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDynamicVerificationListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeDynamicVerificationListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDynamicVerificationListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDynamicVerificationListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDynamicVerificationListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDynamicVerificationListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDynamicVerificationListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDynamicVerificationListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDynamicVerificationListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDynamicVerificationListRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeDynamicVerificationListRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

int DescribeDynamicVerificationListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDynamicVerificationListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

