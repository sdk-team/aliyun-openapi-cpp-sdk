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

#include <alibabacloud/ecsops/model/OpsAllocateIpAddressRequest.h>

using AlibabaCloud::Ecsops::Model::OpsAllocateIpAddressRequest;

OpsAllocateIpAddressRequest::OpsAllocateIpAddressRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsAllocateIpAddress")
{
	setMethod(HttpRequest::Method::Post);
}

OpsAllocateIpAddressRequest::~OpsAllocateIpAddressRequest()
{}

std::string OpsAllocateIpAddressRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsAllocateIpAddressRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsAllocateIpAddressRequest::getVlanId()const
{
	return vlanId_;
}

void OpsAllocateIpAddressRequest::setVlanId(const std::string& vlanId)
{
	vlanId_ = vlanId;
	setParameter("VlanId", vlanId);
}

std::string OpsAllocateIpAddressRequest::getIp()const
{
	return ip_;
}

void OpsAllocateIpAddressRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string OpsAllocateIpAddressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsAllocateIpAddressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsAllocateIpAddressRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsAllocateIpAddressRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

