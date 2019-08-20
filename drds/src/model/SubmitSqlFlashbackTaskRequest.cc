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

#include <alibabacloud/drds/model/SubmitSqlFlashbackTaskRequest.h>

using AlibabaCloud::Drds::Model::SubmitSqlFlashbackTaskRequest;

SubmitSqlFlashbackTaskRequest::SubmitSqlFlashbackTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SubmitSqlFlashbackTask")
{}

SubmitSqlFlashbackTaskRequest::~SubmitSqlFlashbackTaskRequest()
{}

std::string SubmitSqlFlashbackTaskRequest::getTraceId()const
{
	return traceId_;
}

void SubmitSqlFlashbackTaskRequest::setTraceId(const std::string& traceId)
{
	traceId_ = traceId;
	setCoreParameter("TraceId", traceId);
}

std::string SubmitSqlFlashbackTaskRequest::getSqlType()const
{
	return sqlType_;
}

void SubmitSqlFlashbackTaskRequest::setSqlType(const std::string& sqlType)
{
	sqlType_ = sqlType;
	setCoreParameter("SqlType", sqlType);
}

std::string SubmitSqlFlashbackTaskRequest::getSqlPk()const
{
	return sqlPk_;
}

void SubmitSqlFlashbackTaskRequest::setSqlPk(const std::string& sqlPk)
{
	sqlPk_ = sqlPk;
	setCoreParameter("SqlPk", sqlPk);
}

int SubmitSqlFlashbackTaskRequest::getRecallRestoreType()const
{
	return recallRestoreType_;
}

void SubmitSqlFlashbackTaskRequest::setRecallRestoreType(int recallRestoreType)
{
	recallRestoreType_ = recallRestoreType;
	setCoreParameter("RecallRestoreType", std::to_string(recallRestoreType));
}

int SubmitSqlFlashbackTaskRequest::getRecallType()const
{
	return recallType_;
}

void SubmitSqlFlashbackTaskRequest::setRecallType(int recallType)
{
	recallType_ = recallType;
	setCoreParameter("RecallType", std::to_string(recallType));
}

std::string SubmitSqlFlashbackTaskRequest::getDbName()const
{
	return dbName_;
}

void SubmitSqlFlashbackTaskRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string SubmitSqlFlashbackTaskRequest::getEndTime()const
{
	return endTime_;
}

void SubmitSqlFlashbackTaskRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string SubmitSqlFlashbackTaskRequest::getStartTime()const
{
	return startTime_;
}

void SubmitSqlFlashbackTaskRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string SubmitSqlFlashbackTaskRequest::getTableName()const
{
	return tableName_;
}

void SubmitSqlFlashbackTaskRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", tableName);
}

std::string SubmitSqlFlashbackTaskRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SubmitSqlFlashbackTaskRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string SubmitSqlFlashbackTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitSqlFlashbackTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

