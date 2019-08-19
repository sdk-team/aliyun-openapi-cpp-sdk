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

#include <alibabacloud/r-kvstore/model/DescribeMultiPriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeMultiPriceResult::DescribeMultiPriceResult() :
	ServiceResult()
{}

DescribeMultiPriceResult::DescribeMultiPriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMultiPriceResult::~DescribeMultiPriceResult()
{}

void DescribeMultiPriceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allPrices = value["Prices"]["Price"];
	for (auto value : allPrices)
	{
		Price pricesObject;
		if(!value["InstanceId"].isNull())
			pricesObject.instanceId = value["InstanceId"].asString();
		auto allRules = value["Rules"]["Rule"];
		for (auto value : allRules)
		{
			Price::Rule rulesObject;
			if(!value["RuleDescId"].isNull())
				rulesObject.ruleDescId = std::stol(value["RuleDescId"].asString());
			if(!value["Name"].isNull())
				rulesObject.name = value["Name"].asString();
			if(!value["Title"].isNull())
				rulesObject.title = value["Title"].asString();
			pricesObject.rules.push_back(rulesObject);
		}
		auto orderNode = value["Order"];
		if(!orderNode["OriginalAmount"].isNull())
			pricesObject.order.originalAmount = std::stof(orderNode["OriginalAmount"].asString());
		if(!orderNode["TradeAmount"].isNull())
			pricesObject.order.tradeAmount = std::stof(orderNode["TradeAmount"].asString());
		if(!orderNode["DiscountAmount"].isNull())
			pricesObject.order.discountAmount = std::stof(orderNode["DiscountAmount"].asString());
			auto allRuleIds = orderNode["RuleIds"]["RuleId"];
			for (auto value : allRuleIds)
				pricesObject.order.ruleIds.push_back(value.asString());
		prices_.push_back(pricesObject);
	}

}

std::vector<DescribeMultiPriceResult::Price> DescribeMultiPriceResult::getPrices()const
{
	return prices_;
}

