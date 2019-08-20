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

#include <alibabacloud/drds/model/DescribeDrdsSlowSqlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsSlowSqlsResult::DescribeDrdsSlowSqlsResult() :
	ServiceResult()
{}

DescribeDrdsSlowSqlsResult::DescribeDrdsSlowSqlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsSlowSqlsResult::~DescribeDrdsSlowSqlsResult()
{}

void DescribeDrdsSlowSqlsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["Schema"].isNull())
			itemsObject.schema = value["Schema"].asString();
		if(!value["Sql"].isNull())
			itemsObject.sql = value["Sql"].asString();
		if(!value["SendTime"].isNull())
			itemsObject.sendTime = std::stol(value["SendTime"].asString());
		if(!value["ResponseTime"].isNull())
			itemsObject.responseTime = std::stol(value["ResponseTime"].asString());
		if(!value["Host"].isNull())
			itemsObject.host = value["Host"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeDrdsSlowSqlsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDrdsSlowSqlsResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDrdsSlowSqlsResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDrdsSlowSqlsResult::Item> DescribeDrdsSlowSqlsResult::getItems()const
{
	return items_;
}

bool DescribeDrdsSlowSqlsResult::getSuccess()const
{
	return success_;
}

