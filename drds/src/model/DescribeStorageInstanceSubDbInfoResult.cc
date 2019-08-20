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

#include <alibabacloud/drds/model/DescribeStorageInstanceSubDbInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeStorageInstanceSubDbInfoResult::DescribeStorageInstanceSubDbInfoResult() :
	ServiceResult()
{}

DescribeStorageInstanceSubDbInfoResult::DescribeStorageInstanceSubDbInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStorageInstanceSubDbInfoResult::~DescribeStorageInstanceSubDbInfoResult()
{}

void DescribeStorageInstanceSubDbInfoResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["RdsInstanceId"].isNull())
		data_.rdsInstanceId = dataNode["RdsInstanceId"].asString();
	if(!dataNode["Use"].isNull())
		data_.use = std::stol(dataNode["Use"].asString());
	if(!dataNode["Capacity"].isNull())
		data_.capacity = std::stol(dataNode["Capacity"].asString());
	if(!dataNode["WarningLevel"].isNull())
		data_.warningLevel = std::stoi(dataNode["WarningLevel"].asString());
	if(!dataNode["TipsType"].isNull())
		data_.tipsType = std::stoi(dataNode["TipsType"].asString());
	auto allSubDbList = value["SubDbList"]["SubDb"];
	for (auto value : allSubDbList)
	{
		Data::SubDb subDbObject;
		if(!value["SubDbName"].isNull())
			subDbObject.subDbName = value["SubDbName"].asString();
		if(!value["Use"].isNull())
			subDbObject.use = std::stol(value["Use"].asString());
		if(!value["WarningLevel"].isNull())
			subDbObject.warningLevel = std::stoi(value["WarningLevel"].asString());
		data_.subDbList.push_back(subDbObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeStorageInstanceSubDbInfoResult::Data DescribeStorageInstanceSubDbInfoResult::getData()const
{
	return data_;
}

bool DescribeStorageInstanceSubDbInfoResult::getSuccess()const
{
	return success_;
}

