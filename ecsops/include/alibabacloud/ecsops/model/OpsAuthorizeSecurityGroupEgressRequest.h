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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSAUTHORIZESECURITYGROUPEGRESSREQUEST_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSAUTHORIZESECURITYGROUPEGRESSREQUEST_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsAuthorizeSecurityGroupEgressRequest : public RpcServiceRequest
			{

			public:
				OpsAuthorizeSecurityGroupEgressRequest();
				~OpsAuthorizeSecurityGroupEgressRequest();

				std::string getNicType()const;
				void setNicType(const std::string& nicType);
				std::string getPortRange()const;
				void setPortRange(const std::string& portRange);
				std::string getIpProtocol()const;
				void setIpProtocol(const std::string& ipProtocol);
				int getLevel()const;
				void setLevel(int level);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getDestGroupId()const;
				void setDestGroupId(const std::string& destGroupId);
				std::string getDestCidrIp()const;
				void setDestCidrIp(const std::string& destCidrIp);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);
				std::string getPolicy()const;
				void setPolicy(const std::string& policy);

            private:
				std::string nicType_;
				std::string portRange_;
				std::string ipProtocol_;
				int level_;
				std::string groupId_;
				std::string destGroupId_;
				std::string destCidrIp_;
				std::string accessKeyId_;
				std::string regionNo_;
				std::string policy_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSAUTHORIZESECURITYGROUPEGRESSREQUEST_H_