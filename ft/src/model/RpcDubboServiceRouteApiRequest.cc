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

#include <alibabacloud/ft/model/RpcDubboServiceRouteApiRequest.h>

using AlibabaCloud::Ft::Model::RpcDubboServiceRouteApiRequest;

RpcDubboServiceRouteApiRequest::RpcDubboServiceRouteApiRequest() :
	RpcServiceRequest("ft", "2018-07-13", "RpcDubboServiceRouteApi")
{
	setMethod(HttpRequest::Method::Post);
}

RpcDubboServiceRouteApiRequest::~RpcDubboServiceRouteApiRequest()
{}

std::string RpcDubboServiceRouteApiRequest::getRequiredValue()const
{
	return requiredValue_;
}

void RpcDubboServiceRouteApiRequest::setRequiredValue(const std::string& requiredValue)
{
	requiredValue_ = requiredValue;
	setParameter("RequiredValue", requiredValue);
}

std::string RpcDubboServiceRouteApiRequest::getCode()const
{
	return code_;
}

void RpcDubboServiceRouteApiRequest::setCode(const std::string& code)
{
	code_ = code;
	setParameter("Code", code);
}

int RpcDubboServiceRouteApiRequest::getIntValue()const
{
	return intValue_;
}

void RpcDubboServiceRouteApiRequest::setIntValue(int intValue)
{
	intValue_ = intValue;
	setParameter("IntValue", std::to_string(intValue));
}

bool RpcDubboServiceRouteApiRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RpcDubboServiceRouteApiRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RpcDubboServiceRouteApiRequest::getResultSwitchValue()const
{
	return resultSwitchValue_;
}

void RpcDubboServiceRouteApiRequest::setResultSwitchValue(const std::string& resultSwitchValue)
{
	resultSwitchValue_ = resultSwitchValue;
	setParameter("ResultSwitchValue", resultSwitchValue);
}

std::string RpcDubboServiceRouteApiRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RpcDubboServiceRouteApiRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string RpcDubboServiceRouteApiRequest::getJsonObject()const
{
	return jsonObject_;
}

void RpcDubboServiceRouteApiRequest::setJsonObject(const std::string& jsonObject)
{
	jsonObject_ = jsonObject;
	setParameter("JsonObject", jsonObject);
}

long RpcDubboServiceRouteApiRequest::getSleep()const
{
	return sleep_;
}

void RpcDubboServiceRouteApiRequest::setSleep(long sleep)
{
	sleep_ = sleep;
	setParameter("Sleep", std::to_string(sleep));
}

std::string RpcDubboServiceRouteApiRequest::getRegionId()const
{
	return regionId_;
}

void RpcDubboServiceRouteApiRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RpcDubboServiceRouteApiRequest::getSwitchValue()const
{
	return switchValue_;
}

void RpcDubboServiceRouteApiRequest::setSwitchValue(const std::string& switchValue)
{
	switchValue_ = switchValue;
	setParameter("SwitchValue", switchValue);
}

std::string RpcDubboServiceRouteApiRequest::getJsonObjectList()const
{
	return jsonObjectList_;
}

void RpcDubboServiceRouteApiRequest::setJsonObjectList(const std::string& jsonObjectList)
{
	jsonObjectList_ = jsonObjectList;
	setParameter("JsonObjectList", jsonObjectList);
}

std::string RpcDubboServiceRouteApiRequest::getDefaultValue()const
{
	return defaultValue_;
}

void RpcDubboServiceRouteApiRequest::setDefaultValue(const std::string& defaultValue)
{
	defaultValue_ = defaultValue;
	setParameter("DefaultValue", defaultValue);
}

int RpcDubboServiceRouteApiRequest::getNumberRange()const
{
	return numberRange_;
}

void RpcDubboServiceRouteApiRequest::setNumberRange(int numberRange)
{
	numberRange_ = numberRange;
	setParameter("NumberRange", std::to_string(numberRange));
}

std::string RpcDubboServiceRouteApiRequest::getMessage()const
{
	return message_;
}

void RpcDubboServiceRouteApiRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

std::string RpcDubboServiceRouteApiRequest::getCheckNumberValue()const
{
	return checkNumberValue_;
}

void RpcDubboServiceRouteApiRequest::setCheckNumberValue(const std::string& checkNumberValue)
{
	checkNumberValue_ = checkNumberValue;
	setParameter("CheckNumberValue", checkNumberValue);
}

std::string RpcDubboServiceRouteApiRequest::getHttpStatusCode()const
{
	return httpStatusCode_;
}

void RpcDubboServiceRouteApiRequest::setHttpStatusCode(const std::string& httpStatusCode)
{
	httpStatusCode_ = httpStatusCode;
	setParameter("HttpStatusCode", httpStatusCode);
}

std::string RpcDubboServiceRouteApiRequest::getStringValue()const
{
	return stringValue_;
}

void RpcDubboServiceRouteApiRequest::setStringValue(const std::string& stringValue)
{
	stringValue_ = stringValue;
	setParameter("StringValue", stringValue);
}

int RpcDubboServiceRouteApiRequest::getEnumValue()const
{
	return enumValue_;
}

void RpcDubboServiceRouteApiRequest::setEnumValue(int enumValue)
{
	enumValue_ = enumValue;
	setParameter("EnumValue", std::to_string(enumValue));
}

std::string RpcDubboServiceRouteApiRequest::getSuccess()const
{
	return success_;
}

void RpcDubboServiceRouteApiRequest::setSuccess(const std::string& success)
{
	success_ = success;
	setParameter("Success", success);
}

std::string RpcDubboServiceRouteApiRequest::getOtherParam()const
{
	return otherParam_;
}

void RpcDubboServiceRouteApiRequest::setOtherParam(const std::string& otherParam)
{
	otherParam_ = otherParam;
	setParameter("OtherParam", otherParam);
}

