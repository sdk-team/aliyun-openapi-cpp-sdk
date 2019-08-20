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

#include <alibabacloud/drds/model/DescribeCanExpandInstanceDetailListRequest.h>

using AlibabaCloud::Drds::Model::DescribeCanExpandInstanceDetailListRequest;

DescribeCanExpandInstanceDetailListRequest::DescribeCanExpandInstanceDetailListRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeCanExpandInstanceDetailList")
{}

DescribeCanExpandInstanceDetailListRequest::~DescribeCanExpandInstanceDetailListRequest()
{}

std::string DescribeCanExpandInstanceDetailListRequest::getCurrentPlan()const
{
	return currentPlan_;
}

void DescribeCanExpandInstanceDetailListRequest::setCurrentPlan(const std::string& currentPlan)
{
	currentPlan_ = currentPlan;
	setCoreParameter("CurrentPlan", currentPlan);
}

std::string DescribeCanExpandInstanceDetailListRequest::getDbName()const
{
	return dbName_;
}

void DescribeCanExpandInstanceDetailListRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string DescribeCanExpandInstanceDetailListRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeCanExpandInstanceDetailListRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeCanExpandInstanceDetailListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCanExpandInstanceDetailListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

