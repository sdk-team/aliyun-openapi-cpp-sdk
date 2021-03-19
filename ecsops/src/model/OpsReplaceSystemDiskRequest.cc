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

#include <alibabacloud/ecsops/model/OpsReplaceSystemDiskRequest.h>

using AlibabaCloud::Ecsops::Model::OpsReplaceSystemDiskRequest;

OpsReplaceSystemDiskRequest::OpsReplaceSystemDiskRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsReplaceSystemDisk")
{
	setMethod(HttpRequest::Method::Post);
}

OpsReplaceSystemDiskRequest::~OpsReplaceSystemDiskRequest()
{}

std::string OpsReplaceSystemDiskRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsReplaceSystemDiskRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsReplaceSystemDiskRequest::getImageId()const
{
	return imageId_;
}

void OpsReplaceSystemDiskRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string OpsReplaceSystemDiskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsReplaceSystemDiskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsReplaceSystemDiskRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsReplaceSystemDiskRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsReplaceSystemDiskRequest::getPassword()const
{
	return password_;
}

void OpsReplaceSystemDiskRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

