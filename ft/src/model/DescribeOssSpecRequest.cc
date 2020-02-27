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

#include <alibabacloud/ft/model/DescribeOssSpecRequest.h>

using AlibabaCloud::Ft::Model::DescribeOssSpecRequest;

DescribeOssSpecRequest::DescribeOssSpecRequest() :
	RoaServiceRequest("ft", "2019-08-02")
{
	setResourcePath("/oss/spec");
	setMethod(HttpRequest::Method::POST);
}

DescribeOssSpecRequest::~DescribeOssSpecRequest()
{}

std::string DescribeOssSpecRequest::getPassword()const
{
	return password_;
}

void DescribeOssSpecRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string DescribeOssSpecRequest::getTimeStemp()const
{
	return timeStemp_;
}

void DescribeOssSpecRequest::setTimeStemp(const std::string& timeStemp)
{
	timeStemp_ = timeStemp;
	setParameter("TimeStemp", timeStemp);
}

