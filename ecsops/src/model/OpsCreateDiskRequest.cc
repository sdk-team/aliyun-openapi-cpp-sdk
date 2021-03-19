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

#include <alibabacloud/ecsops/model/OpsCreateDiskRequest.h>

using AlibabaCloud::Ecsops::Model::OpsCreateDiskRequest;

OpsCreateDiskRequest::OpsCreateDiskRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsCreateDisk")
{
	setMethod(HttpRequest::Method::Post);
}

OpsCreateDiskRequest::~OpsCreateDiskRequest()
{}

long OpsCreateDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsCreateDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsCreateDiskRequest::getIzNo()const
{
	return izNo_;
}

void OpsCreateDiskRequest::setIzNo(const std::string& izNo)
{
	izNo_ = izNo;
	setParameter("IzNo", izNo);
}

std::string OpsCreateDiskRequest::getSnapshotId()const
{
	return snapshotId_;
}

void OpsCreateDiskRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string OpsCreateDiskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsCreateDiskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsCreateDiskRequest::getMountPoint()const
{
	return mountPoint_;
}

void OpsCreateDiskRequest::setMountPoint(const std::string& mountPoint)
{
	mountPoint_ = mountPoint;
	setParameter("MountPoint", mountPoint);
}

std::string OpsCreateDiskRequest::getDiskName()const
{
	return diskName_;
}

void OpsCreateDiskRequest::setDiskName(const std::string& diskName)
{
	diskName_ = diskName;
	setParameter("DiskName", diskName);
}

bool OpsCreateDiskRequest::getDeleteAutoSnapshot()const
{
	return deleteAutoSnapshot_;
}

void OpsCreateDiskRequest::setDeleteAutoSnapshot(bool deleteAutoSnapshot)
{
	deleteAutoSnapshot_ = deleteAutoSnapshot;
	setParameter("DeleteAutoSnapshot", deleteAutoSnapshot ? "true" : "false");
}

std::string OpsCreateDiskRequest::getDiskCategory()const
{
	return diskCategory_;
}

void OpsCreateDiskRequest::setDiskCategory(const std::string& diskCategory)
{
	diskCategory_ = diskCategory;
	setParameter("DiskCategory", diskCategory);
}

std::string OpsCreateDiskRequest::getDiskDesc()const
{
	return diskDesc_;
}

void OpsCreateDiskRequest::setDiskDesc(const std::string& diskDesc)
{
	diskDesc_ = diskDesc;
	setParameter("DiskDesc", diskDesc);
}

bool OpsCreateDiskRequest::getDeleteWithInstance()const
{
	return deleteWithInstance_;
}

void OpsCreateDiskRequest::setDeleteWithInstance(bool deleteWithInstance)
{
	deleteWithInstance_ = deleteWithInstance;
	setParameter("DeleteWithInstance", deleteWithInstance ? "true" : "false");
}

std::string OpsCreateDiskRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsCreateDiskRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

bool OpsCreateDiskRequest::getEnableAutoSnapshot()const
{
	return enableAutoSnapshot_;
}

void OpsCreateDiskRequest::setEnableAutoSnapshot(bool enableAutoSnapshot)
{
	enableAutoSnapshot_ = enableAutoSnapshot;
	setParameter("EnableAutoSnapshot", enableAutoSnapshot ? "true" : "false");
}

int OpsCreateDiskRequest::getDiskSize()const
{
	return diskSize_;
}

void OpsCreateDiskRequest::setDiskSize(int diskSize)
{
	diskSize_ = diskSize;
	setParameter("DiskSize", std::to_string(diskSize));
}

bool OpsCreateDiskRequest::getPortable()const
{
	return portable_;
}

void OpsCreateDiskRequest::setPortable(bool portable)
{
	portable_ = portable;
	setParameter("Portable", portable ? "true" : "false");
}

int OpsCreateDiskRequest::getBpsSize()const
{
	return bpsSize_;
}

void OpsCreateDiskRequest::setBpsSize(int bpsSize)
{
	bpsSize_ = bpsSize;
	setParameter("BpsSize", std::to_string(bpsSize));
}

std::string OpsCreateDiskRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsCreateDiskRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

int OpsCreateDiskRequest::getIopsSize()const
{
	return iopsSize_;
}

void OpsCreateDiskRequest::setIopsSize(int iopsSize)
{
	iopsSize_ = iopsSize;
	setParameter("IopsSize", std::to_string(iopsSize));
}

