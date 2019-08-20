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

#include <alibabacloud/drds/model/DescribeSrcRdsListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeSrcRdsListResult::DescribeSrcRdsListResult() :
	ServiceResult()
{}

DescribeSrcRdsListResult::DescribeSrcRdsListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSrcRdsListResult::~DescribeSrcRdsListResult()
{}

void DescribeSrcRdsListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["dataItem"];
	for (auto value : allData)
	{
		DataItem dataObject;
		if(!value["Rds"].isNull())
			dataObject.rds = value["Rds"].asString();
		if(!value["DbName"].isNull())
			dataObject.dbName = value["DbName"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeSrcRdsListResult::DataItem> DescribeSrcRdsListResult::getData()const
{
	return data_;
}

bool DescribeSrcRdsListResult::getSuccess()const
{
	return success_;
}

