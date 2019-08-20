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

#include <alibabacloud/drds/model/SubmitHotExpandTaskRequest.h>

using AlibabaCloud::Drds::Model::SubmitHotExpandTaskRequest;

SubmitHotExpandTaskRequest::SubmitHotExpandTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SubmitHotExpandTask")
{}

SubmitHotExpandTaskRequest::~SubmitHotExpandTaskRequest()
{}

std::vector<SubmitHotExpandTaskRequest::InstanceDbMapping> SubmitHotExpandTaskRequest::getInstanceDbMapping()const
{
	return instanceDbMapping_;
}

void SubmitHotExpandTaskRequest::setInstanceDbMapping(const std::vector<InstanceDbMapping>& instanceDbMapping)
{
	instanceDbMapping_ = instanceDbMapping;
	int i = 0;
	for(int i = 0; i!= instanceDbMapping.size(); i++)	{
		auto obj = instanceDbMapping.at(i);
		std::string str ="InstanceDbMapping."+ std::to_string(i);
		setCoreParameter(str + ".DbList", obj.dbList);
		setCoreParameter(str + ".InstanceName", obj.instanceName);
	}
}

std::vector<SubmitHotExpandTaskRequest::Mapping> SubmitHotExpandTaskRequest::getMapping()const
{
	return mapping_;
}

void SubmitHotExpandTaskRequest::setMapping(const std::vector<Mapping>& mapping)
{
	mapping_ = mapping;
	int i = 0;
	for(int i = 0; i!= mapping.size(); i++)	{
		auto obj = mapping.at(i);
		std::string str ="Mapping."+ std::to_string(i);
		setCoreParameter(str + ".DbShardColumn", obj.dbShardColumn);
		setCoreParameter(str + ".TbShardColumn", obj.tbShardColumn);
		setCoreParameter(str + ".ShardTbValue", obj.shardTbValue);
		setCoreParameter(str + ".HotDbName", obj.hotDbName);
		setCoreParameter(str + ".ShardDbValue", obj.shardDbValue);
		setCoreParameter(str + ".HotTableName", obj.hotTableName);
		setCoreParameter(str + ".LogicTable", obj.logicTable);
	}
}

std::string SubmitHotExpandTaskRequest::getTaskDesc()const
{
	return taskDesc_;
}

void SubmitHotExpandTaskRequest::setTaskDesc(const std::string& taskDesc)
{
	taskDesc_ = taskDesc;
	setCoreParameter("TaskDesc", taskDesc);
}

std::string SubmitHotExpandTaskRequest::getDbName()const
{
	return dbName_;
}

void SubmitHotExpandTaskRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::vector<SubmitHotExpandTaskRequest::SupperAccountMapping> SubmitHotExpandTaskRequest::getSupperAccountMapping()const
{
	return supperAccountMapping_;
}

void SubmitHotExpandTaskRequest::setSupperAccountMapping(const std::vector<SupperAccountMapping>& supperAccountMapping)
{
	supperAccountMapping_ = supperAccountMapping;
	int i = 0;
	for(int i = 0; i!= supperAccountMapping.size(); i++)	{
		auto obj = supperAccountMapping.at(i);
		std::string str ="SupperAccountMapping."+ std::to_string(i);
		setCoreParameter(str + ".InstanceName", obj.instanceName);
		setCoreParameter(str + ".SupperAccount", obj.supperAccount);
		setCoreParameter(str + ".SupperPassword", obj.supperPassword);
	}
}

std::vector<SubmitHotExpandTaskRequest::ExtendedMapping> SubmitHotExpandTaskRequest::getExtendedMapping()const
{
	return extendedMapping_;
}

void SubmitHotExpandTaskRequest::setExtendedMapping(const std::vector<ExtendedMapping>& extendedMapping)
{
	extendedMapping_ = extendedMapping;
	int i = 0;
	for(int i = 0; i!= extendedMapping.size(); i++)	{
		auto obj = extendedMapping.at(i);
		std::string str ="ExtendedMapping."+ std::to_string(i);
		setCoreParameter(str + ".SrcInstanceId", obj.srcInstanceId);
		setCoreParameter(str + ".SrcDb", obj.srcDb);
	}
}

std::string SubmitHotExpandTaskRequest::getTaskName()const
{
	return taskName_;
}

void SubmitHotExpandTaskRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setCoreParameter("TaskName", taskName);
}

std::string SubmitHotExpandTaskRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SubmitHotExpandTaskRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string SubmitHotExpandTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitHotExpandTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

