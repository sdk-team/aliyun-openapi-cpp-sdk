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

#ifndef ALIBABACLOUD_SDK_MODEL_DEMOREQUEST_H_
#define ALIBABACLOUD_SDK_MODEL_DEMOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/sdk/SDKExport.h>

namespace AlibabaCloud
{
	namespace SDK
	{
		namespace Model
		{
			class ALIBABACLOUD_SDK_EXPORT DemoRequest : public RoaServiceRequest
			{
			public:
				struct ContentList
				{
					std::string tag;
					std::vector<std::string> letters;
				};

			public:
				DemoRequest();
				~DemoRequest();

				std::string getPrice()const;
				void setPrice(const std::string& price);
				std::string getName()const;
				void setName(const std::string& name);
				std::vector<ContentList> getContentList()const;
				void setContentList(const std::vector<ContentList>& contentList);

            private:
				std::string price_;
				std::string name_;
				std::vector<ContentList> contentList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDK_MODEL_DEMOREQUEST_H_