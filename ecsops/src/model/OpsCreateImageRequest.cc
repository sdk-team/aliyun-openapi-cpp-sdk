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

#include <alibabacloud/ecsops/model/OpsCreateImageRequest.h>

using AlibabaCloud::Ecsops::Model::OpsCreateImageRequest;

OpsCreateImageRequest::OpsCreateImageRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsCreateImage")
{
	setMethod(HttpRequest::Method::Post);
}

OpsCreateImageRequest::~OpsCreateImageRequest()
{}

long OpsCreateImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsCreateImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsCreateImageRequest::getSnapshotId()const
{
	return snapshotId_;
}

void OpsCreateImageRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string OpsCreateImageRequest::getRemark()const
{
	return remark_;
}

void OpsCreateImageRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string OpsCreateImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsCreateImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsCreateImageRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsCreateImageRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsCreateImageRequest::getImageName()const
{
	return imageName_;
}

void OpsCreateImageRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

bool OpsCreateImageRequest::getIsPublic()const
{
	return isPublic_;
}

void OpsCreateImageRequest::setIsPublic(bool isPublic)
{
	isPublic_ = isPublic;
	setParameter("IsPublic", isPublic ? "true" : "false");
}

std::string OpsCreateImageRequest::getImageVersion()const
{
	return imageVersion_;
}

void OpsCreateImageRequest::setImageVersion(const std::string& imageVersion)
{
	imageVersion_ = imageVersion;
	setParameter("ImageVersion", imageVersion);
}

