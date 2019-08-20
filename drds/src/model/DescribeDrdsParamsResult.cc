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

#include <alibabacloud/drds/model/DescribeDrdsParamsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsParamsResult::DescribeDrdsParamsResult() :
	ServiceResult()
{}

DescribeDrdsParamsResult::DescribeDrdsParamsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsParamsResult::~DescribeDrdsParamsResult()
{}

void DescribeDrdsParamsResult::parse(const std::string &payload)
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
		if(!value["ParamName"].isNull())
			listObject.paramName = value["ParamName"].asString();
		if(!value["ParamEnglishName"].isNull())
			listObject.paramEnglishName = value["ParamEnglishName"].asString();
		if(!value["ParamVariableName"].isNull())
			listObject.paramVariableName = value["ParamVariableName"].asString();
		if(!value["ParamDesc"].isNull())
			listObject.paramDesc = value["ParamDesc"].asString();
		if(!value["ParamValue"].isNull())
			listObject.paramValue = value["ParamValue"].asString();
		if(!value["DbName"].isNull())
			listObject.dbName = value["DbName"].asString();
		if(!value["ParamDefaultValue"].isNull())
			listObject.paramDefaultValue = value["ParamDefaultValue"].asString();
		if(!value["ParamRanges"].isNull())
			listObject.paramRanges = value["ParamRanges"].asString();
		if(!value["ParamLevel"].isNull())
			listObject.paramLevel = value["ParamLevel"].asString();
		if(!value["ParamType"].isNull())
			listObject.paramType = value["ParamType"].asString();
		if(!value["NeedRestart"].isNull())
			listObject.needRestart = value["NeedRestart"].asString() == "true";
		if(!value["UserVisible"].isNull())
			listObject.userVisible = value["UserVisible"].asString() == "true";
		list_.push_back(listObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsParamsResult::ListItem> DescribeDrdsParamsResult::getList()const
{
	return list_;
}

bool DescribeDrdsParamsResult::getSuccess()const
{
	return success_;
}

