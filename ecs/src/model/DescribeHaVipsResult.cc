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

#include <alibabacloud/ecs/model/DescribeHaVipsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeHaVipsResult::DescribeHaVipsResult() :
	ServiceResult()
{}

DescribeHaVipsResult::DescribeHaVipsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHaVipsResult::~DescribeHaVipsResult()
{}

void DescribeHaVipsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHaVipsNode = value["HaVips"]["HaVip"];
	for (auto valueHaVipsHaVip : allHaVipsNode)
	{
		HaVip haVipsObject;
		if(!valueHaVipsHaVip["HaVipId"].isNull())
			haVipsObject.haVipId = valueHaVipsHaVip["HaVipId"].asString();
		if(!valueHaVipsHaVip["RegionId"].isNull())
			haVipsObject.regionId = valueHaVipsHaVip["RegionId"].asString();
		if(!valueHaVipsHaVip["VpcId"].isNull())
			haVipsObject.vpcId = valueHaVipsHaVip["VpcId"].asString();
		if(!valueHaVipsHaVip["VSwitchId"].isNull())
			haVipsObject.vSwitchId = valueHaVipsHaVip["VSwitchId"].asString();
		if(!valueHaVipsHaVip["IpAddress"].isNull())
			haVipsObject.ipAddress = valueHaVipsHaVip["IpAddress"].asString();
		if(!valueHaVipsHaVip["Status"].isNull())
			haVipsObject.status = valueHaVipsHaVip["Status"].asString();
		if(!valueHaVipsHaVip["MasterInstanceId"].isNull())
			haVipsObject.masterInstanceId = valueHaVipsHaVip["MasterInstanceId"].asString();
		if(!valueHaVipsHaVip["Description"].isNull())
			haVipsObject.description = valueHaVipsHaVip["Description"].asString();
		if(!valueHaVipsHaVip["CreateTime"].isNull())
			haVipsObject.createTime = valueHaVipsHaVip["CreateTime"].asString();
		auto allAssociatedInstances = value["AssociatedInstances"]["associatedInstance"];
		for (auto value : allAssociatedInstances)
			haVipsObject.associatedInstances.push_back(value.asString());
		auto allAssociatedEipAddresses = value["AssociatedEipAddresses"]["associatedEipAddresse"];
		for (auto value : allAssociatedEipAddresses)
			haVipsObject.associatedEipAddresses.push_back(value.asString());
		haVips_.push_back(haVipsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeHaVipsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeHaVipsResult::HaVip> DescribeHaVipsResult::getHaVips()const
{
	return haVips_;
}

int DescribeHaVipsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeHaVipsResult::getPageNumber()const
{
	return pageNumber_;
}

