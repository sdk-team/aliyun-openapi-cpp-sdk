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

#include <alibabacloud/ft/model/TestXmlServiceRoutePolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

TestXmlServiceRoutePolicyResult::TestXmlServiceRoutePolicyResult() :
	ServiceResult()
{}

TestXmlServiceRoutePolicyResult::TestXmlServiceRoutePolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TestXmlServiceRoutePolicyResult::~TestXmlServiceRoutePolicyResult()
{}

void TestXmlServiceRoutePolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDbNode = value["Db"]["Sdw"];
	for (auto valueDbSdw : allDbNode)
	{
		Sdw dbObject;
		if(!valueDbSdw["Import"].isNull())
			dbObject.import = std::stoi(valueDbSdw["Import"].asString());
		db_.push_back(dbObject);
	}
	auto addNode = value["Add"];
	if(!addNode["O"].isNull())
		add_.o = addNode["O"].asString();
	auto allBan = value["Ban"]["A"];
	for (const auto &item : allBan)
		ban_.push_back(item.asString());

}

TestXmlServiceRoutePolicyResult::Add TestXmlServiceRoutePolicyResult::getAdd()const
{
	return add_;
}

std::vector<TestXmlServiceRoutePolicyResult::Sdw> TestXmlServiceRoutePolicyResult::getDb()const
{
	return db_;
}

std::vector<std::string> TestXmlServiceRoutePolicyResult::getBan()const
{
	return ban_;
}

