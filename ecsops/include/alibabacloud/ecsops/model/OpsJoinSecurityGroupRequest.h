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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSJOINSECURITYGROUPREQUEST_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSJOINSECURITYGROUPREQUEST_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsJoinSecurityGroupRequest : public RpcServiceRequest
			{

			public:
				OpsJoinSecurityGroupRequest();
				~OpsJoinSecurityGroupRequest();

				std::string getEcsInstanceId()const;
				void setEcsInstanceId(const std::string& ecsInstanceId);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);

            private:
				std::string ecsInstanceId_;
				std::string groupId_;
				std::string accessKeyId_;
				std::string regionNo_;
				std::string vpcId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSJOINSECURITYGROUPREQUEST_H_