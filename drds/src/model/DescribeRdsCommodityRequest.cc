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

#include <alibabacloud/drds/model/DescribeRdsCommodityRequest.h>

using AlibabaCloud::Drds::Model::DescribeRdsCommodityRequest;

DescribeRdsCommodityRequest::DescribeRdsCommodityRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeRdsCommodity")
{}

DescribeRdsCommodityRequest::~DescribeRdsCommodityRequest()
{}

std::string DescribeRdsCommodityRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRdsCommodityRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRdsCommodityRequest::getCommodityCode()const
{
	return commodityCode_;
}

void DescribeRdsCommodityRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

std::string DescribeRdsCommodityRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void DescribeRdsCommodityRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string DescribeRdsCommodityRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRdsCommodityRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRdsCommodityRequest::getOrderType()const
{
	return orderType_;
}

void DescribeRdsCommodityRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", orderType);
}

