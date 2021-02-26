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

#include <alibabacloud/ft/model/DescribeResourceTypeRequest.h>

using AlibabaCloud::Ft::Model::DescribeResourceTypeRequest;

DescribeResourceTypeRequest::DescribeResourceTypeRequest() :
	RpcServiceRequest("ft", "2018-07-13", "DescribeResourceType")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeResourceTypeRequest::~DescribeResourceTypeRequest()
{}

std::string DescribeResourceTypeRequest::getProduct()const
{
	return product_;
}

void DescribeResourceTypeRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeResourceTypeRequest::getAcceptLanguage()const
{
	return acceptLanguage_;
}

void DescribeResourceTypeRequest::setAcceptLanguage(const std::string& acceptLanguage)
{
	acceptLanguage_ = acceptLanguage;
	setParameter("AcceptLanguage", acceptLanguage);
}

std::string DescribeResourceTypeRequest::getEnv()const
{
	return env_;
}

void DescribeResourceTypeRequest::setEnv(const std::string& env)
{
	env_ = env;
	setParameter("Env", env);
}

std::string DescribeResourceTypeRequest::getResourceType()const
{
	return resourceType_;
}

void DescribeResourceTypeRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

