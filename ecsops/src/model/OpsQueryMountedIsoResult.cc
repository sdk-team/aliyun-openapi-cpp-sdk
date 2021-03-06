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

#include <alibabacloud/ecsops/model/OpsQueryMountedIsoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsQueryMountedIsoResult::OpsQueryMountedIsoResult() :
	ServiceResult()
{}

OpsQueryMountedIsoResult::OpsQueryMountedIsoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsQueryMountedIsoResult::~OpsQueryMountedIsoResult()
{}

void OpsQueryMountedIsoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IsoId"].isNull())
		isoId_ = value["IsoId"].asString();
	if(!value["IsoName"].isNull())
		isoName_ = value["IsoName"].asString();

}

std::string OpsQueryMountedIsoResult::getIsoName()const
{
	return isoName_;
}

std::string OpsQueryMountedIsoResult::getIsoId()const
{
	return isoId_;
}

