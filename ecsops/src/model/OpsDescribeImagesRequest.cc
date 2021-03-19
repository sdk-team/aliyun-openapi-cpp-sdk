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

#include <alibabacloud/ecsops/model/OpsDescribeImagesRequest.h>

using AlibabaCloud::Ecsops::Model::OpsDescribeImagesRequest;

OpsDescribeImagesRequest::OpsDescribeImagesRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsDescribeImages")
{
	setMethod(HttpRequest::Method::Post);
}

OpsDescribeImagesRequest::~OpsDescribeImagesRequest()
{}

long OpsDescribeImagesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsDescribeImagesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsDescribeImagesRequest::getSnapshotId()const
{
	return snapshotId_;
}

void OpsDescribeImagesRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string OpsDescribeImagesRequest::getCreateTimeFrom()const
{
	return createTimeFrom_;
}

void OpsDescribeImagesRequest::setCreateTimeFrom(const std::string& createTimeFrom)
{
	createTimeFrom_ = createTimeFrom;
	setParameter("CreateTimeFrom", createTimeFrom);
}

std::string OpsDescribeImagesRequest::getFuzzyImageName()const
{
	return fuzzyImageName_;
}

void OpsDescribeImagesRequest::setFuzzyImageName(const std::string& fuzzyImageName)
{
	fuzzyImageName_ = fuzzyImageName;
	setParameter("FuzzyImageName", fuzzyImageName);
}

std::string OpsDescribeImagesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsDescribeImagesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsDescribeImagesRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsDescribeImagesRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

bool OpsDescribeImagesRequest::getQuoted()const
{
	return quoted_;
}

void OpsDescribeImagesRequest::setQuoted(bool quoted)
{
	quoted_ = quoted;
	setParameter("Quoted", quoted ? "true" : "false");
}

std::string OpsDescribeImagesRequest::getImageTypes()const
{
	return imageTypes_;
}

void OpsDescribeImagesRequest::setImageTypes(const std::string& imageTypes)
{
	imageTypes_ = imageTypes;
	setParameter("ImageTypes", imageTypes);
}

std::string OpsDescribeImagesRequest::getImageName()const
{
	return imageName_;
}

void OpsDescribeImagesRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

int OpsDescribeImagesRequest::getPageNo()const
{
	return pageNo_;
}

void OpsDescribeImagesRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string OpsDescribeImagesRequest::getCreateTimeTo()const
{
	return createTimeTo_;
}

void OpsDescribeImagesRequest::setCreateTimeTo(const std::string& createTimeTo)
{
	createTimeTo_ = createTimeTo;
	setParameter("CreateTimeTo", createTimeTo);
}

int OpsDescribeImagesRequest::getPageSize()const
{
	return pageSize_;
}

void OpsDescribeImagesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string OpsDescribeImagesRequest::getImageIds()const
{
	return imageIds_;
}

void OpsDescribeImagesRequest::setImageIds(const std::string& imageIds)
{
	imageIds_ = imageIds;
	setParameter("ImageIds", imageIds);
}

std::string OpsDescribeImagesRequest::getStatus()const
{
	return status_;
}

void OpsDescribeImagesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

