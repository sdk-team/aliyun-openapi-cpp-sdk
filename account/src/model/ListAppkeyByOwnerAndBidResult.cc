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

#include <alibabacloud/account/model/ListAppkeyByOwnerAndBidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Account;
using namespace AlibabaCloud::Account::Model;

ListAppkeyByOwnerAndBidResult::ListAppkeyByOwnerAndBidResult() :
	ServiceResult()
{}

ListAppkeyByOwnerAndBidResult::ListAppkeyByOwnerAndBidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppkeyByOwnerAndBidResult::~ListAppkeyByOwnerAndBidResult()
{}

void ListAppkeyByOwnerAndBidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApplicationsNode = value["Applications"]["Application"];
	for (auto valueApplicationsApplication : allApplicationsNode)
	{
		Application applicationsObject;
		if(!valueApplicationsApplication["AppKey"].isNull())
			applicationsObject.appKey = valueApplicationsApplication["AppKey"].asString();
		if(!valueApplicationsApplication["Bid"].isNull())
			applicationsObject.bid = valueApplicationsApplication["Bid"].asString();
		if(!valueApplicationsApplication["Secret"].isNull())
			applicationsObject.secret = valueApplicationsApplication["Secret"].asString();
		if(!valueApplicationsApplication["Status"].isNull())
			applicationsObject.status = valueApplicationsApplication["Status"].asString();
		applications_.push_back(applicationsObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();

}

std::vector<ListAppkeyByOwnerAndBidResult::Application> ListAppkeyByOwnerAndBidResult::getApplications()const
{
	return applications_;
}

std::string ListAppkeyByOwnerAndBidResult::getMessage()const
{
	return message_;
}

std::string ListAppkeyByOwnerAndBidResult::getCode()const
{
	return code_;
}

