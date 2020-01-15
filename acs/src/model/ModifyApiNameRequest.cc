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

#include <alibabacloud/acs/model/ModifyApiNameRequest.h>

using AlibabaCloud::Acs::Model::ModifyApiNameRequest;

ModifyApiNameRequest::ModifyApiNameRequest() :
	RoaServiceRequest("acs", "2015-01-01")
{
	setResourcePath("/modifyApiName");
	setMethod(HttpRequest::Method::Post);
}

ModifyApiNameRequest::~ModifyApiNameRequest()
{}

std::string ModifyApiNameRequest::getModifyName()const
{
	return modifyName_;
}

void ModifyApiNameRequest::setModifyName(const std::string& modifyName)
{
	modifyName_ = modifyName;
	setCoreParameter("ModifyName", modifyName);
}

std::string ModifyApiNameRequest::getName()const
{
	return name_;
}

void ModifyApiNameRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyApiNameRequest::getProductName()const
{
	return productName_;
}

void ModifyApiNameRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", productName);
}

std::string ModifyApiNameRequest::getChangeId()const
{
	return changeId_;
}

void ModifyApiNameRequest::setChangeId(const std::string& changeId)
{
	changeId_ = changeId;
	setCoreParameter("ChangeId", changeId);
}

std::string ModifyApiNameRequest::getVersionName()const
{
	return versionName_;
}

void ModifyApiNameRequest::setVersionName(const std::string& versionName)
{
	versionName_ = versionName;
	setCoreParameter("VersionName", versionName);
}

