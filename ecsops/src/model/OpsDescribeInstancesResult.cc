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

#include <alibabacloud/ecsops/model/OpsDescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsDescribeInstancesResult::OpsDescribeInstancesResult() :
	ServiceResult()
{}

OpsDescribeInstancesResult::OpsDescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsDescribeInstancesResult::~OpsDescribeInstancesResult()
{}

void OpsDescribeInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["RegionNo"].isNull())
			instancesObject.regionNo = valueInstancesInstance["RegionNo"].asString();
		if(!valueInstancesInstance["IzNo"].isNull())
			instancesObject.izNo = valueInstancesInstance["IzNo"].asString();
		if(!valueInstancesInstance["ZoneNo"].isNull())
			instancesObject.zoneNo = valueInstancesInstance["ZoneNo"].asString();
		if(!valueInstancesInstance["EcsInstanceId"].isNull())
			instancesObject.ecsInstanceId = valueInstancesInstance["EcsInstanceId"].asString();
		if(!valueInstancesInstance["AliUid"].isNull())
			instancesObject.aliUid = valueInstancesInstance["AliUid"].asString();
		if(!valueInstancesInstance["Bid"].isNull())
			instancesObject.bid = valueInstancesInstance["Bid"].asString();
		if(!valueInstancesInstance["Hostname"].isNull())
			instancesObject.hostname = valueInstancesInstance["Hostname"].asString();
		if(!valueInstancesInstance["EcsInstanceName"].isNull())
			instancesObject.ecsInstanceName = valueInstancesInstance["EcsInstanceName"].asString();
		if(!valueInstancesInstance["Description"].isNull())
			instancesObject.description = valueInstancesInstance["Description"].asString();
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["BusinessStatus"].isNull())
			instancesObject.businessStatus = valueInstancesInstance["BusinessStatus"].asString();
		if(!valueInstancesInstance["HouyiStatus"].isNull())
			instancesObject.houyiStatus = valueInstancesInstance["HouyiStatus"].asString();
		if(!valueInstancesInstance["PrivateIpAddress"].isNull())
			instancesObject.privateIpAddress = valueInstancesInstance["PrivateIpAddress"].asString();
		if(!valueInstancesInstance["PublicIpAddress"].isNull())
			instancesObject.publicIpAddress = valueInstancesInstance["PublicIpAddress"].asString();
		if(!valueInstancesInstance["ImageId"].isNull())
			instancesObject.imageId = valueInstancesInstance["ImageId"].asString();
		if(!valueInstancesInstance["ImageName"].isNull())
			instancesObject.imageName = valueInstancesInstance["ImageName"].asString();
		if(!valueInstancesInstance["Cores"].isNull())
			instancesObject.cores = std::stoi(valueInstancesInstance["Cores"].asString());
		if(!valueInstancesInstance["Mem"].isNull())
			instancesObject.mem = std::stoi(valueInstancesInstance["Mem"].asString());
		if(!valueInstancesInstance["Disk"].isNull())
			instancesObject.disk = std::stoi(valueInstancesInstance["Disk"].asString());
		if(!valueInstancesInstance["IntranetRx"].isNull())
			instancesObject.intranetRx = std::stoi(valueInstancesInstance["IntranetRx"].asString());
		if(!valueInstancesInstance["IntranetTx"].isNull())
			instancesObject.intranetTx = std::stoi(valueInstancesInstance["IntranetTx"].asString());
		if(!valueInstancesInstance["InternetRx"].isNull())
			instancesObject.internetRx = std::stoi(valueInstancesInstance["InternetRx"].asString());
		if(!valueInstancesInstance["InternetTx"].isNull())
			instancesObject.internetTx = std::stoi(valueInstancesInstance["InternetTx"].asString());
		if(!valueInstancesInstance["SecurityControl"].isNull())
			instancesObject.securityControl = valueInstancesInstance["SecurityControl"].asString();
		if(!valueInstancesInstance["SystemDeviceCategory"].isNull())
			instancesObject.systemDeviceCategory = valueInstancesInstance["SystemDeviceCategory"].asString();
		if(!valueInstancesInstance["CreatedTime"].isNull())
			instancesObject.createdTime = valueInstancesInstance["CreatedTime"].asString();
		if(!valueInstancesInstance["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesInstance["VpcId"].asString();
		if(!valueInstancesInstance["VswId"].isNull())
			instancesObject.vswId = valueInstancesInstance["VswId"].asString();
		if(!valueInstancesInstance["NatIp"].isNull())
			instancesObject.natIp = valueInstancesInstance["NatIp"].asString();
		if(!valueInstancesInstance["Eip"].isNull())
			instancesObject.eip = valueInstancesInstance["Eip"].asString();
		if(!valueInstancesInstance["EipId"].isNull())
			instancesObject.eipId = valueInstancesInstance["EipId"].asString();
		if(!valueInstancesInstance["EipBandwidth"].isNull())
			instancesObject.eipBandwidth = std::stoi(valueInstancesInstance["EipBandwidth"].asString());
		if(!valueInstancesInstance["NetWorkType"].isNull())
			instancesObject.netWorkType = valueInstancesInstance["NetWorkType"].asString();
		if(!valueInstancesInstance["NetworkValidation"].isNull())
			instancesObject.networkValidation = valueInstancesInstance["NetworkValidation"].asString() == "true";
		if(!valueInstancesInstance["IoOptimized"].isNull())
			instancesObject.ioOptimized = valueInstancesInstance["IoOptimized"].asString() == "true";
		if(!valueInstancesInstance["MountAvailable"].isNull())
			instancesObject.mountAvailable = valueInstancesInstance["MountAvailable"].asString() == "true";
		if(!valueInstancesInstance["VlanId"].isNull())
			instancesObject.vlanId = valueInstancesInstance["VlanId"].asString();
		if(!valueInstancesInstance["NcId"].isNull())
			instancesObject.ncId = valueInstancesInstance["NcId"].asString();
		if(!valueInstancesInstance["NcIp"].isNull())
			instancesObject.ncIp = valueInstancesInstance["NcIp"].asString();
		if(!valueInstancesInstance["RackId"].isNull())
			instancesObject.rackId = valueInstancesInstance["RackId"].asString();
		if(!valueInstancesInstance["VncHost"].isNull())
			instancesObject.vncHost = valueInstancesInstance["VncHost"].asString();
		if(!valueInstancesInstance["VncPort"].isNull())
			instancesObject.vncPort = std::stoi(valueInstancesInstance["VncPort"].asString());
		if(!valueInstancesInstance["VncPassword"].isNull())
			instancesObject.vncPassword = valueInstancesInstance["VncPassword"].asString();
		if(!valueInstancesInstance["Platform"].isNull())
			instancesObject.platform = valueInstancesInstance["Platform"].asString();
		auto allDisksNode = valueInstancesInstance["Disks"]["Disk"];
		for (auto valueInstancesInstanceDisksDisk : allDisksNode)
		{
			Instance::Disk disksObject;
			if(!valueInstancesInstanceDisksDisk["Id"].isNull())
				disksObject.id = std::stol(valueInstancesInstanceDisksDisk["Id"].asString());
			if(!valueInstancesInstanceDisksDisk["AliUid"].isNull())
				disksObject.aliUid = std::stol(valueInstancesInstanceDisksDisk["AliUid"].asString());
			if(!valueInstancesInstanceDisksDisk["Bid"].isNull())
				disksObject.bid = valueInstancesInstanceDisksDisk["Bid"].asString();
			if(!valueInstancesInstanceDisksDisk["DiskId"].isNull())
				disksObject.diskId = valueInstancesInstanceDisksDisk["DiskId"].asString();
			if(!valueInstancesInstanceDisksDisk["HouyiDiskId"].isNull())
				disksObject.houyiDiskId = valueInstancesInstanceDisksDisk["HouyiDiskId"].asString();
			if(!valueInstancesInstanceDisksDisk["DiskType"].isNull())
				disksObject.diskType = valueInstancesInstanceDisksDisk["DiskType"].asString();
			if(!valueInstancesInstanceDisksDisk["DiskCategory"].isNull())
				disksObject.diskCategory = valueInstancesInstanceDisksDisk["DiskCategory"].asString();
			if(!valueInstancesInstanceDisksDisk["Status"].isNull())
				disksObject.status = valueInstancesInstanceDisksDisk["Status"].asString();
			if(!valueInstancesInstanceDisksDisk["RegionNo"].isNull())
				disksObject.regionNo = valueInstancesInstanceDisksDisk["RegionNo"].asString();
			if(!valueInstancesInstanceDisksDisk["IzNo"].isNull())
				disksObject.izNo = valueInstancesInstanceDisksDisk["IzNo"].asString();
			if(!valueInstancesInstanceDisksDisk["ZoneNo"].isNull())
				disksObject.zoneNo = valueInstancesInstanceDisksDisk["ZoneNo"].asString();
			if(!valueInstancesInstanceDisksDisk["DiskName"].isNull())
				disksObject.diskName = valueInstancesInstanceDisksDisk["DiskName"].asString();
			if(!valueInstancesInstanceDisksDisk["DiskDesc"].isNull())
				disksObject.diskDesc = valueInstancesInstanceDisksDisk["DiskDesc"].asString();
			if(!valueInstancesInstanceDisksDisk["DiskSize"].isNull())
				disksObject.diskSize = std::stoi(valueInstancesInstanceDisksDisk["DiskSize"].asString());
			if(!valueInstancesInstanceDisksDisk["Active"].isNull())
				disksObject.active = valueInstancesInstanceDisksDisk["Active"].asString() == "true";
			if(!valueInstancesInstanceDisksDisk["Bootable"].isNull())
				disksObject.bootable = valueInstancesInstanceDisksDisk["Bootable"].asString() == "true";
			if(!valueInstancesInstanceDisksDisk["Portable"].isNull())
				disksObject.portable = valueInstancesInstanceDisksDisk["Portable"].asString() == "true";
			if(!valueInstancesInstanceDisksDisk["ImageId"].isNull())
				disksObject.imageId = valueInstancesInstanceDisksDisk["ImageId"].asString();
			if(!valueInstancesInstanceDisksDisk["SnapshotId"].isNull())
				disksObject.snapshotId = valueInstancesInstanceDisksDisk["SnapshotId"].asString();
			if(!valueInstancesInstanceDisksDisk["EcsInstanceId"].isNull())
				disksObject.ecsInstanceId = valueInstancesInstanceDisksDisk["EcsInstanceId"].asString();
			if(!valueInstancesInstanceDisksDisk["MountPoint"].isNull())
				disksObject.mountPoint = valueInstancesInstanceDisksDisk["MountPoint"].asString();
			if(!valueInstancesInstanceDisksDisk["DeleteWithInstance"].isNull())
				disksObject.deleteWithInstance = valueInstancesInstanceDisksDisk["DeleteWithInstance"].asString() == "true";
			if(!valueInstancesInstanceDisksDisk["DeleteAutoSnapshot"].isNull())
				disksObject.deleteAutoSnapshot = valueInstancesInstanceDisksDisk["DeleteAutoSnapshot"].asString() == "true";
			if(!valueInstancesInstanceDisksDisk["EnableAutoSnapshot"].isNull())
				disksObject.enableAutoSnapshot = valueInstancesInstanceDisksDisk["EnableAutoSnapshot"].asString() == "true";
			if(!valueInstancesInstanceDisksDisk["BusinessStatus"].isNull())
				disksObject.businessStatus = valueInstancesInstanceDisksDisk["BusinessStatus"].asString();
			if(!valueInstancesInstanceDisksDisk["IopsSize"].isNull())
				disksObject.iopsSize = std::stoi(valueInstancesInstanceDisksDisk["IopsSize"].asString());
			if(!valueInstancesInstanceDisksDisk["ProductCode"].isNull())
				disksObject.productCode = valueInstancesInstanceDisksDisk["ProductCode"].asString();
			instancesObject.disks.push_back(disksObject);
		}
		auto allGroupIds = value["GroupIds"]["GroupId"];
		for (auto value : allGroupIds)
			instancesObject.groupIds.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<OpsDescribeInstancesResult::Instance> OpsDescribeInstancesResult::getInstances()const
{
	return instances_;
}

int OpsDescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int OpsDescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

int OpsDescribeInstancesResult::getPageNo()const
{
	return pageNo_;
}

