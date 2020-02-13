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

#ifndef ALIBABACLOUD_ECS_MODEL_DETACHINSTANCERAMROLEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DETACHINSTANCERAMROLEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DetachInstanceRamRoleRequest : public RpcServiceRequest
			{

			public:
				DetachInstanceRamRoleRequest();
				~DetachInstanceRamRoleRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRamRoleName()const;
				void setRamRoleName(const std::string& ramRoleName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getInstanceIds()const;
				void setInstanceIds(const std::string& instanceIds);

            private:
				long resourceOwnerId_;
				std::string regionId_;
				std::string resourceOwnerAccount_;
				std::string ramRoleName_;
				long ownerId_;
				std::string instanceIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DETACHINSTANCERAMROLEREQUEST_H_