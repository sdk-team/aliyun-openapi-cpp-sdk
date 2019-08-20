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

#ifndef ALIBABACLOUD_DRDS_MODEL_SUBMITHOTEXPANDPRECHECKTASKREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_SUBMITHOTEXPANDPRECHECKTASKREQUEST_H_

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
			class ALIBABACLOUD_DRDS_EXPORT SubmitHotExpandPreCheckTaskRequest : public RpcServiceRequest
			{

			public:
				SubmitHotExpandPreCheckTaskRequest();
				~SubmitHotExpandPreCheckTaskRequest();

				std::string getDbName()const;
				void setDbName(const std::string& dbName);
				std::vector<std::string> getTableList()const;
				void setTableList(const std::vector<std::string>& tableList);
				std::string getDbInstType()const;
				void setDbInstType(const std::string& dbInstType);
				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string dbName_;
				std::vector<std::string> tableList_;
				std::string dbInstType_;
				std::string drdsInstanceId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_SUBMITHOTEXPANDPRECHECKTASKREQUEST_H_