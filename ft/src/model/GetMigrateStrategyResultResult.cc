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

#include <alibabacloud/ft/model/GetMigrateStrategyResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

GetMigrateStrategyResultResult::GetMigrateStrategyResultResult() :
	ServiceResult()
{}

GetMigrateStrategyResultResult::GetMigrateStrategyResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMigrateStrategyResultResult::~GetMigrateStrategyResultResult()
{}

void GetMigrateStrategyResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["TotalItem"].isNull())
		data_.totalItem = std::stoi(dataNode["TotalItem"].asString());
	if(!dataNode["TestNull"].isNull())
		data_.testNull = dataNode["TestNull"].asString();
	auto allDataListNode = dataNode["DataList"]["DataListItem"];
	for (auto dataNodeDataListDataListItem : allDataListNode)
	{
		Data::DataListItem dataListItemObject;
		if(!dataNodeDataListDataListItem["Id"].isNull())
			dataListItemObject.id = std::stol(dataNodeDataListDataListItem["Id"].asString());
		if(!dataNodeDataListDataListItem["CreateTime"].isNull())
			dataListItemObject.createTime = dataNodeDataListDataListItem["CreateTime"].asString();
		if(!dataNodeDataListDataListItem["ModifiedTime"].isNull())
			dataListItemObject.modifiedTime = dataNodeDataListDataListItem["ModifiedTime"].asString();
		if(!dataNodeDataListDataListItem["RecordVersion"].isNull())
			dataListItemObject.recordVersion = std::stoi(dataNodeDataListDataListItem["RecordVersion"].asString());
		if(!dataNodeDataListDataListItem["Env"].isNull())
			dataListItemObject.env = dataNodeDataListDataListItem["Env"].asString();
		if(!dataNodeDataListDataListItem["Product"].isNull())
			dataListItemObject.product = dataNodeDataListDataListItem["Product"].asString();
		if(!dataNodeDataListDataListItem["Version"].isNull())
			dataListItemObject.version = dataNodeDataListDataListItem["Version"].asString();
		if(!dataNodeDataListDataListItem["Api"].isNull())
			dataListItemObject.api = dataNodeDataListDataListItem["Api"].asString();
		if(!dataNodeDataListDataListItem["StrategyName"].isNull())
			dataListItemObject.strategyName = dataNodeDataListDataListItem["StrategyName"].asString();
		if(!dataNodeDataListDataListItem["ParentName"].isNull())
			dataListItemObject.parentName = dataNodeDataListDataListItem["ParentName"].asString();
		if(!dataNodeDataListDataListItem["Type"].isNull())
			dataListItemObject.type = dataNodeDataListDataListItem["Type"].asString();
		if(!dataNodeDataListDataListItem["FlowSpecial"].isNull())
			dataListItemObject.flowSpecial = dataNodeDataListDataListItem["FlowSpecial"].asString();
		if(!dataNodeDataListDataListItem["DataItem"].isNull())
			dataListItemObject.dataItem = dataNodeDataListDataListItem["DataItem"].asString();
		if(!dataNodeDataListDataListItem["Status"].isNull())
			dataListItemObject.status = dataNodeDataListDataListItem["Status"].asString();
		auto modifierNode = value["Modifier"];
		if(!modifierNode["Id"].isNull())
			dataListItemObject.modifier.id = modifierNode["Id"].asString();
		if(!modifierNode["Name"].isNull())
			dataListItemObject.modifier.name = modifierNode["Name"].asString();
		if(!modifierNode["BucId"].isNull())
			dataListItemObject.modifier.bucId = modifierNode["BucId"].asString();
		data_.dataList.push_back(dataListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["MessageCN"].isNull())
		messageCN_ = value["MessageCN"].asString();
	if(!value["NullValue"].isNull())
		nullValue_ = value["NullValue"].asString();

}

std::string GetMigrateStrategyResultResult::getNullValue()const
{
	return nullValue_;
}

std::string GetMigrateStrategyResultResult::getMessage()const
{
	return message_;
}

GetMigrateStrategyResultResult::Data GetMigrateStrategyResultResult::getData()const
{
	return data_;
}

std::string GetMigrateStrategyResultResult::getCode()const
{
	return code_;
}

bool GetMigrateStrategyResultResult::getSuccess()const
{
	return success_;
}

std::string GetMigrateStrategyResultResult::getMessageCN()const
{
	return messageCN_;
}

