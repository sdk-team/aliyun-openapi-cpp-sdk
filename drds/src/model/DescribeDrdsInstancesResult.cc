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

#include <alibabacloud/drds/model/DescribeDrdsInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsInstancesResult::DescribeDrdsInstancesResult() :
	ServiceResult()
{}

DescribeDrdsInstancesResult::DescribeDrdsInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsInstancesResult::~DescribeDrdsInstancesResult()
{}

void DescribeDrdsInstancesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allInstances = value["Instances"]["Instance"];
	for (auto value : allInstances)
	{
		Instance instancesObject;
		if(!value["DrdsInstanceId"].isNull())
			instancesObject.drdsInstanceId = value["DrdsInstanceId"].asString();
		if(!value["Type"].isNull())
			instancesObject.type = value["Type"].asString();
		if(!value["RegionId"].isNull())
			instancesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			instancesObject.zoneId = value["ZoneId"].asString();
		if(!value["Description"].isNull())
			instancesObject.description = value["Description"].asString();
		if(!value["NetworkType"].isNull())
			instancesObject.networkType = value["NetworkType"].asString();
		if(!value["Status"].isNull())
			instancesObject.status = value["Status"].asString();
		if(!value["CreateTime"].isNull())
			instancesObject.createTime = std::stol(value["CreateTime"].asString());
		if(!value["Version"].isNull())
			instancesObject.version = std::stol(value["Version"].asString());
		if(!value["CommodityCode"].isNull())
			instancesObject.commodityCode = value["CommodityCode"].asString();
		if(!value["InstRole"].isNull())
			instancesObject.instRole = value["InstRole"].asString();
		if(!value["InstanceSeries"].isNull())
			instancesObject.instanceSeries = value["InstanceSeries"].asString();
		if(!value["InstanceSpec"].isNull())
			instancesObject.instanceSpec = value["InstanceSpec"].asString();
		if(!value["MasterInstanceId"].isNull())
			instancesObject.masterInstanceId = value["MasterInstanceId"].asString();
		if(!value["VpcCloudInstanceId"].isNull())
			instancesObject.vpcCloudInstanceId = value["VpcCloudInstanceId"].asString();
		if(!value["VpcId"].isNull())
			instancesObject.vpcId = value["VpcId"].asString();
		if(!value["ExpireDate"].isNull())
			instancesObject.expireDate = std::stol(value["ExpireDate"].asString());
		if(!value["VersionAction"].isNull())
			instancesObject.versionAction = value["VersionAction"].asString();
		if(!value["Label"].isNull())
			instancesObject.label = value["Label"].asString();
		if(!value["MachineType"].isNull())
			instancesObject.machineType = value["MachineType"].asString();
		if(!value["OrderInstanceId"].isNull())
			instancesObject.orderInstanceId = value["OrderInstanceId"].asString();
		auto allVips = value["Vips"]["Vip"];
		for (auto value : allVips)
		{
			Instance::Vip vipsObject;
			if(!value["IP"].isNull())
				vipsObject.iP = value["IP"].asString();
			if(!value["Port"].isNull())
				vipsObject.port = value["Port"].asString();
			if(!value["Type"].isNull())
				vipsObject.type = value["Type"].asString();
			if(!value["VpcId"].isNull())
				vipsObject.vpcId = value["VpcId"].asString();
			if(!value["VswitchId"].isNull())
				vipsObject.vswitchId = value["VswitchId"].asString();
			instancesObject.vips.push_back(vipsObject);
		}
		auto allReadOnlyDBInstanceIds = value["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"];
		for (auto value : allReadOnlyDBInstanceIds)
			instancesObject.readOnlyDBInstanceIds.push_back(value.asString());
		instances_.push_back(instancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

std::vector<DescribeDrdsInstancesResult::Instance> DescribeDrdsInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeDrdsInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDrdsInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDrdsInstancesResult::getTotal()const
{
	return total_;
}

