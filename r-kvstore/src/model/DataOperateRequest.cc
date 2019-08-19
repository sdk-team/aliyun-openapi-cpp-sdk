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

#include <alibabacloud/r-kvstore/model/DataOperateRequest.h>

using AlibabaCloud::R_kvstore::Model::DataOperateRequest;

DataOperateRequest::DataOperateRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DataOperate")
{}

DataOperateRequest::~DataOperateRequest()
{}

long DataOperateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DataOperateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DataOperateRequest::getInstanceId()const
{
	return instanceId_;
}

void DataOperateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DataOperateRequest::getSecurityToken()const
{
	return securityToken_;
}

void DataOperateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DataOperateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DataOperateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DataOperateRequest::getRegionId()const
{
	return regionId_;
}

void DataOperateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DataOperateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DataOperateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DataOperateRequest::getOwnerId()const
{
	return ownerId_;
}

void DataOperateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DataOperateRequest::getCommand()const
{
	return command_;
}

void DataOperateRequest::setCommand(const std::string& command)
{
	command_ = command;
	setCoreParameter("Command", command);
}

std::string DataOperateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DataOperateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

