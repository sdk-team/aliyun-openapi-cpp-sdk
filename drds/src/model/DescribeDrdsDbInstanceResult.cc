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

#include <alibabacloud/drds/model/DescribeDrdsDbInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsDbInstanceResult::DescribeDrdsDbInstanceResult() :
	ServiceResult()
{}

DescribeDrdsDbInstanceResult::DescribeDrdsDbInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsDbInstanceResult::~DescribeDrdsDbInstanceResult()
{}

void DescribeDrdsDbInstanceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dbInstanceNode = value["DbInstance"];
	if(!dbInstanceNode["DBInstanceId"].isNull())
		dbInstance_.dBInstanceId = dbInstanceNode["DBInstanceId"].asString();
	if(!dbInstanceNode["ConnectUrl"].isNull())
		dbInstance_.connectUrl = dbInstanceNode["ConnectUrl"].asString();
	if(!dbInstanceNode["Port"].isNull())
		dbInstance_.port = std::stoi(dbInstanceNode["Port"].asString());
	if(!dbInstanceNode["DBInstanceStatus"].isNull())
		dbInstance_.dBInstanceStatus = dbInstanceNode["DBInstanceStatus"].asString();
	if(!dbInstanceNode["DbInstType"].isNull())
		dbInstance_.dbInstType = dbInstanceNode["DbInstType"].asString();
	if(!dbInstanceNode["ReadWeight"].isNull())
		dbInstance_.readWeight = std::stoi(dbInstanceNode["ReadWeight"].asString());
	if(!dbInstanceNode["Engine"].isNull())
		dbInstance_.engine = dbInstanceNode["Engine"].asString();
	if(!dbInstanceNode["EngineVersion"].isNull())
		dbInstance_.engineVersion = dbInstanceNode["EngineVersion"].asString();
	if(!dbInstanceNode["RdsInstType"].isNull())
		dbInstance_.rdsInstType = dbInstanceNode["RdsInstType"].asString();
	if(!dbInstanceNode["PayType"].isNull())
		dbInstance_.payType = dbInstanceNode["PayType"].asString();
	if(!dbInstanceNode["ExpireTime"].isNull())
		dbInstance_.expireTime = dbInstanceNode["ExpireTime"].asString();
	if(!dbInstanceNode["RemainDays"].isNull())
		dbInstance_.remainDays = dbInstanceNode["RemainDays"].asString();
	if(!dbInstanceNode["NetworkType"].isNull())
		dbInstance_.networkType = dbInstanceNode["NetworkType"].asString();
	auto allReadOnlyInstances = value["ReadOnlyInstances"]["ReadOnlyInstance"];
	for (auto value : allReadOnlyInstances)
	{
		DbInstance::ReadOnlyInstance readOnlyInstanceObject;
		if(!value["DBInstanceId"].isNull())
			readOnlyInstanceObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["ConnectUrl"].isNull())
			readOnlyInstanceObject.connectUrl = value["ConnectUrl"].asString();
		if(!value["Port"].isNull())
			readOnlyInstanceObject.port = std::stoi(value["Port"].asString());
		if(!value["DBInstanceStatus"].isNull())
			readOnlyInstanceObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		if(!value["DbInstType"].isNull())
			readOnlyInstanceObject.dbInstType = value["DbInstType"].asString();
		if(!value["ReadWeight"].isNull())
			readOnlyInstanceObject.readWeight = std::stoi(value["ReadWeight"].asString());
		if(!value["Engine"].isNull())
			readOnlyInstanceObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			readOnlyInstanceObject.engineVersion = value["EngineVersion"].asString();
		if(!value["RdsInstType"].isNull())
			readOnlyInstanceObject.rdsInstType = value["RdsInstType"].asString();
		if(!value["PayType"].isNull())
			readOnlyInstanceObject.payType = value["PayType"].asString();
		if(!value["ExpireTime"].isNull())
			readOnlyInstanceObject.expireTime = value["ExpireTime"].asString();
		if(!value["RemainDays"].isNull())
			readOnlyInstanceObject.remainDays = value["RemainDays"].asString();
		if(!value["NetworkType"].isNull())
			readOnlyInstanceObject.networkType = value["NetworkType"].asString();
		if(!value["VersionAction"].isNull())
			readOnlyInstanceObject.versionAction = std::stoi(value["VersionAction"].asString());
		dbInstance_.readOnlyInstances.push_back(readOnlyInstanceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeDrdsDbInstanceResult::DbInstance DescribeDrdsDbInstanceResult::getDbInstance()const
{
	return dbInstance_;
}

bool DescribeDrdsDbInstanceResult::getSuccess()const
{
	return success_;
}

