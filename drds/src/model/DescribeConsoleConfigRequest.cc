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

#include <alibabacloud/drds/model/DescribeConsoleConfigRequest.h>

using AlibabaCloud::Drds::Model::DescribeConsoleConfigRequest;

DescribeConsoleConfigRequest::DescribeConsoleConfigRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeConsoleConfig")
{}

DescribeConsoleConfigRequest::~DescribeConsoleConfigRequest()
{}

std::string DescribeConsoleConfigRequest::getType()const
{
	return type_;
}

void DescribeConsoleConfigRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeConsoleConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeConsoleConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

