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

#include <alibabacloud/drds/model/PutRestorePreCheckResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

PutRestorePreCheckResult::PutRestorePreCheckResult() :
	ServiceResult()
{}

PutRestorePreCheckResult::PutRestorePreCheckResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PutRestorePreCheckResult::~PutRestorePreCheckResult()
{}

void PutRestorePreCheckResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto precheckBackupResultNode = value["PrecheckBackupResult"];
	if(!precheckBackupResultNode["Result"].isNull())
		precheckBackupResult_.result = precheckBackupResultNode["Result"].asString() == "true";
	auto allList = value["List"]["ListItem"];
	for (auto value : allList)
	{
		PrecheckBackupResult::ListItem listItemObject;
		if(!value["ItemId"].isNull())
			listItemObject.itemId = std::stol(value["ItemId"].asString());
		if(!value["CheckItemName"].isNull())
			listItemObject.checkItemName = value["CheckItemName"].asString();
		if(!value["CheckItemContent"].isNull())
			listItemObject.checkItemContent = value["CheckItemContent"].asString();
		if(!value["CheckResult"].isNull())
			listItemObject.checkResult = value["CheckResult"].asString();
		if(!value["CheckFailReason"].isNull())
			listItemObject.checkFailReason = value["CheckFailReason"].asString();
		if(!value["Result"].isNull())
			listItemObject.result = value["Result"].asString() == "true";
		precheckBackupResult_.list.push_back(listItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

PutRestorePreCheckResult::PrecheckBackupResult PutRestorePreCheckResult::getPrecheckBackupResult()const
{
	return precheckBackupResult_;
}

bool PutRestorePreCheckResult::getSuccess()const
{
	return success_;
}

