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

#ifndef ALIBABACLOUD_FT_MODEL_COUNTCLOUDPRODUCTCALLTIMESREQUEST_H_
#define ALIBABACLOUD_FT_MODEL_COUNTCLOUDPRODUCTCALLTIMESREQUEST_H_

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
			class ALIBABACLOUD_FT_EXPORT CountCloudProductCallTimesRequest : public RpcServiceRequest
			{

			public:
				CountCloudProductCallTimesRequest();
				~CountCloudProductCallTimesRequest();

				long getBucUid()const;
				void setBucUid(long bucUid);
				std::string getBucName()const;
				void setBucName(const std::string& bucName);
				std::string getBucEmpId()const;
				void setBucEmpId(const std::string& bucEmpId);
				std::string getCloudProductsJsonString()const;
				void setCloudProductsJsonString(const std::string& cloudProductsJsonString);
				bool getClearCloudCache()const;
				void setClearCloudCache(bool clearCloudCache);
				bool getClearProductCache()const;
				void setClearProductCache(bool clearProductCache);

            private:
				long bucUid_;
				std::string bucName_;
				std::string bucEmpId_;
				std::string cloudProductsJsonString_;
				bool clearCloudCache_;
				bool clearProductCache_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_COUNTCLOUDPRODUCTCALLTIMESREQUEST_H_