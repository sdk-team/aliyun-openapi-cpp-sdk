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

#include <alibabacloud/sdk/model/DemoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SDK;
using namespace AlibabaCloud::SDK::Model;

DemoResult::DemoResult() :
	ServiceResult()
{}

DemoResult::DemoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DemoResult::~DemoResult()
{}

void DemoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListMap = value["ListMap"]["MapItem"];
	for (const auto &item : allListMap)
		listMap_.push_back(item.asString());
	if(!value["TetMap"].isNull())
		tetMap_ = value["TetMap"].asString();

}

std::string DemoResult::getTetMap()const
{
	return tetMap_;
}

std::vector<std::string> DemoResult::getListMap()const
{
	return listMap_;
}

