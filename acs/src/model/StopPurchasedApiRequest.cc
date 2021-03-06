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

#include <alibabacloud/acs/model/StopPurchasedApiRequest.h>

using AlibabaCloud::Acs::Model::StopPurchasedApiRequest;

StopPurchasedApiRequest::StopPurchasedApiRequest() :
	RoaServiceRequest("acs", "2015-01-01")
{
	setResourcePath("/Api/StopPurchasedApi");
	setMethod(HttpRequest::Method::Post);
}

StopPurchasedApiRequest::~StopPurchasedApiRequest()
{}

std::string StopPurchasedApiRequest::getPurchaseProduct()const
{
	return purchaseProduct_;
}

void StopPurchasedApiRequest::setPurchaseProduct(const std::string& purchaseProduct)
{
	purchaseProduct_ = purchaseProduct;
	setCoreParameter("PurchaseProduct", purchaseProduct);
}

std::string StopPurchasedApiRequest::getChannel()const
{
	return channel_;
}

void StopPurchasedApiRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setCoreParameter("Channel", channel);
}

std::string StopPurchasedApiRequest::getPurchaseVersion()const
{
	return purchaseVersion_;
}

void StopPurchasedApiRequest::setPurchaseVersion(const std::string& purchaseVersion)
{
	purchaseVersion_ = purchaseVersion;
	setCoreParameter("PurchaseVersion", purchaseVersion);
}

std::string StopPurchasedApiRequest::getPurchaseApiName()const
{
	return purchaseApiName_;
}

void StopPurchasedApiRequest::setPurchaseApiName(const std::string& purchaseApiName)
{
	purchaseApiName_ = purchaseApiName;
	setCoreParameter("PurchaseApiName", purchaseApiName);
}

