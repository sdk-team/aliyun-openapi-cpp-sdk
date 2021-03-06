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

#include <alibabacloud/ccc/model/CancelPredictiveJobsRequest.h>

using AlibabaCloud::CCC::Model::CancelPredictiveJobsRequest;

CancelPredictiveJobsRequest::CancelPredictiveJobsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "CancelPredictiveJobs")
{}

CancelPredictiveJobsRequest::~CancelPredictiveJobsRequest()
{}

bool CancelPredictiveJobsRequest::getAll()const
{
	return all_;
}

void CancelPredictiveJobsRequest::setAll(bool all)
{
	all_ = all;
	setParameter("All", std::to_string(all));
}

std::vector<std::string> CancelPredictiveJobsRequest::getJobId()const
{
	return jobId_;
}

void CancelPredictiveJobsRequest::setJobId(const std::vector<std::string>& jobId)
{
	jobId_ = jobId;
	for(int i = 0; i!= jobId.size(); i++)
		setParameter("JobId."+ std::to_string(i), jobId.at(i));
}

std::string CancelPredictiveJobsRequest::getInstanceId()const
{
	return instanceId_;
}

void CancelPredictiveJobsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CancelPredictiveJobsRequest::getJobGroupId()const
{
	return jobGroupId_;
}

void CancelPredictiveJobsRequest::setJobGroupId(const std::string& jobGroupId)
{
	jobGroupId_ = jobGroupId;
	setParameter("JobGroupId", jobGroupId);
}

