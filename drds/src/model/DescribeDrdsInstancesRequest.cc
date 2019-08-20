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

#include <alibabacloud/drds/model/DescribeDrdsInstancesRequest.h>

using AlibabaCloud::Drds::Model::DescribeDrdsInstancesRequest;

DescribeDrdsInstancesRequest::DescribeDrdsInstancesRequest() :
	RpcServiceRequest("drds", "2019-01-23", "DescribeDrdsInstances")
{}

DescribeDrdsInstancesRequest::~DescribeDrdsInstancesRequest()
{}

bool DescribeDrdsInstancesRequest::getExpired()const
{
	return expired_;
}

void DescribeDrdsInstancesRequest::setExpired(bool expired)
{
	expired_ = expired;
	setCoreParameter("Expired", expired ? "true" : "false");
}

std::string DescribeDrdsInstancesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDrdsInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeDrdsInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDrdsInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDrdsInstancesRequest::getDescription()const
{
	return description_;
}

void DescribeDrdsInstancesRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::vector<DescribeDrdsInstancesRequest::Tag> DescribeDrdsInstancesRequest::getTag()const
{
	return tag_;
}

void DescribeDrdsInstancesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

std::string DescribeDrdsInstancesRequest::getType()const
{
	return type_;
}

void DescribeDrdsInstancesRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

int DescribeDrdsInstancesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDrdsInstancesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDrdsInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDrdsInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

