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

#include <alibabacloud/drds/model/CheckRdsExpandStatusRequest.h>

using AlibabaCloud::Drds::Model::CheckRdsExpandStatusRequest;

CheckRdsExpandStatusRequest::CheckRdsExpandStatusRequest() :
	RpcServiceRequest("drds", "2019-01-23", "CheckRdsExpandStatus")
{}

CheckRdsExpandStatusRequest::~CheckRdsExpandStatusRequest()
{}

std::vector<std::string> CheckRdsExpandStatusRequest::getInstanceList()const
{
	return instanceList_;
}

void CheckRdsExpandStatusRequest::setInstanceList(const std::vector<std::string>& instanceList)
{
	instanceList_ = instanceList;
	for(int i = 0; i!= instanceList.size(); i++)
		setCoreParameter("InstanceList."+ std::to_string(i), instanceList.at(i));
}

std::string CheckRdsExpandStatusRequest::getDbName()const
{
	return dbName_;
}

void CheckRdsExpandStatusRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string CheckRdsExpandStatusRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void CheckRdsExpandStatusRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string CheckRdsExpandStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckRdsExpandStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

