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

#include <alibabacloud/r-kvstore/model/DescribeCommodityRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeCommodityRequest;

DescribeCommodityRequest::DescribeCommodityRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeCommodity")
{}

DescribeCommodityRequest::~DescribeCommodityRequest()
{}

long DescribeCommodityRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCommodityRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeCommodityRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeCommodityRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeCommodityRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCommodityRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeCommodityRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCommodityRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeCommodityRequest::getRegionId()const
{
	return regionId_;
}

void DescribeCommodityRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeCommodityRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCommodityRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeCommodityRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribeCommodityRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string DescribeCommodityRequest::getCommodityCode()const
{
	return commodityCode_;
}

void DescribeCommodityRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

long DescribeCommodityRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCommodityRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCommodityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCommodityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCommodityRequest::getOrderType()const
{
	return orderType_;
}

void DescribeCommodityRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", orderType);
}

