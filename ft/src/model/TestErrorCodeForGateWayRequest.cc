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

#include <alibabacloud/ft/model/TestErrorCodeForGateWayRequest.h>

using AlibabaCloud::Ft::Model::TestErrorCodeForGateWayRequest;

TestErrorCodeForGateWayRequest::TestErrorCodeForGateWayRequest() :
	RpcServiceRequest("ft", "2018-07-13", "TestErrorCodeForGateWay")
{
	setMethod(HttpRequest::Method::GET);
}

TestErrorCodeForGateWayRequest::~TestErrorCodeForGateWayRequest()
{}

std::string TestErrorCodeForGateWayRequest::getHttpStatusCode()const
{
	return httpStatusCode_;
}

void TestErrorCodeForGateWayRequest::setHttpStatusCode(const std::string& httpStatusCode)
{
	httpStatusCode_ = httpStatusCode;
	setParameter("HttpStatusCode", httpStatusCode);
}

std::string TestErrorCodeForGateWayRequest::getCode()const
{
	return code_;
}

void TestErrorCodeForGateWayRequest::setCode(const std::string& code)
{
	code_ = code;
	setParameter("Code", code);
}

std::string TestErrorCodeForGateWayRequest::getRegionId()const
{
	return regionId_;
}

void TestErrorCodeForGateWayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string TestErrorCodeForGateWayRequest::getSuccess()const
{
	return success_;
}

void TestErrorCodeForGateWayRequest::setSuccess(const std::string& success)
{
	success_ = success;
	setParameter("Success", success);
}

std::string TestErrorCodeForGateWayRequest::getMessage()const
{
	return message_;
}

void TestErrorCodeForGateWayRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

