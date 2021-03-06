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

#include <alibabacloud/r-kvstore/model/CreateStaticVerificationRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateStaticVerificationRequest;

CreateStaticVerificationRequest::CreateStaticVerificationRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateStaticVerification")
{}

CreateStaticVerificationRequest::~CreateStaticVerificationRequest()
{}

long CreateStaticVerificationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateStaticVerificationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateStaticVerificationRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateStaticVerificationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateStaticVerificationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateStaticVerificationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateStaticVerificationRequest::getRegionId()const
{
	return regionId_;
}

void CreateStaticVerificationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateStaticVerificationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateStaticVerificationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateStaticVerificationRequest::getReplicaId()const
{
	return replicaId_;
}

void CreateStaticVerificationRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

std::string CreateStaticVerificationRequest::getDestinationInstanceId()const
{
	return destinationInstanceId_;
}

void CreateStaticVerificationRequest::setDestinationInstanceId(const std::string& destinationInstanceId)
{
	destinationInstanceId_ = destinationInstanceId;
	setCoreParameter("DestinationInstanceId", destinationInstanceId);
}

std::string CreateStaticVerificationRequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void CreateStaticVerificationRequest::setSourceInstanceId(const std::string& sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setCoreParameter("SourceInstanceId", sourceInstanceId);
}

long CreateStaticVerificationRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateStaticVerificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateStaticVerificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateStaticVerificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

