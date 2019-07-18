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

#include <alibabacloud/acs/model/PurchaseApiRequest.h>

using AlibabaCloud::Acs::Model::PurchaseApiRequest;

PurchaseApiRequest::PurchaseApiRequest() :
	RoaServiceRequest("acs", "2015-01-01")
{}

PurchaseApiRequest::~PurchaseApiRequest()
{}

std::string PurchaseApiRequest::getServiceDate()const
{
	return serviceDate_;
}

void PurchaseApiRequest::setServiceDate(const std::string& serviceDate)
{
	serviceDate_ = serviceDate;
	setCoreParameter("ServiceDate", serviceDate);
}

long PurchaseApiRequest::getQuota()const
{
	return quota_;
}

void PurchaseApiRequest::setQuota(long quota)
{
	quota_ = quota;
	setCoreParameter("Quota", std::to_string(quota));
}

std::string PurchaseApiRequest::getOrgCode()const
{
	return orgCode_;
}

void PurchaseApiRequest::setOrgCode(const std::string& orgCode)
{
	orgCode_ = orgCode;
	setCoreParameter("OrgCode", orgCode);
}

std::string PurchaseApiRequest::getPurchaseProduct()const
{
	return purchaseProduct_;
}

void PurchaseApiRequest::setPurchaseProduct(const std::string& purchaseProduct)
{
	purchaseProduct_ = purchaseProduct;
	setCoreParameter("PurchaseProduct", purchaseProduct);
}

std::string PurchaseApiRequest::getChannel()const
{
	return channel_;
}

void PurchaseApiRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setCoreParameter("Channel", channel);
}

std::string PurchaseApiRequest::getAction()const
{
	return action_;
}

void PurchaseApiRequest::setAction(const std::string& action)
{
	action_ = action;
	setCoreParameter("Action", action);
}

std::string PurchaseApiRequest::getPurchaseVersion()const
{
	return purchaseVersion_;
}

void PurchaseApiRequest::setPurchaseVersion(const std::string& purchaseVersion)
{
	purchaseVersion_ = purchaseVersion;
	setCoreParameter("PurchaseVersion", purchaseVersion);
}

std::string PurchaseApiRequest::getPurchaseApiName()const
{
	return purchaseApiName_;
}

void PurchaseApiRequest::setPurchaseApiName(const std::string& purchaseApiName)
{
	purchaseApiName_ = purchaseApiName;
	setCoreParameter("PurchaseApiName", purchaseApiName);
}

std::string PurchaseApiRequest::getBillingType()const
{
	return billingType_;
}

void PurchaseApiRequest::setBillingType(const std::string& billingType)
{
	billingType_ = billingType;
	setCoreParameter("BillingType", billingType);
}

