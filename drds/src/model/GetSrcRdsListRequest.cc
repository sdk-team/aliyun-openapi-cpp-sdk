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

#include <alibabacloud/drds/model/GetSrcRdsListRequest.h>

using AlibabaCloud::Drds::Model::GetSrcRdsListRequest;

GetSrcRdsListRequest::GetSrcRdsListRequest() :
	RpcServiceRequest("drds", "2019-01-23", "GetSrcRdsList")
{}

GetSrcRdsListRequest::~GetSrcRdsListRequest()
{}

std::string GetSrcRdsListRequest::getDbName()const
{
	return dbName_;
}

void GetSrcRdsListRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::vector<GetSrcRdsListRequest::PartitionMapping> GetSrcRdsListRequest::getPartitionMapping()const
{
	return partitionMapping_;
}

void GetSrcRdsListRequest::setPartitionMapping(const std::vector<PartitionMapping>& partitionMapping)
{
	partitionMapping_ = partitionMapping;
	int i = 0;
	for(int i = 0; i!= partitionMapping.size(); i++)	{
		auto obj = partitionMapping.at(i);
		std::string str ="PartitionMapping."+ std::to_string(i);
		setCoreParameter(str + ".DbShardValue", obj.dbShardValue);
		setCoreParameter(str + ".HotDbName", obj.hotDbName);
		setCoreParameter(str + ".HotTableName", obj.hotTableName);
		setCoreParameter(str + ".TbShardValue", obj.tbShardValue);
		setCoreParameter(str + ".LogicTable", obj.logicTable);
	}
}

std::string GetSrcRdsListRequest::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

void GetSrcRdsListRequest::setDrdsInstanceId(const std::string& drdsInstanceId)
{
	drdsInstanceId_ = drdsInstanceId;
	setCoreParameter("DrdsInstanceId", drdsInstanceId);
}

std::string GetSrcRdsListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetSrcRdsListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

