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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEGROUPSRESULT_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEGROUPSRESULT_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeGroupsResult : public ServiceResult
			{
			public:
				struct Group
				{
					std::string groupName;
					std::string regionNo;
					std::string createdTime;
					std::string vpcId;
					std::string modifiedTime;
					std::string groupDesc;
					int ecsInstanceCount;
					std::string groupId;
				};


				OpsDescribeGroupsResult();
				explicit OpsDescribeGroupsResult(const std::string &payload);
				~OpsDescribeGroupsResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<Group> getGroups()const;
				int getPageNo()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<Group> groups_;
				int pageNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEGROUPSRESULT_H_