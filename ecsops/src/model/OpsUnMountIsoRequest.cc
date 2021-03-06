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

#include <alibabacloud/ecsops/model/OpsUnMountIsoRequest.h>

using AlibabaCloud::Ecsops::Model::OpsUnMountIsoRequest;

OpsUnMountIsoRequest::OpsUnMountIsoRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsUnMountIso")
{
	setMethod(HttpRequest::Method::Post);
}

OpsUnMountIsoRequest::~OpsUnMountIsoRequest()
{}

std::string OpsUnMountIsoRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsUnMountIsoRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

std::string OpsUnMountIsoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsUnMountIsoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsUnMountIsoRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsUnMountIsoRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsUnMountIsoRequest::getIsoId()const
{
	return isoId_;
}

void OpsUnMountIsoRequest::setIsoId(const std::string& isoId)
{
	isoId_ = isoId;
	setParameter("IsoId", isoId);
}

