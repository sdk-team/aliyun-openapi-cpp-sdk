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

#include <alibabacloud/drds/model/DescribeDrdsDbInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsDbInstancesResult::DescribeDrdsDbInstancesResult() :
	ServiceResult()
{}

DescribeDrdsDbInstancesResult::DescribeDrdsDbInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsDbInstancesResult::~DescribeDrdsDbInstancesResult()
{}

void DescribeDrdsDbInstancesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDbInstances = value["DbInstances"]["DbInstance"];
	for (auto value : allDbInstances)
	{
		DbInstance dbInstancesObject;
		if(!value["DBInstanceId"].isNull())
			dbInstancesObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["ConnectUrl"].isNull())
			dbInstancesObject.connectUrl = value["ConnectUrl"].asString();
		if(!value["Port"].isNull())
			dbInstancesObject.port = std::stoi(value["Port"].asString());
		if(!value["DBInstanceStatus"].isNull())
			dbInstancesObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		if(!value["DbInstType"].isNull())
			dbInstancesObject.dbInstType = value["DbInstType"].asString();
		if(!value["ReadWeight"].isNull())
			dbInstancesObject.readWeight = std::stoi(value["ReadWeight"].asString());
		if(!value["NetworkType"].isNull())
			dbInstancesObject.networkType = value["NetworkType"].asString();
		if(!value["Engine"].isNull())
			dbInstancesObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			dbInstancesObject.engineVersion = value["EngineVersion"].asString();
		if(!value["RdsInstType"].isNull())
			dbInstancesObject.rdsInstType = value["RdsInstType"].asString();
		if(!value["PayType"].isNull())
			dbInstancesObject.payType = value["PayType"].asString();
		if(!value["ExpireTime"].isNull())
			dbInstancesObject.expireTime = value["ExpireTime"].asString();
		if(!value["RemainDays"].isNull())
			dbInstancesObject.remainDays = std::stoi(value["RemainDays"].asString());
		auto allReadOnlyInstances = value["ReadOnlyInstances"]["ReadOnlyInstance"];
		for (auto value : allReadOnlyInstances)
		{
			DbInstance::ReadOnlyInstance readOnlyInstancesObject;
			if(!value["InstanceName"].isNull())
				readOnlyInstancesObject.instanceName = value["InstanceName"].asString();
			if(!value["ConnectUrl"].isNull())
				readOnlyInstancesObject.connectUrl = value["ConnectUrl"].asString();
			if(!value["Port"].isNull())
				readOnlyInstancesObject.port = std::stoi(value["Port"].asString());
			if(!value["DBInstanceStatus"].isNull())
				readOnlyInstancesObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
			if(!value["DbInstType"].isNull())
				readOnlyInstancesObject.dbInstType = value["DbInstType"].asString();
			if(!value["ReadWeight"].isNull())
				readOnlyInstancesObject.readWeight = std::stoi(value["ReadWeight"].asString());
			if(!value["NetworkType"].isNull())
				readOnlyInstancesObject.networkType = value["NetworkType"].asString();
			if(!value["Engine"].isNull())
				readOnlyInstancesObject.engine = value["Engine"].asString();
			if(!value["EngineVersion"].isNull())
				readOnlyInstancesObject.engineVersion = value["EngineVersion"].asString();
			if(!value["RdsInstType"].isNull())
				readOnlyInstancesObject.rdsInstType = value["RdsInstType"].asString();
			if(!value["PayType"].isNull())
				readOnlyInstancesObject.payType = value["PayType"].asString();
			if(!value["ExpireTime"].isNull())
				readOnlyInstancesObject.expireTime = value["ExpireTime"].asString();
			if(!value["RemainDays"].isNull())
				readOnlyInstancesObject.remainDays = std::stoi(value["RemainDays"].asString());
			dbInstancesObject.readOnlyInstances.push_back(readOnlyInstancesObject);
		}
		dbInstances_.push_back(dbInstancesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::string DescribeDrdsDbInstancesResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeDrdsDbInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeDrdsDbInstancesResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDrdsDbInstancesResult::DbInstance> DescribeDrdsDbInstancesResult::getDbInstances()const
{
	return dbInstances_;
}

bool DescribeDrdsDbInstancesResult::getSuccess()const
{
	return success_;
}

