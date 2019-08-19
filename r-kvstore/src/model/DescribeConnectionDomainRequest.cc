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

#include <alibabacloud/r-kvstore/model/DescribeConnectionDomainRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeConnectionDomainRequest;

DescribeConnectionDomainRequest::DescribeConnectionDomainRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeConnectionDomain")
{}

DescribeConnectionDomainRequest::~DescribeConnectionDomainRequest()
{}

long DescribeConnectionDomainRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeConnectionDomainRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeConnectionDomainRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeConnectionDomainRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeConnectionDomainRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeConnectionDomainRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeConnectionDomainRequest::getRegionId()const
{
	return regionId_;
}

void DescribeConnectionDomainRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeConnectionDomainRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeConnectionDomainRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeConnectionDomainRequest::getConnectionDomain()const
{
	return connectionDomain_;
}

void DescribeConnectionDomainRequest::setConnectionDomain(const std::string& connectionDomain)
{
	connectionDomain_ = connectionDomain;
	setCoreParameter("ConnectionDomain", connectionDomain);
}

long DescribeConnectionDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeConnectionDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeConnectionDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeConnectionDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

