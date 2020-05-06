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

#include <alibabacloud/account/model/DeleteAppForBidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Account;
using namespace AlibabaCloud::Account::Model;

DeleteAppForBidResult::DeleteAppForBidResult() :
	ServiceResult()
{}

DeleteAppForBidResult::DeleteAppForBidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteAppForBidResult::~DeleteAppForBidResult()
{}

void DeleteAppForBidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["AppKey"].isNull())
		appKey_ = value["AppKey"].asString();

}

std::string DeleteAppForBidResult::getMessage()const
{
	return message_;
}

std::string DeleteAppForBidResult::getAppKey()const
{
	return appKey_;
}

std::string DeleteAppForBidResult::getCode()const
{
	return code_;
}

