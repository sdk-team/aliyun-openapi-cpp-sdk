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

#include <alibabacloud/alidns/model/DescribeRecordLogsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeRecordLogsRequest;

DescribeRecordLogsRequest::DescribeRecordLogsRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeRecordLogs")
{}

DescribeRecordLogsRequest::~DescribeRecordLogsRequest()
{}

std::string DescribeRecordLogsRequest::getEndDate()const
{
	return endDate_;
}

void DescribeRecordLogsRequest::setEndDate(const std::string& endDate)
{
	endDate_ = endDate;
	setParameter("EndDate", endDate);
}

std::string DescribeRecordLogsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeRecordLogsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string DescribeRecordLogsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeRecordLogsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeRecordLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRecordLogsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRecordLogsRequest::getLang()const
{
	return lang_;
}

void DescribeRecordLogsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeRecordLogsRequest::getKeyWord()const
{
	return keyWord_;
}

void DescribeRecordLogsRequest::setKeyWord(const std::string& keyWord)
{
	keyWord_ = keyWord;
	setParameter("KeyWord", keyWord);
}

std::string DescribeRecordLogsRequest::getStartDate()const
{
	return startDate_;
}

void DescribeRecordLogsRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setParameter("StartDate", startDate);
}

long DescribeRecordLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRecordLogsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRecordLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRecordLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

