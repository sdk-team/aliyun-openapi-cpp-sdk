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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBEDBINSTANCESRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBEDBINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeDbInstancesResult : public ServiceResult
			{
			public:
				struct DBInstance
				{
					std::string engineVersion;
					int dBInstanceStatus;
					std::string zoneId;
					std::string dBInstanceId;
					std::vector<std::string> readOnlyDBInstanceId;
					std::string dBInstanceType;
					std::string regionId;
					std::string engine;
					std::string dBInstanceDescription;
					std::string instanceNetworkType;
				};


				DescribeDbInstancesResult();
				explicit DescribeDbInstancesResult(const std::string &payload);
				~DescribeDbInstancesResult();
				std::vector<DBInstance> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstance> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBEDBINSTANCESRESULT_H_