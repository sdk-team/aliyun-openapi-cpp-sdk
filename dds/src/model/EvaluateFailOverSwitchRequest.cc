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

#include <alibabacloud/dds/model/EvaluateFailOverSwitchRequest.h>

using AlibabaCloud::Dds::Model::EvaluateFailOverSwitchRequest;

EvaluateFailOverSwitchRequest::EvaluateFailOverSwitchRequest() :
	RpcServiceRequest("dds", "2015-12-01", "EvaluateFailOverSwitch")
{}

EvaluateFailOverSwitchRequest::~EvaluateFailOverSwitchRequest()
{}

long EvaluateFailOverSwitchRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EvaluateFailOverSwitchRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string EvaluateFailOverSwitchRequest::getSecurityToken()const
{
	return securityToken_;
}

void EvaluateFailOverSwitchRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string EvaluateFailOverSwitchRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EvaluateFailOverSwitchRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string EvaluateFailOverSwitchRequest::getRegionId()const
{
	return regionId_;
}

void EvaluateFailOverSwitchRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string EvaluateFailOverSwitchRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void EvaluateFailOverSwitchRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string EvaluateFailOverSwitchRequest::getReplicaId()const
{
	return replicaId_;
}

void EvaluateFailOverSwitchRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

long EvaluateFailOverSwitchRequest::getOwnerId()const
{
	return ownerId_;
}

void EvaluateFailOverSwitchRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string EvaluateFailOverSwitchRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EvaluateFailOverSwitchRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

