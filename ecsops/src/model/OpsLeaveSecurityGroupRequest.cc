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

#include <alibabacloud/ecsops/model/OpsLeaveSecurityGroupRequest.h>

using AlibabaCloud::Ecsops::Model::OpsLeaveSecurityGroupRequest;

OpsLeaveSecurityGroupRequest::OpsLeaveSecurityGroupRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsLeaveSecurityGroup")
{
	setMethod(HttpRequest::Method::Post);
}

OpsLeaveSecurityGroupRequest::~OpsLeaveSecurityGroupRequest()
{}

std::string OpsLeaveSecurityGroupRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsLeaveSecurityGroupRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsLeaveSecurityGroupRequest::getGroupId()const
{
	return groupId_;
}

void OpsLeaveSecurityGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OpsLeaveSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsLeaveSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsLeaveSecurityGroupRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsLeaveSecurityGroupRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsLeaveSecurityGroupRequest::getVpcId()const
{
	return vpcId_;
}

void OpsLeaveSecurityGroupRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

