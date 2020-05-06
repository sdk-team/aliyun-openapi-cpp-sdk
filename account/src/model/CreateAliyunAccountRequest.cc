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

#include <alibabacloud/account/model/CreateAliyunAccountRequest.h>

using AlibabaCloud::Account::Model::CreateAliyunAccountRequest;

CreateAliyunAccountRequest::CreateAliyunAccountRequest() :
	RpcServiceRequest("account", "2013-07-01", "CreateAliyunAccount")
{
	setMethod(HttpRequest::Method::Post);
}

CreateAliyunAccountRequest::~CreateAliyunAccountRequest()
{}

std::string CreateAliyunAccountRequest::getAliyunid()const
{
	return aliyunid_;
}

void CreateAliyunAccountRequest::setAliyunid(const std::string& aliyunid)
{
	aliyunid_ = aliyunid;
	setParameter("Aliyunid", aliyunid);
}

std::string CreateAliyunAccountRequest::getPassword()const
{
	return password_;
}

void CreateAliyunAccountRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string CreateAliyunAccountRequest::getMobile()const
{
	return mobile_;
}

void CreateAliyunAccountRequest::setMobile(const std::string& mobile)
{
	mobile_ = mobile;
	setParameter("Mobile", mobile);
}

