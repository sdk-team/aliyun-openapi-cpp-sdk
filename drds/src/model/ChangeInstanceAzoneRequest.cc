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

#include <alibabacloud/drds/model/ChangeInstanceAzoneRequest.h>

using AlibabaCloud::Drds::Model::ChangeInstanceAzoneRequest;

ChangeInstanceAzoneRequest::ChangeInstanceAzoneRequest() :
	RpcServiceRequest("drds", "2019-01-23", "ChangeInstanceAzone")
{}

ChangeInstanceAzoneRequest::~ChangeInstanceAzoneRequest()
{}

std::string ChangeInstanceAzoneRequest::getOriginAzoneId()const
{
	return originAzoneId_;
}

void ChangeInstanceAzoneRequest::setOriginAzoneId(const std::string& originAzoneId)
{
	originAzoneId_ = originAzoneId;
	setCoreParameter("OriginAzoneId", originAzoneId);
}

std::string ChangeInstanceAzoneRequest::getTargetAzoneId()const
{
	return targetAzoneId_;
}

void ChangeInstanceAzoneRequest::setTargetAzoneId(const std::string& targetAzoneId)
{
	targetAzoneId_ = targetAzoneId;
	setCoreParameter("TargetAzoneId", targetAzoneId);
}

std::string ChangeInstanceAzoneRequest::getDrdsRegionId()const
{
	return drdsRegionId_;
}

void ChangeInstanceAzoneRequest::setDrdsRegionId(const std::string& drdsRegionId)
{
	drdsRegionId_ = drdsRegionId;
	setCoreParameter("DrdsRegionId", drdsRegionId);
}

std::string ChangeInstanceAzoneRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ChangeInstanceAzoneRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ChangeInstanceAzoneRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ChangeInstanceAzoneRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

