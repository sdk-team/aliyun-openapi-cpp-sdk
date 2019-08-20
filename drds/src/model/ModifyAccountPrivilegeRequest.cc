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

#include <alibabacloud/drds/model/ModifyAccountPrivilegeRequest.h>

using AlibabaCloud::Drds::Model::ModifyAccountPrivilegeRequest;

ModifyAccountPrivilegeRequest::ModifyAccountPrivilegeRequest() :
	RpcServiceRequest("drds", "2019-01-23", "ModifyAccountPrivilege")
{}

ModifyAccountPrivilegeRequest::~ModifyAccountPrivilegeRequest()
{}

std::string ModifyAccountPrivilegeRequest::getAccountName()const
{
	return accountName_;
}

void ModifyAccountPrivilegeRequest::setAccountName(const std::string& accountName)
{
	accountName_ = accountName;
	setCoreParameter("AccountName", accountName);
}

std::string ModifyAccountPrivilegeRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void ModifyAccountPrivilegeRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::vector<ModifyAccountPrivilegeRequest::DbPrivilege> ModifyAccountPrivilegeRequest::getDbPrivilege()const
{
	return dbPrivilege_;
}

void ModifyAccountPrivilegeRequest::setDbPrivilege(const std::vector<DbPrivilege>& dbPrivilege)
{
	dbPrivilege_ = dbPrivilege;
	int i = 0;
	for(int i = 0; i!= dbPrivilege.size(); i++)	{
		auto obj = dbPrivilege.at(i);
		std::string str ="DbPrivilege."+ std::to_string(i);
		setCoreParameter(str + ".DbName", obj.dbName);
		setCoreParameter(str + ".Privilege", obj.privilege);
	}
}

std::string ModifyAccountPrivilegeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAccountPrivilegeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

