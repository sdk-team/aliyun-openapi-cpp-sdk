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

#include <alibabacloud/ecsops/model/OpsJoinSecurityGroupRequest.h>

using AlibabaCloud::Ecsops::Model::OpsJoinSecurityGroupRequest;

OpsJoinSecurityGroupRequest::OpsJoinSecurityGroupRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsJoinSecurityGroup")
{
	setMethod(HttpRequest::Method::Post);
}

OpsJoinSecurityGroupRequest::~OpsJoinSecurityGroupRequest()
{}

std::string OpsJoinSecurityGroupRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsJoinSecurityGroupRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsJoinSecurityGroupRequest::getGroupId()const
{
	return groupId_;
}

void OpsJoinSecurityGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OpsJoinSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsJoinSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsJoinSecurityGroupRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsJoinSecurityGroupRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsJoinSecurityGroupRequest::getVpcId()const
{
	return vpcId_;
}

void OpsJoinSecurityGroupRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

