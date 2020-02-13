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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPHISTORYREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeAutoProvisioningGroupHistoryRequest : public RpcServiceRequest
			{

			public:
				DescribeAutoProvisioningGroupHistoryRequest();
				~DescribeAutoProvisioningGroupHistoryRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAutoProvisioningGroupId()const;
				void setAutoProvisioningGroupId(const std::string& autoProvisioningGroupId);

            private:
				long resourceOwnerId_;
				std::string startTime_;
				int pageNumber_;
				std::string regionId_;
				int pageSize_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string endTime_;
				long ownerId_;
				std::string autoProvisioningGroupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPHISTORYREQUEST_H_