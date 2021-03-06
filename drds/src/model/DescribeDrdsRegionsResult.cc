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

#include <alibabacloud/drds/model/DescribeDrdsRegionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsRegionsResult::DescribeDrdsRegionsResult() :
	ServiceResult()
{}

DescribeDrdsRegionsResult::DescribeDrdsRegionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsRegionsResult::~DescribeDrdsRegionsResult()
{}

void DescribeDrdsRegionsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRegions = value["Regions"]["Region"];
	for (auto value : allRegions)
	{
		Region regionsObject;
		if(!value["RegionId"].isNull())
			regionsObject.regionId = value["RegionId"].asString();
		if(!value["RegionName"].isNull())
			regionsObject.regionName = value["RegionName"].asString();
		if(!value["RegionEndpoint"].isNull())
			regionsObject.regionEndpoint = value["RegionEndpoint"].asString();
		regions_.push_back(regionsObject);
	}

}

std::vector<DescribeDrdsRegionsResult::Region> DescribeDrdsRegionsResult::getRegions()const
{
	return regions_;
}

