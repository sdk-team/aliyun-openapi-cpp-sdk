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

#include <alibabacloud/r-kvstore/model/DescribeDynamicVerificationListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeDynamicVerificationListResult::DescribeDynamicVerificationListResult() :
	ServiceResult()
{}

DescribeDynamicVerificationListResult::DescribeDynamicVerificationListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDynamicVerificationListResult::~DescribeDynamicVerificationListResult()
{}

void DescribeDynamicVerificationListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["ItemsItem"];
	for (auto value : allItems)
	{
		ItemsItem itemsObject;
		if(!value["InstanceIdA"].isNull())
			itemsObject.instanceIdA = value["InstanceIdA"].asString();
		if(!value["InstanceIdB"].isNull())
			itemsObject.instanceIdB = value["InstanceIdB"].asString();
		if(!value["Key"].isNull())
			itemsObject.key = value["Key"].asString();
		if(!value["KeyType"].isNull())
			itemsObject.keyType = value["KeyType"].asString();
		if(!value["InconsistentType"].isNull())
			itemsObject.inconsistentType = value["InconsistentType"].asString();
		if(!value["OccurTime"].isNull())
			itemsObject.occurTime = value["OccurTime"].asString();
		if(!value["Schema"].isNull())
			itemsObject.schema = value["Schema"].asString();
		auto allInconsistentFileds = value["InconsistentFileds"]["InconsistentFiledsItem"];
		for (auto value : allInconsistentFileds)
		{
			ItemsItem::InconsistentFiledsItem inconsistentFiledsObject;
			if(!value["Filed"].isNull())
				inconsistentFiledsObject.filed = value["Filed"].asString();
			if(!value["FiledInconsistentType"].isNull())
				inconsistentFiledsObject.filedInconsistentType = value["FiledInconsistentType"].asString();
			itemsObject.inconsistentFileds.push_back(inconsistentFiledsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["ReplicaId"].isNull())
		replicaId_ = value["ReplicaId"].asString();
	if(!value["PagNumber"].isNull())
		pagNumber_ = std::stoi(value["PagNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeDynamicVerificationListResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDynamicVerificationListResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::vector<DescribeDynamicVerificationListResult::ItemsItem> DescribeDynamicVerificationListResult::getItems()const
{
	return items_;
}

int DescribeDynamicVerificationListResult::getPagNumber()const
{
	return pagNumber_;
}

std::string DescribeDynamicVerificationListResult::getReplicaId()const
{
	return replicaId_;
}

