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

#include <alibabacloud/ecsops/model/OpsRevokeSecurityGroupEgressRequest.h>

using AlibabaCloud::Ecsops::Model::OpsRevokeSecurityGroupEgressRequest;

OpsRevokeSecurityGroupEgressRequest::OpsRevokeSecurityGroupEgressRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsRevokeSecurityGroupEgress")
{
	setMethod(HttpRequest::Method::Post);
}

OpsRevokeSecurityGroupEgressRequest::~OpsRevokeSecurityGroupEgressRequest()
{}

std::string OpsRevokeSecurityGroupEgressRequest::getNicType()const
{
	return nicType_;
}

void OpsRevokeSecurityGroupEgressRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

std::string OpsRevokeSecurityGroupEgressRequest::getPortRange()const
{
	return portRange_;
}

void OpsRevokeSecurityGroupEgressRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string OpsRevokeSecurityGroupEgressRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void OpsRevokeSecurityGroupEgressRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

int OpsRevokeSecurityGroupEgressRequest::getLevel()const
{
	return level_;
}

void OpsRevokeSecurityGroupEgressRequest::setLevel(int level)
{
	level_ = level;
	setParameter("Level", std::to_string(level));
}

std::string OpsRevokeSecurityGroupEgressRequest::getGroupId()const
{
	return groupId_;
}

void OpsRevokeSecurityGroupEgressRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OpsRevokeSecurityGroupEgressRequest::getDestGroupId()const
{
	return destGroupId_;
}

void OpsRevokeSecurityGroupEgressRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setParameter("DestGroupId", destGroupId);
}

std::string OpsRevokeSecurityGroupEgressRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void OpsRevokeSecurityGroupEgressRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setParameter("DestCidrIp", destCidrIp);
}

std::string OpsRevokeSecurityGroupEgressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsRevokeSecurityGroupEgressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsRevokeSecurityGroupEgressRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsRevokeSecurityGroupEgressRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsRevokeSecurityGroupEgressRequest::getPolicy()const
{
	return policy_;
}

void OpsRevokeSecurityGroupEgressRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

