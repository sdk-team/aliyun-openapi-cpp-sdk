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

#include <alibabacloud/ft/model/MigrateStrategyRequest.h>

using AlibabaCloud::Ft::Model::MigrateStrategyRequest;

MigrateStrategyRequest::MigrateStrategyRequest() :
	RpcServiceRequest("ft", "2018-07-13", "MigrateStrategy")
{
	setMethod(HttpRequest::Method::Post);
}

MigrateStrategyRequest::~MigrateStrategyRequest()
{}

std::string MigrateStrategyRequest::getApiName()const
{
	return apiName_;
}

void MigrateStrategyRequest::setApiName(const std::string& apiName)
{
	apiName_ = apiName;
	setParameter("ApiName", apiName);
}

std::string MigrateStrategyRequest::getProductName()const
{
	return productName_;
}

void MigrateStrategyRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

long MigrateStrategyRequest::getBucUid()const
{
	return bucUid_;
}

void MigrateStrategyRequest::setBucUid(long bucUid)
{
	bucUid_ = bucUid;
	setParameter("BucUid", std::to_string(bucUid));
}

long MigrateStrategyRequest::getStep()const
{
	return step_;
}

void MigrateStrategyRequest::setStep(long step)
{
	step_ = step;
	setParameter("Step", std::to_string(step));
}

std::string MigrateStrategyRequest::getBucName()const
{
	return bucName_;
}

void MigrateStrategyRequest::setBucName(const std::string& bucName)
{
	bucName_ = bucName;
	setParameter("BucName", bucName);
}

std::string MigrateStrategyRequest::getEnv()const
{
	return env_;
}

void MigrateStrategyRequest::setEnv(const std::string& env)
{
	env_ = env;
	setParameter("Env", env);
}

std::string MigrateStrategyRequest::getBucEmpId()const
{
	return bucEmpId_;
}

void MigrateStrategyRequest::setBucEmpId(const std::string& bucEmpId)
{
	bucEmpId_ = bucEmpId;
	setParameter("BucEmpId", bucEmpId);
}

std::string MigrateStrategyRequest::getVersionName()const
{
	return versionName_;
}

void MigrateStrategyRequest::setVersionName(const std::string& versionName)
{
	versionName_ = versionName;
	setParameter("VersionName", versionName);
}

