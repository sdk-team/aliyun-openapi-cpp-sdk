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

#ifndef ALIBABACLOUD_DRDS_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT CreateInstanceAccountRequest : public RpcServiceRequest
			{
				struct DbPrivilege
				{
					std::string dbName;
					std::string privilege;
				};

			public:
				CreateInstanceAccountRequest();
				~CreateInstanceAccountRequest();

				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);
				std::vector<DbPrivilege> getDbPrivilege()const;
				void setDbPrivilege(const std::vector<DbPrivilege>& dbPrivilege);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string password_;
				std::string accountName_;
				std::string drdsInstanceId_;
				std::vector<DbPrivilege> dbPrivilege_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_