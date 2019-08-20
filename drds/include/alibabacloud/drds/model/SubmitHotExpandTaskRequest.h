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

#ifndef ALIBABACLOUD_DRDS_MODEL_SUBMITHOTEXPANDTASKREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_SUBMITHOTEXPANDTASKREQUEST_H_

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
			class ALIBABACLOUD_DRDS_EXPORT SubmitHotExpandTaskRequest : public RpcServiceRequest
			{
				struct InstanceDbMapping
				{
					std::string dbList;
					std::string instanceName;
				};
				struct Mapping
				{
					std::string dbShardColumn;
					std::string tbShardColumn;
					std::string shardTbValue;
					std::string hotDbName;
					std::string shardDbValue;
					std::string hotTableName;
					std::string logicTable;
				};
				struct SupperAccountMapping
				{
					std::string instanceName;
					std::string supperAccount;
					std::string supperPassword;
				};
				struct ExtendedMapping
				{
					std::string srcInstanceId;
					std::string srcDb;
				};

			public:
				SubmitHotExpandTaskRequest();
				~SubmitHotExpandTaskRequest();

				std::vector<InstanceDbMapping> getInstanceDbMapping()const;
				void setInstanceDbMapping(const std::vector<InstanceDbMapping>& instanceDbMapping);
				std::vector<Mapping> getMapping()const;
				void setMapping(const std::vector<Mapping>& mapping);
				std::string getTaskDesc()const;
				void setTaskDesc(const std::string& taskDesc);
				std::string getDbName()const;
				void setDbName(const std::string& dbName);
				std::vector<SupperAccountMapping> getSupperAccountMapping()const;
				void setSupperAccountMapping(const std::vector<SupperAccountMapping>& supperAccountMapping);
				std::vector<ExtendedMapping> getExtendedMapping()const;
				void setExtendedMapping(const std::vector<ExtendedMapping>& extendedMapping);
				std::string getTaskName()const;
				void setTaskName(const std::string& taskName);
				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::vector<InstanceDbMapping> instanceDbMapping_;
				std::vector<Mapping> mapping_;
				std::string taskDesc_;
				std::string dbName_;
				std::vector<SupperAccountMapping> supperAccountMapping_;
				std::vector<ExtendedMapping> extendedMapping_;
				std::string taskName_;
				std::string drdsInstanceId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_SUBMITHOTEXPANDTASKREQUEST_H_