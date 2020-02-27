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

#include <alibabacloud/ft/model/FtGatedLaunchPolicyApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

FtGatedLaunchPolicyApiResult::FtGatedLaunchPolicyApiResult() :
	ServiceResult()
{}

FtGatedLaunchPolicyApiResult::FtGatedLaunchPolicyApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FtGatedLaunchPolicyApiResult::~FtGatedLaunchPolicyApiResult()
{}

void FtGatedLaunchPolicyApiResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["UnGatedLaunchPolicy"].isNull())
		unGatedLaunchPolicy_ = value["UnGatedLaunchPolicy"].asString();

}

std::string FtGatedLaunchPolicyApiResult::getUnGatedLaunchPolicy()const
{
	return unGatedLaunchPolicy_;
}

