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

#ifndef ALIBABACLOUD_FT_MODEL_RPCHSFSERVICEROUTEMATCHAPIRESULT_H_
#define ALIBABACLOUD_FT_MODEL_RPCHSFSERVICEROUTEMATCHAPIRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ft/FtExport.h>

namespace AlibabaCloud
{
	namespace Ft
	{
		namespace Model
		{
			class ALIBABACLOUD_FT_EXPORT RpcHsfServiceRouteMatchApiResult : public ServiceResult
			{
			public:
				struct NullToEmptyStructValue
				{
					std::string nullToEmptyStructChildValue;
				};
				struct StructValue
				{
					std::string structChildValue;
				};
				struct ArrayItem
				{
					std::string arrayChildValue;
				};
				struct L1ArrayItem
				{
					struct L1Struct
					{
						std::string l1StructMember;
					};
					struct L2ArrayItem
					{
						struct L3ArrayItem
						{
							std::string l3Member1;
						};
						std::string l2Member1;
						std::vector<L2ArrayItem::L3ArrayItem> l3Array;
					};
					std::string l1Member1;
					std::vector<L1ArrayItem::L2ArrayItem> l2Array;
					L1Struct l1Struct;
				};


				RpcHsfServiceRouteMatchApiResult();
				explicit RpcHsfServiceRouteMatchApiResult(const std::string &payload);
				~RpcHsfServiceRouteMatchApiResult();
				std::string getMessage()const;
				std::string getEnumValue()const;
				std::string getAk_mfa_present()const;
				std::string getCallerParentId()const;
				StructValue getStructValue()const;
				std::string getCallerType()const;
				std::string getSuccess()const;
				std::string getCallerUid()const;
				std::string getName()const;
				std::string getDefaultValue()const;
				std::string getJsonListStrig()const;
				std::string getSecurity_transport()const;
				NullToEmptyStructValue getNullToEmptyStructValue()const;
				std::string getResultSwitchValue()const;
				std::string getHttpStatusCode()const;
				std::string getStringValue()const;
				std::string getIntValue()const;
				std::string getAge()const;
				std::string getRequestId()const;
				std::string getNullToEmptyValue()const;
				std::string getApp_ip()const;
				std::string getCode()const;
				std::string getResourceOwnerId()const;
				std::string getNumberRange()const;
				std::string getSwitchValue()const;
				std::string getProxy_original_security_transport()const;
				std::vector<L1ArrayItem> getL1Array()const;
				std::string getProxy_trust_transport_info()const;
				std::vector<ArrayItem> getNullArrayValue()const;
				std::string getCheckNumberValue()const;
				std::string getCallerBid()const;
				std::string getRegionId()const;
				std::vector<ArrayItem> getArrayValue()const;
				std::string getRequiredValue()const;
				std::string getProxy_original_source_ip()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string enumValue_;
				std::string ak_mfa_present_;
				std::string callerParentId_;
				StructValue structValue_;
				std::string callerType_;
				std::string success_;
				std::string callerUid_;
				std::string name_;
				std::string defaultValue_;
				std::string jsonListStrig_;
				std::string security_transport_;
				NullToEmptyStructValue nullToEmptyStructValue_;
				std::string resultSwitchValue_;
				std::string httpStatusCode_;
				std::string stringValue_;
				std::string intValue_;
				std::string age_;
				std::string requestId_;
				std::string nullToEmptyValue_;
				std::string app_ip_;
				std::string code_;
				std::string resourceOwnerId_;
				std::string numberRange_;
				std::string switchValue_;
				std::string proxy_original_security_transport_;
				std::vector<L1ArrayItem> l1Array_;
				std::string proxy_trust_transport_info_;
				std::vector<ArrayItem> nullArrayValue_;
				std::string checkNumberValue_;
				std::string callerBid_;
				std::string regionId_;
				std::vector<ArrayItem> arrayValue_;
				std::string requiredValue_;
				std::string proxy_original_source_ip_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_RPCHSFSERVICEROUTEMATCHAPIRESULT_H_