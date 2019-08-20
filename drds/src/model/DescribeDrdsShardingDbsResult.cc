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

#include <alibabacloud/drds/model/DescribeDrdsShardingDbsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsShardingDbsResult::DescribeDrdsShardingDbsResult() :
	ServiceResult()
{}

DescribeDrdsShardingDbsResult::DescribeDrdsShardingDbsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsShardingDbsResult::~DescribeDrdsShardingDbsResult()
{}

void DescribeDrdsShardingDbsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allShardingDbs = value["ShardingDbs"]["ShardingDb"];
	for (auto value : allShardingDbs)
	{
		ShardingDb shardingDbsObject;
		if(!value["ShardingDbName"].isNull())
			shardingDbsObject.shardingDbName = value["ShardingDbName"].asString();
		if(!value["DbInstanceId"].isNull())
			shardingDbsObject.dbInstanceId = value["DbInstanceId"].asString();
		if(!value["GroupName"].isNull())
			shardingDbsObject.groupName = value["GroupName"].asString();
		if(!value["DbStatus"].isNull())
			shardingDbsObject.dbStatus = value["DbStatus"].asString();
		if(!value["DbType"].isNull())
			shardingDbsObject.dbType = value["DbType"].asString();
		if(!value["MinPoolSize"].isNull())
			shardingDbsObject.minPoolSize = std::stoi(value["MinPoolSize"].asString());
		if(!value["MaxPoolSize"].isNull())
			shardingDbsObject.maxPoolSize = std::stoi(value["MaxPoolSize"].asString());
		if(!value["IdleTimeOut"].isNull())
			shardingDbsObject.idleTimeOut = std::stoi(value["IdleTimeOut"].asString());
		if(!value["BlockingTimeout"].isNull())
			shardingDbsObject.blockingTimeout = std::stoi(value["BlockingTimeout"].asString());
		if(!value["ConnectionProperties"].isNull())
			shardingDbsObject.connectionProperties = value["ConnectionProperties"].asString();
		if(!value["PreparedStatementCacheSize"].isNull())
			shardingDbsObject.preparedStatementCacheSize = std::stoi(value["PreparedStatementCacheSize"].asString());
		if(!value["UserName"].isNull())
			shardingDbsObject.userName = value["UserName"].asString();
		if(!value["ConnectUrl"].isNull())
			shardingDbsObject.connectUrl = value["ConnectUrl"].asString();
		shardingDbs_.push_back(shardingDbsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsShardingDbsResult::ShardingDb> DescribeDrdsShardingDbsResult::getShardingDbs()const
{
	return shardingDbs_;
}

bool DescribeDrdsShardingDbsResult::getSuccess()const
{
	return success_;
}

