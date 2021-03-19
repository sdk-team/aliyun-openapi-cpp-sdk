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

#include <alibabacloud/ecsops/model/OpsDescribeMountedSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsDescribeMountedSnapshotsResult::OpsDescribeMountedSnapshotsResult() :
	ServiceResult()
{}

OpsDescribeMountedSnapshotsResult::OpsDescribeMountedSnapshotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsDescribeMountedSnapshotsResult::~OpsDescribeMountedSnapshotsResult()
{}

void OpsDescribeMountedSnapshotsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMountedSnapshotsNode = value["MountedSnapshots"]["Snapshot"];
	for (auto valueMountedSnapshotsSnapshot : allMountedSnapshotsNode)
	{
		Snapshot mountedSnapshotsObject;
		if(!valueMountedSnapshotsSnapshot["ResourceOwnerId"].isNull())
			mountedSnapshotsObject.resourceOwnerId = valueMountedSnapshotsSnapshot["ResourceOwnerId"].asString();
		if(!valueMountedSnapshotsSnapshot["SnapshotId"].isNull())
			mountedSnapshotsObject.snapshotId = valueMountedSnapshotsSnapshot["SnapshotId"].asString();
		if(!valueMountedSnapshotsSnapshot["LastAttachedTime"].isNull())
			mountedSnapshotsObject.lastAttachedTime = valueMountedSnapshotsSnapshot["LastAttachedTime"].asString();
		if(!valueMountedSnapshotsSnapshot["EcsInstanceId"].isNull())
			mountedSnapshotsObject.ecsInstanceId = valueMountedSnapshotsSnapshot["EcsInstanceId"].asString();
		if(!valueMountedSnapshotsSnapshot["Status"].isNull())
			mountedSnapshotsObject.status = valueMountedSnapshotsSnapshot["Status"].asString();
		if(!valueMountedSnapshotsSnapshot["MountPoint"].isNull())
			mountedSnapshotsObject.mountPoint = valueMountedSnapshotsSnapshot["MountPoint"].asString();
		mountedSnapshots_.push_back(mountedSnapshotsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int OpsDescribeMountedSnapshotsResult::getTotalCount()const
{
	return totalCount_;
}

int OpsDescribeMountedSnapshotsResult::getPageSize()const
{
	return pageSize_;
}

int OpsDescribeMountedSnapshotsResult::getPageNo()const
{
	return pageNo_;
}

std::vector<OpsDescribeMountedSnapshotsResult::Snapshot> OpsDescribeMountedSnapshotsResult::getMountedSnapshots()const
{
	return mountedSnapshots_;
}

