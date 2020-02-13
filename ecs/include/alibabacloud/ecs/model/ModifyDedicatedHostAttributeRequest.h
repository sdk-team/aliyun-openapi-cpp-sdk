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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYDEDICATEDHOSTATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYDEDICATEDHOSTATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyDedicatedHostAttributeRequest : public RpcServiceRequest
			{

			public:
				ModifyDedicatedHostAttributeRequest();
				~ModifyDedicatedHostAttributeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getActionOnMaintenance()const;
				void setActionOnMaintenance(const std::string& actionOnMaintenance);
				std::string getDedicatedHostName()const;
				void setDedicatedHostName(const std::string& dedicatedHostName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDedicatedHostId()const;
				void setDedicatedHostId(const std::string& dedicatedHostId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getNetworkAttributesSlbUdpTimeout()const;
				void setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout);
				std::string getAutoPlacement()const;
				void setAutoPlacement(const std::string& autoPlacement);
				int getNetworkAttributesUdpTimeout()const;
				void setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout);

            private:
				long resourceOwnerId_;
				std::string description_;
				std::string regionId_;
				std::string actionOnMaintenance_;
				std::string dedicatedHostName_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string dedicatedHostId_;
				long ownerId_;
				int networkAttributesSlbUdpTimeout_;
				std::string autoPlacement_;
				int networkAttributesUdpTimeout_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYDEDICATEDHOSTATTRIBUTEREQUEST_H_