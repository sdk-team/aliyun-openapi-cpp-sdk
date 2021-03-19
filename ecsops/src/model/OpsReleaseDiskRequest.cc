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

#include <alibabacloud/ecsops/model/OpsReleaseDiskRequest.h>

using AlibabaCloud::Ecsops::Model::OpsReleaseDiskRequest;

OpsReleaseDiskRequest::OpsReleaseDiskRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsReleaseDisk")
{
	setMethod(HttpRequest::Method::Post);
}

OpsReleaseDiskRequest::~OpsReleaseDiskRequest()
{}

std::string OpsReleaseDiskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsReleaseDiskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsReleaseDiskRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsReleaseDiskRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsReleaseDiskRequest::getDiskId()const
{
	return diskId_;
}

void OpsReleaseDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

