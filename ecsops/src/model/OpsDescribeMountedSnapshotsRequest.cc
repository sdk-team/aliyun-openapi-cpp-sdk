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

#include <alibabacloud/ecsops/model/OpsDescribeMountedSnapshotsRequest.h>

using AlibabaCloud::Ecsops::Model::OpsDescribeMountedSnapshotsRequest;

OpsDescribeMountedSnapshotsRequest::OpsDescribeMountedSnapshotsRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsDescribeMountedSnapshots")
{
	setMethod(HttpRequest::Method::Post);
}

OpsDescribeMountedSnapshotsRequest::~OpsDescribeMountedSnapshotsRequest()
{}

std::string OpsDescribeMountedSnapshotsRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsDescribeMountedSnapshotsRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

long OpsDescribeMountedSnapshotsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsDescribeMountedSnapshotsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsDescribeMountedSnapshotsRequest::getSnapshotId()const
{
	return snapshotId_;
}

void OpsDescribeMountedSnapshotsRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string OpsDescribeMountedSnapshotsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsDescribeMountedSnapshotsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsDescribeMountedSnapshotsRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsDescribeMountedSnapshotsRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

int OpsDescribeMountedSnapshotsRequest::getPageNo()const
{
	return pageNo_;
}

void OpsDescribeMountedSnapshotsRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

int OpsDescribeMountedSnapshotsRequest::getPageSize()const
{
	return pageSize_;
}

void OpsDescribeMountedSnapshotsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

