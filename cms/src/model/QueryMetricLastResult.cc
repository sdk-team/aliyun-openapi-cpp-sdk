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

#include <alibabacloud/cms/model/QueryMetricLastResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

QueryMetricLastResult::QueryMetricLastResult() :
	ServiceResult()
{}

QueryMetricLastResult::QueryMetricLastResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryMetricLastResult::~QueryMetricLastResult()
{}

void QueryMetricLastResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Cursor"].isNull())
		cursor_ = value["Cursor"].asString();
	if(!value["Datapoints"].isNull())
		datapoints_ = value["Datapoints"].asString();
	if(!value["Period"].isNull())
		period_ = value["Period"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();

}

std::string QueryMetricLastResult::getMessage()const
{
	return message_;
}

std::string QueryMetricLastResult::getPeriod()const
{
	return period_;
}

std::string QueryMetricLastResult::getCursor()const
{
	return cursor_;
}

std::string QueryMetricLastResult::getDatapoints()const
{
	return datapoints_;
}

std::string QueryMetricLastResult::getCode()const
{
	return code_;
}

std::string QueryMetricLastResult::getSuccess()const
{
	return success_;
}
