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

#include <alibabacloud/drds/model/DescribeDrdsTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsTasksResult::DescribeDrdsTasksResult() :
	ServiceResult()
{}

DescribeDrdsTasksResult::DescribeDrdsTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsTasksResult::~DescribeDrdsTasksResult()
{}

void DescribeDrdsTasksResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTasks = value["Tasks"]["Task"];
	for (auto value : allTasks)
	{
		Task tasksObject;
		if(!value["Id"].isNull())
			tasksObject.id = std::stol(value["Id"].asString());
		if(!value["State"].isNull())
			tasksObject.state = value["State"].asString();
		if(!value["Content"].isNull())
			tasksObject.content = value["Content"].asString();
		tasks_.push_back(tasksObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsTasksResult::Task> DescribeDrdsTasksResult::getTasks()const
{
	return tasks_;
}

bool DescribeDrdsTasksResult::getSuccess()const
{
	return success_;
}

