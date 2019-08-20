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

#ifndef ALIBABACLOUD_DRDS_MODEL_RELEASEHISTOREINSTANCEREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_RELEASEHISTOREINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_DRDS_EXPORT ReleaseHiStoreInstanceRequest : public RpcServiceRequest
			{

			public:
				ReleaseHiStoreInstanceRequest();
				~ReleaseHiStoreInstanceRequest();

				std::string getHistoreInstanceId()const;
				void setHistoreInstanceId(const std::string& historeInstanceId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDrdsPassword()const;
				void setDrdsPassword(const std::string& drdsPassword);
				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);

            private:
				std::string historeInstanceId_;
				std::string regionId_;
				std::string drdsPassword_;
				std::string drdsInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_RELEASEHISTOREINSTANCEREQUEST_H_