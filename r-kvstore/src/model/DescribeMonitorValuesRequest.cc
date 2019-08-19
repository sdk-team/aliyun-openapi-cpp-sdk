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

#include <alibabacloud/r-kvstore/model/DescribeMonitorValuesRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeMonitorValuesRequest;

DescribeMonitorValuesRequest::DescribeMonitorValuesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeMonitorValues")
{}

DescribeMonitorValuesRequest::~DescribeMonitorValuesRequest()
{}

long DescribeMonitorValuesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMonitorValuesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMonitorValuesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeMonitorValuesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeMonitorValuesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMonitorValuesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeMonitorValuesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeMonitorValuesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeMonitorValuesRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeMonitorValuesRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

std::string DescribeMonitorValuesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeMonitorValuesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeMonitorValuesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMonitorValuesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeMonitorValuesRequest::getMonitorKeys()const
{
	return monitorKeys_;
}

void DescribeMonitorValuesRequest::setMonitorKeys(const std::string& monitorKeys)
{
	monitorKeys_ = monitorKeys;
	setCoreParameter("MonitorKeys", monitorKeys);
}

std::string DescribeMonitorValuesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMonitorValuesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

