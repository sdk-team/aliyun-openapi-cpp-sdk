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

#include <alibabacloud/ecsops/model/OpsDescribeGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsDescribeGroupsResult::OpsDescribeGroupsResult() :
	ServiceResult()
{}

OpsDescribeGroupsResult::OpsDescribeGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsDescribeGroupsResult::~OpsDescribeGroupsResult()
{}

void OpsDescribeGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupsNode = value["Groups"]["Group"];
	for (auto valueGroupsGroup : allGroupsNode)
	{
		Group groupsObject;
		if(!valueGroupsGroup["GroupId"].isNull())
			groupsObject.groupId = valueGroupsGroup["GroupId"].asString();
		if(!valueGroupsGroup["GroupName"].isNull())
			groupsObject.groupName = valueGroupsGroup["GroupName"].asString();
		if(!valueGroupsGroup["GroupDesc"].isNull())
			groupsObject.groupDesc = valueGroupsGroup["GroupDesc"].asString();
		if(!valueGroupsGroup["VpcId"].isNull())
			groupsObject.vpcId = valueGroupsGroup["VpcId"].asString();
		if(!valueGroupsGroup["EcsInstanceCount"].isNull())
			groupsObject.ecsInstanceCount = std::stoi(valueGroupsGroup["EcsInstanceCount"].asString());
		if(!valueGroupsGroup["CreatedTime"].isNull())
			groupsObject.createdTime = valueGroupsGroup["CreatedTime"].asString();
		if(!valueGroupsGroup["ModifiedTime"].isNull())
			groupsObject.modifiedTime = valueGroupsGroup["ModifiedTime"].asString();
		if(!valueGroupsGroup["RegionNo"].isNull())
			groupsObject.regionNo = valueGroupsGroup["RegionNo"].asString();
		groups_.push_back(groupsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int OpsDescribeGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int OpsDescribeGroupsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<OpsDescribeGroupsResult::Group> OpsDescribeGroupsResult::getGroups()const
{
	return groups_;
}

int OpsDescribeGroupsResult::getPageNo()const
{
	return pageNo_;
}

