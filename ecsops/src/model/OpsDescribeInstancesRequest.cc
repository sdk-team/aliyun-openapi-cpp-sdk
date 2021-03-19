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

#include <alibabacloud/ecsops/model/OpsDescribeInstancesRequest.h>

using AlibabaCloud::Ecsops::Model::OpsDescribeInstancesRequest;

OpsDescribeInstancesRequest::OpsDescribeInstancesRequest() :
	RpcServiceRequest("ecsops", "2015-11-01", "OpsDescribeInstances")
{
	setMethod(HttpRequest::Method::Post);
}

OpsDescribeInstancesRequest::~OpsDescribeInstancesRequest()
{}

std::string OpsDescribeInstancesRequest::getVswId()const
{
	return vswId_;
}

void OpsDescribeInstancesRequest::setVswId(const std::string& vswId)
{
	vswId_ = vswId;
	setParameter("VswId", vswId);
}

long OpsDescribeInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void OpsDescribeInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string OpsDescribeInstancesRequest::getIzNo()const
{
	return izNo_;
}

void OpsDescribeInstancesRequest::setIzNo(const std::string& izNo)
{
	izNo_ = izNo;
	setParameter("IzNo", izNo);
}

std::string OpsDescribeInstancesRequest::getImageId()const
{
	return imageId_;
}

void OpsDescribeInstancesRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string OpsDescribeInstancesRequest::getPrivateIpAddresses()const
{
	return privateIpAddresses_;
}

void OpsDescribeInstancesRequest::setPrivateIpAddresses(const std::string& privateIpAddresses)
{
	privateIpAddresses_ = privateIpAddresses;
	setParameter("PrivateIpAddresses", privateIpAddresses);
}

bool OpsDescribeInstancesRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void OpsDescribeInstancesRequest::setIoOptimized(bool ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized ? "true" : "false");
}

std::string OpsDescribeInstancesRequest::getNetWorkType()const
{
	return netWorkType_;
}

void OpsDescribeInstancesRequest::setNetWorkType(const std::string& netWorkType)
{
	netWorkType_ = netWorkType;
	setParameter("NetWorkType", netWorkType);
}

std::string OpsDescribeInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpsDescribeInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int OpsDescribeInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void OpsDescribeInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string OpsDescribeInstancesRequest::getPublicIpAddresses()const
{
	return publicIpAddresses_;
}

void OpsDescribeInstancesRequest::setPublicIpAddresses(const std::string& publicIpAddresses)
{
	publicIpAddresses_ = publicIpAddresses;
	setParameter("PublicIpAddresses", publicIpAddresses);
}

std::string OpsDescribeInstancesRequest::getEcsInstanceIds()const
{
	return ecsInstanceIds_;
}

void OpsDescribeInstancesRequest::setEcsInstanceIds(const std::string& ecsInstanceIds)
{
	ecsInstanceIds_ = ecsInstanceIds;
	setParameter("EcsInstanceIds", ecsInstanceIds);
}

std::string OpsDescribeInstancesRequest::getGroupId()const
{
	return groupId_;
}

void OpsDescribeInstancesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OpsDescribeInstancesRequest::getCreateTimeFrom()const
{
	return createTimeFrom_;
}

void OpsDescribeInstancesRequest::setCreateTimeFrom(const std::string& createTimeFrom)
{
	createTimeFrom_ = createTimeFrom;
	setParameter("CreateTimeFrom", createTimeFrom);
}

bool OpsDescribeInstancesRequest::getMountAvailable()const
{
	return mountAvailable_;
}

void OpsDescribeInstancesRequest::setMountAvailable(bool mountAvailable)
{
	mountAvailable_ = mountAvailable;
	setParameter("MountAvailable", mountAvailable ? "true" : "false");
}

std::string OpsDescribeInstancesRequest::getRegionNo()const
{
	return regionNo_;
}

void OpsDescribeInstancesRequest::setRegionNo(const std::string& regionNo)
{
	regionNo_ = regionNo;
	setParameter("RegionNo", regionNo);
}

std::string OpsDescribeInstancesRequest::getEcsInstanceName()const
{
	return ecsInstanceName_;
}

void OpsDescribeInstancesRequest::setEcsInstanceName(const std::string& ecsInstanceName)
{
	ecsInstanceName_ = ecsInstanceName;
	setParameter("EcsInstanceName", ecsInstanceName);
}

int OpsDescribeInstancesRequest::getPageNo()const
{
	return pageNo_;
}

void OpsDescribeInstancesRequest::setPageNo(int pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string OpsDescribeInstancesRequest::getVpcId()const
{
	return vpcId_;
}

void OpsDescribeInstancesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string OpsDescribeInstancesRequest::getCreateTimeTo()const
{
	return createTimeTo_;
}

void OpsDescribeInstancesRequest::setCreateTimeTo(const std::string& createTimeTo)
{
	createTimeTo_ = createTimeTo;
	setParameter("CreateTimeTo", createTimeTo);
}

std::string OpsDescribeInstancesRequest::getStatus()const
{
	return status_;
}

void OpsDescribeInstancesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

