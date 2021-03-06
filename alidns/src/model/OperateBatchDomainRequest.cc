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

#include <alibabacloud/alidns/model/OperateBatchDomainRequest.h>

using AlibabaCloud::Alidns::Model::OperateBatchDomainRequest;

OperateBatchDomainRequest::OperateBatchDomainRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "OperateBatchDomain")
{}

OperateBatchDomainRequest::~OperateBatchDomainRequest()
{}

std::string OperateBatchDomainRequest::getUserClientIp()const
{
	return userClientIp_;
}

void OperateBatchDomainRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::vector<OperateBatchDomainRequest::DomainRecordInfo> OperateBatchDomainRequest::getDomainRecordInfo()const
{
	return domainRecordInfo_;
}

void OperateBatchDomainRequest::setDomainRecordInfo(const std::vector<DomainRecordInfo>& domainRecordInfo)
{
	domainRecordInfo_ = domainRecordInfo;
	int i = 0;
	for(int i = 0; i!= domainRecordInfo.size(); i++)	{
		auto obj = domainRecordInfo.at(i);
		std::string str ="DomainRecordInfo."+ std::to_string(i);
		setParameter(str + ".Rr", obj.rr);
		setParameter(str + ".Line", obj.line);
		setParameter(str + ".Domain", obj.domain);
		setParameter(str + ".Type", obj.type);
		setParameter(str + ".Priority", std::to_string(obj.priority));
		setParameter(str + ".Value", obj.value);
		setParameter(str + ".Ttl", std::to_string(obj.ttl));
	}
}

std::string OperateBatchDomainRequest::getLang()const
{
	return lang_;
}

void OperateBatchDomainRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string OperateBatchDomainRequest::getType()const
{
	return type_;
}

void OperateBatchDomainRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

