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

#include <alibabacloud/drds/model/DescribeDrdsShardingDbsRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsShardingDbsRequest;

DescribeDrdsShardingDbsRequest::DescribeDrdsShardingDbsRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsShardingDbs")
{}

DescribeDrdsShardingDbsRequest::~DescribeDrdsShardingDbsRequest()
{}

std::string DescribeDrdsShardingDbsRequest::getDbName()const
{
	return dbName_;
}

void DescribeDrdsShardingDbsRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string DescribeDrdsShardingDbsRequest::getDbNamePattern()const
{
	return dbNamePattern_;
}

void DescribeDrdsShardingDbsRequest::setDbNamePattern(const std::string& dbNamePattern)
{
	dbNamePattern_ = dbNamePattern;
	setCoreParameter("DbNamePattern", dbNamePattern);
}

std::string DescribeDrdsShardingDbsRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeDrdsShardingDbsRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeDrdsShardingDbsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDrdsShardingDbsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

