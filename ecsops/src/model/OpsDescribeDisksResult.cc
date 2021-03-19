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

#include <alibabacloud/ecsops/model/OpsDescribeDisksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsDescribeDisksResult::OpsDescribeDisksResult() :
	ServiceResult()
{}

OpsDescribeDisksResult::OpsDescribeDisksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsDescribeDisksResult::~OpsDescribeDisksResult()
{}

void OpsDescribeDisksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDisksNode = value["Disks"]["Disk"];
	for (auto valueDisksDisk : allDisksNode)
	{
		Disk disksObject;
		if(!valueDisksDisk["Id"].isNull())
			disksObject.id = std::stol(valueDisksDisk["Id"].asString());
		if(!valueDisksDisk["AliUid"].isNull())
			disksObject.aliUid = std::stol(valueDisksDisk["AliUid"].asString());
		if(!valueDisksDisk["Bid"].isNull())
			disksObject.bid = valueDisksDisk["Bid"].asString();
		if(!valueDisksDisk["DiskId"].isNull())
			disksObject.diskId = valueDisksDisk["DiskId"].asString();
		if(!valueDisksDisk["HouyiDiskId"].isNull())
			disksObject.houyiDiskId = valueDisksDisk["HouyiDiskId"].asString();
		if(!valueDisksDisk["DiskType"].isNull())
			disksObject.diskType = valueDisksDisk["DiskType"].asString();
		if(!valueDisksDisk["DiskCategory"].isNull())
			disksObject.diskCategory = valueDisksDisk["DiskCategory"].asString();
		if(!valueDisksDisk["Status"].isNull())
			disksObject.status = valueDisksDisk["Status"].asString();
		if(!valueDisksDisk["RegionNo"].isNull())
			disksObject.regionNo = valueDisksDisk["RegionNo"].asString();
		if(!valueDisksDisk["IzNo"].isNull())
			disksObject.izNo = valueDisksDisk["IzNo"].asString();
		if(!valueDisksDisk["ZoneNo"].isNull())
			disksObject.zoneNo = valueDisksDisk["ZoneNo"].asString();
		if(!valueDisksDisk["DiskName"].isNull())
			disksObject.diskName = valueDisksDisk["DiskName"].asString();
		if(!valueDisksDisk["DiskDesc"].isNull())
			disksObject.diskDesc = valueDisksDisk["DiskDesc"].asString();
		if(!valueDisksDisk["DiskSize"].isNull())
			disksObject.diskSize = std::stoi(valueDisksDisk["DiskSize"].asString());
		if(!valueDisksDisk["Active"].isNull())
			disksObject.active = valueDisksDisk["Active"].asString() == "true";
		if(!valueDisksDisk["Bootable"].isNull())
			disksObject.bootable = valueDisksDisk["Bootable"].asString() == "true";
		if(!valueDisksDisk["Portable"].isNull())
			disksObject.portable = valueDisksDisk["Portable"].asString() == "true";
		if(!valueDisksDisk["ImageId"].isNull())
			disksObject.imageId = valueDisksDisk["ImageId"].asString();
		if(!valueDisksDisk["SnapshotId"].isNull())
			disksObject.snapshotId = valueDisksDisk["SnapshotId"].asString();
		if(!valueDisksDisk["EcsInstanceId"].isNull())
			disksObject.ecsInstanceId = valueDisksDisk["EcsInstanceId"].asString();
		if(!valueDisksDisk["MountPoint"].isNull())
			disksObject.mountPoint = valueDisksDisk["MountPoint"].asString();
		if(!valueDisksDisk["DeleteWithInstance"].isNull())
			disksObject.deleteWithInstance = valueDisksDisk["DeleteWithInstance"].asString() == "true";
		if(!valueDisksDisk["DeleteAutoSnapshot"].isNull())
			disksObject.deleteAutoSnapshot = valueDisksDisk["DeleteAutoSnapshot"].asString() == "true";
		if(!valueDisksDisk["EnableAutoSnapshot"].isNull())
			disksObject.enableAutoSnapshot = valueDisksDisk["EnableAutoSnapshot"].asString() == "true";
		if(!valueDisksDisk["BusinessStatus"].isNull())
			disksObject.businessStatus = valueDisksDisk["BusinessStatus"].asString();
		if(!valueDisksDisk["CreatedTime"].isNull())
			disksObject.createdTime = valueDisksDisk["CreatedTime"].asString();
		if(!valueDisksDisk["ModifiedTime"].isNull())
			disksObject.modifiedTime = valueDisksDisk["ModifiedTime"].asString();
		if(!valueDisksDisk["LastAttachedTime"].isNull())
			disksObject.lastAttachedTime = valueDisksDisk["LastAttachedTime"].asString();
		if(!valueDisksDisk["LastDetachedTime"].isNull())
			disksObject.lastDetachedTime = valueDisksDisk["LastDetachedTime"].asString();
		if(!valueDisksDisk["IopsSize"].isNull())
			disksObject.iopsSize = std::stoi(valueDisksDisk["IopsSize"].asString());
		if(!valueDisksDisk["ProductCode"].isNull())
			disksObject.productCode = valueDisksDisk["ProductCode"].asString();
		disks_.push_back(disksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int OpsDescribeDisksResult::getTotalCount()const
{
	return totalCount_;
}

int OpsDescribeDisksResult::getPageSize()const
{
	return pageSize_;
}

std::vector<OpsDescribeDisksResult::Disk> OpsDescribeDisksResult::getDisks()const
{
	return disks_;
}

int OpsDescribeDisksResult::getPageNo()const
{
	return pageNo_;
}

