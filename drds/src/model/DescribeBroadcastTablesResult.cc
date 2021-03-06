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

#include <alibabacloud/drds/model/DescribeBroadcastTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeBroadcastTablesResult::DescribeBroadcastTablesResult() :
	ServiceResult()
{}

DescribeBroadcastTablesResult::DescribeBroadcastTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBroadcastTablesResult::~DescribeBroadcastTablesResult()
{}

void DescribeBroadcastTablesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allList = value["List"]["ListItem"];
	for (auto value : allList)
	{
		ListItem listObject;
		if(!value["Table"].isNull())
			listObject.table = value["Table"].asString();
		if(!value["BroadcastType"].isNull())
			listObject.broadcastType = value["BroadcastType"].asString();
		if(!value["IsShard"].isNull())
			listObject.isShard = value["IsShard"].asString() == "true";
		if(!value["DbInstType"].isNull())
			listObject.dbInstType = std::stoi(value["DbInstType"].asString());
		if(!value["Broadcast"].isNull())
			listObject.broadcast = value["Broadcast"].asString() == "true";
		if(!value["Status"].isNull())
			listObject.status = std::stoi(value["Status"].asString());
		list_.push_back(listObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["IsShard"].isNull())
		isShard_ = value["IsShard"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

bool DescribeBroadcastTablesResult::getIsShard()const
{
	return isShard_;
}

int DescribeBroadcastTablesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBroadcastTablesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeBroadcastTablesResult::getTotal()const
{
	return total_;
}

std::vector<DescribeBroadcastTablesResult::ListItem> DescribeBroadcastTablesResult::getList()const
{
	return list_;
}

bool DescribeBroadcastTablesResult::getSuccess()const
{
	return success_;
}

