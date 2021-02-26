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

#ifndef ALIBABACLOUD_FT_MODEL_DESCRIBERESOURCETYPERESULT_H_
#define ALIBABACLOUD_FT_MODEL_DESCRIBERESOURCETYPERESULT_H_

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
			class ALIBABACLOUD_FT_EXPORT DescribeResourceTypeResult : public ServiceResult
			{
			public:
				struct Schema
				{
					std::string ref;
					std::string type;
					std::string description;
					std::string title;
					std::string itemName;
					std::string items;
					std::string properties;
				};
				struct OperationAPI
				{
					struct APIIdentity
					{
						std::string aPIVersion;
						std::string aPIName;
						std::string aPIGroup;
					};
					std::vector<APIIdentity> createAPIs;
					std::vector<APIIdentity> listAPIs;
					std::vector<APIIdentity> deleteAPIs;
					std::vector<APIIdentity> establishRelationAPIs;
					std::vector<APIIdentity> destroyRelationAPIs;
					std::vector<APIIdentity> updateAPIs;
					std::vector<APIIdentity> getAPIs;
				};
				struct ResourceTypeAttributeMappings
				{
					struct OperationGet
					{
						struct ResourceTypeOperationDetail
						{
							struct RequiredAttributeMappings
							{
								std::string idMappings;
							};
							RequiredAttributeMappings requiredAttributeMappings;
							std::string attributeAsyncDetections;
							std::string gatewayProduct;
							std::string gatewaySource;
							std::string apiName;
							std::string gatewayVersion;
						};
						std::vector<ResourceTypeOperationDetail> apiInfos;
					};
					std::string enableAttributeMapping;
					std::string prePaidValue;
					OperationGet operationGet;
				};
				struct State
				{
					std::string description;
					std::string code;
				};


				DescribeResourceTypeResult();
				explicit DescribeResourceTypeResult(const std::string &payload);
				~DescribeResourceTypeResult();
				ResourceTypeAttributeMappings getResourceTypeAttributeMappings()const;
				std::vector<State> getStates()const;
				std::string getResourceTypeVersion()const;
				std::string getUniqueIdentifier()const;
				std::string getDescription()const;
				Schema getSchema()const;
				OperationAPI getOperationAPI()const;
				std::string getDefinitions()const;
				std::string getResourceTypeCode()const;
				std::string getProduct()const;
				std::string getTitle()const;
				std::string getResourceIdField()const;

			protected:
				void parse(const std::string &payload);
			private:
				ResourceTypeAttributeMappings resourceTypeAttributeMappings_;
				std::vector<State> states_;
				std::string resourceTypeVersion_;
				std::string uniqueIdentifier_;
				std::string description_;
				Schema schema_;
				OperationAPI operationAPI_;
				std::string definitions_;
				std::string resourceTypeCode_;
				std::string product_;
				std::string title_;
				std::string resourceIdField_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_DESCRIBERESOURCETYPERESULT_H_