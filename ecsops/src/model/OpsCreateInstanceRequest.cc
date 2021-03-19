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

#include <alibabacloud/ecsops/model/OpsCreateInstanceRequest.h>

using AlibabaCloud::Ecsops::Model::OpsCreateInstanceRequest;

OpsCreateInstanceRequest::OpsCreateInstanceRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsCreateInstance")
{
	setMethod(HttpRequest::Method::Post);
}

OpsCreateInstanceRequest::~OpsCreateInstanceRequest()
{}

std::string OpsCreateInstanceRequest::getDataDisk4SnapshotId()const
{
	return dataDisk4SnapshotId_;
}

void OpsCreateInstanceRequest::setDataDisk4SnapshotId(const std::string& dataDisk4SnapshotId)
{
	dataDisk4SnapshotId_ = dataDisk4SnapshotId;
	setParameter("DataDisk4SnapshotId", dataDisk4SnapshotId);
}

bool OpsCreateInstanceRequest::getDataDisk4EnableAutoSnapshot()const
{
	return dataDisk4EnableAutoSnapshot_;
}

void OpsCreateInstanceRequest::setDataDisk4EnableAutoSnapshot(bool dataDisk4EnableAutoSnapshot)
{
	dataDisk4EnableAutoSnapshot_ = dataDisk4EnableAutoSnapshot;
	setParameter("DataDisk4EnableAutoSnapshot", dataDisk4EnableAutoSnapshot ? "true" : "false");
}

long OpsCreateInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsCreateInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsCreateInstanceRequest::getIzNo()const
{
	return izNo_;
}

void OpsCreateInstanceRequest::setIzNo(const std::string& izNo)
{
	izNo_ = izNo;
	setParameter("IzNo", izNo);
}

std::string OpsCreateInstanceRequest::getDataDisk3Description()const
{
	return dataDisk3Description_;
}

void OpsCreateInstanceRequest::setDataDisk3Description(const std::string& dataDisk3Description)
{
	dataDisk3Description_ = dataDisk3Description;
	setParameter("DataDisk3Description", dataDisk3Description);
}

bool OpsCreateInstanceRequest::getDataDisk3Portable()const
{
	return dataDisk3Portable_;
}

void OpsCreateInstanceRequest::setDataDisk3Portable(bool dataDisk3Portable)
{
	dataDisk3Portable_ = dataDisk3Portable;
	setParameter("DataDisk3Portable", dataDisk3Portable ? "true" : "false");
}

bool OpsCreateInstanceRequest::getDataDisk3DeleteWithInstance()const
{
	return dataDisk3DeleteWithInstance_;
}

void OpsCreateInstanceRequest::setDataDisk3DeleteWithInstance(bool dataDisk3DeleteWithInstance)
{
	dataDisk3DeleteWithInstance_ = dataDisk3DeleteWithInstance;
	setParameter("DataDisk3DeleteWithInstance", dataDisk3DeleteWithInstance ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getHostname()const
{
	return hostname_;
}

void OpsCreateInstanceRequest::setHostname(const std::string& hostname)
{
	hostname_ = hostname;
	setParameter("Hostname", hostname);
}

std::string OpsCreateInstanceRequest::getPassword()const
{
	return password_;
}

void OpsCreateInstanceRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string OpsCreateInstanceRequest::getZoneNo()const
{
	return zoneNo_;
}

void OpsCreateInstanceRequest::setZoneNo(const std::string& zoneNo)
{
	zoneNo_ = zoneNo;
	setParameter("ZoneNo", zoneNo);
}

int OpsCreateInstanceRequest::getCores()const
{
	return cores_;
}

void OpsCreateInstanceRequest::setCores(int cores)
{
	cores_ = cores;
	setParameter("Cores", std::to_string(cores));
}

std::string OpsCreateInstanceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void OpsCreateInstanceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

bool OpsCreateInstanceRequest::getDataDisk4DeleteWithInstance()const
{
	return dataDisk4DeleteWithInstance_;
}

void OpsCreateInstanceRequest::setDataDisk4DeleteWithInstance(bool dataDisk4DeleteWithInstance)
{
	dataDisk4DeleteWithInstance_ = dataDisk4DeleteWithInstance;
	setParameter("DataDisk4DeleteWithInstance", dataDisk4DeleteWithInstance ? "true" : "false");
}

bool OpsCreateInstanceRequest::getDataDisk4DeleteAutoSnapshot()const
{
	return dataDisk4DeleteAutoSnapshot_;
}

void OpsCreateInstanceRequest::setDataDisk4DeleteAutoSnapshot(bool dataDisk4DeleteAutoSnapshot)
{
	dataDisk4DeleteAutoSnapshot_ = dataDisk4DeleteAutoSnapshot;
	setParameter("DataDisk4DeleteAutoSnapshot", dataDisk4DeleteAutoSnapshot ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getDataDisk1SnapshotId()const
{
	return dataDisk1SnapshotId_;
}

void OpsCreateInstanceRequest::setDataDisk1SnapshotId(const std::string& dataDisk1SnapshotId)
{
	dataDisk1SnapshotId_ = dataDisk1SnapshotId;
	setParameter("DataDisk1SnapshotId", dataDisk1SnapshotId);
}

int OpsCreateInstanceRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void OpsCreateInstanceRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

int OpsCreateInstanceRequest::getIntranetTx()const
{
	return intranetTx_;
}

void OpsCreateInstanceRequest::setIntranetTx(int intranetTx)
{
	intranetTx_ = intranetTx;
	setParameter("IntranetTx", std::to_string(intranetTx));
}

bool OpsCreateInstanceRequest::getDataDisk3EnableAutoSnapshot()const
{
	return dataDisk3EnableAutoSnapshot_;
}

void OpsCreateInstanceRequest::setDataDisk3EnableAutoSnapshot(bool dataDisk3EnableAutoSnapshot)
{
	dataDisk3EnableAutoSnapshot_ = dataDisk3EnableAutoSnapshot;
	setParameter("DataDisk3EnableAutoSnapshot", dataDisk3EnableAutoSnapshot ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getSystemDeviceName()const
{
	return systemDeviceName_;
}

void OpsCreateInstanceRequest::setSystemDeviceName(const std::string& systemDeviceName)
{
	systemDeviceName_ = systemDeviceName;
	setParameter("SystemDeviceName", systemDeviceName);
}

std::string OpsCreateInstanceRequest::getSystemDeviceDesc()const
{
	return systemDeviceDesc_;
}

void OpsCreateInstanceRequest::setSystemDeviceDesc(const std::string& systemDeviceDesc)
{
	systemDeviceDesc_ = systemDeviceDesc;
	setParameter("SystemDeviceDesc", systemDeviceDesc);
}

std::string OpsCreateInstanceRequest::getDataDisk1Description()const
{
	return dataDisk1Description_;
}

void OpsCreateInstanceRequest::setDataDisk1Description(const std::string& dataDisk1Description)
{
	dataDisk1Description_ = dataDisk1Description;
	setParameter("DataDisk1Description", dataDisk1Description);
}

bool OpsCreateInstanceRequest::getDataDisk2DeleteWithInstance()const
{
	return dataDisk2DeleteWithInstance_;
}

void OpsCreateInstanceRequest::setDataDisk2DeleteWithInstance(bool dataDisk2DeleteWithInstance)
{
	dataDisk2DeleteWithInstance_ = dataDisk2DeleteWithInstance;
	setParameter("DataDisk2DeleteWithInstance", dataDisk2DeleteWithInstance ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getNcId()const
{
	return ncId_;
}

void OpsCreateInstanceRequest::setNcId(const std::string& ncId)
{
	ncId_ = ncId;
	setParameter("NcId", ncId);
}

std::string OpsCreateInstanceRequest::getDataDisk2Category()const
{
	return dataDisk2Category_;
}

void OpsCreateInstanceRequest::setDataDisk2Category(const std::string& dataDisk2Category)
{
	dataDisk2Category_ = dataDisk2Category;
	setParameter("DataDisk2Category", dataDisk2Category);
}

std::string OpsCreateInstanceRequest::getGroupId()const
{
	return groupId_;
}

void OpsCreateInstanceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OpsCreateInstanceRequest::getDataDisk1Name()const
{
	return dataDisk1Name_;
}

void OpsCreateInstanceRequest::setDataDisk1Name(const std::string& dataDisk1Name)
{
	dataDisk1Name_ = dataDisk1Name;
	setParameter("DataDisk1Name", dataDisk1Name);
}

int OpsCreateInstanceRequest::getSystemIopsSize()const
{
	return systemIopsSize_;
}

void OpsCreateInstanceRequest::setSystemIopsSize(int systemIopsSize)
{
	systemIopsSize_ = systemIopsSize;
	setParameter("SystemIopsSize", std::to_string(systemIopsSize));
}

std::string OpsCreateInstanceRequest::getDataDisk3SnapshotId()const
{
	return dataDisk3SnapshotId_;
}

void OpsCreateInstanceRequest::setDataDisk3SnapshotId(const std::string& dataDisk3SnapshotId)
{
	dataDisk3SnapshotId_ = dataDisk3SnapshotId;
	setParameter("DataDisk3SnapshotId", dataDisk3SnapshotId);
}

int OpsCreateInstanceRequest::getInternetTx()const
{
	return internetTx_;
}

void OpsCreateInstanceRequest::setInternetTx(int internetTx)
{
	internetTx_ = internetTx;
	setParameter("InternetTx", std::to_string(internetTx));
}

int OpsCreateInstanceRequest::getDataDisk1BpsSize()const
{
	return dataDisk1BpsSize_;
}

void OpsCreateInstanceRequest::setDataDisk1BpsSize(int dataDisk1BpsSize)
{
	dataDisk1BpsSize_ = dataDisk1BpsSize;
	setParameter("DataDisk1BpsSize", std::to_string(dataDisk1BpsSize));
}

int OpsCreateInstanceRequest::getDataDisk3BpsSize()const
{
	return dataDisk3BpsSize_;
}

void OpsCreateInstanceRequest::setDataDisk3BpsSize(int dataDisk3BpsSize)
{
	dataDisk3BpsSize_ = dataDisk3BpsSize;
	setParameter("DataDisk3BpsSize", std::to_string(dataDisk3BpsSize));
}

bool OpsCreateInstanceRequest::getDataDisk2EnableAutoSnapshot()const
{
	return dataDisk2EnableAutoSnapshot_;
}

void OpsCreateInstanceRequest::setDataDisk2EnableAutoSnapshot(bool dataDisk2EnableAutoSnapshot)
{
	dataDisk2EnableAutoSnapshot_ = dataDisk2EnableAutoSnapshot;
	setParameter("DataDisk2EnableAutoSnapshot", dataDisk2EnableAutoSnapshot ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void OpsCreateInstanceRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setParameter("PrivateIpAddress", privateIpAddress);
}

int OpsCreateInstanceRequest::getDataDisk2IopsSize()const
{
	return dataDisk2IopsSize_;
}

void OpsCreateInstanceRequest::setDataDisk2IopsSize(int dataDisk2IopsSize)
{
	dataDisk2IopsSize_ = dataDisk2IopsSize;
	setParameter("DataDisk2IopsSize", std::to_string(dataDisk2IopsSize));
}

std::string OpsCreateInstanceRequest::getDataDisk4Category()const
{
	return dataDisk4Category_;
}

void OpsCreateInstanceRequest::setDataDisk4Category(const std::string& dataDisk4Category)
{
	dataDisk4Category_ = dataDisk4Category;
	setParameter("DataDisk4Category", dataDisk4Category);
}

int OpsCreateInstanceRequest::getDataDisk4IopsSize()const
{
	return dataDisk4IopsSize_;
}

void OpsCreateInstanceRequest::setDataDisk4IopsSize(int dataDisk4IopsSize)
{
	dataDisk4IopsSize_ = dataDisk4IopsSize;
	setParameter("DataDisk4IopsSize", std::to_string(dataDisk4IopsSize));
}

bool OpsCreateInstanceRequest::getDataDisk1Portable()const
{
	return dataDisk1Portable_;
}

void OpsCreateInstanceRequest::setDataDisk1Portable(bool dataDisk1Portable)
{
	dataDisk1Portable_ = dataDisk1Portable;
	setParameter("DataDisk1Portable", dataDisk1Portable ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getDataDisk2MountPoint()const
{
	return dataDisk2MountPoint_;
}

void OpsCreateInstanceRequest::setDataDisk2MountPoint(const std::string& dataDisk2MountPoint)
{
	dataDisk2MountPoint_ = dataDisk2MountPoint;
	setParameter("DataDisk2MountPoint", dataDisk2MountPoint);
}

int OpsCreateInstanceRequest::getDataDisk1Size()const
{
	return dataDisk1Size_;
}

void OpsCreateInstanceRequest::setDataDisk1Size(int dataDisk1Size)
{
	dataDisk1Size_ = dataDisk1Size;
	setParameter("DataDisk1Size", std::to_string(dataDisk1Size));
}

std::string OpsCreateInstanceRequest::getVswId()const
{
	return vswId_;
}

void OpsCreateInstanceRequest::setVswId(const std::string& vswId)
{
	vswId_ = vswId;
	setParameter("VswId", vswId);
}

bool OpsCreateInstanceRequest::getDataDisk2DeleteAutoSnapshot()const
{
	return dataDisk2DeleteAutoSnapshot_;
}

void OpsCreateInstanceRequest::setDataDisk2DeleteAutoSnapshot(bool dataDisk2DeleteAutoSnapshot)
{
	dataDisk2DeleteAutoSnapshot_ = dataDisk2DeleteAutoSnapshot;
	setParameter("DataDisk2DeleteAutoSnapshot", dataDisk2DeleteAutoSnapshot ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getImageId()const
{
	return imageId_;
}

void OpsCreateInstanceRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

bool OpsCreateInstanceRequest::getDataDisk1EnableAutoSnapshot()const
{
	return dataDisk1EnableAutoSnapshot_;
}

void OpsCreateInstanceRequest::setDataDisk1EnableAutoSnapshot(bool dataDisk1EnableAutoSnapshot)
{
	dataDisk1EnableAutoSnapshot_ = dataDisk1EnableAutoSnapshot;
	setParameter("DataDisk1EnableAutoSnapshot", dataDisk1EnableAutoSnapshot ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getVpcPrivateIp()const
{
	return vpcPrivateIp_;
}

void OpsCreateInstanceRequest::setVpcPrivateIp(const std::string& vpcPrivateIp)
{
	vpcPrivateIp_ = vpcPrivateIp;
	setParameter("VpcPrivateIp", vpcPrivateIp);
}

std::string OpsCreateInstanceRequest::getVlanId()const
{
	return vlanId_;
}

void OpsCreateInstanceRequest::setVlanId(const std::string& vlanId)
{
	vlanId_ = vlanId;
	setParameter("VlanId", vlanId);
}

std::string OpsCreateInstanceRequest::getDataDisk4Name()const
{
	return dataDisk4Name_;
}

void OpsCreateInstanceRequest::setDataDisk4Name(const std::string& dataDisk4Name)
{
	dataDisk4Name_ = dataDisk4Name;
	setParameter("DataDisk4Name", dataDisk4Name);
}

bool OpsCreateInstanceRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void OpsCreateInstanceRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getDescription()const
{
	return description_;
}

void OpsCreateInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string OpsCreateInstanceRequest::getDataDisk2SnapshotId()const
{
	return dataDisk2SnapshotId_;
}

void OpsCreateInstanceRequest::setDataDisk2SnapshotId(const std::string& dataDisk2SnapshotId)
{
	dataDisk2SnapshotId_ = dataDisk2SnapshotId;
	setParameter("DataDisk2SnapshotId", dataDisk2SnapshotId);
}

std::string OpsCreateInstanceRequest::getDataDisk4MountPoint()const
{
	return dataDisk4MountPoint_;
}

void OpsCreateInstanceRequest::setDataDisk4MountPoint(const std::string& dataDisk4MountPoint)
{
	dataDisk4MountPoint_ = dataDisk4MountPoint;
	setParameter("DataDisk4MountPoint", dataDisk4MountPoint);
}

bool OpsCreateInstanceRequest::getDataDisk4Portable()const
{
	return dataDisk4Portable_;
}

void OpsCreateInstanceRequest::setDataDisk4Portable(bool dataDisk4Portable)
{
	dataDisk4Portable_ = dataDisk4Portable;
	setParameter("DataDisk4Portable", dataDisk4Portable ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsCreateInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int OpsCreateInstanceRequest::getDataDisk2Size()const
{
	return dataDisk2Size_;
}

void OpsCreateInstanceRequest::setDataDisk2Size(int dataDisk2Size)
{
	dataDisk2Size_ = dataDisk2Size;
	setParameter("DataDisk2Size", std::to_string(dataDisk2Size));
}

int OpsCreateInstanceRequest::getDataDisk4Size()const
{
	return dataDisk4Size_;
}

void OpsCreateInstanceRequest::setDataDisk4Size(int dataDisk4Size)
{
	dataDisk4Size_ = dataDisk4Size;
	setParameter("DataDisk4Size", std::to_string(dataDisk4Size));
}

int OpsCreateInstanceRequest::getMem()const
{
	return mem_;
}

void OpsCreateInstanceRequest::setMem(int mem)
{
	mem_ = mem;
	setParameter("Mem", std::to_string(mem));
}

int OpsCreateInstanceRequest::getSystemBpsSize()const
{
	return systemBpsSize_;
}

void OpsCreateInstanceRequest::setSystemBpsSize(int systemBpsSize)
{
	systemBpsSize_ = systemBpsSize;
	setParameter("SystemBpsSize", std::to_string(systemBpsSize));
}

std::string OpsCreateInstanceRequest::getDataDisk2Description()const
{
	return dataDisk2Description_;
}

void OpsCreateInstanceRequest::setDataDisk2Description(const std::string& dataDisk2Description)
{
	dataDisk2Description_ = dataDisk2Description;
	setParameter("DataDisk2Description", dataDisk2Description);
}

bool OpsCreateInstanceRequest::getDataDisk1DeleteWithInstance()const
{
	return dataDisk1DeleteWithInstance_;
}

void OpsCreateInstanceRequest::setDataDisk1DeleteWithInstance(bool dataDisk1DeleteWithInstance)
{
	dataDisk1DeleteWithInstance_ = dataDisk1DeleteWithInstance;
	setParameter("DataDisk1DeleteWithInstance", dataDisk1DeleteWithInstance ? "true" : "false");
}

bool OpsCreateInstanceRequest::getDataDisk1DeleteAutoSnapshot()const
{
	return dataDisk1DeleteAutoSnapshot_;
}

void OpsCreateInstanceRequest::setDataDisk1DeleteAutoSnapshot(bool dataDisk1DeleteAutoSnapshot)
{
	dataDisk1DeleteAutoSnapshot_ = dataDisk1DeleteAutoSnapshot;
	setParameter("DataDisk1DeleteAutoSnapshot", dataDisk1DeleteAutoSnapshot ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getDataDisk2Name()const
{
	return dataDisk2Name_;
}

void OpsCreateInstanceRequest::setDataDisk2Name(const std::string& dataDisk2Name)
{
	dataDisk2Name_ = dataDisk2Name;
	setParameter("DataDisk2Name", dataDisk2Name);
}

std::string OpsCreateInstanceRequest::getDataDisk3Name()const
{
	return dataDisk3Name_;
}

void OpsCreateInstanceRequest::setDataDisk3Name(const std::string& dataDisk3Name)
{
	dataDisk3Name_ = dataDisk3Name;
	setParameter("DataDisk3Name", dataDisk3Name);
}

std::string OpsCreateInstanceRequest::getDataDisk1MountPoint()const
{
	return dataDisk1MountPoint_;
}

void OpsCreateInstanceRequest::setDataDisk1MountPoint(const std::string& dataDisk1MountPoint)
{
	dataDisk1MountPoint_ = dataDisk1MountPoint;
	setParameter("DataDisk1MountPoint", dataDisk1MountPoint);
}

int OpsCreateInstanceRequest::getIntranetRx()const
{
	return intranetRx_;
}

void OpsCreateInstanceRequest::setIntranetRx(int intranetRx)
{
	intranetRx_ = intranetRx;
	setParameter("IntranetRx", std::to_string(intranetRx));
}

int OpsCreateInstanceRequest::getDataDisk3Size()const
{
	return dataDisk3Size_;
}

void OpsCreateInstanceRequest::setDataDisk3Size(int dataDisk3Size)
{
	dataDisk3Size_ = dataDisk3Size;
	setParameter("DataDisk3Size", std::to_string(dataDisk3Size));
}

bool OpsCreateInstanceRequest::getComputeIntensive()const
{
	return computeIntensive_;
}

void OpsCreateInstanceRequest::setComputeIntensive(bool computeIntensive)
{
	computeIntensive_ = computeIntensive;
	setParameter("ComputeIntensive", computeIntensive ? "true" : "false");
}

bool OpsCreateInstanceRequest::getEnableVmOsConfig()const
{
	return enableVmOsConfig_;
}

void OpsCreateInstanceRequest::setEnableVmOsConfig(bool enableVmOsConfig)
{
	enableVmOsConfig_ = enableVmOsConfig;
	setParameter("EnableVmOsConfig", enableVmOsConfig ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getDataDisk1Category()const
{
	return dataDisk1Category_;
}

void OpsCreateInstanceRequest::setDataDisk1Category(const std::string& dataDisk1Category)
{
	dataDisk1Category_ = dataDisk1Category;
	setParameter("DataDisk1Category", dataDisk1Category);
}

std::string OpsCreateInstanceRequest::getDataDisk3MountPoint()const
{
	return dataDisk3MountPoint_;
}

void OpsCreateInstanceRequest::setDataDisk3MountPoint(const std::string& dataDisk3MountPoint)
{
	dataDisk3MountPoint_ = dataDisk3MountPoint;
	setParameter("DataDisk3MountPoint", dataDisk3MountPoint);
}

std::string OpsCreateInstanceRequest::getDataDisk4Description()const
{
	return dataDisk4Description_;
}

void OpsCreateInstanceRequest::setDataDisk4Description(const std::string& dataDisk4Description)
{
	dataDisk4Description_ = dataDisk4Description;
	setParameter("DataDisk4Description", dataDisk4Description);
}

int OpsCreateInstanceRequest::getDataDisk2BpsSize()const
{
	return dataDisk2BpsSize_;
}

void OpsCreateInstanceRequest::setDataDisk2BpsSize(int dataDisk2BpsSize)
{
	dataDisk2BpsSize_ = dataDisk2BpsSize;
	setParameter("DataDisk2BpsSize", std::to_string(dataDisk2BpsSize));
}

int OpsCreateInstanceRequest::getInternetRx()const
{
	return internetRx_;
}

void OpsCreateInstanceRequest::setInternetRx(int internetRx)
{
	internetRx_ = internetRx;
	setParameter("InternetRx", std::to_string(internetRx));
}

int OpsCreateInstanceRequest::getDataDisk4BpsSize()const
{
	return dataDisk4BpsSize_;
}

void OpsCreateInstanceRequest::setDataDisk4BpsSize(int dataDisk4BpsSize)
{
	dataDisk4BpsSize_ = dataDisk4BpsSize;
	setParameter("DataDisk4BpsSize", std::to_string(dataDisk4BpsSize));
}

std::string OpsCreateInstanceRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsCreateInstanceRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsCreateInstanceRequest::getEcsInstanceName()const
{
	return ecsInstanceName_;
}

void OpsCreateInstanceRequest::setEcsInstanceName(const std::string& ecsInstanceName)
{
	ecsInstanceName_ = ecsInstanceName;
	setParameter("EcsInstanceName", ecsInstanceName);
}

bool OpsCreateInstanceRequest::getAsync()const
{
	return async_;
}

void OpsCreateInstanceRequest::setAsync(bool async)
{
	async_ = async;
	setParameter("Async", async ? "true" : "false");
}

int OpsCreateInstanceRequest::getDataDisk1IopsSize()const
{
	return dataDisk1IopsSize_;
}

void OpsCreateInstanceRequest::setDataDisk1IopsSize(int dataDisk1IopsSize)
{
	dataDisk1IopsSize_ = dataDisk1IopsSize;
	setParameter("DataDisk1IopsSize", std::to_string(dataDisk1IopsSize));
}

bool OpsCreateInstanceRequest::getDataDisk3DeleteAutoSnapshot()const
{
	return dataDisk3DeleteAutoSnapshot_;
}

void OpsCreateInstanceRequest::setDataDisk3DeleteAutoSnapshot(bool dataDisk3DeleteAutoSnapshot)
{
	dataDisk3DeleteAutoSnapshot_ = dataDisk3DeleteAutoSnapshot;
	setParameter("DataDisk3DeleteAutoSnapshot", dataDisk3DeleteAutoSnapshot ? "true" : "false");
}

bool OpsCreateInstanceRequest::getDataDisk2Portable()const
{
	return dataDisk2Portable_;
}

void OpsCreateInstanceRequest::setDataDisk2Portable(bool dataDisk2Portable)
{
	dataDisk2Portable_ = dataDisk2Portable;
	setParameter("DataDisk2Portable", dataDisk2Portable ? "true" : "false");
}

std::string OpsCreateInstanceRequest::getDataDisk3Category()const
{
	return dataDisk3Category_;
}

void OpsCreateInstanceRequest::setDataDisk3Category(const std::string& dataDisk3Category)
{
	dataDisk3Category_ = dataDisk3Category;
	setParameter("DataDisk3Category", dataDisk3Category);
}

int OpsCreateInstanceRequest::getDataDisk3IopsSize()const
{
	return dataDisk3IopsSize_;
}

void OpsCreateInstanceRequest::setDataDisk3IopsSize(int dataDisk3IopsSize)
{
	dataDisk3IopsSize_ = dataDisk3IopsSize;
	setParameter("DataDisk3IopsSize", std::to_string(dataDisk3IopsSize));
}

