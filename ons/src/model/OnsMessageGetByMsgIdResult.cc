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

#include <alibabacloud/ons/model/OnsMessageGetByMsgIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ons;
using namespace AlibabaCloud::Ons::Model;

OnsMessageGetByMsgIdResult::OnsMessageGetByMsgIdResult() :
	ServiceResult()
{}

OnsMessageGetByMsgIdResult::OnsMessageGetByMsgIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OnsMessageGetByMsgIdResult::~OnsMessageGetByMsgIdResult()
{}

void OnsMessageGetByMsgIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Topic"].isNull())
		data_.topic = dataNode["Topic"].asString();
	if(!dataNode["Flag"].isNull())
		data_.flag = std::stoi(dataNode["Flag"].asString());
	if(!dataNode["Body"].isNull())
		data_.body = dataNode["Body"].asString();
	if(!dataNode["StoreSize"].isNull())
		data_.storeSize = std::stoi(dataNode["StoreSize"].asString());
	if(!dataNode["BornTimestamp"].isNull())
		data_.bornTimestamp = std::stol(dataNode["BornTimestamp"].asString());
	if(!dataNode["BornHost"].isNull())
		data_.bornHost = dataNode["BornHost"].asString();
	if(!dataNode["StoreTimestamp"].isNull())
		data_.storeTimestamp = std::stol(dataNode["StoreTimestamp"].asString());
	if(!dataNode["StoreHost"].isNull())
		data_.storeHost = dataNode["StoreHost"].asString();
	if(!dataNode["MsgId"].isNull())
		data_.msgId = dataNode["MsgId"].asString();
	if(!dataNode["OffsetId"].isNull())
		data_.offsetId = dataNode["OffsetId"].asString();
	if(!dataNode["BodyCRC"].isNull())
		data_.bodyCRC = std::stoi(dataNode["BodyCRC"].asString());
	if(!dataNode["ReconsumeTimes"].isNull())
		data_.reconsumeTimes = std::stoi(dataNode["ReconsumeTimes"].asString());
	if(!dataNode["InstanceId"].isNull())
		data_.instanceId = dataNode["InstanceId"].asString();
	auto allPropertyList = value["PropertyList"]["MessageProperty"];
	for (auto value : allPropertyList)
	{
		Data::MessageProperty messagePropertyObject;
		if(!value["Name"].isNull())
			messagePropertyObject.name = value["Name"].asString();
		if(!value["Value"].isNull())
			messagePropertyObject.value = value["Value"].asString();
		data_.propertyList.push_back(messagePropertyObject);
	}
	if(!value["HelpUrl"].isNull())
		helpUrl_ = value["HelpUrl"].asString();

}

OnsMessageGetByMsgIdResult::Data OnsMessageGetByMsgIdResult::getData()const
{
	return data_;
}

std::string OnsMessageGetByMsgIdResult::getHelpUrl()const
{
	return helpUrl_;
}

