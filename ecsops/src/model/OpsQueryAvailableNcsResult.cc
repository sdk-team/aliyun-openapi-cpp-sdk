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

#include <alibabacloud/ecsops/model/OpsQueryAvailableNcsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsQueryAvailableNcsResult::OpsQueryAvailableNcsResult() :
	ServiceResult()
{}

OpsQueryAvailableNcsResult::OpsQueryAvailableNcsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsQueryAvailableNcsResult::~OpsQueryAvailableNcsResult()
{}

void OpsQueryAvailableNcsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNcModelsNode = value["NcModels"]["NcModel"];
	for (auto valueNcModelsNcModel : allNcModelsNode)
	{
		NcModel ncModelsObject;
		if(!valueNcModelsNcModel["NcId"].isNull())
			ncModelsObject.ncId = valueNcModelsNcModel["NcId"].asString();
		if(!valueNcModelsNcModel["NcIp"].isNull())
			ncModelsObject.ncIp = valueNcModelsNcModel["NcIp"].asString();
		if(!valueNcModelsNcModel["ZoneNo"].isNull())
			ncModelsObject.zoneNo = valueNcModelsNcModel["ZoneNo"].asString();
		if(!valueNcModelsNcModel["RackId"].isNull())
			ncModelsObject.rackId = valueNcModelsNcModel["RackId"].asString();
		if(!valueNcModelsNcModel["TotalCpu"].isNull())
			ncModelsObject.totalCpu = std::stoi(valueNcModelsNcModel["TotalCpu"].asString());
		if(!valueNcModelsNcModel["TotalDisk"].isNull())
			ncModelsObject.totalDisk = std::stoi(valueNcModelsNcModel["TotalDisk"].asString());
		if(!valueNcModelsNcModel["TotalMem"].isNull())
			ncModelsObject.totalMem = std::stoi(valueNcModelsNcModel["TotalMem"].asString());
		if(!valueNcModelsNcModel["AvailableCpu"].isNull())
			ncModelsObject.availableCpu = std::stoi(valueNcModelsNcModel["AvailableCpu"].asString());
		if(!valueNcModelsNcModel["AvailableDisk"].isNull())
			ncModelsObject.availableDisk = std::stoi(valueNcModelsNcModel["AvailableDisk"].asString());
		if(!valueNcModelsNcModel["AvailableMem"].isNull())
			ncModelsObject.availableMem = std::stoi(valueNcModelsNcModel["AvailableMem"].asString());
		ncModels_.push_back(ncModelsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int OpsQueryAvailableNcsResult::getTotalCount()const
{
	return totalCount_;
}

int OpsQueryAvailableNcsResult::getPageSize()const
{
	return pageSize_;
}

int OpsQueryAvailableNcsResult::getPageNo()const
{
	return pageNo_;
}

std::vector<OpsQueryAvailableNcsResult::NcModel> OpsQueryAvailableNcsResult::getNcModels()const
{
	return ncModels_;
}

