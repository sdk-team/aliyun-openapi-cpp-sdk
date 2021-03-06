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

#include <alibabacloud/cdn/model/DescribeCdnHttpsDomainListRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnHttpsDomainListRequest;

DescribeCdnHttpsDomainListRequest::DescribeCdnHttpsDomainListRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnHttpsDomainList")
{}

DescribeCdnHttpsDomainListRequest::~DescribeCdnHttpsDomainListRequest()
{}

std::string DescribeCdnHttpsDomainListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeCdnHttpsDomainListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeCdnHttpsDomainListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeCdnHttpsDomainListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

long DescribeCdnHttpsDomainListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCdnHttpsDomainListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeCdnHttpsDomainListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeCdnHttpsDomainListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeCdnHttpsDomainListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeCdnHttpsDomainListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeCdnHttpsDomainListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeCdnHttpsDomainListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeCdnHttpsDomainListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCdnHttpsDomainListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCdnHttpsDomainListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeCdnHttpsDomainListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeCdnHttpsDomainListRequest::getVersion()const
{
	return version_;
}

void DescribeCdnHttpsDomainListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeCdnHttpsDomainListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeCdnHttpsDomainListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeCdnHttpsDomainListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeCdnHttpsDomainListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeCdnHttpsDomainListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeCdnHttpsDomainListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeCdnHttpsDomainListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeCdnHttpsDomainListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeCdnHttpsDomainListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCdnHttpsDomainListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeCdnHttpsDomainListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeCdnHttpsDomainListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeCdnHttpsDomainListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCdnHttpsDomainListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeCdnHttpsDomainListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeCdnHttpsDomainListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeCdnHttpsDomainListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeCdnHttpsDomainListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeCdnHttpsDomainListRequest::getBizId()const
{
	return bizId_;
}

void DescribeCdnHttpsDomainListRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string DescribeCdnHttpsDomainListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeCdnHttpsDomainListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeCdnHttpsDomainListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeCdnHttpsDomainListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeCdnHttpsDomainListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeCdnHttpsDomainListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

