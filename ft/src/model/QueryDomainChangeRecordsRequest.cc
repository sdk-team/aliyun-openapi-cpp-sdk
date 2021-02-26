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

#include <alibabacloud/ft/model/QueryDomainChangeRecordsRequest.h>

using AlibabaCloud::Ft::Model::QueryDomainChangeRecordsRequest;

QueryDomainChangeRecordsRequest::QueryDomainChangeRecordsRequest() :
	RpcServiceRequest("ft", "2018-07-13", "QueryDomainChangeRecords")
{
	setMethod(HttpRequest::Method::Post);
}

QueryDomainChangeRecordsRequest::~QueryDomainChangeRecordsRequest()
{}

std::string QueryDomainChangeRecordsRequest::getProduct()const
{
	return product_;
}

void QueryDomainChangeRecordsRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

int QueryDomainChangeRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void QueryDomainChangeRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long QueryDomainChangeRecordsRequest::getBucUid()const
{
	return bucUid_;
}

void QueryDomainChangeRecordsRequest::setBucUid(long bucUid)
{
	bucUid_ = bucUid;
	setParameter("BucUid", std::to_string(bucUid));
}

int QueryDomainChangeRecordsRequest::getCurrentPage()const
{
	return currentPage_;
}

void QueryDomainChangeRecordsRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string QueryDomainChangeRecordsRequest::getBucName()const
{
	return bucName_;
}

void QueryDomainChangeRecordsRequest::setBucName(const std::string& bucName)
{
	bucName_ = bucName;
	setParameter("BucName", bucName);
}

std::string QueryDomainChangeRecordsRequest::getBucEmpId()const
{
	return bucEmpId_;
}

void QueryDomainChangeRecordsRequest::setBucEmpId(const std::string& bucEmpId)
{
	bucEmpId_ = bucEmpId;
	setParameter("BucEmpId", bucEmpId);
}

