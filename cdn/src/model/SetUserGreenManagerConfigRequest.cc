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

#include <alibabacloud/cdn/model/SetUserGreenManagerConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetUserGreenManagerConfigRequest;

SetUserGreenManagerConfigRequest::SetUserGreenManagerConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetUserGreenManagerConfig")
{}

SetUserGreenManagerConfigRequest::~SetUserGreenManagerConfigRequest()
{}

std::string SetUserGreenManagerConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetUserGreenManagerConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetUserGreenManagerConfigRequest::getQuota()const
{
	return quota_;
}

void SetUserGreenManagerConfigRequest::setQuota(const std::string& quota)
{
	quota_ = quota;
	setParameter("Quota", quota);
}

long SetUserGreenManagerConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetUserGreenManagerConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetUserGreenManagerConfigRequest::getRatio()const
{
	return ratio_;
}

void SetUserGreenManagerConfigRequest::setRatio(const std::string& ratio)
{
	ratio_ = ratio;
	setParameter("Ratio", ratio);
}
