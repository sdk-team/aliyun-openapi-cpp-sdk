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

#include <alibabacloud/emr/model/DescribeETLJobSqlSchemaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeETLJobSqlSchemaResult::DescribeETLJobSqlSchemaResult() :
	ServiceResult()
{}

DescribeETLJobSqlSchemaResult::DescribeETLJobSqlSchemaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeETLJobSqlSchemaResult::~DescribeETLJobSqlSchemaResult()
{}

void DescribeETLJobSqlSchemaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto schemaNode = value["Schema"];
	if(!schemaNode["Name"].isNull())
		schema_.name = schemaNode["Name"].asString();
	auto allFields = value["Fields"]["Field"];
	for (auto value : allFields)
	{
		Schema::Field fieldObject;
		if(!value["Type"].isNull())
			fieldObject.type = value["Type"].asString();
		if(!value["Name"].isNull())
			fieldObject.name = value["Name"].asString();
		if(!value["Index"].isNull())
			fieldObject.index = std::stoi(value["Index"].asString());
		if(!value["RawType"].isNull())
			fieldObject.rawType = value["RawType"].asString();
		if(!value["AssignType"].isNull())
			fieldObject.assignType = value["AssignType"].asString();
		if(!value["AssignValue"].isNull())
			fieldObject.assignValue = value["AssignValue"].asString();
		schema_.fields.push_back(fieldObject);
	}

}

DescribeETLJobSqlSchemaResult::Schema DescribeETLJobSqlSchemaResult::getSchema()const
{
	return schema_;
}

