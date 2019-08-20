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

#include <alibabacloud/drds/model/DescribePreCheckResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribePreCheckResultResult::DescribePreCheckResultResult() :
	ServiceResult()
{}

DescribePreCheckResultResult::DescribePreCheckResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePreCheckResultResult::~DescribePreCheckResultResult()
{}

void DescribePreCheckResultResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto preCheckResultNode = value["PreCheckResult"];
	if(!preCheckResultNode["PreCheckName"].isNull())
		preCheckResult_.preCheckName = preCheckResultNode["PreCheckName"].asString();
	if(!preCheckResultNode["State"].isNull())
		preCheckResult_.state = preCheckResultNode["State"].asString();
	auto allSubCheckItems = value["SubCheckItems"]["SubCheckItemsItem"];
	for (auto value : allSubCheckItems)
	{
		PreCheckResult::SubCheckItemsItem subCheckItemsItemObject;
		if(!value["PreCheckItemName"].isNull())
			subCheckItemsItemObject.preCheckItemName = value["PreCheckItemName"].asString();
		if(!value["State"].isNull())
			subCheckItemsItemObject.state = value["State"].asString();
		if(!value["ErrorMsgCode"].isNull())
			subCheckItemsItemObject.errorMsgCode = value["ErrorMsgCode"].asString();
		auto allErrorMsgParams = value["ErrorMsgParams"]["ErrorMsgParams"];
		for (auto value : allErrorMsgParams)
			subCheckItemsItemObject.errorMsgParams.push_back(value.asString());
		preCheckResult_.subCheckItems.push_back(subCheckItemsItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribePreCheckResultResult::PreCheckResult DescribePreCheckResultResult::getPreCheckResult()const
{
	return preCheckResult_;
}

bool DescribePreCheckResultResult::getSuccess()const
{
	return success_;
}

