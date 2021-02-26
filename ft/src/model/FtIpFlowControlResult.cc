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

#include <alibabacloud/ft/model/FtIpFlowControlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

FtIpFlowControlResult::FtIpFlowControlResult() :
	ServiceResult()
{}

FtIpFlowControlResult::FtIpFlowControlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FtIpFlowControlResult::~FtIpFlowControlResult()
{}

void FtIpFlowControlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNames = value["Names"]["Names"];
	for (const auto &item : allNames)
		names_.push_back(item.asString());
	auto allNames01 = value["Names01"]["Names01"];
	for (const auto &item : allNames01)
		names01_.push_back(item.asString());
	auto allIntegerList = value["IntegerList"]["IntegerList"];
	for (const auto &item : allIntegerList)
		integerList_.push_back(item.asString());
	auto allIntegerList1 = value["IntegerList1"]["IntegerList1"];
	for (const auto &item : allIntegerList1)
		integerList1_.push_back(item.asString());

}

std::vector<std::string> FtIpFlowControlResult::getNames()const
{
	return names_;
}

std::vector<std::string> FtIpFlowControlResult::getNames01()const
{
	return names01_;
}

std::vector<std::string> FtIpFlowControlResult::getIntegerList()const
{
	return integerList_;
}

std::vector<std::string> FtIpFlowControlResult::getIntegerList1()const
{
	return integerList1_;
}

