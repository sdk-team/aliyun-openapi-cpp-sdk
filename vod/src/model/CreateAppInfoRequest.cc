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

#include <alibabacloud/vod/model/CreateAppInfoRequest.h>

using AlibabaCloud::Vod::Model::CreateAppInfoRequest;

CreateAppInfoRequest::CreateAppInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "CreateAppInfo")
{}

CreateAppInfoRequest::~CreateAppInfoRequest()
{}

long CreateAppInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAppInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateAppInfoRequest::getAppName()const
{
	return appName_;
}

void CreateAppInfoRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string CreateAppInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateAppInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateAppInfoRequest::getDescription()const
{
	return description_;
}

void CreateAppInfoRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long CreateAppInfoRequest::getResourceRealOwnerId()const
{
	return resourceRealOwnerId_;
}

void CreateAppInfoRequest::setResourceRealOwnerId(long resourceRealOwnerId)
{
	resourceRealOwnerId_ = resourceRealOwnerId;
	setCoreParameter("ResourceRealOwnerId", std::to_string(resourceRealOwnerId));
}

long CreateAppInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateAppInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateAppInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateAppInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

