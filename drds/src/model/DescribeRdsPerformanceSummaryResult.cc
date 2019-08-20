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

#include <alibabacloud/drds/model/DescribeRdsPerformanceSummaryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeRdsPerformanceSummaryResult::DescribeRdsPerformanceSummaryResult() :
	ServiceResult()
{}

DescribeRdsPerformanceSummaryResult::DescribeRdsPerformanceSummaryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRdsPerformanceSummaryResult::~DescribeRdsPerformanceSummaryResult()
{}

void DescribeRdsPerformanceSummaryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRdsPerformanceInfos = value["RdsPerformanceInfos"]["RdsPerformanceInfo"];
	for (auto value : allRdsPerformanceInfos)
	{
		RdsPerformanceInfo rdsPerformanceInfosObject;
		if(!value["RdsId"].isNull())
			rdsPerformanceInfosObject.rdsId = value["RdsId"].asString();
		if(!value["Cpu"].isNull())
			rdsPerformanceInfosObject.cpu = std::stof(value["Cpu"].asString());
		if(!value["Iops"].isNull())
			rdsPerformanceInfosObject.iops = std::stof(value["Iops"].asString());
		if(!value["ActiveSessions"].isNull())
			rdsPerformanceInfosObject.activeSessions = std::stoi(value["ActiveSessions"].asString());
		if(!value["TotalSessions"].isNull())
			rdsPerformanceInfosObject.totalSessions = std::stoi(value["TotalSessions"].asString());
		rdsPerformanceInfos_.push_back(rdsPerformanceInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeRdsPerformanceSummaryResult::RdsPerformanceInfo> DescribeRdsPerformanceSummaryResult::getRdsPerformanceInfos()const
{
	return rdsPerformanceInfos_;
}

bool DescribeRdsPerformanceSummaryResult::getSuccess()const
{
	return success_;
}

