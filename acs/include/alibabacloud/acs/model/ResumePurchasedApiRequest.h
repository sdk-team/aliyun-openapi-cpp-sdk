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

#ifndef ALIBABACLOUD_ACS_MODEL_RESUMEPURCHASEDAPIREQUEST_H_
#define ALIBABACLOUD_ACS_MODEL_RESUMEPURCHASEDAPIREQUEST_H_

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
			class ALIBABACLOUD_ACS_EXPORT ResumePurchasedApiRequest : public RoaServiceRequest
			{

			public:
				ResumePurchasedApiRequest();
				~ResumePurchasedApiRequest();

				std::string getPurchaseProduct()const;
				void setPurchaseProduct(const std::string& purchaseProduct);
				std::string getChannel()const;
				void setChannel(const std::string& channel);
				std::string getPurchaseVersion()const;
				void setPurchaseVersion(const std::string& purchaseVersion);
				std::string getPurchaseApiName()const;
				void setPurchaseApiName(const std::string& purchaseApiName);

            private:
				std::string purchaseProduct_;
				std::string channel_;
				std::string purchaseVersion_;
				std::string purchaseApiName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACS_MODEL_RESUMEPURCHASEDAPIREQUEST_H_