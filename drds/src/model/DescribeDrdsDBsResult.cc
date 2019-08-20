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

#include <alibabacloud/drds/model/DescribeDrdsDBsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsDBsResult::DescribeDrdsDBsResult() :
	ServiceResult()
{}

DescribeDrdsDBsResult::DescribeDrdsDBsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsDBsResult::~DescribeDrdsDBsResult()
{}

void DescribeDrdsDBsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Db"];
	for (auto value : allData)
	{
		Db dataObject;
		if(!value["DbName"].isNull())
			dataObject.dbName = value["DbName"].asString();
		if(!value["Status"].isNull())
			dataObject.status = value["Status"].asString();
		if(!value["CreateTime"].isNull())
			dataObject.createTime = value["CreateTime"].asString();
		if(!value["Mode"].isNull())
			dataObject.mode = value["Mode"].asString();
		if(!value["Schema"].isNull())
			dataObject.schema = value["Schema"].asString();
		if(!value["DbInstType"].isNull())
			dataObject.dbInstType = value["DbInstType"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::string DescribeDrdsDBsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeDrdsDBsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeDrdsDBsResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDrdsDBsResult::Db> DescribeDrdsDBsResult::getData()const
{
	return data_;
}

bool DescribeDrdsDBsResult::getSuccess()const
{
	return success_;
}

