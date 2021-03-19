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

#include <alibabacloud/ecsops/model/OpsDescribeSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsDescribeSnapshotsResult::OpsDescribeSnapshotsResult() :
	ServiceResult()
{}

OpsDescribeSnapshotsResult::OpsDescribeSnapshotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsDescribeSnapshotsResult::~OpsDescribeSnapshotsResult()
{}

void OpsDescribeSnapshotsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotsNode = value["Snapshots"]["Snapshot"];
	for (auto valueSnapshotsSnapshot : allSnapshotsNode)
	{
		Snapshot snapshotsObject;
		if(!valueSnapshotsSnapshot["AliUid"].isNull())
			snapshotsObject.aliUid = std::stol(valueSnapshotsSnapshot["AliUid"].asString());
		if(!valueSnapshotsSnapshot["Bid"].isNull())
			snapshotsObject.bid = valueSnapshotsSnapshot["Bid"].asString();
		if(!valueSnapshotsSnapshot["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsSnapshot["SnapshotName"].asString();
		if(!valueSnapshotsSnapshot["SnapshotId"].isNull())
			snapshotsObject.snapshotId = valueSnapshotsSnapshot["SnapshotId"].asString();
		if(!valueSnapshotsSnapshot["HouyiSnapshotId"].isNull())
			snapshotsObject.houyiSnapshotId = valueSnapshotsSnapshot["HouyiSnapshotId"].asString();
		if(!valueSnapshotsSnapshot["CreatedTime"].isNull())
			snapshotsObject.createdTime = valueSnapshotsSnapshot["CreatedTime"].asString();
		if(!valueSnapshotsSnapshot["ModifiedTime"].isNull())
			snapshotsObject.modifiedTime = valueSnapshotsSnapshot["ModifiedTime"].asString();
		if(!valueSnapshotsSnapshot["SnapshotType"].isNull())
			snapshotsObject.snapshotType = valueSnapshotsSnapshot["SnapshotType"].asString();
		if(!valueSnapshotsSnapshot["SnapshotSize"].isNull())
			snapshotsObject.snapshotSize = std::stoi(valueSnapshotsSnapshot["SnapshotSize"].asString());
		if(!valueSnapshotsSnapshot["Progress"].isNull())
			snapshotsObject.progress = valueSnapshotsSnapshot["Progress"].asString();
		if(!valueSnapshotsSnapshot["Description"].isNull())
			snapshotsObject.description = valueSnapshotsSnapshot["Description"].asString();
		if(!valueSnapshotsSnapshot["SourceDiskId"].isNull())
			snapshotsObject.sourceDiskId = valueSnapshotsSnapshot["SourceDiskId"].asString();
		if(!valueSnapshotsSnapshot["SourceDiskType"].isNull())
			snapshotsObject.sourceDiskType = valueSnapshotsSnapshot["SourceDiskType"].asString();
		if(!valueSnapshotsSnapshot["ImageId"].isNull())
			snapshotsObject.imageId = valueSnapshotsSnapshot["ImageId"].asString();
		if(!valueSnapshotsSnapshot["RegionNo"].isNull())
			snapshotsObject.regionNo = valueSnapshotsSnapshot["RegionNo"].asString();
		snapshots_.push_back(snapshotsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int OpsDescribeSnapshotsResult::getTotalCount()const
{
	return totalCount_;
}

int OpsDescribeSnapshotsResult::getPageSize()const
{
	return pageSize_;
}

int OpsDescribeSnapshotsResult::getPageNo()const
{
	return pageNo_;
}

std::vector<OpsDescribeSnapshotsResult::Snapshot> OpsDescribeSnapshotsResult::getSnapshots()const
{
	return snapshots_;
}

