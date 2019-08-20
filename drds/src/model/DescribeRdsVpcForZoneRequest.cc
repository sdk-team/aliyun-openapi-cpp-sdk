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

#include <alibabacloud/drds/model/DescribeRdsVpcForZoneRequest.h>

using AlibabaCloud::Drds::Model::DescribeRdsVpcForZoneRequest;

DescribeRdsVpcForZoneRequest::DescribeRdsVpcForZoneRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeRdsVpcForZone")
{}

DescribeRdsVpcForZoneRequest::~DescribeRdsVpcForZoneRequest()
{}

std::string DescribeRdsVpcForZoneRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRdsVpcForZoneRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRdsVpcForZoneRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeRdsVpcForZoneRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string DescribeRdsVpcForZoneRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRdsVpcForZoneRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

