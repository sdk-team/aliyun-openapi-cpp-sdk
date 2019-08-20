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

#include <alibabacloud/drds/model/UpgradeHiStoreInstanceRequest.h>

using AlibabaCloud::Drds::Model::UpgradeHiStoreInstanceRequest;

UpgradeHiStoreInstanceRequest::UpgradeHiStoreInstanceRequest() :
	RpcServiceRequest("drds", "2019-01-23", "UpgradeHiStoreInstance")
{}

UpgradeHiStoreInstanceRequest::~UpgradeHiStoreInstanceRequest()
{}

std::string UpgradeHiStoreInstanceRequest::getHistoreInstanceId()const
{
	return historeInstanceId_;
}

void UpgradeHiStoreInstanceRequest::setHistoreInstanceId(const std::string& historeInstanceId)
{
	historeInstanceId_ = historeInstanceId;
	setCoreParameter("HistoreInstanceId", historeInstanceId);
}

std::string UpgradeHiStoreInstanceRequest::getRegionId()const
{
	return regionId_;
}

void UpgradeHiStoreInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpgradeHiStoreInstanceRequest::getDrdsPassword()const
{
	return drdsPassword_;
}

void UpgradeHiStoreInstanceRequest::setDrdsPassword(const std::string& drdsPassword)
{
	drdsPassword_ = drdsPassword;
	setCoreParameter("DrdsPassword", drdsPassword);
}

std::string UpgradeHiStoreInstanceRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void UpgradeHiStoreInstanceRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

