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

#include <alibabacloud/slb/model/DescribeVServerGroupAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeVServerGroupAttributeResult::DescribeVServerGroupAttributeResult() :
	ServiceResult()
{}

DescribeVServerGroupAttributeResult::DescribeVServerGroupAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVServerGroupAttributeResult::~DescribeVServerGroupAttributeResult()
{}

void DescribeVServerGroupAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBackendServers = value["BackendServers"]["BackendServer"];
	for (auto value : allBackendServers)
	{
		BackendServer backendServersObject;
		if(!value["ServerId"].isNull())
			backendServersObject.serverId = value["ServerId"].asString();
		if(!value["Port"].isNull())
			backendServersObject.port = std::stoi(value["Port"].asString());
		if(!value["Weight"].isNull())
			backendServersObject.weight = std::stoi(value["Weight"].asString());
		if(!value["Type"].isNull())
			backendServersObject.type = value["Type"].asString();
		if(!value["ServerIp"].isNull())
			backendServersObject.serverIp = value["ServerIp"].asString();
		if(!value["EniHost"].isNull())
			backendServersObject.eniHost = value["EniHost"].asString();
		if(!value["VpcId"].isNull())
			backendServersObject.vpcId = value["VpcId"].asString();
		backendServers_.push_back(backendServersObject);
	}
	if(!value["VServerGroupId"].isNull())
		vServerGroupId_ = value["VServerGroupId"].asString();
	if(!value["VServerGroupName"].isNull())
		vServerGroupName_ = value["VServerGroupName"].asString();

}

std::string DescribeVServerGroupAttributeResult::getVServerGroupId()const
{
	return vServerGroupId_;
}

std::string DescribeVServerGroupAttributeResult::getVServerGroupName()const
{
	return vServerGroupName_;
}

std::vector<DescribeVServerGroupAttributeResult::BackendServer> DescribeVServerGroupAttributeResult::getBackendServers()const
{
	return backendServers_;
}
