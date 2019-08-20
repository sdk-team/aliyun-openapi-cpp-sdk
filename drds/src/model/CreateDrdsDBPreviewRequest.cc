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

#include <alibabacloud/drds/model/CreateDrdsDBPreviewRequest.h>

using AlibabaCloud::Drds::Model::CreateDrdsDBPreviewRequest;

CreateDrdsDBPreviewRequest::CreateDrdsDBPreviewRequest() :
	RpcServiceRequest("drds", "2019-01-23", "CreateDrdsDBPreview")
{}

CreateDrdsDBPreviewRequest::~CreateDrdsDBPreviewRequest()
{}

std::vector<CreateDrdsDBPreviewRequest::InstDbName> CreateDrdsDBPreviewRequest::getInstDbName()const
{
	return instDbName_;
}

void CreateDrdsDBPreviewRequest::setInstDbName(const std::vector<InstDbName>& instDbName)
{
	instDbName_ = instDbName;
	int i = 0;
	for(int i = 0; i!= instDbName.size(); i++)	{
		auto obj = instDbName.at(i);
		std::string str ="InstDbName."+ std::to_string(i);
		for(int i = 0; i!= obj.shardDbName.size(); i++)				setCoreParameter(str + ".ShardDbName."+ std::to_string(i), obj.shardDbName.at(i));
		setCoreParameter(str + ".DbInstanceId", obj.dbInstanceId);
	}
}

std::string CreateDrdsDBPreviewRequest::getDbName()const
{
	return dbName_;
}

void CreateDrdsDBPreviewRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string CreateDrdsDBPreviewRequest::getAccountName()const
{
	return accountName_;
}

void CreateDrdsDBPreviewRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string CreateDrdsDBPreviewRequest::getOrderId()const
{
	return orderId_;
}

void CreateDrdsDBPreviewRequest::setOrderId(const std::string& orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", orderId);
}

std::vector<std::string> CreateDrdsDBPreviewRequest::getRdsInstance()const
{
	return rdsInstance_;
}

void CreateDrdsDBPreviewRequest::setRdsInstance(const std::vector<std::string>& rdsInstance)
{
	rdsInstance_ = rdsInstance;
	for(int i = 0; i!= rdsInstance.size(); i++)
		setCoreParameter("RdsInstance."+ std::to_string(i), rdsInstance.at(i));
}

std::string CreateDrdsDBPreviewRequest::getType()const
{
	return type_;
}

void CreateDrdsDBPreviewRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateDrdsDBPreviewRequest::getDbInstType()const
{
	return dbInstType_;
}

void CreateDrdsDBPreviewRequest::setDbInstType(const std::string& dbInstType)
{
	dbInstType_ = dbInstType;
	setCoreParameter("DbInstType", dbInstType);
}

std::string CreateDrdsDBPreviewRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void CreateDrdsDBPreviewRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

bool CreateDrdsDBPreviewRequest::getDbInstanceIsCreating()const
{
	return dbInstanceIsCreating_;
}

void CreateDrdsDBPreviewRequest::setDbInstanceIsCreating(bool dbInstanceIsCreating)
{
	dbInstanceIsCreating_ = dbInstanceIsCreating;
	setCoreParameter("DbInstanceIsCreating", dbInstanceIsCreating ? "true" : "false");
}

std::string CreateDrdsDBPreviewRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDrdsDBPreviewRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

