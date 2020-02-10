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

#include <alibabacloud/ecsdemo/model/CancelInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EcsDemo;
using namespace AlibabaCloud::EcsDemo::Model;

CancelInstanceResult::CancelInstanceResult() :
	ServiceResult()
{}

CancelInstanceResult::CancelInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CancelInstanceResult::~CancelInstanceResult()
{}

void CancelInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceNode = value["Instance"];
	if(!instanceNode["Id"].isNull())
		instance_.id = instanceNode["Id"].asString();
	if(!instanceNode["Name"].isNull())
		instance_.name = instanceNode["Name"].asString();
	if(!instanceNode["Host"].isNull())
		instance_.host = instanceNode["Host"].asString();

}

CancelInstanceResult::Instance CancelInstanceResult::getInstance()const
{
	return instance_;
}

