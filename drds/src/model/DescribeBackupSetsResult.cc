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

#include <alibabacloud/drds/model/DescribeBackupSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeBackupSetsResult::DescribeBackupSetsResult() :
	ServiceResult()
{}

DescribeBackupSetsResult::DescribeBackupSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupSetsResult::~DescribeBackupSetsResult()
{}

void DescribeBackupSetsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBackupSets = value["BackupSets"]["backupSet"];
	for (auto value : allBackupSets)
	{
		BackupSet backupSetsObject;
		if(!value["Id"].isNull())
			backupSetsObject.id = value["Id"].asString();
		if(!value["BackupStartTime"].isNull())
			backupSetsObject.backupStartTime = std::stol(value["BackupStartTime"].asString());
		if(!value["BackupEndTime"].isNull())
			backupSetsObject.backupEndTime = std::stol(value["BackupEndTime"].asString());
		if(!value["BackupMode"].isNull())
			backupSetsObject.backupMode = value["BackupMode"].asString();
		if(!value["BackupLevel"].isNull())
			backupSetsObject.backupLevel = value["BackupLevel"].asString();
		if(!value["BackupType"].isNull())
			backupSetsObject.backupType = value["BackupType"].asString();
		if(!value["Status"].isNull())
			backupSetsObject.status = std::stol(value["Status"].asString());
		if(!value["EnableRecovery"].isNull())
			backupSetsObject.enableRecovery = value["EnableRecovery"].asString() == "true";
		if(!value["BackupTotalSize"].isNull())
			backupSetsObject.backupTotalSize = value["BackupTotalSize"].asString();
		if(!value["BackupConsitentTime"].isNull())
			backupSetsObject.backupConsitentTime = value["BackupConsitentTime"].asString();
		auto allBackupDbs = value["BackupDbs"]["backupDb"];
		for (auto value : allBackupDbs)
			backupSetsObject.backupDbs.push_back(value.asString());
		backupSets_.push_back(backupSetsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeBackupSetsResult::BackupSet> DescribeBackupSetsResult::getBackupSets()const
{
	return backupSets_;
}

bool DescribeBackupSetsResult::getSuccess()const
{
	return success_;
}

