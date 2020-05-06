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

#include <alibabacloud/account/model/GetPubKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Account;
using namespace AlibabaCloud::Account::Model;

GetPubKeyResult::GetPubKeyResult() :
	ServiceResult()
{}

GetPubKeyResult::GetPubKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPubKeyResult::~GetPubKeyResult()
{}

void GetPubKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["PubKey"].isNull())
		pubKey_ = value["PubKey"].asString();
	if(!value["OwnerId"].isNull())
		ownerId_ = value["OwnerId"].asString();
	if(!value["KeyType"].isNull())
		keyType_ = value["KeyType"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["AppKey"].isNull())
		appKey_ = value["AppKey"].asString();

}

std::string GetPubKeyResult::getPubKey()const
{
	return pubKey_;
}

std::string GetPubKeyResult::getOwnerId()const
{
	return ownerId_;
}

std::string GetPubKeyResult::getKeyType()const
{
	return keyType_;
}

std::string GetPubKeyResult::getMessage()const
{
	return message_;
}

std::string GetPubKeyResult::getCreateTime()const
{
	return createTime_;
}

std::string GetPubKeyResult::getAppKey()const
{
	return appKey_;
}

std::string GetPubKeyResult::getCode()const
{
	return code_;
}

