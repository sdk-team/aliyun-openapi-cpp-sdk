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

#include <alibabacloud/account/model/ListAppkeyByOwnerAndBidRequest.h>

using AlibabaCloud::Account::Model::ListAppkeyByOwnerAndBidRequest;

ListAppkeyByOwnerAndBidRequest::ListAppkeyByOwnerAndBidRequest() :
	RpcServiceRequest("account", "2013-07-01", "ListAppkeyByOwnerAndBid")
{
	setMethod(HttpRequest::Method::Post);
}

ListAppkeyByOwnerAndBidRequest::~ListAppkeyByOwnerAndBidRequest()
{}

std::string ListAppkeyByOwnerAndBidRequest::getOwnerId()const
{
	return ownerId_;
}

void ListAppkeyByOwnerAndBidRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string ListAppkeyByOwnerAndBidRequest::getStatus()const
{
	return status_;
}

void ListAppkeyByOwnerAndBidRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

