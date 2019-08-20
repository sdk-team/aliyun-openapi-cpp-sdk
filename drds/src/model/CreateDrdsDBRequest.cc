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

#include <alibabacloud/drds/model/CreateDrdsDBRequest.h>

using AlibabaCloud::Drds::Model::CreateDrdsDBRequest;

CreateDrdsDBRequest::CreateDrdsDBRequest() :
	RpcServiceRequest("drds", "2019-01-23", "CreateDrdsDB")
{}

CreateDrdsDBRequest::~CreateDrdsDBRequest()
{}

std::string CreateDrdsDBRequest::getEncode()const
{
	return encode_;
}

void CreateDrdsDBRequest::setEncode(const std::string& encode)
{
	encode_ = encode;
	setCoreParameter("Encode", encode);
}

std::vector<CreateDrdsDBRequest::InstDbName> CreateDrdsDBRequest::getInstDbName()const
{
	return instDbName_;
}

void CreateDrdsDBRequest::setInstDbName(const std::vector<InstDbName>& instDbName)
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

std::string CreateDrdsDBRequest::getPassword()const
{
	return password_;
}

void CreateDrdsDBRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::vector<CreateDrdsDBRequest::RdsSuperAccount> CreateDrdsDBRequest::getRdsSuperAccount()const
{
	return rdsSuperAccount_;
}

void CreateDrdsDBRequest::setRdsSuperAccount(const std::vector<RdsSuperAccount>& rdsSuperAccount)
{
	rdsSuperAccount_ = rdsSuperAccount;
	int i = 0;
	for(int i = 0; i!= rdsSuperAccount.size(); i++)	{
		auto obj = rdsSuperAccount.at(i);
		std::string str ="RdsSuperAccount."+ std::to_string(i);
		setCoreParameter(str + ".Password", obj.password);
		setCoreParameter(str + ".AccountName", obj.accountName);
		setCoreParameter(str + ".DbInstanceId", obj.dbInstanceId);
	}
}

std::string CreateDrdsDBRequest::getDbName()const
{
	return dbName_;
}

void CreateDrdsDBRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string CreateDrdsDBRequest::getAccountName()const
{
	return accountName_;
}

void CreateDrdsDBRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::vector<std::string> CreateDrdsDBRequest::getRdsInstance()const
{
	return rdsInstance_;
}

void CreateDrdsDBRequest::setRdsInstance(const std::vector<std::string>& rdsInstance)
{
	rdsInstance_ = rdsInstance;
	for(int i = 0; i!= rdsInstance.size(); i++)
		setCoreParameter("RdsInstance."+ std::to_string(i), rdsInstance.at(i));
}

std::string CreateDrdsDBRequest::getType()const
{
	return type_;
}

void CreateDrdsDBRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateDrdsDBRequest::getDbInstType()const
{
	return dbInstType_;
}

void CreateDrdsDBRequest::setDbInstType(const std::string& dbInstType)
{
	dbInstType_ = dbInstType;
	setCoreParameter("DbInstType", dbInstType);
}

std::string CreateDrdsDBRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void CreateDrdsDBRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

bool CreateDrdsDBRequest::getDbInstanceIsCreating()const
{
	return dbInstanceIsCreating_;
}

void CreateDrdsDBRequest::setDbInstanceIsCreating(bool dbInstanceIsCreating)
{
	dbInstanceIsCreating_ = dbInstanceIsCreating;
	setCoreParameter("DbInstanceIsCreating", dbInstanceIsCreating ? "true" : "false");
}

std::string CreateDrdsDBRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDrdsDBRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

