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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDOMAINTOPURLVISITREQUEST_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDOMAINTOPURLVISITREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scdn/ScdnExport.h>

namespace AlibabaCloud
{
	namespace Scdn
	{
		namespace Model
		{
			class ALIBABACLOUD_SCDN_EXPORT DescribeScdnDomainTopUrlVisitRequest : public RpcServiceRequest
			{

			public:
				DescribeScdnDomainTopUrlVisitRequest();
				~DescribeScdnDomainTopUrlVisitRequest();

				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getSortBy()const;
				void setSortBy(const std::string& sortBy);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string securityToken_;
				std::string domainName_;
				std::string sortBy_;
				std::string startTime_;
				long ownerId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNDOMAINTOPURLVISITREQUEST_H_