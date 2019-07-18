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

#ifndef ALIBABACLOUD_ACS_MODEL_MODIFYAPINAMEINDAILYREQUEST_H_
#define ALIBABACLOUD_ACS_MODEL_MODIFYAPINAMEINDAILYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/acs/AcsExport.h>

namespace AlibabaCloud
{
	namespace Acs
	{
		namespace Model
		{
			class ALIBABACLOUD_ACS_EXPORT ModifyApiNameInDailyRequest : public RoaServiceRequest
			{

			public:
				ModifyApiNameInDailyRequest();
				~ModifyApiNameInDailyRequest();

				std::string getModifyName()const;
				void setModifyName(const std::string& modifyName);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getProductName()const;
				void setProductName(const std::string& productName);
				std::string getChangeId()const;
				void setChangeId(const std::string& changeId);
				std::string getVersionName()const;
				void setVersionName(const std::string& versionName);

            private:
				std::string modifyName_;
				std::string name_;
				std::string productName_;
				std::string changeId_;
				std::string versionName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACS_MODEL_MODIFYAPINAMEINDAILYREQUEST_H_