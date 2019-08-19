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

#include <alibabacloud/r-kvstore/model/DescribeInstanceVPCAuthRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeInstanceVPCAuthRequest;

DescribeInstanceVPCAuthRequest::DescribeInstanceVPCAuthRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeInstanceVPCAuth")
{}

DescribeInstanceVPCAuthRequest::~DescribeInstanceVPCAuthRequest()
{}

long DescribeInstanceVPCAuthRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceVPCAuthRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceVPCAuthRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceVPCAuthRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeInstanceVPCAuthRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeInstanceVPCAuthRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeInstanceVPCAuthRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceVPCAuthRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceVPCAuthRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceVPCAuthRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeInstanceVPCAuthRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceVPCAuthRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeInstanceVPCAuthRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceVPCAuthRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeInstanceVPCAuthRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstanceVPCAuthRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

