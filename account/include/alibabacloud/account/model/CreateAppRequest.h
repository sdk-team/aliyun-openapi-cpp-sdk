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

#ifndef ALIBABACLOUD_ACCOUNT_MODEL_CREATEAPPREQUEST_H_
#define ALIBABACLOUD_ACCOUNT_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/account/AccountExport.h>

namespace AlibabaCloud
{
	namespace Account
	{
		namespace Model
		{
			class ALIBABACLOUD_ACCOUNT_EXPORT CreateAppRequest : public RpcServiceRequest
			{

			public:
				CreateAppRequest();
				~CreateAppRequest();

				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);

            private:
				std::string ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACCOUNT_MODEL_CREATEAPPREQUEST_H_