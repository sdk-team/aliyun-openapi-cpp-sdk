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

#include <alibabacloud/ft/model/UpdateDomainRecordsRegionIdRequest.h>

using AlibabaCloud::Ft::Model::UpdateDomainRecordsRegionIdRequest;

UpdateDomainRecordsRegionIdRequest::UpdateDomainRecordsRegionIdRequest() :
	RpcServiceRequest("ft", "2018-07-13", "UpdateDomainRecordsRegionId")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDomainRecordsRegionIdRequest::~UpdateDomainRecordsRegionIdRequest()
{}

std::string UpdateDomainRecordsRegionIdRequest::getDomain()const
{
	return domain_;
}

void UpdateDomainRecordsRegionIdRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

long UpdateDomainRecordsRegionIdRequest::getBucUid()const
{
	return bucUid_;
}

void UpdateDomainRecordsRegionIdRequest::setBucUid(long bucUid)
{
	bucUid_ = bucUid;
	setParameter("BucUid", std::to_string(bucUid));
}

std::string UpdateDomainRecordsRegionIdRequest::getBucName()const
{
	return bucName_;
}

void UpdateDomainRecordsRegionIdRequest::setBucName(const std::string& bucName)
{
	bucName_ = bucName;
	setParameter("BucName", bucName);
}

std::string UpdateDomainRecordsRegionIdRequest::getBucEmpId()const
{
	return bucEmpId_;
}

void UpdateDomainRecordsRegionIdRequest::setBucEmpId(const std::string& bucEmpId)
{
	bucEmpId_ = bucEmpId;
	setParameter("BucEmpId", bucEmpId);
}

