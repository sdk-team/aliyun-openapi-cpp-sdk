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

#include <alibabacloud/drds/model/PreCheckSqlFlashbackTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

PreCheckSqlFlashbackTaskResult::PreCheckSqlFlashbackTaskResult() :
	ServiceResult()
{}

PreCheckSqlFlashbackTaskResult::PreCheckSqlFlashbackTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PreCheckSqlFlashbackTaskResult::~PreCheckSqlFlashbackTaskResult()
{}

void PreCheckSqlFlashbackTaskResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto checkResultNode = value["CheckResult"];
	if(!checkResultNode["BinlogExists"].isNull())
		checkResult_.binlogExists = checkResultNode["BinlogExists"].asString() == "true";
	if(!checkResultNode["SupportBinlogRowQueryEvents"].isNull())
		checkResult_.supportBinlogRowQueryEvents = checkResultNode["SupportBinlogRowQueryEvents"].asString() == "true";
	if(!checkResultNode["BinlogRowQueryEventEnabled"].isNull())
		checkResult_.binlogRowQueryEventEnabled = checkResultNode["BinlogRowQueryEventEnabled"].asString() == "true";
	if(!checkResultNode["CanUpgradeSupportBinlogRowQueryEvents"].isNull())
		checkResult_.canUpgradeSupportBinlogRowQueryEvents = checkResultNode["CanUpgradeSupportBinlogRowQueryEvents"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

PreCheckSqlFlashbackTaskResult::CheckResult PreCheckSqlFlashbackTaskResult::getCheckResult()const
{
	return checkResult_;
}

bool PreCheckSqlFlashbackTaskResult::getSuccess()const
{
	return success_;
}

