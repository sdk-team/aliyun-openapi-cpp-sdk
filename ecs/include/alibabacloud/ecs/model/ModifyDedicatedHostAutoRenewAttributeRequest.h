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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYDEDICATEDHOSTAUTORENEWATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYDEDICATEDHOSTAUTORENEWATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyDedicatedHostAutoRenewAttributeRequest : public RpcServiceRequest
			{

			public:
				ModifyDedicatedHostAutoRenewAttributeRequest();
				~ModifyDedicatedHostAutoRenewAttributeRequest();

				std::string getDedicatedHostIds()const;
				void setDedicatedHostIds(const std::string& dedicatedHostIds);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getDuration()const;
				void setDuration(int duration);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getRenewalStatus()const;
				void setRenewalStatus(const std::string& renewalStatus);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);

            private:
				std::string dedicatedHostIds_;
				long resourceOwnerId_;
				int duration_;
				std::string regionId_;
				std::string renewalStatus_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string periodUnit_;
				bool autoRenew_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYDEDICATEDHOSTAUTORENEWATTRIBUTEREQUEST_H_