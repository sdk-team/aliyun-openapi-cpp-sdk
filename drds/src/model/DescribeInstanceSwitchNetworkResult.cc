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

#include <alibabacloud/drds/model/DescribeInstanceSwitchNetworkResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeInstanceSwitchNetworkResult::DescribeInstanceSwitchNetworkResult() :
	ServiceResult()
{}

DescribeInstanceSwitchNetworkResult::DescribeInstanceSwitchNetworkResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSwitchNetworkResult::~DescribeInstanceSwitchNetworkResult()
{}

void DescribeInstanceSwitchNetworkResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allVpcInfos = value["VpcInfos"]["VpcInfo"];
	for (auto value : allVpcInfos)
	{
		VpcInfo vpcInfosObject;
		if(!value["VpcId"].isNull())
			vpcInfosObject.vpcId = value["VpcId"].asString();
		if(!value["RegionId"].isNull())
			vpcInfosObject.regionId = value["RegionId"].asString();
		if(!value["VpcName"].isNull())
			vpcInfosObject.vpcName = value["VpcName"].asString();
		auto allVswitchInfos = value["VswitchInfos"]["VswitchInfo"];
		for (auto value : allVswitchInfos)
		{
			VpcInfo::VswitchInfo vswitchInfosObject;
			if(!value["VswitchId"].isNull())
				vswitchInfosObject.vswitchId = value["VswitchId"].asString();
			if(!value["VpcId"].isNull())
				vswitchInfosObject.vpcId = value["VpcId"].asString();
			if(!value["VswitchName"].isNull())
				vswitchInfosObject.vswitchName = value["VswitchName"].asString();
			if(!value["AzoneId"].isNull())
				vswitchInfosObject.azoneId = value["AzoneId"].asString();
			if(!value["DrdsSupported"].isNull())
				vswitchInfosObject.drdsSupported = value["DrdsSupported"].asString() == "true";
			vpcInfosObject.vswitchInfos.push_back(vswitchInfosObject);
		}
		vpcInfos_.push_back(vpcInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeInstanceSwitchNetworkResult::VpcInfo> DescribeInstanceSwitchNetworkResult::getVpcInfos()const
{
	return vpcInfos_;
}

bool DescribeInstanceSwitchNetworkResult::getSuccess()const
{
	return success_;
}

