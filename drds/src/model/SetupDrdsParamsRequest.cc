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

#include <alibabacloud/drds/model/SetupDrdsParamsRequest.h>

using AlibabaCloud::Drds::Model::SetupDrdsParamsRequest;

SetupDrdsParamsRequest::SetupDrdsParamsRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SetupDrdsParams")
{}

SetupDrdsParamsRequest::~SetupDrdsParamsRequest()
{}

std::string SetupDrdsParamsRequest::getParamLevel()const
{
	return paramLevel_;
}

void SetupDrdsParamsRequest::setParamLevel(const std::string& paramLevel)
{
	paramLevel_ = paramLevel;
	setCoreParameter("ParamLevel", paramLevel);
}

std::vector<SetupDrdsParamsRequest::Data> SetupDrdsParamsRequest::getData()const
{
	return data_;
}

void SetupDrdsParamsRequest::setData(const std::vector<Data>& data)
{
	data_ = data;
	int i = 0;
	for(int i = 0; i!= data.size(); i++)	{
		auto obj = data.at(i);
		std::string str ="Data."+ std::to_string(i);
		setCoreParameter(str + ".ParamType", obj.paramType);
		setCoreParameter(str + ".DbName", obj.dbName);
		setCoreParameter(str + ".ParamRanges", obj.paramRanges);
		setCoreParameter(str + ".ParamVariableName", obj.paramVariableName);
		setCoreParameter(str + ".ParamValue", obj.paramValue);
	}
}

std::string SetupDrdsParamsRequest::getRegionId()const
{
	return regionId_;
}

void SetupDrdsParamsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SetupDrdsParamsRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SetupDrdsParamsRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

