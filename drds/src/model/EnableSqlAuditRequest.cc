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

#include <alibabacloud/drds/model/EnableSqlAuditRequest.h>

using AlibabaCloud::Drds::Model::EnableSqlAuditRequest;

EnableSqlAuditRequest::EnableSqlAuditRequest() :
	RpcServiceRequest("drds", "2019-01-23", "EnableSqlAudit")
{}

EnableSqlAuditRequest::~EnableSqlAuditRequest()
{}

std::string EnableSqlAuditRequest::getRecallStartTimestamp()const
{
	return recallStartTimestamp_;
}

void EnableSqlAuditRequest::setRecallStartTimestamp(const std::string& recallStartTimestamp)
{
	recallStartTimestamp_ = recallStartTimestamp;
	setCoreParameter("RecallStartTimestamp", recallStartTimestamp);
}

std::string EnableSqlAuditRequest::getDbName()const
{
	return dbName_;
}

void EnableSqlAuditRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

bool EnableSqlAuditRequest::getIsRecall()const
{
	return isRecall_;
}

void EnableSqlAuditRequest::setIsRecall(bool isRecall)
{
	isRecall_ = isRecall;
	setCoreParameter("IsRecall", isRecall ? "true" : "false");
}

std::string EnableSqlAuditRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void EnableSqlAuditRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string EnableSqlAuditRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EnableSqlAuditRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string EnableSqlAuditRequest::getRecallEndTimestamp()const
{
	return recallEndTimestamp_;
}

void EnableSqlAuditRequest::setRecallEndTimestamp(const std::string& recallEndTimestamp)
{
	recallEndTimestamp_ = recallEndTimestamp;
	setCoreParameter("RecallEndTimestamp", recallEndTimestamp);
}

