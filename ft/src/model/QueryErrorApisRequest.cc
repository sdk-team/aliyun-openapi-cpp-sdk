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

#include <alibabacloud/ft/model/QueryErrorApisRequest.h>

using AlibabaCloud::Ft::Model::QueryErrorApisRequest;

QueryErrorApisRequest::QueryErrorApisRequest() :
	RpcServiceRequest("ft", "2018-07-13", "QueryErrorApis")
{
	setMethod(HttpRequest::Method::Post);
}

QueryErrorApisRequest::~QueryErrorApisRequest()
{}

std::string QueryErrorApisRequest::getBeginDate()const
{
	return beginDate_;
}

void QueryErrorApisRequest::setBeginDate(const std::string& beginDate)
{
	beginDate_ = beginDate;
	setParameter("BeginDate", beginDate);
}

std::string QueryErrorApisRequest::getEndDate()const
{
	return endDate_;
}

void QueryErrorApisRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string QueryErrorApisRequest::getProductName()const
{
	return productName_;
}

void QueryErrorApisRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setParameter("ProductName", productName);
}

long QueryErrorApisRequest::getBucUid()const
{
	return bucUid_;
}

void QueryErrorApisRequest::setBucUid(long bucUid)
{
	bucUid_ = bucUid;
	setParameter("BucUid", std::to_string(bucUid));
}

std::string QueryErrorApisRequest::getBucName()const
{
	return bucName_;
}

void QueryErrorApisRequest::setBucName(const std::string& bucName)
{
	bucName_ = bucName;
	setParameter("BucName", bucName);
}

std::string QueryErrorApisRequest::getBucEmpId()const
{
	return bucEmpId_;
}

void QueryErrorApisRequest::setBucEmpId(const std::string& bucEmpId)
{
	bucEmpId_ = bucEmpId;
	setParameter("BucEmpId", bucEmpId);
}

