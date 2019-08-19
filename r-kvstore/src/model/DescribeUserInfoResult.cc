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

#include <alibabacloud/r-kvstore/model/DescribeUserInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeUserInfoResult::DescribeUserInfoResult() :
	ServiceResult()
{}

DescribeUserInfoResult::DescribeUserInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserInfoResult::~DescribeUserInfoResult()
{}

void DescribeUserInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto alreadyHasResourceNumNode = value["AlreadyHasResourceNum"];
	if(!alreadyHasResourceNumNode["EcsBought"].isNull())
		alreadyHasResourceNum_.ecsBought = std::stol(alreadyHasResourceNumNode["EcsBought"].asString());
	if(!alreadyHasResourceNumNode["KVSBought"].isNull())
		alreadyHasResourceNum_.kVSBought = std::stol(alreadyHasResourceNumNode["KVSBought"].asString());
	if(!value["IsAuthentication"].isNull())
		isAuthentication_ = value["IsAuthentication"].asString() == "true";
	if(!value["IsFinance"].isNull())
		isFinance_ = value["IsFinance"].asString() == "true";
	if(!value["BalanceAmount"].isNull())
		balanceAmount_ = std::stol(value["BalanceAmount"].asString());

}

long DescribeUserInfoResult::getBalanceAmount()const
{
	return balanceAmount_;
}

bool DescribeUserInfoResult::getIsAuthentication()const
{
	return isAuthentication_;
}

bool DescribeUserInfoResult::getIsFinance()const
{
	return isFinance_;
}

DescribeUserInfoResult::AlreadyHasResourceNum DescribeUserInfoResult::getAlreadyHasResourceNum()const
{
	return alreadyHasResourceNum_;
}

