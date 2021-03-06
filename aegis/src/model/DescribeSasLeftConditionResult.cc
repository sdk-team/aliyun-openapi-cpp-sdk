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

#include <alibabacloud/aegis/model/DescribeSasLeftConditionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeSasLeftConditionResult::DescribeSasLeftConditionResult() :
	ServiceResult()
{}

DescribeSasLeftConditionResult::DescribeSasLeftConditionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSasLeftConditionResult::~DescribeSasLeftConditionResult()
{}

void DescribeSasLeftConditionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allConditionList = value["ConditionList"]["Condition"];
	for (auto value : allConditionList)
	{
		Condition conditionListObject;
		if(!value["Name"].isNull())
			conditionListObject.name = value["Name"].asString();
		if(!value["Count"].isNull())
			conditionListObject.count = std::stoi(value["Count"].asString());
		if(!value["Id"].isNull())
			conditionListObject.id = value["Id"].asString();
		conditionList_.push_back(conditionListObject);
	}

}

std::vector<DescribeSasLeftConditionResult::Condition> DescribeSasLeftConditionResult::getConditionList()const
{
	return conditionList_;
}

