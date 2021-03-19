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

#include <alibabacloud/ecsops/model/OpsDescribeGroupsRequest.h>

using AlibabaCloud::Ecsops::Model::OpsDescribeGroupsRequest;

OpsDescribeGroupsRequest::OpsDescribeGroupsRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsDescribeGroups")
{
	setMethod(HttpRequest::Method::Post);
}

OpsDescribeGroupsRequest::~OpsDescribeGroupsRequest()
{}

std::string OpsDescribeGroupsRequest::getEcsInstanceId()const
{
	return ecsInstanceId_;
}

void OpsDescribeGroupsRequest::setEcsInstanceId(const std::string& ecsInstanceId)
{
	ecsInstanceId_ = ecsInstanceId;
	setParameter("EcsInstanceId", ecsInstanceId);
}

long OpsDescribeGroupsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsDescribeGroupsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsDescribeGroupsRequest::getGroupName()const
{
	return groupName_;
}

void OpsDescribeGroupsRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

bool OpsDescribeGroupsRequest::getOnlyQueryVpcGroup()const
{
	return onlyQueryVpcGroup_;
}

void OpsDescribeGroupsRequest::setOnlyQueryVpcGroup(bool onlyQueryVpcGroup)
{
	onlyQueryVpcGroup_ = onlyQueryVpcGroup;
	setParameter("OnlyQueryVpcGroup", onlyQueryVpcGroup ? "true" : "false");
}

std::string OpsDescribeGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsDescribeGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string OpsDescribeGroupsRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsDescribeGroupsRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

int OpsDescribeGroupsRequest::getPageNo()const
{
	return pageNo_;
}

void OpsDescribeGroupsRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string OpsDescribeGroupsRequest::getVpcId()const
{
	return vpcId_;
}

void OpsDescribeGroupsRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string OpsDescribeGroupsRequest::getGroupIds()const
{
	return groupIds_;
}

void OpsDescribeGroupsRequest::setGroupIds(const std::string& groupIds)
{
	groupIds_ = groupIds;
	setParameter("GroupIds", groupIds);
}

int OpsDescribeGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void OpsDescribeGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

