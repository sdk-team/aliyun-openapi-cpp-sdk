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

#include <alibabacloud/drds/model/DescribeCandidateInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeCandidateInstanceListResult::DescribeCandidateInstanceListResult() :
	ServiceResult()
{}

DescribeCandidateInstanceListResult::DescribeCandidateInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCandidateInstanceListResult::~DescribeCandidateInstanceListResult()
{}

void DescribeCandidateInstanceListResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Region"].isNull())
		data_.region = dataNode["Region"].asString();
	auto allList = value["List"]["ListItem"];
	for (auto value : allList)
	{
		Data::ListItem listItemObject;
		if(!value["Region"].isNull())
			listItemObject.region = value["Region"].asString();
		if(!value["InstanceId"].isNull())
			listItemObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			listItemObject.instanceName = value["InstanceName"].asString();
		if(!value["InstanceDescription"].isNull())
			listItemObject.instanceDescription = value["InstanceDescription"].asString();
		if(!value["IsAccountFull"].isNull())
			listItemObject.isAccountFull = value["IsAccountFull"].asString() == "true";
		if(!value["AccountCount"].isNull())
			listItemObject.accountCount = std::stoi(value["AccountCount"].asString());
		if(!value["IsDbFull"].isNull())
			listItemObject.isDbFull = value["IsDbFull"].asString() == "true";
		if(!value["DbCount"].isNull())
			listItemObject.dbCount = std::stoi(value["DbCount"].asString());
		if(!value["SecurityIpList"].isNull())
			listItemObject.securityIpList = value["SecurityIpList"].asString();
		if(!value["SecurityIpListNotBlank"].isNull())
			listItemObject.securityIpListNotBlank = value["SecurityIpListNotBlank"].asString() == "true";
		if(!value["IsInvalid"].isNull())
			listItemObject.isInvalid = value["IsInvalid"].asString() == "true";
		if(!value["InvalidReason"].isNull())
			listItemObject.invalidReason = value["InvalidReason"].asString();
		if(!value["InstanceNetType"].isNull())
			listItemObject.instanceNetType = std::stoi(value["InstanceNetType"].asString());
		if(!value["NetworkType"].isNull())
			listItemObject.networkType = value["NetworkType"].asString();
		if(!value["IsNetTypeNotSupport"].isNull())
			listItemObject.isNetTypeNotSupport = value["IsNetTypeNotSupport"].asString() == "true";
		if(!value["IsNetworkTypeNotSupport"].isNull())
			listItemObject.isNetworkTypeNotSupport = value["IsNetworkTypeNotSupport"].asString() == "true";
		if(!value["Type"].isNull())
			listItemObject.type = value["Type"].asString();
		if(!value["ConnectUrl"].isNull())
			listItemObject.connectUrl = value["ConnectUrl"].asString();
		if(!value["Port"].isNull())
			listItemObject.port = std::stoi(value["Port"].asString());
		if(!value["Status"].isNull())
			listItemObject.status = std::stoi(value["Status"].asString());
		if(!value["ReadWeight"].isNull())
			listItemObject.readWeight = std::stoi(value["ReadWeight"].asString());
		if(!value["MaxAccountCount"].isNull())
			listItemObject.maxAccountCount = std::stoi(value["MaxAccountCount"].asString());
		if(!value["MaxDbCount"].isNull())
			listItemObject.maxDbCount = std::stoi(value["MaxDbCount"].asString());
		if(!value["SubDomain"].isNull())
			listItemObject.subDomain = value["SubDomain"].asString();
		if(!value["Avz"].isNull())
			listItemObject.avz = value["Avz"].asString();
		if(!value["AzoneIdNotMatch"].isNull())
			listItemObject.azoneIdNotMatch = value["AzoneIdNotMatch"].asString() == "true";
		if(!value["RegionName"].isNull())
			listItemObject.regionName = value["RegionName"].asString();
		if(!value["AccountType"].isNull())
			listItemObject.accountType = std::stoi(value["AccountType"].asString());
		if(!value["SupportUpgradeAccountType"].isNull())
			listItemObject.supportUpgradeAccountType = std::stoi(value["SupportUpgradeAccountType"].asString());
		if(!value["IsAccountTypeNotSupport"].isNull())
			listItemObject.isAccountTypeNotSupport = value["IsAccountTypeNotSupport"].asString() == "true";
		if(!value["MaxConnections"].isNull())
			listItemObject.maxConnections = std::stoi(value["MaxConnections"].asString());
		if(!value["LockMode"].isNull())
			listItemObject.lockMode = std::stoi(value["LockMode"].asString());
		if(!value["DbInstanceMemory"].isNull())
			listItemObject.dbInstanceMemory = std::stol(value["DbInstanceMemory"].asString());
		if(!value["DbInstanceStorage"].isNull())
			listItemObject.dbInstanceStorage = std::stoi(value["DbInstanceStorage"].asString());
		if(!value["VpcId"].isNull())
			listItemObject.vpcId = value["VpcId"].asString();
		if(!value["VswitchId"].isNull())
			listItemObject.vswitchId = value["VswitchId"].asString();
		if(!value["UsingNatIp"].isNull())
			listItemObject.usingNatIp = value["UsingNatIp"].asString() == "true";
		if(!value["InstanceStorage"].isNull())
			listItemObject.instanceStorage = value["InstanceStorage"].asString();
		if(!value["Engine"].isNull())
			listItemObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			listItemObject.engineVersion = value["EngineVersion"].asString();
		if(!value["AdminUser"].isNull())
			listItemObject.adminUser = value["AdminUser"].asString();
		if(!value["AdminPwd"].isNull())
			listItemObject.adminPwd = value["AdminPwd"].asString();
		if(!value["VpcCloudDbInstanceId"].isNull())
			listItemObject.vpcCloudDbInstanceId = value["VpcCloudDbInstanceId"].asString();
		if(!value["Category"].isNull())
			listItemObject.category = value["Category"].asString();
		if(!value["DBInstanceStorageType"].isNull())
			listItemObject.dBInstanceStorageType = value["DBInstanceStorageType"].asString();
		data_.list.push_back(listItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeCandidateInstanceListResult::Data DescribeCandidateInstanceListResult::getData()const
{
	return data_;
}

bool DescribeCandidateInstanceListResult::getSuccess()const
{
	return success_;
}

