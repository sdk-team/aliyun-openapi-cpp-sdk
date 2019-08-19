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

#include <alibabacloud/r-kvstore/model/DescribeDBInstanceIPArrayListRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeDBInstanceIPArrayListRequest;

DescribeDBInstanceIPArrayListRequest::DescribeDBInstanceIPArrayListRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeDBInstanceIPArrayList")
{}

DescribeDBInstanceIPArrayListRequest::~DescribeDBInstanceIPArrayListRequest()
{}

long DescribeDBInstanceIPArrayListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceIPArrayListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstanceIPArrayListRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDBInstanceIPArrayListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeDBInstanceIPArrayListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDBInstanceIPArrayListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDBInstanceIPArrayListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceIPArrayListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceIPArrayListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBInstanceIPArrayListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDBInstanceIPArrayListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstanceIPArrayListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBInstanceIPArrayListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceIPArrayListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBInstanceIPArrayListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceIPArrayListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

