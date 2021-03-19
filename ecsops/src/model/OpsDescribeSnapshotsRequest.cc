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

#include <alibabacloud/ecsops/model/OpsDescribeSnapshotsRequest.h>

using AlibabaCloud::Ecsops::Model::OpsDescribeSnapshotsRequest;

OpsDescribeSnapshotsRequest::OpsDescribeSnapshotsRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsDescribeSnapshots")
{
	setMethod(HttpRequest::Method::Post);
}

OpsDescribeSnapshotsRequest::~OpsDescribeSnapshotsRequest()
{}

long OpsDescribeSnapshotsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsDescribeSnapshotsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsDescribeSnapshotsRequest::getSnapshotIds()const
{
	return snapshotIds_;
}

void OpsDescribeSnapshotsRequest::setSnapshotIds(const std::string& snapshotIds)
{
	snapshotIds_ = snapshotIds;
	setParameter("SnapshotIds", snapshotIds);
}

std::string OpsDescribeSnapshotsRequest::getSnapshotName()const
{
	return snapshotName_;
}

void OpsDescribeSnapshotsRequest::setSnapshotName(const std::string& snapshotName)
{
	snapshotName_ = snapshotName;
	setParameter("SnapshotName", snapshotName);
}

std::string OpsDescribeSnapshotsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsDescribeSnapshotsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool OpsDescribeSnapshotsRequest::getCreateFinished()const
{
	return createFinished_;
}

void OpsDescribeSnapshotsRequest::setCreateFinished(bool createFinished)
{
	createFinished_ = createFinished;
	setParameter("CreateFinished", createFinished ? "true" : "false");
}

std::string OpsDescribeSnapshotsRequest::getFuzzySnapshotName()const
{
	return fuzzySnapshotName_;
}

void OpsDescribeSnapshotsRequest::setFuzzySnapshotName(const std::string& fuzzySnapshotName)
{
	fuzzySnapshotName_ = fuzzySnapshotName;
	setParameter("FuzzySnapshotName", fuzzySnapshotName);
}

int OpsDescribeSnapshotsRequest::getPageSize()const
{
	return pageSize_;
}

void OpsDescribeSnapshotsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string OpsDescribeSnapshotsRequest::getSourceDiskId()const
{
	return sourceDiskId_;
}

void OpsDescribeSnapshotsRequest::setSourceDiskId(const std::string& sourceDiskId)
{
	sourceDiskId_ = sourceDiskId;
	setParameter("SourceDiskId", sourceDiskId);
}

std::string OpsDescribeSnapshotsRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsDescribeSnapshotsRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsDescribeSnapshotsRequest::getSnapshotTypes()const
{
	return snapshotTypes_;
}

void OpsDescribeSnapshotsRequest::setSnapshotTypes(const std::string& snapshotTypes)
{
	snapshotTypes_ = snapshotTypes;
	setParameter("SnapshotTypes", snapshotTypes);
}

std::string OpsDescribeSnapshotsRequest::getSourceDiskType()const
{
	return sourceDiskType_;
}

void OpsDescribeSnapshotsRequest::setSourceDiskType(const std::string& sourceDiskType)
{
	sourceDiskType_ = sourceDiskType;
	setParameter("SourceDiskType", sourceDiskType);
}

std::string OpsDescribeSnapshotsRequest::getCreateTimeFrom()const
{
	return createTimeFrom_;
}

void OpsDescribeSnapshotsRequest::setCreateTimeFrom(const std::string& createTimeFrom)
{
	createTimeFrom_ = createTimeFrom;
	setParameter("CreateTimeFrom", createTimeFrom);
}

std::string OpsDescribeSnapshotsRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsDescribeSnapshotsRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

int OpsDescribeSnapshotsRequest::getPageNo()const
{
	return pageNo_;
}

void OpsDescribeSnapshotsRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string OpsDescribeSnapshotsRequest::getCreateTimeTo()const
{
	return createTimeTo_;
}

void OpsDescribeSnapshotsRequest::setCreateTimeTo(const std::string& createTimeTo)
{
	createTimeTo_ = createTimeTo;
	setParameter("CreateTimeTo", createTimeTo);
}

