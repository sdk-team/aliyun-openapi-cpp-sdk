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

#include <alibabacloud/ft/model/GetMigrateStrategyResultRequest.h>

using AlibabaCloud::Ft::Model::GetMigrateStrategyResultRequest;

GetMigrateStrategyResultRequest::GetMigrateStrategyResultRequest() :
	RpcServiceRequest("ft", "2018-07-13", "GetMigrateStrategyResult")
{
	setMethod(HttpRequest::Method::Post);
}

GetMigrateStrategyResultRequest::~GetMigrateStrategyResultRequest()
{}

std::string GetMigrateStrategyResultRequest::getParentName()const
{
	return parentName_;
}

void GetMigrateStrategyResultRequest::setParentName(const std::string& parentName)
{
	parentName_ = parentName;
	setParameter("ParentName", parentName);
}

int GetMigrateStrategyResultRequest::getCurrentPage()const
{
	return currentPage_;
}

void GetMigrateStrategyResultRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string GetMigrateStrategyResultRequest::getBucName()const
{
	return bucName_;
}

void GetMigrateStrategyResultRequest::setBucName(const std::string& bucName)
{
	bucName_ = bucName;
	setParameter("BucName", bucName);
}

std::string GetMigrateStrategyResultRequest::getEnv()const
{
	return env_;
}

void GetMigrateStrategyResultRequest::setEnv(const std::string& env)
{
	env_ = env;
	setParameter("Env", env);
}

std::string GetMigrateStrategyResultRequest::getType()const
{
	return type_;
}

void GetMigrateStrategyResultRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string GetMigrateStrategyResultRequest::getBucEmpId()const
{
	return bucEmpId_;
}

void GetMigrateStrategyResultRequest::setBucEmpId(const std::string& bucEmpId)
{
	bucEmpId_ = bucEmpId;
	setParameter("BucEmpId", bucEmpId);
}

std::string GetMigrateStrategyResultRequest::getStrategyName()const
{
	return strategyName_;
}

void GetMigrateStrategyResultRequest::setStrategyName(const std::string& strategyName)
{
	strategyName_ = strategyName;
	setBodyParameter("StrategyName", strategyName);
}

std::string GetMigrateStrategyResultRequest::getApiName()const
{
	return apiName_;
}

void GetMigrateStrategyResultRequest::setApiName(const std::string& apiName)
{
	apiName_ = apiName;
	setParameter("ApiName", apiName);
}

std::string GetMigrateStrategyResultRequest::getFlowSpecial()const
{
	return flowSpecial_;
}

void GetMigrateStrategyResultRequest::setFlowSpecial(const std::string& flowSpecial)
{
	flowSpecial_ = flowSpecial;
	setParameter("FlowSpecial", flowSpecial);
}

int GetMigrateStrategyResultRequest::getPageSize()const
{
	return pageSize_;
}

void GetMigrateStrategyResultRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string GetMigrateStrategyResultRequest::getProductName()const
{
	return productName_;
}

void GetMigrateStrategyResultRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

std::string GetMigrateStrategyResultRequest::getBucUid()const
{
	return bucUid_;
}

void GetMigrateStrategyResultRequest::setBucUid(const std::string& bucUid)
{
	bucUid_ = bucUid;
	setParameter("BucUid", bucUid);
}

std::string GetMigrateStrategyResultRequest::getVersionName()const
{
	return versionName_;
}

void GetMigrateStrategyResultRequest::setVersionName(const std::string& versionName)
{
	versionName_ = versionName;
	setParameter("VersionName", versionName);
}

std::string GetMigrateStrategyResultRequest::getStatus()const
{
	return status_;
}

void GetMigrateStrategyResultRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

