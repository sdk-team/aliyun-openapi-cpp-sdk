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

#include <alibabacloud/ecsops/model/OpsDescribeImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

OpsDescribeImagesResult::OpsDescribeImagesResult() :
	ServiceResult()
{}

OpsDescribeImagesResult::OpsDescribeImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

OpsDescribeImagesResult::~OpsDescribeImagesResult()
{}

void OpsDescribeImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["Id"].isNull())
			imagesObject.id = std::stol(valueImagesImage["Id"].asString());
		if(!valueImagesImage["Bid"].isNull())
			imagesObject.bid = valueImagesImage["Bid"].asString();
		if(!valueImagesImage["AliUid"].isNull())
			imagesObject.aliUid = std::stol(valueImagesImage["AliUid"].asString());
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["ImageSize"].isNull())
			imagesObject.imageSize = std::stoi(valueImagesImage["ImageSize"].asString());
		if(!valueImagesImage["ImageName"].isNull())
			imagesObject.imageName = valueImagesImage["ImageName"].asString();
		if(!valueImagesImage["OsType"].isNull())
			imagesObject.osType = valueImagesImage["OsType"].asString();
		if(!valueImagesImage["Platform"].isNull())
			imagesObject.platform = valueImagesImage["Platform"].asString();
		if(!valueImagesImage["OsName"].isNull())
			imagesObject.osName = valueImagesImage["OsName"].asString();
		if(!valueImagesImage["OsBit"].isNull())
			imagesObject.osBit = valueImagesImage["OsBit"].asString();
		if(!valueImagesImage["OsMemo"].isNull())
			imagesObject.osMemo = valueImagesImage["OsMemo"].asString();
		if(!valueImagesImage["OsKind"].isNull())
			imagesObject.osKind = valueImagesImage["OsKind"].asString();
		if(!valueImagesImage["Remark"].isNull())
			imagesObject.remark = valueImagesImage["Remark"].asString();
		if(!valueImagesImage["Version"].isNull())
			imagesObject.version = valueImagesImage["Version"].asString();
		if(!valueImagesImage["CreatedTime"].isNull())
			imagesObject.createdTime = valueImagesImage["CreatedTime"].asString();
		if(!valueImagesImage["ModifiedTime"].isNull())
			imagesObject.modifiedTime = valueImagesImage["ModifiedTime"].asString();
		if(!valueImagesImage["Status"].isNull())
			imagesObject.status = valueImagesImage["Status"].asString();
		if(!valueImagesImage["SnapshotId"].isNull())
			imagesObject.snapshotId = valueImagesImage["SnapshotId"].asString();
		if(!valueImagesImage["ProductCode"].isNull())
			imagesObject.productCode = valueImagesImage["ProductCode"].asString();
		if(!valueImagesImage["RegionNo"].isNull())
			imagesObject.regionNo = valueImagesImage["RegionNo"].asString();
		if(!valueImagesImage["DisplayName"].isNull())
			imagesObject.displayName = valueImagesImage["DisplayName"].asString();
		if(!valueImagesImage["ImageCategory"].isNull())
			imagesObject.imageCategory = valueImagesImage["ImageCategory"].asString();
		if(!valueImagesImage["SrcImageId"].isNull())
			imagesObject.srcImageId = std::stol(valueImagesImage["SrcImageId"].asString());
		if(!valueImagesImage["SupportIoOptimizedInstance"].isNull())
			imagesObject.supportIoOptimizedInstance = valueImagesImage["SupportIoOptimizedInstance"].asString() == "true";
		images_.push_back(imagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stoi(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int OpsDescribeImagesResult::getTotalCount()const
{
	return totalCount_;
}

int OpsDescribeImagesResult::getPageSize()const
{
	return pageSize_;
}

std::vector<OpsDescribeImagesResult::Image> OpsDescribeImagesResult::getImages()const
{
	return images_;
}

int OpsDescribeImagesResult::getPageNo()const
{
	return pageNo_;
}

