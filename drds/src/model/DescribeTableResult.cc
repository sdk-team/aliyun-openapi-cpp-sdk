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

#include <alibabacloud/drds/model/DescribeTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeTableResult::DescribeTableResult() :
	ServiceResult()
{}

DescribeTableResult::DescribeTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTableResult::~DescribeTableResult()
{}

void DescribeTableResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allList = value["List"]["ColumnInfo"];
	for (auto value : allList)
	{
		Data::ColumnInfo columnInfoObject;
		if(!value["ColumnName"].isNull())
			columnInfoObject.columnName = value["ColumnName"].asString();
		if(!value["ColumnType"].isNull())
			columnInfoObject.columnType = value["ColumnType"].asString();
		if(!value["Extra"].isNull())
			columnInfoObject.extra = value["Extra"].asString();
		if(!value["Index"].isNull())
			columnInfoObject.index = value["Index"].asString();
		if(!value["IsAllowNull"].isNull())
			columnInfoObject.isAllowNull = value["IsAllowNull"].asString();
		if(!value["IsPk"].isNull())
			columnInfoObject.isPk = value["IsPk"].asString();
		data_.list.push_back(columnInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeTableResult::Data DescribeTableResult::getData()const
{
	return data_;
}

bool DescribeTableResult::getSuccess()const
{
	return success_;
}

