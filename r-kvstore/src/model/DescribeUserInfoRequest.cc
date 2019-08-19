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

#include <alibabacloud/r-kvstore/model/DescribeUserInfoRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeUserInfoRequest;

DescribeUserInfoRequest::DescribeUserInfoRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeUserInfo")
{}

DescribeUserInfoRequest::~DescribeUserInfoRequest()
{}

long DescribeUserInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeUserInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeUserInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeUserInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeUserInfoRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeUserInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeUserInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeUserInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

