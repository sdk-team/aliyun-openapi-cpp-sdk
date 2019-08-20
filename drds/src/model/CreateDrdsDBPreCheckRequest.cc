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

#include <alibabacloud/drds/model/CreateDrdsDBPreCheckRequest.h>

using AlibabaCloud::Drds::Model::CreateDrdsDBPreCheckRequest;

CreateDrdsDBPreCheckRequest::CreateDrdsDBPreCheckRequest() :
	RpcServiceRequest("drds", "2019-01-23", "CreateDrdsDBPreCheck")
{}

CreateDrdsDBPreCheckRequest::~CreateDrdsDBPreCheckRequest()
{}

std::string CreateDrdsDBPreCheckRequest::getEncode()const
{
	return encode_;
}

void CreateDrdsDBPreCheckRequest::setEncode(const std::string& encode)
{
	encode_ = encode;
	setCoreParameter("Encode", encode);
}

std::vector<CreateDrdsDBPreCheckRequest::InstDbName> CreateDrdsDBPreCheckRequest::getInstDbName()const
{
	return instDbName_;
}

void CreateDrdsDBPreCheckRequest::setInstDbName(const std::vector<InstDbName>& instDbName)
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

std::string CreateDrdsDBPreCheckRequest::getPassword()const
{
	return password_;
}

void CreateDrdsDBPreCheckRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::vector<CreateDrdsDBPreCheckRequest::RdsSuperAccount> CreateDrdsDBPreCheckRequest::getRdsSuperAccount()const
{
	return rdsSuperAccount_;
}

void CreateDrdsDBPreCheckRequest::setRdsSuperAccount(const std::vector<RdsSuperAccount>& rdsSuperAccount)
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

std::string CreateDrdsDBPreCheckRequest::getDbName()const
{
	return dbName_;
}

void CreateDrdsDBPreCheckRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string CreateDrdsDBPreCheckRequest::getAccountName()const
{
	return accountName_;
}

void CreateDrdsDBPreCheckRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::vector<std::string> CreateDrdsDBPreCheckRequest::getRdsInstance()const
{
	return rdsInstance_;
}

void CreateDrdsDBPreCheckRequest::setRdsInstance(const std::vector<std::string>& rdsInstance)
{
	rdsInstance_ = rdsInstance;
	for(int i = 0; i!= rdsInstance.size(); i++)
		setCoreParameter("RdsInstance."+ std::to_string(i), rdsInstance.at(i));
}

std::string CreateDrdsDBPreCheckRequest::getType()const
{
	return type_;
}

void CreateDrdsDBPreCheckRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateDrdsDBPreCheckRequest::getDbInstType()const
{
	return dbInstType_;
}

void CreateDrdsDBPreCheckRequest::setDbInstType(const std::string& dbInstType)
{
	dbInstType_ = dbInstType;
	setCoreParameter("DbInstType", dbInstType);
}

std::string CreateDrdsDBPreCheckRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void CreateDrdsDBPreCheckRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

bool CreateDrdsDBPreCheckRequest::getDbInstanceIsCreating()const
{
	return dbInstanceIsCreating_;
}

void CreateDrdsDBPreCheckRequest::setDbInstanceIsCreating(bool dbInstanceIsCreating)
{
	dbInstanceIsCreating_ = dbInstanceIsCreating;
	setCoreParameter("DbInstanceIsCreating", dbInstanceIsCreating ? "true" : "false");
}

std::string CreateDrdsDBPreCheckRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDrdsDBPreCheckRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

