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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBESNAPSHOTSRESULT_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBESNAPSHOTSRESULT_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeSnapshotsResult : public ServiceResult
			{
			public:
				struct Snapshot
				{
					int snapshotSize;
					std::string regionNo;
					std::string progress;
					std::string createdTime;
					std::string description;
					std::string houyiSnapshotId;
					std::string snapshotName;
					std::string sourceDiskId;
					std::string snapshotId;
					std::string modifiedTime;
					std::string imageId;
					std::string snapshotType;
					std::string bid;
					std::string sourceDiskType;
					long aliUid;
				};


				OpsDescribeSnapshotsResult();
				explicit OpsDescribeSnapshotsResult(const std::string &payload);
				~OpsDescribeSnapshotsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNo()const;
				std::vector<Snapshot> getSnapshots()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNo_;
				std::vector<Snapshot> snapshots_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBESNAPSHOTSRESULT_H_