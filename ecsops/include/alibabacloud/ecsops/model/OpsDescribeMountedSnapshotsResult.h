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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEMOUNTEDSNAPSHOTSRESULT_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEMOUNTEDSNAPSHOTSRESULT_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeMountedSnapshotsResult : public ServiceResult
			{
			public:
				struct Snapshot
				{
					std::string ecsInstanceId;
					std::string status;
					std::string mountPoint;
					std::string snapshotId;
					std::string lastAttachedTime;
					std::string resourceOwnerId;
				};


				OpsDescribeMountedSnapshotsResult();
				explicit OpsDescribeMountedSnapshotsResult(const std::string &payload);
				~OpsDescribeMountedSnapshotsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNo()const;
				std::vector<Snapshot> getMountedSnapshots()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNo_;
				std::vector<Snapshot> mountedSnapshots_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEMOUNTEDSNAPSHOTSRESULT_H_