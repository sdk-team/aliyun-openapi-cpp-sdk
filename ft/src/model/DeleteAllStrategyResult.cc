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

#include <alibabacloud/ft/model/DeleteAllStrategyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

DeleteAllStrategyResult::DeleteAllStrategyResult() :
	ServiceResult()
{}

DeleteAllStrategyResult::DeleteAllStrategyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteAllStrategyResult::~DeleteAllStrategyResult()
{}

void DeleteAllStrategyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Data"].isNull())
		data_ = value["Data"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["MessageCN"].isNull())
		messageCN_ = value["MessageCN"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DeleteAllStrategyResult::getMessage()const
{
	return message_;
}

bool DeleteAllStrategyResult::getData()const
{
	return data_;
}

std::string DeleteAllStrategyResult::getCode()const
{
	return code_;
}

bool DeleteAllStrategyResult::getSuccess()const
{
	return success_;
}

std::string DeleteAllStrategyResult::getMessageCN()const
{
	return messageCN_;
}

