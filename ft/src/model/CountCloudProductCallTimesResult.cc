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

#include <alibabacloud/ft/model/CountCloudProductCallTimesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

CountCloudProductCallTimesResult::CountCloudProductCallTimesResult() :
	ServiceResult()
{}

CountCloudProductCallTimesResult::CountCloudProductCallTimesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CountCloudProductCallTimesResult::~CountCloudProductCallTimesResult()
{}

void CountCloudProductCallTimesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["MessageCN"].isNull())
		messageCN_ = value["MessageCN"].asString();

}

std::string CountCloudProductCallTimesResult::getMessage()const
{
	return message_;
}

std::string CountCloudProductCallTimesResult::getData()const
{
	return data_;
}

std::string CountCloudProductCallTimesResult::getCode()const
{
	return code_;
}

bool CountCloudProductCallTimesResult::getSuccess()const
{
	return success_;
}

std::string CountCloudProductCallTimesResult::getMessageCN()const
{
	return messageCN_;
}

