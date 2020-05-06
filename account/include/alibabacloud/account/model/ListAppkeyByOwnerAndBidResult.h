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

#ifndef ALIBABACLOUD_ACCOUNT_MODEL_LISTAPPKEYBYOWNERANDBIDRESULT_H_
#define ALIBABACLOUD_ACCOUNT_MODEL_LISTAPPKEYBYOWNERANDBIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/account/AccountExport.h>

namespace AlibabaCloud
{
	namespace Account
	{
		namespace Model
		{
			class ALIBABACLOUD_ACCOUNT_EXPORT ListAppkeyByOwnerAndBidResult : public ServiceResult
			{
			public:
				struct Application
				{
					std::string secret;
					std::string status;
					std::string appKey;
					std::string bid;
				};


				ListAppkeyByOwnerAndBidResult();
				explicit ListAppkeyByOwnerAndBidResult(const std::string &payload);
				~ListAppkeyByOwnerAndBidResult();
				std::vector<Application> getApplications()const;
				std::string getMessage()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Application> applications_;
				std::string message_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACCOUNT_MODEL_LISTAPPKEYBYOWNERANDBIDRESULT_H_