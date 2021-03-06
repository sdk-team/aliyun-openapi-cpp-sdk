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

#include <alibabacloud/aegis/model/DescribeInstanceStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeInstanceStatisticsResult::DescribeInstanceStatisticsResult() :
	ServiceResult()
{}

DescribeInstanceStatisticsResult::DescribeInstanceStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceStatisticsResult::~DescribeInstanceStatisticsResult()
{}

void DescribeInstanceStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Entity"];
	for (auto value : allData)
	{
		Entity dataObject;
		if(!value["Uuid"].isNull())
			dataObject.uuid = value["Uuid"].asString();
		if(!value["Account"].isNull())
			dataObject.account = std::stoi(value["Account"].asString());
		if(!value["Health"].isNull())
			dataObject.health = std::stoi(value["Health"].asString());
		if(!value["Trojan"].isNull())
			dataObject.trojan = std::stoi(value["Trojan"].asString());
		if(!value["Suspicious"].isNull())
			dataObject.suspicious = std::stoi(value["Suspicious"].asString());
		if(!value["Vul"].isNull())
			dataObject.vul = std::stoi(value["Vul"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<DescribeInstanceStatisticsResult::Entity> DescribeInstanceStatisticsResult::getData()const
{
	return data_;
}

