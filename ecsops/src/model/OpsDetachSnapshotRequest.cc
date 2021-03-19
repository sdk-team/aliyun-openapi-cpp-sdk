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

#include <alibabacloud/ecsops/model/OpsDetachSnapshotRequest.h>

using AlibabaCloud::Ecsops::Model::OpsDetachSnapshotRequest;

OpsDetachSnapshotRequest::OpsDetachSnapshotRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsDetachSnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

OpsDetachSnapshotRequest::~OpsDetachSnapshotRequest()
{}

std::string OpsDetachSnapshotRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsDetachSnapshotRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

long OpsDetachSnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsDetachSnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsDetachSnapshotRequest::getSnapshotId()const
{
	return snapshotId_;
}

void OpsDetachSnapshotRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string OpsDetachSnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsDetachSnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsDetachSnapshotRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsDetachSnapshotRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

