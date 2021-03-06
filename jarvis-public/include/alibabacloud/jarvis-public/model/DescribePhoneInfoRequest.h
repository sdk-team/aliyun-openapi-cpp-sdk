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

#ifndef ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEPHONEINFOREQUEST_H_
#define ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEPHONEINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/jarvis-public/Jarvis_publicExport.h>

namespace AlibabaCloud
{
	namespace Jarvis_public
	{
		namespace Model
		{
			class ALIBABACLOUD_JARVIS_PUBLIC_EXPORT DescribePhoneInfoRequest : public RpcServiceRequest
			{

			public:
				DescribePhoneInfoRequest();
				~DescribePhoneInfoRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getPhoneNum()const;
				void setPhoneNum(const std::string& phoneNum);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getSourceCode()const;
				void setSourceCode(const std::string& sourceCode);

            private:
				std::string sourceIp_;
				std::string phoneNum_;
				std::string lang_;
				std::string sourceCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEPHONEINFOREQUEST_H_