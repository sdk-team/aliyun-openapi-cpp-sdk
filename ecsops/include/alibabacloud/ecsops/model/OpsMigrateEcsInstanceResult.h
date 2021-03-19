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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSMIGRATEECSINSTANCERESULT_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSMIGRATEECSINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecsops/EcsopsExport.h>

namespace AlibabaCloud
{
	namespace Ecsops
	{
		namespace Model
		{
			class ALIBABACLOUD_ECSOPS_EXPORT OpsMigrateEcsInstanceResult : public ServiceResult
			{
			public:


				OpsMigrateEcsInstanceResult();
				explicit OpsMigrateEcsInstanceResult(const std::string &payload);
				~OpsMigrateEcsInstanceResult();
				std::string getEcsInstanceId()const;
				std::string getStatus()const;
				std::string getNcId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string ecsInstanceId_;
				std::string status_;
				std::string ncId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSMIGRATEECSINSTANCERESULT_H_