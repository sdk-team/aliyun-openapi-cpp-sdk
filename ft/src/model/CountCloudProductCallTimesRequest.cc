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

#include <alibabacloud/ft/model/CountCloudProductCallTimesRequest.h>

using AlibabaCloud::Ft::Model::CountCloudProductCallTimesRequest;

CountCloudProductCallTimesRequest::CountCloudProductCallTimesRequest() :
	RpcServiceRequest("ft", "2018-07-13", "CountCloudProductCallTimes")
{
	setMethod(HttpRequest::Method::Post);
}

CountCloudProductCallTimesRequest::~CountCloudProductCallTimesRequest()
{}

long CountCloudProductCallTimesRequest::getBucUid()const
{
	return bucUid_;
}

void CountCloudProductCallTimesRequest::setBucUid(long bucUid)
{
	bucUid_ = bucUid;
	setParameter("BucUid", std::to_string(bucUid));
}

std::string CountCloudProductCallTimesRequest::getBucName()const
{
	return bucName_;
}

void CountCloudProductCallTimesRequest::setBucName(const std::string& bucName)
{
	bucName_ = bucName;
	setParameter("BucName", bucName);
}

std::string CountCloudProductCallTimesRequest::getBucEmpId()const
{
	return bucEmpId_;
}

void CountCloudProductCallTimesRequest::setBucEmpId(const std::string& bucEmpId)
{
	bucEmpId_ = bucEmpId;
	setParameter("BucEmpId", bucEmpId);
}

std::string CountCloudProductCallTimesRequest::getCloudProductsJsonString()const
{
	return cloudProductsJsonString_;
}

void CountCloudProductCallTimesRequest::setCloudProductsJsonString(const std::string& cloudProductsJsonString)
{
	cloudProductsJsonString_ = cloudProductsJsonString;
	setBodyParameter("CloudProductsJsonString", cloudProductsJsonString);
}

bool CountCloudProductCallTimesRequest::getClearCloudCache()const
{
	return clearCloudCache_;
}

void CountCloudProductCallTimesRequest::setClearCloudCache(bool clearCloudCache)
{
	clearCloudCache_ = clearCloudCache;
	setBodyParameter("ClearCloudCache", clearCloudCache ? "true" : "false");
}

bool CountCloudProductCallTimesRequest::getClearProductCache()const
{
	return clearProductCache_;
}

void CountCloudProductCallTimesRequest::setClearProductCache(bool clearProductCache)
{
	clearProductCache_ = clearProductCache;
	setBodyParameter("ClearProductCache", clearProductCache ? "true" : "false");
}

