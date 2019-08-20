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

#include <alibabacloud/drds/model/DescribeSqlFlashbakTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeSqlFlashbakTaskResult::DescribeSqlFlashbakTaskResult() :
	ServiceResult()
{}

DescribeSqlFlashbakTaskResult::DescribeSqlFlashbakTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSqlFlashbakTaskResult::~DescribeSqlFlashbakTaskResult()
{}

void DescribeSqlFlashbakTaskResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSqlFlashbackTasks = value["SqlFlashbackTasks"]["SqlFlashbackTask"];
	for (auto value : allSqlFlashbackTasks)
	{
		SqlFlashbackTask sqlFlashbackTasksObject;
		if(!value["Id"].isNull())
			sqlFlashbackTasksObject.id = std::stol(value["Id"].asString());
		if(!value["GmtCreate"].isNull())
			sqlFlashbackTasksObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["GmtModified"].isNull())
			sqlFlashbackTasksObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["InstId"].isNull())
			sqlFlashbackTasksObject.instId = value["InstId"].asString();
		if(!value["DbName"].isNull())
			sqlFlashbackTasksObject.dbName = value["DbName"].asString();
		if(!value["SearchStartTime"].isNull())
			sqlFlashbackTasksObject.searchStartTime = std::stol(value["SearchStartTime"].asString());
		if(!value["SearchEndTime"].isNull())
			sqlFlashbackTasksObject.searchEndTime = std::stol(value["SearchEndTime"].asString());
		if(!value["TableName"].isNull())
			sqlFlashbackTasksObject.tableName = value["TableName"].asString();
		if(!value["TraceId"].isNull())
			sqlFlashbackTasksObject.traceId = value["TraceId"].asString();
		if(!value["SqlType"].isNull())
			sqlFlashbackTasksObject.sqlType = value["SqlType"].asString();
		if(!value["SqlPk"].isNull())
			sqlFlashbackTasksObject.sqlPk = value["SqlPk"].asString();
		if(!value["RecallType"].isNull())
			sqlFlashbackTasksObject.recallType = std::stoi(value["RecallType"].asString());
		if(!value["RecallStatus"].isNull())
			sqlFlashbackTasksObject.recallStatus = std::stoi(value["RecallStatus"].asString());
		if(!value["RecallProgress"].isNull())
			sqlFlashbackTasksObject.recallProgress = std::stoi(value["RecallProgress"].asString());
		if(!value["RecallRestoreType"].isNull())
			sqlFlashbackTasksObject.recallRestoreType = std::stoi(value["RecallRestoreType"].asString());
		if(!value["DownloadUrl"].isNull())
			sqlFlashbackTasksObject.downloadUrl = value["DownloadUrl"].asString();
		if(!value["ExpireTime"].isNull())
			sqlFlashbackTasksObject.expireTime = std::stol(value["ExpireTime"].asString());
		if(!value["SqlCounter"].isNull())
			sqlFlashbackTasksObject.sqlCounter = std::stol(value["SqlCounter"].asString());
		sqlFlashbackTasks_.push_back(sqlFlashbackTasksObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeSqlFlashbakTaskResult::SqlFlashbackTask> DescribeSqlFlashbakTaskResult::getSqlFlashbackTasks()const
{
	return sqlFlashbackTasks_;
}

bool DescribeSqlFlashbakTaskResult::getSuccess()const
{
	return success_;
}

