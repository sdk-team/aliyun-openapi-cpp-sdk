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

#include <alibabacloud/ft/model/DeleteAllStrategyRequest.h>

using AlibabaCloud::Ft::Model::DeleteAllStrategyRequest;

DeleteAllStrategyRequest::DeleteAllStrategyRequest() :
	RpcServiceRequest("ft", "2018-07-13", "DeleteAllStrategy")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteAllStrategyRequest::~DeleteAllStrategyRequest()
{}

long DeleteAllStrategyRequest::getBucUid()const
{
	return bucUid_;
}

void DeleteAllStrategyRequest::setBucUid(long bucUid)
{
	bucUid_ = bucUid;
	setParameter("BucUid", std::to_string(bucUid));
}

std::string DeleteAllStrategyRequest::getBucName()const
{
	return bucName_;
}

void DeleteAllStrategyRequest::setBucName(const std::string& bucName)
{
	bucName_ = bucName;
	setParameter("BucName", bucName);
}

std::string DeleteAllStrategyRequest::getBucEmpId()const
{
	return bucEmpId_;
}

void DeleteAllStrategyRequest::setBucEmpId(const std::string& bucEmpId)
{
	bucEmpId_ = bucEmpId;
	setParameter("BucEmpId", bucEmpId);
}

std::string DeleteAllStrategyRequest::getProductName()const
{
	return productName_;
}

void DeleteAllStrategyRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string DeleteAllStrategyRequest::getEnv()const
{
	return env_;
}

void DeleteAllStrategyRequest::setEnv(const std::string& env)
{
	env_ = env;
	setParameter("Env", env);
}

