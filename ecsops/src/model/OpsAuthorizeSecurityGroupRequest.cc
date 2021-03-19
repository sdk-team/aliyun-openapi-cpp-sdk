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

#include <alibabacloud/ecsops/model/OpsAuthorizeSecurityGroupRequest.h>

using AlibabaCloud::Ecsops::Model::OpsAuthorizeSecurityGroupRequest;

OpsAuthorizeSecurityGroupRequest::OpsAuthorizeSecurityGroupRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsAuthorizeSecurityGroup")
{
	setMethod(HttpRequest::Method::Post);
}

OpsAuthorizeSecurityGroupRequest::~OpsAuthorizeSecurityGroupRequest()
{}

std::string OpsAuthorizeSecurityGroupRequest::getNicType()const
{
	return nicType_;
}

void OpsAuthorizeSecurityGroupRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

std::string OpsAuthorizeSecurityGroupRequest::getPortRange()const
{
	return portRange_;
}

void OpsAuthorizeSecurityGroupRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string OpsAuthorizeSecurityGroupRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void OpsAuthorizeSecurityGroupRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

int OpsAuthorizeSecurityGroupRequest::getLevel()const
{
	return level_;
}

void OpsAuthorizeSecurityGroupRequest::setLevel(int level)
{
	level_ = level;
	setParameter("Level", std::to_string(level));
}

std::string OpsAuthorizeSecurityGroupRequest::getGroupId()const
{
	return groupId_;
}

void OpsAuthorizeSecurityGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OpsAuthorizeSecurityGroupRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void OpsAuthorizeSecurityGroupRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setParameter("SourceCidrIp", sourceCidrIp);
}

std::string OpsAuthorizeSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsAuthorizeSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsAuthorizeSecurityGroupRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsAuthorizeSecurityGroupRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsAuthorizeSecurityGroupRequest::getSourceGroupId()const
{
	return sourceGroupId_;
}

void OpsAuthorizeSecurityGroupRequest::setSourceGroupId(const std::string& sourceGroupId)
{
	sourceGroupId_ = sourceGroupId;
	setParameter("SourceGroupId", sourceGroupId);
}

std::string OpsAuthorizeSecurityGroupRequest::getPolicy()const
{
	return policy_;
}

void OpsAuthorizeSecurityGroupRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

