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

#ifndef ALIBABACLOUD_FT_MODEL_MIGRATESTRATEGYREQUEST_H_
#define ALIBABACLOUD_FT_MODEL_MIGRATESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ft/FtExport.h>

namespace AlibabaCloud
{
	namespace Ft
	{
		namespace Model
		{
			class ALIBABACLOUD_FT_EXPORT MigrateStrategyRequest : public RpcServiceRequest
			{

			public:
				MigrateStrategyRequest();
				~MigrateStrategyRequest();

				std::string getApiName()const;
				void setApiName(const std::string& apiName);
				std::string getProductName()const;
				void setProductName(const std::string& productName);
				long getBucUid()const;
				void setBucUid(long bucUid);
				std::string getBucName()const;
				void setBucName(const std::string& bucName);
				std::string getEnv()const;
				void setEnv(const std::string& env);
				std::string getBucEmpId()const;
				void setBucEmpId(const std::string& bucEmpId);
				std::string getVersionName()const;
				void setVersionName(const std::string& versionName);

            private:
				std::string apiName_;
				std::string productName_;
				long bucUid_;
				std::string bucName_;
				std::string env_;
				std::string bucEmpId_;
				std::string versionName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_MIGRATESTRATEGYREQUEST_H_