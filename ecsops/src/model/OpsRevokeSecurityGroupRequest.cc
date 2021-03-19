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

#include <alibabacloud/ecsops/model/OpsRevokeSecurityGroupRequest.h>

using AlibabaCloud::Ecsops::Model::OpsRevokeSecurityGroupRequest;

OpsRevokeSecurityGroupRequest::OpsRevokeSecurityGroupRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsRevokeSecurityGroup")
{
	setMethod(HttpRequest::Method::Post);
}

OpsRevokeSecurityGroupRequest::~OpsRevokeSecurityGroupRequest()
{}

std::string OpsRevokeSecurityGroupRequest::getNicType()const
{
	return nicType_;
}

void OpsRevokeSecurityGroupRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

std::string OpsRevokeSecurityGroupRequest::getPortRange()const
{
	return portRange_;
}

void OpsRevokeSecurityGroupRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string OpsRevokeSecurityGroupRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void OpsRevokeSecurityGroupRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

int OpsRevokeSecurityGroupRequest::getLevel()const
{
	return level_;
}

void OpsRevokeSecurityGroupRequest::setLevel(int level)
{
	level_ = level;
	setParameter("Level", std::to_string(level));
}

std::string OpsRevokeSecurityGroupRequest::getGroupId()const
{
	return groupId_;
}

void OpsRevokeSecurityGroupRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OpsRevokeSecurityGroupRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void OpsRevokeSecurityGroupRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setParameter("SourceCidrIp", sourceCidrIp);
}

std::string OpsRevokeSecurityGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsRevokeSecurityGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsRevokeSecurityGroupRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsRevokeSecurityGroupRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsRevokeSecurityGroupRequest::getSourceGroupId()const
{
	return sourceGroupId_;
}

void OpsRevokeSecurityGroupRequest::setSourceGroupId(const std::string& sourceGroupId)
{
	sourceGroupId_ = sourceGroupId;
	setParameter("SourceGroupId", sourceGroupId);
}

std::string OpsRevokeSecurityGroupRequest::getPolicy()const
{
	return policy_;
}

void OpsRevokeSecurityGroupRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

