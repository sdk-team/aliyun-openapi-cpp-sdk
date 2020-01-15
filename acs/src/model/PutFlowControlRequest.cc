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

#include <alibabacloud/acs/model/PutFlowControlRequest.h>

using AlibabaCloud::Acs::Model::PutFlowControlRequest;

PutFlowControlRequest::PutFlowControlRequest() :
	RoaServiceRequest("acs", "2015-01-01")
{
	setResourcePath("/FlowControl/[ProductName]/[VersionName]/[ApiName]");
	setMethod(HttpRequest::Method::Put);
}

PutFlowControlRequest::~PutFlowControlRequest()
{}

std::string PutFlowControlRequest::getBodyContent()const
{
	return bodyContent_;
}

void PutFlowControlRequest::setBodyContent(const std::string& bodyContent)
{
	bodyContent_ = bodyContent;
	setCoreParameter("BodyContent", bodyContent);
}

std::string PutFlowControlRequest::getApiName()const
{
	return apiName_;
}

void PutFlowControlRequest::setApiName(const std::string& apiName)
{
	apiName_ = apiName;
	setCoreParameter("ApiName", apiName);
}

std::string PutFlowControlRequest::getProductName()const
{
	return productName_;
}

void PutFlowControlRequest::setProductName(const std::string& productName)
{
	productName_ = productName;
	setCoreParameter("ProductName", productName);
}

std::string PutFlowControlRequest::getVersionName()const
{
	return versionName_;
}

void PutFlowControlRequest::setVersionName(const std::string& versionName)
{
	versionName_ = versionName;
	setCoreParameter("VersionName", versionName);
}

std::string PutFlowControlRequest::getAccept()const
{
	return accept_;
}

void PutFlowControlRequest::setAccept(const std::string& accept)
{
	accept_ = accept;
	setCoreParameter("Accept", accept);
}

