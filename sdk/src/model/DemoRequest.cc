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

#include <alibabacloud/sdk/model/DemoRequest.h>

using AlibabaCloud::SDK::Model::DemoRequest;

DemoRequest::DemoRequest() :
	RoaServiceRequest("sdk", "2018-01-01")
{
	setResourcePath("/helloworld");
	setMethod(HttpRequest::Method::Post);
}

DemoRequest::~DemoRequest()
{}

std::string DemoRequest::getPrice()const
{
	return price_;
}

void DemoRequest::setPrice(const std::string& price)
{
	price_ = price;
	setParameter("Price", price);
}

std::string DemoRequest::getName()const
{
	return name_;
}

void DemoRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::vector<DemoRequest::ContentList> DemoRequest::getContentList()const
{
	return contentList_;
}

void DemoRequest::setContentList(const std::vector<ContentList>& contentList)
{
	contentList_ = contentList;
	for(int dep1 = 0; dep1!= contentList.size(); dep1++) {
		auto contentListObj = contentList.at(dep1);
		std::string contentListObjStr = "ContentList." + std::to_string(dep1 + 1);
		setParameter(contentListObjStr + ".Tag", contentListObj.tag);
		for(int dep2 = 0; dep2!= contentListObj.letters.size(); dep2++) {
			setParameter(contentListObjStr + ".Letters."+ std::to_string(dep2), contentListObj.letters.at(dep2));
		}
	}
}

