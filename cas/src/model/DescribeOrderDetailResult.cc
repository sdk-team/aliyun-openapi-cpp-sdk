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

#include <alibabacloud/cas/model/DescribeOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeOrderDetailResult::DescribeOrderDetailResult() :
	ServiceResult()
{}

DescribeOrderDetailResult::DescribeOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOrderDetailResult::~DescribeOrderDetailResult()
{}

void DescribeOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = std::stoi(value["Id"].asString());
	if(!value["SourceType"].isNull())
		sourceType_ = value["SourceType"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = std::stol(value["OrderId"].asString());
	if(!value["Year"].isNull())
		year_ = std::stoi(value["Year"].asString());
	if(!value["BuyDate"].isNull())
		buyDate_ = std::stoi(value["BuyDate"].asString());
	if(!value["Domain"].isNull())
		domain_ = value["Domain"].asString();
	if(!value["StatusCode"].isNull())
		statusCode_ = std::stoi(value["StatusCode"].asString());
	if(!value["BrandName"].isNull())
		brandName_ = value["BrandName"].asString();
	if(!value["ProductAliasName"].isNull())
		productAliasName_ = value["ProductAliasName"].asString();
	if(!value["CertType"].isNull())
		certType_ = value["CertType"].asString();

}

std::string DescribeOrderDetailResult::getBrandName()const
{
	return brandName_;
}

int DescribeOrderDetailResult::getYear()const
{
	return year_;
}

std::string DescribeOrderDetailResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeOrderDetailResult::getProductAliasName()const
{
	return productAliasName_;
}

std::string DescribeOrderDetailResult::getSourceType()const
{
	return sourceType_;
}

std::string DescribeOrderDetailResult::getCertType()const
{
	return certType_;
}

int DescribeOrderDetailResult::getId()const
{
	return id_;
}

long DescribeOrderDetailResult::getOrderId()const
{
	return orderId_;
}

std::string DescribeOrderDetailResult::getDomain()const
{
	return domain_;
}

int DescribeOrderDetailResult::getStatusCode()const
{
	return statusCode_;
}

int DescribeOrderDetailResult::getBuyDate()const
{
	return buyDate_;
}

