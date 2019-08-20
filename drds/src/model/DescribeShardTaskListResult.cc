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

#include <alibabacloud/drds/model/DescribeShardTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeShardTaskListResult::DescribeShardTaskListResult() :
	ServiceResult()
{}

DescribeShardTaskListResult::DescribeShardTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeShardTaskListResult::~DescribeShardTaskListResult()
{}

void DescribeShardTaskListResult::parse(const std::string &payload)
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
		if(!value["SourceTableName"].isNull())
			listObject.sourceTableName = value["SourceTableName"].asString();
		if(!value["TargetTableName"].isNull())
			listObject.targetTableName = value["TargetTableName"].asString();
		if(!value["Expired"].isNull())
			listObject.expired = value["Expired"].asString();
		if(!value["Expired"].isNull())
			listObject.expired1 = std::stol(value["Expired"].asString());
		if(!value["Stage"].isNull())
			listObject.stage = std::stoi(value["Stage"].asString());
		if(!value["Progress"].isNull())
			listObject.progress = std::stoi(value["Progress"].asString());
		if(!value["Delay"].isNull())
			listObject.delay = std::stoi(value["Delay"].asString());
		list_.push_back(listObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int DescribeShardTaskListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeShardTaskListResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeShardTaskListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeShardTaskListResult::ListItem> DescribeShardTaskListResult::getList()const
{
	return list_;
}

bool DescribeShardTaskListResult::getSuccess()const
{
	return success_;
}

