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

#include <alibabacloud/imm/model/GetFaceSearchUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetFaceSearchUserResult::GetFaceSearchUserResult() :
	ServiceResult()
{}

GetFaceSearchUserResult::GetFaceSearchUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFaceSearchUserResult::~GetFaceSearchUserResult()
{}

void GetFaceSearchUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["ModifyTime"].isNull())
		modifyTime_ = value["ModifyTime"].asString();
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["User"].isNull())
		user_ = value["User"].asString();

}

std::string GetFaceSearchUserResult::getGroupName()const
{
	return groupName_;
}

std::string GetFaceSearchUserResult::getStatus()const
{
	return status_;
}

std::string GetFaceSearchUserResult::getModifyTime()const
{
	return modifyTime_;
}

std::string GetFaceSearchUserResult::getUser()const
{
	return user_;
}

std::string GetFaceSearchUserResult::getCreateTime()const
{
	return createTime_;
}

int GetFaceSearchUserResult::getCount()const
{
	return count_;
}

std::string GetFaceSearchUserResult::getGroupId()const
{
	return groupId_;
}

