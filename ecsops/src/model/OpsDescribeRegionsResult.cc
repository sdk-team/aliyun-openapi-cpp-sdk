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

#include <alibabacloud/ecsops/model/OpsDescribeRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsDescribeRegionsResult::OpsDescribeRegionsResult() :
	ServiceResult()
{}

OpsDescribeRegionsResult::OpsDescribeRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsDescribeRegionsResult::~OpsDescribeRegionsResult()
{}

void OpsDescribeRegionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["Region"];
	for (auto valueRegionsRegion : allRegionsNode)
	{
		Region regionsObject;
		if(!valueRegionsRegion["RegionNo"].isNull())
			regionsObject.regionNo = valueRegionsRegion["RegionNo"].asString();
		if(!valueRegionsRegion["LocalName"].isNull())
			regionsObject.localName = valueRegionsRegion["LocalName"].asString();
		regions_.push_back(regionsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int OpsDescribeRegionsResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<OpsDescribeRegionsResult::Region> OpsDescribeRegionsResult::getRegions()const
{
	return regions_;
}

