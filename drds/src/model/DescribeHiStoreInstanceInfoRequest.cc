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

#include <alibabacloud/drds/model/DescribeHiStoreInstanceInfoRequest.h>

using AlibabaCloud::Drds::Model::DescribeHiStoreInstanceInfoRequest;

DescribeHiStoreInstanceInfoRequest::DescribeHiStoreInstanceInfoRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeHiStoreInstanceInfo")
{}

DescribeHiStoreInstanceInfoRequest::~DescribeHiStoreInstanceInfoRequest()
{}

std::string DescribeHiStoreInstanceInfoRequest::getHistoreInstanceId()const
{
	return historeInstanceId_;
}

void DescribeHiStoreInstanceInfoRequest::setHistoreInstanceId(const std::string& historeInstanceId)
{
	historeInstanceId_ = historeInstanceId;
	setCoreParameter("HistoreInstanceId", historeInstanceId);
}

std::string DescribeHiStoreInstanceInfoRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeHiStoreInstanceInfoRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeHiStoreInstanceInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeHiStoreInstanceInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

