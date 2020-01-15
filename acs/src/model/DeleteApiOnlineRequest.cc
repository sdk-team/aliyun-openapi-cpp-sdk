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

#include <alibabacloud/acs/model/DeleteApiOnlineRequest.h>

using AlibabaCloud::Acs::Model::DeleteApiOnlineRequest;

DeleteApiOnlineRequest::DeleteApiOnlineRequest() :
	RoaServiceRequest("acs", "2015-01-01")
{
	setResourcePath("/deleteApiOnline");
	setMethod(HttpRequest::Method::Post);
}

DeleteApiOnlineRequest::~DeleteApiOnlineRequest()
{}

std::string DeleteApiOnlineRequest::getEnvironment()const
{
	return environment_;
}

void DeleteApiOnlineRequest::setEnvironment(const std::string& environment)
{
	environment_ = environment;
	setCoreParameter("Environment", environment);
}

std::string DeleteApiOnlineRequest::getName()const
{
	return name_;
}

void DeleteApiOnlineRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string DeleteApiOnlineRequest::getProductName()const
{
	return productName_;
}

void DeleteApiOnlineRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", productName);
}

std::string DeleteApiOnlineRequest::getVersionName()const
{
	return versionName_;
}

void DeleteApiOnlineRequest::setVersionName(const std::string& versionName)
{
	versionName_ = versionName;
	setCoreParameter("VersionName", versionName);
}

