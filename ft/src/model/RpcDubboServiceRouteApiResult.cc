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

#include <alibabacloud/ft/model/RpcDubboServiceRouteApiResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

RpcDubboServiceRouteApiResult::RpcDubboServiceRouteApiResult() :
	ServiceResult()
{}

RpcDubboServiceRouteApiResult::RpcDubboServiceRouteApiResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RpcDubboServiceRouteApiResult::~RpcDubboServiceRouteApiResult()
{}

void RpcDubboServiceRouteApiResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allArrayValueNode = value["ArrayValue"]["arrayItem"];
	for (auto valueArrayValuearrayItem : allArrayValueNode)
	{
		ArrayItem arrayValueObject;
		if(!valueArrayValuearrayItem["ArrayChildValue"].isNull())
			arrayValueObject.arrayChildValue = valueArrayValuearrayItem["ArrayChildValue"].asString();
		arrayValue_.push_back(arrayValueObject);
	}
	auto allL1ArrayNode = value["L1Array"]["L1ArrayItem"];
	for (auto valueL1ArrayL1ArrayItem : allL1ArrayNode)
	{
		L1ArrayItem l1ArrayObject;
		if(!valueL1ArrayL1ArrayItem["L1Member1"].isNull())
			l1ArrayObject.l1Member1 = valueL1ArrayL1ArrayItem["L1Member1"].asString();
		auto allL2ArrayNode = valueL1ArrayL1ArrayItem["L2Array"]["L2ArrayItem"];
		for (auto valueL1ArrayL1ArrayItemL2ArrayL2ArrayItem : allL2ArrayNode)
		{
			L1ArrayItem::L2ArrayItem l2ArrayObject;
			if(!valueL1ArrayL1ArrayItemL2ArrayL2ArrayItem["L2Member1"].isNull())
				l2ArrayObject.l2Member1 = valueL1ArrayL1ArrayItemL2ArrayL2ArrayItem["L2Member1"].asString();
			auto allL3ArrayNode = valueL1ArrayL1ArrayItemL2ArrayL2ArrayItem["L3Array"]["L3ArrayItem"];
			for (auto valueL1ArrayL1ArrayItemL2ArrayL2ArrayItemL3ArrayL3ArrayItem : allL3ArrayNode)
			{
				L1ArrayItem::L2ArrayItem::L3ArrayItem l3ArrayObject;
				if(!valueL1ArrayL1ArrayItemL2ArrayL2ArrayItemL3ArrayL3ArrayItem["L3Member1"].isNull())
					l3ArrayObject.l3Member1 = valueL1ArrayL1ArrayItemL2ArrayL2ArrayItemL3ArrayL3ArrayItem["L3Member1"].asString();
				l2ArrayObject.l3Array.push_back(l3ArrayObject);
			}
			l1ArrayObject.l2Array.push_back(l2ArrayObject);
		}
		auto l1StructNode = value["L1Struct"];
		if(!l1StructNode["L1StructMember"].isNull())
			l1ArrayObject.l1Struct.l1StructMember = l1StructNode["L1StructMember"].asString();
		l1Array_.push_back(l1ArrayObject);
	}
	auto allNullArrayValueNode = value["NullArrayValue"]["arrayItem"];
	for (auto valueNullArrayValuearrayItem : allNullArrayValueNode)
	{
		ArrayItem nullArrayValueObject;
		if(!valueNullArrayValuearrayItem["ArrayChildValue"].isNull())
			nullArrayValueObject.arrayChildValue = valueNullArrayValuearrayItem["ArrayChildValue"].asString();
		nullArrayValue_.push_back(nullArrayValueObject);
	}
	auto nullToEmptyStructValueNode = value["NullToEmptyStructValue"];
	if(!nullToEmptyStructValueNode["NullToEmptyStructChildValue"].isNull())
		nullToEmptyStructValue_.nullToEmptyStructChildValue = nullToEmptyStructValueNode["NullToEmptyStructChildValue"].asString();
	auto structValueNode = value["StructValue"];
	if(!structValueNode["StructChildValue"].isNull())
		structValue_.structChildValue = structValueNode["StructChildValue"].asString();
	if(!value["Age"].isNull())
		age_ = value["Age"].asString();
	if(!value["CheckNumberValue"].isNull())
		checkNumberValue_ = value["CheckNumberValue"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DefaultValue"].isNull())
		defaultValue_ = value["DefaultValue"].asString();
	if(!value["EnumValue"].isNull())
		enumValue_ = value["EnumValue"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();
	if(!value["IntValue"].isNull())
		intValue_ = value["IntValue"].asString();
	if(!value["JsonListStrig"].isNull())
		jsonListStrig_ = value["JsonListStrig"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["NullToEmptyValue"].isNull())
		nullToEmptyValue_ = value["NullToEmptyValue"].asString();
	if(!value["NumberRange"].isNull())
		numberRange_ = value["NumberRange"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["RequiredValue"].isNull())
		requiredValue_ = value["RequiredValue"].asString();
	if(!value["ResultSwitchValue"].isNull())
		resultSwitchValue_ = value["ResultSwitchValue"].asString();
	if(!value["StringValue"].isNull())
		stringValue_ = value["StringValue"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString();
	if(!value["SwitchValue"].isNull())
		switchValue_ = value["SwitchValue"].asString();
	if(!value["ak_mfa_present"].isNull())
		ak_mfa_present_ = value["ak_mfa_present"].asString();
	if(!value["app_ip"].isNull())
		app_ip_ = value["app_ip"].asString();
	if(!value["callerBid"].isNull())
		callerBid_ = value["callerBid"].asString();
	if(!value["callerParentId"].isNull())
		callerParentId_ = value["callerParentId"].asString();
	if(!value["callerType"].isNull())
		callerType_ = value["callerType"].asString();
	if(!value["callerUid"].isNull())
		callerUid_ = value["callerUid"].asString();
	if(!value["proxy_original_security_transport"].isNull())
		proxy_original_security_transport_ = value["proxy_original_security_transport"].asString();
	if(!value["proxy_original_source_ip"].isNull())
		proxy_original_source_ip_ = value["proxy_original_source_ip"].asString();
	if(!value["proxy_trust_transport_info"].isNull())
		proxy_trust_transport_info_ = value["proxy_trust_transport_info"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["resourceOwnerId"].isNull())
		resourceOwnerId_ = value["resourceOwnerId"].asString();
	if(!value["security_transport"].isNull())
		security_transport_ = value["security_transport"].asString();

}

std::string RpcDubboServiceRouteApiResult::getMessage()const
{
	return message_;
}

std::string RpcDubboServiceRouteApiResult::getEnumValue()const
{
	return enumValue_;
}

std::string RpcDubboServiceRouteApiResult::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

std::string RpcDubboServiceRouteApiResult::getCallerParentId()const
{
	return callerParentId_;
}

RpcDubboServiceRouteApiResult::StructValue RpcDubboServiceRouteApiResult::getStructValue()const
{
	return structValue_;
}

std::string RpcDubboServiceRouteApiResult::getCallerType()const
{
	return callerType_;
}

std::string RpcDubboServiceRouteApiResult::getSuccess()const
{
	return success_;
}

std::string RpcDubboServiceRouteApiResult::getCallerUid()const
{
	return callerUid_;
}

std::string RpcDubboServiceRouteApiResult::getName()const
{
	return name_;
}

std::string RpcDubboServiceRouteApiResult::getDefaultValue()const
{
	return defaultValue_;
}

std::string RpcDubboServiceRouteApiResult::getJsonListStrig()const
{
	return jsonListStrig_;
}

std::string RpcDubboServiceRouteApiResult::getSecurity_transport()const
{
	return security_transport_;
}

RpcDubboServiceRouteApiResult::NullToEmptyStructValue RpcDubboServiceRouteApiResult::getNullToEmptyStructValue()const
{
	return nullToEmptyStructValue_;
}

std::string RpcDubboServiceRouteApiResult::getResultSwitchValue()const
{
	return resultSwitchValue_;
}

std::string RpcDubboServiceRouteApiResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string RpcDubboServiceRouteApiResult::getStringValue()const
{
	return stringValue_;
}

std::string RpcDubboServiceRouteApiResult::getIntValue()const
{
	return intValue_;
}

std::string RpcDubboServiceRouteApiResult::getAge()const
{
	return age_;
}

std::string RpcDubboServiceRouteApiResult::getRequestId()const
{
	return requestId_;
}

std::string RpcDubboServiceRouteApiResult::getNullToEmptyValue()const
{
	return nullToEmptyValue_;
}

std::string RpcDubboServiceRouteApiResult::getApp_ip()const
{
	return app_ip_;
}

std::string RpcDubboServiceRouteApiResult::getCode()const
{
	return code_;
}

std::string RpcDubboServiceRouteApiResult::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

std::string RpcDubboServiceRouteApiResult::getNumberRange()const
{
	return numberRange_;
}

std::string RpcDubboServiceRouteApiResult::getSwitchValue()const
{
	return switchValue_;
}

std::string RpcDubboServiceRouteApiResult::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

std::vector<RpcDubboServiceRouteApiResult::L1ArrayItem> RpcDubboServiceRouteApiResult::getL1Array()const
{
	return l1Array_;
}

std::string RpcDubboServiceRouteApiResult::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

std::vector<RpcDubboServiceRouteApiResult::ArrayItem> RpcDubboServiceRouteApiResult::getNullArrayValue()const
{
	return nullArrayValue_;
}

std::string RpcDubboServiceRouteApiResult::getCheckNumberValue()const
{
	return checkNumberValue_;
}

std::string RpcDubboServiceRouteApiResult::getCallerBid()const
{
	return callerBid_;
}

std::string RpcDubboServiceRouteApiResult::getRegionId()const
{
	return regionId_;
}

std::vector<RpcDubboServiceRouteApiResult::ArrayItem> RpcDubboServiceRouteApiResult::getArrayValue()const
{
	return arrayValue_;
}

std::string RpcDubboServiceRouteApiResult::getRequiredValue()const
{
	return requiredValue_;
}

std::string RpcDubboServiceRouteApiResult::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

