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

#include <alibabacloud/drds/model/DescribeDbInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDbInstancesResult::DescribeDbInstancesResult() :
	ServiceResult()
{}

DescribeDbInstancesResult::DescribeDbInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDbInstancesResult::~DescribeDbInstancesResult()
{}

void DescribeDbInstancesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["DBInstance"];
	for (auto value : allItems)
	{
		DBInstance itemsObject;
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = std::stoi(value["DBInstanceStatus"].asString());
		if(!value["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = value["DBInstanceType"].asString();
		if(!value["Engine"].isNull())
			itemsObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			itemsObject.engineVersion = value["EngineVersion"].asString();
		if(!value["RegionId"].isNull())
			itemsObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			itemsObject.zoneId = value["ZoneId"].asString();
		if(!value["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		if(!value["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = value["InstanceNetworkType"].asString();
		auto allReadOnlyDBInstanceId = value["ReadOnlyDBInstanceId"]["ReadOnlyDBInstanceId"];
		for (auto value : allReadOnlyDBInstanceId)
			itemsObject.readOnlyDBInstanceId.push_back(value.asString());
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDbInstancesResult::DBInstance> DescribeDbInstancesResult::getItems()const
{
	return items_;
}

