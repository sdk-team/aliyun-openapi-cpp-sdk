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

#ifndef ALIBABACLOUD_FT_MODEL_RPCDUBBOSERVICEROUTEAPIREQUEST_H_
#define ALIBABACLOUD_FT_MODEL_RPCDUBBOSERVICEROUTEAPIREQUEST_H_

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
			class ALIBABACLOUD_FT_EXPORT RpcDubboServiceRouteApiRequest : public RpcServiceRequest
			{

			public:
				RpcDubboServiceRouteApiRequest();
				~RpcDubboServiceRouteApiRequest();

				std::string getRequiredValue()const;
				void setRequiredValue(const std::string& requiredValue);
				std::string getCode()const;
				void setCode(const std::string& code);
				int getIntValue()const;
				void setIntValue(int intValue);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				std::string getResultSwitchValue()const;
				void setResultSwitchValue(const std::string& resultSwitchValue);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getJsonObject()const;
				void setJsonObject(const std::string& jsonObject);
				long getSleep()const;
				void setSleep(long sleep);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getSwitchValue()const;
				void setSwitchValue(const std::string& switchValue);
				std::string getJsonObjectList()const;
				void setJsonObjectList(const std::string& jsonObjectList);
				std::string getDefaultValue()const;
				void setDefaultValue(const std::string& defaultValue);
				int getNumberRange()const;
				void setNumberRange(int numberRange);
				std::string getMessage()const;
				void setMessage(const std::string& message);
				std::string getCheckNumberValue()const;
				void setCheckNumberValue(const std::string& checkNumberValue);
				std::string getHttpStatusCode()const;
				void setHttpStatusCode(const std::string& httpStatusCode);
				std::string getStringValue()const;
				void setStringValue(const std::string& stringValue);
				int getEnumValue()const;
				void setEnumValue(int enumValue);
				std::string getSuccess()const;
				void setSuccess(const std::string& success);
				std::string getOtherParam()const;
				void setOtherParam(const std::string& otherParam);

            private:
				std::string requiredValue_;
				std::string code_;
				int intValue_;
				bool proxy_original_security_transport_;
				std::string resultSwitchValue_;
				std::string proxy_original_source_ip_;
				std::string jsonObject_;
				long sleep_;
				std::string regionId_;
				std::string switchValue_;
				std::string jsonObjectList_;
				std::string defaultValue_;
				int numberRange_;
				std::string message_;
				std::string checkNumberValue_;
				std::string httpStatusCode_;
				std::string stringValue_;
				int enumValue_;
				std::string success_;
				std::string otherParam_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_RPCDUBBOSERVICEROUTEAPIREQUEST_H_