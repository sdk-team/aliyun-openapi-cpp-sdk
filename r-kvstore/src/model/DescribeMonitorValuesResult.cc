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

#include <alibabacloud/r-kvstore/model/DescribeMonitorValuesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeMonitorValuesResult::DescribeMonitorValuesResult() :
	ServiceResult()
{}

DescribeMonitorValuesResult::DescribeMonitorValuesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMonitorValuesResult::~DescribeMonitorValuesResult()
{}

void DescribeMonitorValuesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allInstanceIds = value["InstanceIds"]["KVStoreInstanceMonitor"];
	for (auto value : allInstanceIds)
	{
		KVStoreInstanceMonitor instanceIdsObject;
		if(!value["InstanceId"].isNull())
			instanceIdsObject.instanceId = value["InstanceId"].asString();
		auto allMonitorKeys = value["MonitorKeys"]["KVStoreMonitorKey"];
		for (auto value : allMonitorKeys)
		{
			KVStoreInstanceMonitor::KVStoreMonitorKey monitorKeysObject;
			if(!value["MonitorKey"].isNull())
				monitorKeysObject.monitorKey = value["MonitorKey"].asString();
			if(!value["Value"].isNull())
				monitorKeysObject.value = value["Value"].asString();
			if(!value["Unit"].isNull())
				monitorKeysObject.unit = value["Unit"].asString();
			instanceIdsObject.monitorKeys.push_back(monitorKeysObject);
		}
		instanceIds_.push_back(instanceIdsObject);
	}
	if(!value["Date"].isNull())
		date_ = value["Date"].asString();

}

std::vector<DescribeMonitorValuesResult::KVStoreInstanceMonitor> DescribeMonitorValuesResult::getInstanceIds()const
{
	return instanceIds_;
}

std::string DescribeMonitorValuesResult::getDate()const
{
	return date_;
}

