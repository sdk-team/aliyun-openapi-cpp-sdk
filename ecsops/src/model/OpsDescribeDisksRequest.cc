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

#include <alibabacloud/ecsops/model/OpsDescribeDisksRequest.h>

using AlibabaCloud::Ecsops::Model::OpsDescribeDisksRequest;

OpsDescribeDisksRequest::OpsDescribeDisksRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsDescribeDisks")
{
	setMethod(HttpRequest::Method::Post);
}

OpsDescribeDisksRequest::~OpsDescribeDisksRequest()
{}

std::string OpsDescribeDisksRequest::getFuzzyDiskName()const
{
	return fuzzyDiskName_;
}

void OpsDescribeDisksRequest::setFuzzyDiskName(const std::string& fuzzyDiskName)
{
	fuzzyDiskName_ = fuzzyDiskName;
	setParameter("FuzzyDiskName", fuzzyDiskName);
}

long OpsDescribeDisksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsDescribeDisksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsDescribeDisksRequest::getIzNo()const
{
	return izNo_;
}

void OpsDescribeDisksRequest::setIzNo(const std::string& izNo)
{
	izNo_ = izNo;
	setParameter("IzNo", izNo);
}

std::string OpsDescribeDisksRequest::getSnapshotId()const
{
	return snapshotId_;
}

void OpsDescribeDisksRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string OpsDescribeDisksRequest::getImageId()const
{
	return imageId_;
}

void OpsDescribeDisksRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string OpsDescribeDisksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsDescribeDisksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsDescribeDisksRequest::getExcludeStatus()const
{
	return excludeStatus_;
}

void OpsDescribeDisksRequest::setExcludeStatus(const std::string& excludeStatus)
{
	excludeStatus_ = excludeStatus;
	setParameter("ExcludeStatus", excludeStatus);
}

bool OpsDescribeDisksRequest::getDeleteAutoSnapshot()const
{
	return deleteAutoSnapshot_;
}

void OpsDescribeDisksRequest::setDeleteAutoSnapshot(bool deleteAutoSnapshot)
{
	deleteAutoSnapshot_ = deleteAutoSnapshot;
	setParameter("DeleteAutoSnapshot", deleteAutoSnapshot ? "true" : "false");
}

std::string OpsDescribeDisksRequest::getDiskCategory()const
{
	return diskCategory_;
}

void OpsDescribeDisksRequest::setDiskCategory(const std::string& diskCategory)
{
	diskCategory_ = diskCategory;
	setParameter("DiskCategory", diskCategory);
}

int OpsDescribeDisksRequest::getPageSize()const
{
	return pageSize_;
}

void OpsDescribeDisksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string OpsDescribeDisksRequest::getDiskIds()const
{
	return diskIds_;
}

void OpsDescribeDisksRequest::setDiskIds(const std::string& diskIds)
{
	diskIds_ = diskIds;
	setParameter("DiskIds", diskIds);
}

bool OpsDescribeDisksRequest::getDeleteWithInstance()const
{
	return deleteWithInstance_;
}

void OpsDescribeDisksRequest::setDeleteWithInstance(bool deleteWithInstance)
{
	deleteWithInstance_ = deleteWithInstance;
	setParameter("DeleteWithInstance", deleteWithInstance ? "true" : "false");
}

std::string OpsDescribeDisksRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsDescribeDisksRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

bool OpsDescribeDisksRequest::getEnableAutoSnapshot()const
{
	return enableAutoSnapshot_;
}

void OpsDescribeDisksRequest::setEnableAutoSnapshot(bool enableAutoSnapshot)
{
	enableAutoSnapshot_ = enableAutoSnapshot;
	setParameter("EnableAutoSnapshot", enableAutoSnapshot ? "true" : "false");
}

bool OpsDescribeDisksRequest::getActive()const
{
	return active_;
}

void OpsDescribeDisksRequest::setActive(bool active)
{
	active_ = active;
	setParameter("Active", active ? "true" : "false");
}

std::string OpsDescribeDisksRequest::getCreateTimeFrom()const
{
	return createTimeFrom_;
}

void OpsDescribeDisksRequest::setCreateTimeFrom(const std::string& createTimeFrom)
{
	createTimeFrom_ = createTimeFrom;
	setParameter("CreateTimeFrom", createTimeFrom);
}

bool OpsDescribeDisksRequest::getPortable()const
{
	return portable_;
}

void OpsDescribeDisksRequest::setPortable(bool portable)
{
	portable_ = portable;
	setParameter("Portable", portable ? "true" : "false");
}

std::string OpsDescribeDisksRequest::getDiskType()const
{
	return diskType_;
}

void OpsDescribeDisksRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setParameter("DiskType", diskType);
}

std::string OpsDescribeDisksRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsDescribeDisksRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

int OpsDescribeDisksRequest::getPageNo()const
{
	return pageNo_;
}

void OpsDescribeDisksRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string OpsDescribeDisksRequest::getCreateTimeTo()const
{
	return createTimeTo_;
}

void OpsDescribeDisksRequest::setCreateTimeTo(const std::string& createTimeTo)
{
	createTimeTo_ = createTimeTo;
	setParameter("CreateTimeTo", createTimeTo);
}

std::string OpsDescribeDisksRequest::getStatus()const
{
	return status_;
}

void OpsDescribeDisksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

