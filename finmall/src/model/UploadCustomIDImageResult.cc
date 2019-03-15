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

#include <alibabacloud/finmall/model/UploadCustomIDImageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Finmall;
using namespace AlibabaCloud::Finmall::Model;

UploadCustomIDImageResult::UploadCustomIDImageResult() :
	ServiceResult()
{}

UploadCustomIDImageResult::UploadCustomIDImageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UploadCustomIDImageResult::~UploadCustomIDImageResult()
{}

void UploadCustomIDImageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ReturnCode"].isNull())
		data_.returnCode = dataNode["ReturnCode"].asString();
	if(!dataNode["Url"].isNull())
		data_.url = dataNode["Url"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UploadCustomIDImageResult::getMessage()const
{
	return message_;
}

UploadCustomIDImageResult::Data UploadCustomIDImageResult::getData()const
{
	return data_;
}

std::string UploadCustomIDImageResult::getCode()const
{
	return code_;
}

