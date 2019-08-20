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

#include <alibabacloud/drds/model/ChangeInstanceNetworkRequest.h>

using AlibabaCloud::Drds::Model::ChangeInstanceNetworkRequest;

ChangeInstanceNetworkRequest::ChangeInstanceNetworkRequest() :
	RpcServiceRequest("drds", "2019-01-23", "ChangeInstanceNetwork")
{}

ChangeInstanceNetworkRequest::~ChangeInstanceNetworkRequest()
{}

std::string ChangeInstanceNetworkRequest::getVswitchId()const
{
	return vswitchId_;
}

void ChangeInstanceNetworkRequest::setVswitchId(const std::string& vswitchId)
{
	vswitchId_ = vswitchId;
	setCoreParameter("VswitchId", vswitchId);
}

bool ChangeInstanceNetworkRequest::getRetainClassic()const
{
	return retainClassic_;
}

void ChangeInstanceNetworkRequest::setRetainClassic(bool retainClassic)
{
	retainClassic_ = retainClassic;
	setCoreParameter("RetainClassic", retainClassic ? "true" : "false");
}

int ChangeInstanceNetworkRequest::getClassicExpiredDays()const
{
	return classicExpiredDays_;
}

void ChangeInstanceNetworkRequest::setClassicExpiredDays(int classicExpiredDays)
{
	classicExpiredDays_ = classicExpiredDays;
	setCoreParameter("ClassicExpiredDays", std::to_string(classicExpiredDays));
}

std::string ChangeInstanceNetworkRequest::getVpcId()const
{
	return vpcId_;
}

void ChangeInstanceNetworkRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string ChangeInstanceNetworkRequest::getSrcInstanceNetworkType()const
{
	return srcInstanceNetworkType_;
}

void ChangeInstanceNetworkRequest::setSrcInstanceNetworkType(const std::string& srcInstanceNetworkType)
{
	srcInstanceNetworkType_ = srcInstanceNetworkType;
	setCoreParameter("SrcInstanceNetworkType", srcInstanceNetworkType);
}

std::string ChangeInstanceNetworkRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ChangeInstanceNetworkRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string ChangeInstanceNetworkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ChangeInstanceNetworkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

