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

#include <alibabacloud/ecsops/model/OpsCreateSecurityGroupRequest.h>

using AlibabaCloud::Ecsops::Model::OpsCreateSecurityGroupRequest;

OpsCreateSecurityGroupRequest::OpsCreateSecurityGroupRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsCreateSecurityGroup")
{
	setMethod(HttpRequest::Method::Post);
}

OpsCreateSecurityGroupRequest::~OpsCreateSecurityGroupRequest()
{}

long OpsCreateSecurityGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsCreateSecurityGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsCreateSecurityGroupRequest::getGroupName()const
{
	return groupName_;
}

void OpsCreateSecurityGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::string OpsCreateSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsCreateSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsCreateSecurityGroupRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsCreateSecurityGroupRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsCreateSecurityGroupRequest::getGroupDesc()const
{
	return groupDesc_;
}

void OpsCreateSecurityGroupRequest::setGroupDesc(const std::string& groupDesc)
{
	groupDesc_ = groupDesc;
	setParameter("GroupDesc", groupDesc);
}

std::string OpsCreateSecurityGroupRequest::getVpcId()const
{
	return vpcId_;
}

void OpsCreateSecurityGroupRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

