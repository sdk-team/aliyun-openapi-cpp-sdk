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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYRESERVEDINSTANCEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYRESERVEDINSTANCEATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyReservedInstanceAttributeRequest : public RpcServiceRequest
			{

			public:
				ModifyReservedInstanceAttributeRequest();
				~ModifyReservedInstanceAttributeRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getReservedInstanceId()const;
				void setReservedInstanceId(const std::string& reservedInstanceId);
				std::string getReservedInstanceName()const;
				void setReservedInstanceName(const std::string& reservedInstanceName);

            private:
				long resourceOwnerId_;
				std::string description_;
				std::string regionId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string reservedInstanceId_;
				std::string reservedInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYRESERVEDINSTANCEATTRIBUTEREQUEST_H_