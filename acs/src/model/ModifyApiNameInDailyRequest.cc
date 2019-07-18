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

#include <alibabacloud/acs/model/ModifyApiNameInDailyRequest.h>

using AlibabaCloud::Acs::Model::ModifyApiNameInDailyRequest;

ModifyApiNameInDailyRequest::ModifyApiNameInDailyRequest() :
	RoaServiceRequest("acs", "2015-01-01")
{}

ModifyApiNameInDailyRequest::~ModifyApiNameInDailyRequest()
{}

std::string ModifyApiNameInDailyRequest::getModifyName()const
{
	return modifyName_;
}

void ModifyApiNameInDailyRequest::setModifyName(const std::string& modifyName)
{
	modifyName_ = modifyName;
	setCoreParameter("ModifyName", modifyName);
}

std::string ModifyApiNameInDailyRequest::getName()const
{
	return name_;
}

void ModifyApiNameInDailyRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyApiNameInDailyRequest::getProductName()const
{
	return productName_;
}

void ModifyApiNameInDailyRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", productName);
}

std::string ModifyApiNameInDailyRequest::getChangeId()const
{
	return changeId_;
}

void ModifyApiNameInDailyRequest::setChangeId(const std::string& changeId)
{
	changeId_ = changeId;
	setCoreParameter("ChangeId", changeId);
}

std::string ModifyApiNameInDailyRequest::getVersionName()const
{
	return versionName_;
}

void ModifyApiNameInDailyRequest::setVersionName(const std::string& versionName)
{
	versionName_ = versionName;
	setCoreParameter("VersionName", versionName);
}

