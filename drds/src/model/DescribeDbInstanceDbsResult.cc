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

#include <alibabacloud/drds/model/DescribeDbInstanceDbsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDbInstanceDbsResult::DescribeDbInstanceDbsResult() :
	ServiceResult()
{}

DescribeDbInstanceDbsResult::DescribeDbInstanceDbsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDbInstanceDbsResult::~DescribeDbInstanceDbsResult()
{}

void DescribeDbInstanceDbsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDatabases = value["Databases"]["Database"];
	for (auto value : allDatabases)
	{
		Database databasesObject;
		if(!value["DbName"].isNull())
			databasesObject.dbName = value["DbName"].asString();
		if(!value["Status"].isNull())
			databasesObject.status = std::stoi(value["Status"].asString());
		if(!value["Description"].isNull())
			databasesObject.description = value["Description"].asString();
		databases_.push_back(databasesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::vector<DescribeDbInstanceDbsResult::Database> DescribeDbInstanceDbsResult::getDatabases()const
{
	return databases_;
}

std::string DescribeDbInstanceDbsResult::getTotal()const
{
	return total_;
}

bool DescribeDbInstanceDbsResult::getSuccess()const
{
	return success_;
}

