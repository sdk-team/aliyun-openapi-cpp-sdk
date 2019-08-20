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

#include <alibabacloud/drds/model/MigrateJstDrdsDbAcrossRegionRequest.h>

using AlibabaCloud::Drds::Model::MigrateJstDrdsDbAcrossRegionRequest;

MigrateJstDrdsDbAcrossRegionRequest::MigrateJstDrdsDbAcrossRegionRequest() :
	RpcServiceRequest("drds", "2019-01-23", "MigrateJstDrdsDbAcrossRegion")
{}

MigrateJstDrdsDbAcrossRegionRequest::~MigrateJstDrdsDbAcrossRegionRequest()
{}

std::string MigrateJstDrdsDbAcrossRegionRequest::getDbName()const
{
	return dbName_;
}

void MigrateJstDrdsDbAcrossRegionRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string MigrateJstDrdsDbAcrossRegionRequest::getSrcDrdsInstanceId()const
{
	return srcDrdsInstanceId_;
}

void MigrateJstDrdsDbAcrossRegionRequest::setSrcDrdsInstanceId(const std::string& srcDrdsInstanceId)
{
	srcDrdsInstanceId_ = srcDrdsInstanceId;
	setCoreParameter("SrcDrdsInstanceId", srcDrdsInstanceId);
}

std::string MigrateJstDrdsDbAcrossRegionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateJstDrdsDbAcrossRegionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string MigrateJstDrdsDbAcrossRegionRequest::getDstDrdsInstanceId()const
{
	return dstDrdsInstanceId_;
}

void MigrateJstDrdsDbAcrossRegionRequest::setDstDrdsInstanceId(const std::string& dstDrdsInstanceId)
{
	dstDrdsInstanceId_ = dstDrdsInstanceId;
	setCoreParameter("DstDrdsInstanceId", dstDrdsInstanceId);
}

