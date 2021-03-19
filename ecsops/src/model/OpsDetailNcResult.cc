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

#include <alibabacloud/ecsops/model/OpsDetailNcResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsDetailNcResult::OpsDetailNcResult() :
	ServiceResult()
{}

OpsDetailNcResult::OpsDetailNcResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsDetailNcResult::~OpsDetailNcResult()
{}

void OpsDetailNcResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["NcId"].isNull())
		ncId_ = value["NcId"].asString();
	if(!value["NcIp"].isNull())
		ncIp_ = value["NcIp"].asString();
	if(!value["ZoneNo"].isNull())
		zoneNo_ = value["ZoneNo"].asString();
	if(!value["RackId"].isNull())
		rackId_ = value["RackId"].asString();
	if(!value["TotalCpu"].isNull())
		totalCpu_ = std::stoi(value["TotalCpu"].asString());
	if(!value["TotalDisk"].isNull())
		totalDisk_ = std::stoi(value["TotalDisk"].asString());
	if(!value["TotalMem"].isNull())
		totalMem_ = std::stoi(value["TotalMem"].asString());
	if(!value["AvailableCpu"].isNull())
		availableCpu_ = std::stoi(value["AvailableCpu"].asString());
	if(!value["AvailableDisk"].isNull())
		availableDisk_ = std::stoi(value["AvailableDisk"].asString());
	if(!value["AvailableMem"].isNull())
		availableMem_ = std::stoi(value["AvailableMem"].asString());

}

std::string OpsDetailNcResult::getRackId()const
{
	return rackId_;
}

int OpsDetailNcResult::getTotalMem()const
{
	return totalMem_;
}

int OpsDetailNcResult::getTotalDisk()const
{
	return totalDisk_;
}

std::string OpsDetailNcResult::getNcId()const
{
	return ncId_;
}

int OpsDetailNcResult::getTotalCpu()const
{
	return totalCpu_;
}

std::string OpsDetailNcResult::getNcIp()const
{
	return ncIp_;
}

int OpsDetailNcResult::getAvailableDisk()const
{
	return availableDisk_;
}

std::string OpsDetailNcResult::getZoneNo()const
{
	return zoneNo_;
}

int OpsDetailNcResult::getAvailableCpu()const
{
	return availableCpu_;
}

int OpsDetailNcResult::getAvailableMem()const
{
	return availableMem_;
}

