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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEINSTANCESREQUEST_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecsops/EcsopsExport.h>

namespace AlibabaCloud
{
	namespace Ecsops
	{
		namespace Model
		{
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeInstancesRequest : public RpcServiceRequest
			{

			public:
				OpsDescribeInstancesRequest();
				~OpsDescribeInstancesRequest();

				std::string getVswId()const;
				void setVswId(const std::string& vswId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getIzNo()const;
				void setIzNo(const std::string& izNo);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getPrivateIpAddresses()const;
				void setPrivateIpAddresses(const std::string& privateIpAddresses);
				bool getIoOptimized()const;
				void setIoOptimized(bool ioOptimized);
				std::string getNetWorkType()const;
				void setNetWorkType(const std::string& netWorkType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getPublicIpAddresses()const;
				void setPublicIpAddresses(const std::string& publicIpAddresses);
				std::string getEcsInstanceIds()const;
				void setEcsInstanceIds(const std::string& ecsInstanceIds);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getCreateTimeFrom()const;
				void setCreateTimeFrom(const std::string& createTimeFrom);
				bool getMountAvailable()const;
				void setMountAvailable(bool mountAvailable);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);
				std::string getEcsInstanceName()const;
				void setEcsInstanceName(const std::string& ecsInstanceName);
				int getPageNo()const;
				void setPageNo(int pageNo);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getCreateTimeTo()const;
				void setCreateTimeTo(const std::string& createTimeTo);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string vswId_;
				long resourceOwnerId_;
				std::string izNo_;
				std::string imageId_;
				std::string privateIpAddresses_;
				bool ioOptimized_;
				std::string netWorkType_;
				std::string accessKeyId_;
				int pageSize_;
				std::string publicIpAddresses_;
				std::string ecsInstanceIds_;
				std::string groupId_;
				std::string createTimeFrom_;
				bool mountAvailable_;
				std::string regionNo_;
				std::string ecsInstanceName_;
				int pageNo_;
				std::string vpcId_;
				std::string createTimeTo_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEINSTANCESREQUEST_H_