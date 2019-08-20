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

#include <alibabacloud/drds/model/SubmitSmoothExpandTaskRequest.h>

using AlibabaCloud::Drds::Model::SubmitSmoothExpandTaskRequest;

SubmitSmoothExpandTaskRequest::SubmitSmoothExpandTaskRequest() :
	RpcServiceRequest("drds", "2019-01-23", "SubmitSmoothExpandTask")
{}

SubmitSmoothExpandTaskRequest::~SubmitSmoothExpandTaskRequest()
{}

std::vector<SubmitSmoothExpandTaskRequest::RdsSuperInstances> SubmitSmoothExpandTaskRequest::getRdsSuperInstances()const
{
	return rdsSuperInstances_;
}

void SubmitSmoothExpandTaskRequest::setRdsSuperInstances(const std::vector<RdsSuperInstances>& rdsSuperInstances)
{
	rdsSuperInstances_ = rdsSuperInstances;
	int i = 0;
	for(int i = 0; i!= rdsSuperInstances.size(); i++)	{
		auto obj = rdsSuperInstances.at(i);
		std::string str ="RdsSuperInstances."+ std::to_string(i);
		setCoreParameter(str + ".Password", obj.password);
		setCoreParameter(str + ".AccountName", obj.accountName);
		setCoreParameter(str + ".RdsName", obj.rdsName);
	}
}

std::string SubmitSmoothExpandTaskRequest::getDbName()const
{
	return dbName_;
}

void SubmitSmoothExpandTaskRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::vector<SubmitSmoothExpandTaskRequest::TransferTaskInfos> SubmitSmoothExpandTaskRequest::getTransferTaskInfos()const
{
	return transferTaskInfos_;
}

void SubmitSmoothExpandTaskRequest::setTransferTaskInfos(const std::vector<TransferTaskInfos>& transferTaskInfos)
{
	transferTaskInfos_ = transferTaskInfos;
	int i = 0;
	for(int i = 0; i!= transferTaskInfos.size(); i++)	{
		auto obj = transferTaskInfos.at(i);
		std::string str ="TransferTaskInfos."+ std::to_string(i);
		setCoreParameter(str + ".DbName", obj.dbName);
		setCoreParameter(str + ".SrcInstanceName", obj.srcInstanceName);
		setCoreParameter(str + ".InstanceType", obj.instanceType);
		setCoreParameter(str + ".DstInstanceName", obj.dstInstanceName);
	}
}

std::string SubmitSmoothExpandTaskRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void SubmitSmoothExpandTaskRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string SubmitSmoothExpandTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SubmitSmoothExpandTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool SubmitSmoothExpandTaskRequest::getDbInstanceIsCreating()const
{
	return dbInstanceIsCreating_;
}

void SubmitSmoothExpandTaskRequest::setDbInstanceIsCreating(bool dbInstanceIsCreating)
{
	dbInstanceIsCreating_ = dbInstanceIsCreating;
	setCoreParameter("DbInstanceIsCreating", dbInstanceIsCreating ? "true" : "false");
}

