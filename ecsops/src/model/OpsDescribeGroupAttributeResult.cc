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

#include <alibabacloud/ecsops/model/OpsDescribeGroupAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsDescribeGroupAttributeResult::OpsDescribeGroupAttributeResult() :
	ServiceResult()
{}

OpsDescribeGroupAttributeResult::OpsDescribeGroupAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsDescribeGroupAttributeResult::~OpsDescribeGroupAttributeResult()
{}

void OpsDescribeGroupAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGroupPermissionsNode = value["GroupPermissions"]["GroupPermission"];
	for (auto valueGroupPermissionsGroupPermission : allGroupPermissionsNode)
	{
		GroupPermission groupPermissionsObject;
		if(!valueGroupPermissionsGroupPermission["IpProtocal"].isNull())
			groupPermissionsObject.ipProtocal = valueGroupPermissionsGroupPermission["IpProtocal"].asString();
		if(!valueGroupPermissionsGroupPermission["PortRange"].isNull())
			groupPermissionsObject.portRange = valueGroupPermissionsGroupPermission["PortRange"].asString();
		if(!valueGroupPermissionsGroupPermission["SourceGroupId"].isNull())
			groupPermissionsObject.sourceGroupId = valueGroupPermissionsGroupPermission["SourceGroupId"].asString();
		if(!valueGroupPermissionsGroupPermission["DestGroupId"].isNull())
			groupPermissionsObject.destGroupId = valueGroupPermissionsGroupPermission["DestGroupId"].asString();
		if(!valueGroupPermissionsGroupPermission["SourceCidrIp"].isNull())
			groupPermissionsObject.sourceCidrIp = valueGroupPermissionsGroupPermission["SourceCidrIp"].asString();
		if(!valueGroupPermissionsGroupPermission["DestCidrIp"].isNull())
			groupPermissionsObject.destCidrIp = valueGroupPermissionsGroupPermission["DestCidrIp"].asString();
		if(!valueGroupPermissionsGroupPermission["NicType"].isNull())
			groupPermissionsObject.nicType = valueGroupPermissionsGroupPermission["NicType"].asString();
		if(!valueGroupPermissionsGroupPermission["Policy"].isNull())
			groupPermissionsObject.policy = valueGroupPermissionsGroupPermission["Policy"].asString();
		if(!valueGroupPermissionsGroupPermission["Level"].isNull())
			groupPermissionsObject.level = std::stoi(valueGroupPermissionsGroupPermission["Level"].asString());
		if(!valueGroupPermissionsGroupPermission["SourceGroupOwnerUserAccount"].isNull())
			groupPermissionsObject.sourceGroupOwnerUserAccount = valueGroupPermissionsGroupPermission["SourceGroupOwnerUserAccount"].asString();
		if(!valueGroupPermissionsGroupPermission["DestGroupOwnerUserAccount"].isNull())
			groupPermissionsObject.destGroupOwnerUserAccount = valueGroupPermissionsGroupPermission["DestGroupOwnerUserAccount"].asString();
		if(!valueGroupPermissionsGroupPermission["Direction"].isNull())
			groupPermissionsObject.direction = valueGroupPermissionsGroupPermission["Direction"].asString();
		groupPermissions_.push_back(groupPermissionsObject);
	}

}

std::vector<OpsDescribeGroupAttributeResult::GroupPermission> OpsDescribeGroupAttributeResult::getGroupPermissions()const
{
	return groupPermissions_;
}

