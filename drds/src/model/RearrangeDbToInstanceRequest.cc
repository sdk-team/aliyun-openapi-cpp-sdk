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

#include <alibabacloud/drds/model/RearrangeDbToInstanceRequest.h>

using AlibabaCloud::Drds::Model::RearrangeDbToInstanceRequest;

RearrangeDbToInstanceRequest::RearrangeDbToInstanceRequest() :
	RpcServiceRequest("drds", "2019-01-23", "RearrangeDbToInstance")
{}

RearrangeDbToInstanceRequest::~RearrangeDbToInstanceRequest()
{}

std::string RearrangeDbToInstanceRequest::getChooseSubDb()const
{
	return chooseSubDb_;
}

void RearrangeDbToInstanceRequest::setChooseSubDb(const std::string& chooseSubDb)
{
	chooseSubDb_ = chooseSubDb;
	setCoreParameter("ChooseSubDb", chooseSubDb);
}

std::vector<std::string> RearrangeDbToInstanceRequest::getInstanceList()const
{
	return instanceList_;
}

void RearrangeDbToInstanceRequest::setInstanceList(const std::vector<std::string>& instanceList)
{
	instanceList_ = instanceList;
	for(int i = 0; i!= instanceList.size(); i++)
		setCoreParameter("InstanceList."+ std::to_string(i), instanceList.at(i));
}

std::string RearrangeDbToInstanceRequest::getDbName()const
{
	return dbName_;
}

void RearrangeDbToInstanceRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string RearrangeDbToInstanceRequest::getOrderId()const
{
	return orderId_;
}

void RearrangeDbToInstanceRequest::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", orderId);
}

std::string RearrangeDbToInstanceRequest::getChooseRds()const
{
	return chooseRds_;
}

void RearrangeDbToInstanceRequest::setChooseRds(const std::string& chooseRds)
{
	chooseRds_ = chooseRds;
	setCoreParameter("ChooseRds", chooseRds);
}

std::string RearrangeDbToInstanceRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void RearrangeDbToInstanceRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string RearrangeDbToInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RearrangeDbToInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

