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

#include <alibabacloud/drds/model/DescribeRestoreOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRestoreOrderResult::DescribeRestoreOrderResult() :
	ServiceResult()
{}

DescribeRestoreOrderResult::DescribeRestoreOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreOrderResult::~DescribeRestoreOrderResult()
{}

void DescribeRestoreOrderResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto restoreOrderDONode = value["RestoreOrderDO"];
	auto allDrdsOrderDOList = value["DrdsOrderDOList"]["DrdsOrderDOListItem"];
	for (auto value : allDrdsOrderDOList)
	{
		RestoreOrderDO::DrdsOrderDOListItem drdsOrderDOListItemObject;
		if(!value["RegionId"].isNull())
			drdsOrderDOListItemObject.regionId = value["RegionId"].asString();
		if(!value["AzoneId"].isNull())
			drdsOrderDOListItemObject.azoneId = value["AzoneId"].asString();
		if(!value["Network"].isNull())
			drdsOrderDOListItemObject.network = value["Network"].asString();
		if(!value["VpcId"].isNull())
			drdsOrderDOListItemObject.vpcId = value["VpcId"].asString();
		if(!value["VSwtichId"].isNull())
			drdsOrderDOListItemObject.vSwtichId = value["VSwtichId"].asString();
		if(!value["InstSpec"].isNull())
			drdsOrderDOListItemObject.instSpec = value["InstSpec"].asString();
		restoreOrderDO_.drdsOrderDOList.push_back(drdsOrderDOListItemObject);
	}
	auto allRdsOrderDOList = value["RdsOrderDOList"]["RdsOrderDOListItem"];
	for (auto value : allRdsOrderDOList)
	{
		RestoreOrderDO::RdsOrderDOListItem rdsOrderDOListItemObject;
		if(!value["RegionId"].isNull())
			rdsOrderDOListItemObject.regionId = value["RegionId"].asString();
		if(!value["AzoneId"].isNull())
			rdsOrderDOListItemObject.azoneId = value["AzoneId"].asString();
		if(!value["Network"].isNull())
			rdsOrderDOListItemObject.network = value["Network"].asString();
		if(!value["VpcId"].isNull())
			rdsOrderDOListItemObject.vpcId = value["VpcId"].asString();
		if(!value["VSwtichId"].isNull())
			rdsOrderDOListItemObject.vSwtichId = value["VSwtichId"].asString();
		if(!value["DbInstanceStorage"].isNull())
			rdsOrderDOListItemObject.dbInstanceStorage = value["DbInstanceStorage"].asString();
		if(!value["Network"].isNull())
			rdsOrderDOListItemObject.network1 = value["Network"].asString();
		if(!value["Num"].isNull())
			rdsOrderDOListItemObject.num = std::stol(value["Num"].asString());
		restoreOrderDO_.rdsOrderDOList.push_back(rdsOrderDOListItemObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeRestoreOrderResult::RestoreOrderDO DescribeRestoreOrderResult::getRestoreOrderDO()const
{
	return restoreOrderDO_;
}

bool DescribeRestoreOrderResult::getSuccess()const
{
	return success_;
}

