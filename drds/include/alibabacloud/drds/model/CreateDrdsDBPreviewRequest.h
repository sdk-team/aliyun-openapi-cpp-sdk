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

#ifndef ALIBABACLOUD_DRDS_MODEL_CREATEDRDSDBPREVIEWREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_CREATEDRDSDBPREVIEWREQUEST_H_

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
			class ALIBABACLOUD_DRDS_EXPORT CreateDrdsDBPreviewRequest : public RpcServiceRequest
			{
				struct InstDbName
				{
					std::vector<std::string> shardDbName;
					std::string dbInstanceId;
				};

			public:
				CreateDrdsDBPreviewRequest();
				~CreateDrdsDBPreviewRequest();

				std::vector<InstDbName> getInstDbName()const;
				void setInstDbName(const std::vector<InstDbName>& instDbName);
				std::string getDbName()const;
				void setDbName(const std::string& dbName);
				std::string getAccountName()const;
				void setAccountName(const std::string& accountName);
				std::string getOrderId()const;
				void setOrderId(const std::string& orderId);
				std::vector<std::string> getRdsInstance()const;
				void setRdsInstance(const std::vector<std::string>& rdsInstance);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getDbInstType()const;
				void setDbInstType(const std::string& dbInstType);
				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);
				bool getDbInstanceIsCreating()const;
				void setDbInstanceIsCreating(bool dbInstanceIsCreating);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::vector<InstDbName> instDbName_;
				std::string dbName_;
				std::string accountName_;
				std::string orderId_;
				std::vector<std::string> rdsInstance_;
				std::string type_;
				std::string dbInstType_;
				std::string drdsInstanceId_;
				bool dbInstanceIsCreating_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_CREATEDRDSDBPREVIEWREQUEST_H_