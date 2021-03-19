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

#include <alibabacloud/ecsops/model/OpsAttachDiskRequest.h>

using AlibabaCloud::Ecsops::Model::OpsAttachDiskRequest;

OpsAttachDiskRequest::OpsAttachDiskRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsAttachDisk")
{
	setMethod(HttpRequest::Method::Post);
}

OpsAttachDiskRequest::~OpsAttachDiskRequest()
{}

std::string OpsAttachDiskRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsAttachDiskRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsAttachDiskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsAttachDiskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsAttachDiskRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsAttachDiskRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsAttachDiskRequest::getMountPoint()const
{
	return mountPoint_;
}

void OpsAttachDiskRequest::setMountPoint(const std::string& mountPoint)
{
	mountPoint_ = mountPoint;
	setParameter("MountPoint", mountPoint);
}

bool OpsAttachDiskRequest::getDeleteAutoSnapshot()const
{
	return deleteAutoSnapshot_;
}

void OpsAttachDiskRequest::setDeleteAutoSnapshot(bool deleteAutoSnapshot)
{
	deleteAutoSnapshot_ = deleteAutoSnapshot;
	setParameter("DeleteAutoSnapshot", deleteAutoSnapshot ? "true" : "false");
}

std::string OpsAttachDiskRequest::getDiskId()const
{
	return diskId_;
}

void OpsAttachDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

bool OpsAttachDiskRequest::getDeleteWithInstance()const
{
	return deleteWithInstance_;
}

void OpsAttachDiskRequest::setDeleteWithInstance(bool deleteWithInstance)
{
	deleteWithInstance_ = deleteWithInstance;
	setParameter("DeleteWithInstance", deleteWithInstance ? "true" : "false");
}

bool OpsAttachDiskRequest::getEnableVmOsConfig()const
{
	return enableVmOsConfig_;
}

void OpsAttachDiskRequest::setEnableVmOsConfig(bool enableVmOsConfig)
{
	enableVmOsConfig_ = enableVmOsConfig;
	setParameter("EnableVmOsConfig", enableVmOsConfig ? "true" : "false");
}

