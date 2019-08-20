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

#include <alibabacloud/drds/model/DescribeRecycleBinTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRecycleBinTablesResult::DescribeRecycleBinTablesResult() :
	ServiceResult()
{}

DescribeRecycleBinTablesResult::DescribeRecycleBinTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecycleBinTablesResult::~DescribeRecycleBinTablesResult()
{}

void DescribeRecycleBinTablesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["DataItem"];
	for (auto value : allData)
	{
		DataItem dataObject;
		if(!value["TableName"].isNull())
			dataObject.tableName = value["TableName"].asString();
		if(!value["OriginalTableName"].isNull())
			dataObject.originalTableName = value["OriginalTableName"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = value["CreateTime"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeRecycleBinTablesResult::DataItem> DescribeRecycleBinTablesResult::getData()const
{
	return data_;
}

bool DescribeRecycleBinTablesResult::getSuccess()const
{
	return success_;
}

