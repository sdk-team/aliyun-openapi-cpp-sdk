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

#ifndef ALIBABACLOUD_R_KVSTORE_MODEL_RELEASEINSTANCESREQUEST_H_
#define ALIBABACLOUD_R_KVSTORE_MODEL_RELEASEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/r-kvstore/R_kvstoreExport.h>

namespace AlibabaCloud
{
	namespace R_kvstore
	{
		namespace Model
		{
			class ALIBABACLOUD_R_KVSTORE_EXPORT ReleaseInstancesRequest : public RpcServiceRequest
			{

			public:
				ReleaseInstancesRequest();
				~ReleaseInstancesRequest();

				bool getAsync()const;
				void setAsync(bool async);
				std::string getInstanceName()const;
				void setInstanceName(const std::string& instanceName);
				long getInstanceID()const;
				void setInstanceID(long instanceID);
				std::string getChannel()const;
				void setChannel(const std::string& channel);
				bool getForce()const;
				void setForce(bool force);
				long getAliUID()const;
				void setAliUID(long aliUID);
				std::string getResourceName()const;
				void setResourceName(const std::string& resourceName);
				std::string get_Operator()const;
				void set_Operator(const std::string& _operator);

            private:
				bool async_;
				std::string instanceName_;
				long instanceID_;
				std::string channel_;
				bool force_;
				long aliUID_;
				std::string resourceName_;
				std::string _operator_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_R_KVSTORE_MODEL_RELEASEINSTANCESREQUEST_H_