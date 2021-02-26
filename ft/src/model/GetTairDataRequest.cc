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

#include <alibabacloud/ft/model/GetTairDataRequest.h>

using AlibabaCloud::Ft::Model::GetTairDataRequest;

GetTairDataRequest::GetTairDataRequest() :
	RpcServiceRequest("ft", "2018-07-13", "GetTairData")
{
	setMethod(HttpRequest::Method::Post);
}

GetTairDataRequest::~GetTairDataRequest()
{}

std::vector<std::string> GetTairDataRequest::getKeys()const
{
	return keys_;
}

void GetTairDataRequest::setKeys(const std::vector<std::string>& keys)
{
	keys_ = keys;
	for(int dep1 = 0; dep1!= keys.size(); dep1++) {
		setParameter("Keys."+ std::to_string(dep1), keys.at(dep1));
	}
}

std::string GetTairDataRequest::getCacheName()const
{
	return cacheName_;
}

void GetTairDataRequest::setCacheName(const std::string& cacheName)
{
	cacheName_ = cacheName;
	setParameter("CacheName", cacheName);
}

