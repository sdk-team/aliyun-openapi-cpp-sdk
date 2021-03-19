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

#include <alibabacloud/ecsops/model/OpsCreateSnapshotRequest.h>

using AlibabaCloud::Ecsops::Model::OpsCreateSnapshotRequest;

OpsCreateSnapshotRequest::OpsCreateSnapshotRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsCreateSnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

OpsCreateSnapshotRequest::~OpsCreateSnapshotRequest()
{}

std::string OpsCreateSnapshotRequest::getSnapshotNickname()const
{
	return snapshotNickname_;
}

void OpsCreateSnapshotRequest::setSnapshotNickname(const std::string& snapshotNickname)
{
	snapshotNickname_ = snapshotNickname;
	setParameter("SnapshotNickname", snapshotNickname);
}

std::string OpsCreateSnapshotRequest::getDescription()const
{
	return description_;
}

void OpsCreateSnapshotRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string OpsCreateSnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsCreateSnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsCreateSnapshotRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsCreateSnapshotRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsCreateSnapshotRequest::getDiskId()const
{
	return diskId_;
}

void OpsCreateSnapshotRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

