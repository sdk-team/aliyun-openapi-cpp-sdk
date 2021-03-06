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

#include <alibabacloud/ecsops/model/OpsDeleteImageRequest.h>

using AlibabaCloud::Ecsops::Model::OpsDeleteImageRequest;

OpsDeleteImageRequest::OpsDeleteImageRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsDeleteImage")
{
	setMethod(HttpRequest::Method::Post);
}

OpsDeleteImageRequest::~OpsDeleteImageRequest()
{}

std::string OpsDeleteImageRequest::getImageId()const
{
	return imageId_;
}

void OpsDeleteImageRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string OpsDeleteImageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsDeleteImageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsDeleteImageRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsDeleteImageRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

