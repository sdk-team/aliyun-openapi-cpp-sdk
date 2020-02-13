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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBECOMMANDSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBECOMMANDSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeCommandsRequest : public RpcServiceRequest
			{

			public:
				DescribeCommandsRequest();
				~DescribeCommandsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getCommandId()const;
				void setCommandId(const std::string& commandId);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getContentEncoding()const;
				void setContentEncoding(const std::string& contentEncoding);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				long resourceOwnerId_;
				std::string description_;
				std::string type_;
				std::string commandId_;
				long pageNumber_;
				std::string regionId_;
				std::string contentEncoding_;
				long pageSize_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBECOMMANDSREQUEST_H_