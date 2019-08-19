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

#include <alibabacloud/r-kvstore/model/ReleaseInstancesRequest.h>

using AlibabaCloud::R_kvstore::Model::ReleaseInstancesRequest;

ReleaseInstancesRequest::ReleaseInstancesRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ReleaseInstances")
{}

ReleaseInstancesRequest::~ReleaseInstancesRequest()
{}

bool ReleaseInstancesRequest::getAsync()const
{
	return async_;
}

void ReleaseInstancesRequest::setAsync(bool async)
{
	async_ = async;
	setCoreParameter("Async", async ? "true" : "false");
}

std::string ReleaseInstancesRequest::getInstanceName()const
{
	return instanceName_;
}

void ReleaseInstancesRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setCoreParameter("InstanceName", instanceName);
}

long ReleaseInstancesRequest::getInstanceID()const
{
	return instanceID_;
}

void ReleaseInstancesRequest::setInstanceID(long instanceID)
{
	instanceID_ = instanceID;
	setCoreParameter("InstanceID", std::to_string(instanceID));
}

std::string ReleaseInstancesRequest::getChannel()const
{
	return channel_;
}

void ReleaseInstancesRequest::setChannel(const std::string& channel)
{
	channel_ = channel;
	setCoreParameter("Channel", channel);
}

bool ReleaseInstancesRequest::getForce()const
{
	return force_;
}

void ReleaseInstancesRequest::setForce(bool force)
{
	force_ = force;
	setCoreParameter("Force", force ? "true" : "false");
}

long ReleaseInstancesRequest::getAliUID()const
{
	return aliUID_;
}

void ReleaseInstancesRequest::setAliUID(long aliUID)
{
	aliUID_ = aliUID;
	setCoreParameter("AliUID", std::to_string(aliUID));
}

std::string ReleaseInstancesRequest::getResourceName()const
{
	return resourceName_;
}

void ReleaseInstancesRequest::setResourceName(const std::string& resourceName)
{
	resourceName_ = resourceName;
	setCoreParameter("ResourceName", resourceName);
}

std::string ReleaseInstancesRequest::get_Operator()const
{
	return _operator_;
}

void ReleaseInstancesRequest::set_Operator(const std::string& _operator)
{
	_operator_ = _operator;
	setCoreParameter("_Operator", _operator);
}

