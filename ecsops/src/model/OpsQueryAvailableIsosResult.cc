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

#include <alibabacloud/ecsops/model/OpsQueryAvailableIsosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsQueryAvailableIsosResult::OpsQueryAvailableIsosResult() :
	ServiceResult()
{}

OpsQueryAvailableIsosResult::OpsQueryAvailableIsosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsQueryAvailableIsosResult::~OpsQueryAvailableIsosResult()
{}

void OpsQueryAvailableIsosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIsosNode = value["Isos"]["Iso"];
	for (auto valueIsosIso : allIsosNode)
	{
		Iso isosObject;
		if(!valueIsosIso["IsoId"].isNull())
			isosObject.isoId = valueIsosIso["IsoId"].asString();
		if(!valueIsosIso["IsoName"].isNull())
			isosObject.isoName = valueIsosIso["IsoName"].asString();
		isos_.push_back(isosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int OpsQueryAvailableIsosResult::getTotalCount()const
{
	return totalCount_;
}

int OpsQueryAvailableIsosResult::getPageSize()const
{
	return pageSize_;
}

int OpsQueryAvailableIsosResult::getPageNo()const
{
	return pageNo_;
}

std::vector<OpsQueryAvailableIsosResult::Iso> OpsQueryAvailableIsosResult::getIsos()const
{
	return isos_;
}

