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

#include <alibabacloud/ecsops/model/OpsAuthorizeSecurityGroupEgressRequest.h>

using AlibabaCloud::Ecsops::Model::OpsAuthorizeSecurityGroupEgressRequest;

OpsAuthorizeSecurityGroupEgressRequest::OpsAuthorizeSecurityGroupEgressRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsAuthorizeSecurityGroupEgress")
{
	setMethod(HttpRequest::Method::Post);
}

OpsAuthorizeSecurityGroupEgressRequest::~OpsAuthorizeSecurityGroupEgressRequest()
{}

std::string OpsAuthorizeSecurityGroupEgressRequest::getNicType()const
{
	return nicType_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

std::string OpsAuthorizeSecurityGroupEgressRequest::getPortRange()const
{
	return portRange_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string OpsAuthorizeSecurityGroupEgressRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

int OpsAuthorizeSecurityGroupEgressRequest::getLevel()const
{
	return level_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setLevel(int level)
{
	level_ = level;
	setParameter("Level", std::to_string(level));
}

std::string OpsAuthorizeSecurityGroupEgressRequest::getGroupId()const
{
	return groupId_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OpsAuthorizeSecurityGroupEgressRequest::getDestGroupId()const
{
	return destGroupId_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setParameter("DestGroupId", destGroupId);
}

std::string OpsAuthorizeSecurityGroupEgressRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setParameter("DestCidrIp", destCidrIp);
}

std::string OpsAuthorizeSecurityGroupEgressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsAuthorizeSecurityGroupEgressRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsAuthorizeSecurityGroupEgressRequest::getPolicy()const
{
	return policy_;
}

void OpsAuthorizeSecurityGroupEgressRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

