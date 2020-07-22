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

#include <alibabacloud/ecs/model/DescribeInstanceStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceStatusResult::DescribeInstanceStatusResult() :
	ServiceResult()
{}

DescribeInstanceStatusResult::DescribeInstanceStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceStatusResult::~DescribeInstanceStatusResult()
{}

void DescribeInstanceStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceStatusesNode = value["InstanceStatuses"]["InstanceStatus"];
	for (auto valueInstanceStatusesInstanceStatus : allInstanceStatusesNode)
	{
		InstanceStatus instanceStatusesObject;
		if(!valueInstanceStatusesInstanceStatus["InstanceId"].isNull())
			instanceStatusesObject.instanceId = valueInstanceStatusesInstanceStatus["InstanceId"].asString();
		if(!valueInstanceStatusesInstanceStatus["Status"].isNull())
			instanceStatusesObject.status = valueInstanceStatusesInstanceStatus["Status"].asString();
		instanceStatuses_.push_back(instanceStatusesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeInstanceStatusResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstanceStatusResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstanceStatusResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstanceStatusResult::InstanceStatus> DescribeInstanceStatusResult::getInstanceStatuses()const
{
	return instanceStatuses_;
}
