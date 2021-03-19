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

#include <alibabacloud/ecsops/model/OpsDescribeGroupAttributeRequest.h>

using AlibabaCloud::Ecsops::Model::OpsDescribeGroupAttributeRequest;

OpsDescribeGroupAttributeRequest::OpsDescribeGroupAttributeRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsDescribeGroupAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

OpsDescribeGroupAttributeRequest::~OpsDescribeGroupAttributeRequest()
{}

std::string OpsDescribeGroupAttributeRequest::getNicType()const
{
	return nicType_;
}

void OpsDescribeGroupAttributeRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

std::string OpsDescribeGroupAttributeRequest::getGroupId()const
{
	return groupId_;
}

void OpsDescribeGroupAttributeRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OpsDescribeGroupAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsDescribeGroupAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsDescribeGroupAttributeRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsDescribeGroupAttributeRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsDescribeGroupAttributeRequest::getDirection()const
{
	return direction_;
}

void OpsDescribeGroupAttributeRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

