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

#include <alibabacloud/drds/model/DescribeDrdsInstanceLevelTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsInstanceLevelTasksResult::DescribeDrdsInstanceLevelTasksResult() :
	ServiceResult()
{}

DescribeDrdsInstanceLevelTasksResult::DescribeDrdsInstanceLevelTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsInstanceLevelTasksResult::~DescribeDrdsInstanceLevelTasksResult()
{}

void DescribeDrdsInstanceLevelTasksResult::parse(const std::string &payload)
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
		if(!value["TaskName"].isNull())
			tasksObject.taskName = value["TaskName"].asString();
		if(!value["GmtCreate"].isNull())
			tasksObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["TaskType"].isNull())
			tasksObject.taskType = std::stoi(value["TaskType"].asString());
		if(!value["TaskStatus"].isNull())
			tasksObject.taskStatus = std::stoi(value["TaskStatus"].asString());
		if(!value["Progress"].isNull())
			tasksObject.progress = std::stoi(value["Progress"].asString());
		if(!value["ProgressDescription"].isNull())
			tasksObject.progressDescription = value["ProgressDescription"].asString();
		if(!value["TaskPhase"].isNull())
			tasksObject.taskPhase = value["TaskPhase"].asString();
		if(!value["ErrMsg"].isNull())
			tasksObject.errMsg = value["ErrMsg"].asString();
		if(!value["ShowProgress"].isNull())
			tasksObject.showProgress = value["ShowProgress"].asString() == "true";
		if(!value["AllowCancel"].isNull())
			tasksObject.allowCancel = value["AllowCancel"].asString() == "true";
		tasks_.push_back(tasksObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsInstanceLevelTasksResult::Task> DescribeDrdsInstanceLevelTasksResult::getTasks()const
{
	return tasks_;
}

bool DescribeDrdsInstanceLevelTasksResult::getSuccess()const
{
	return success_;
}

