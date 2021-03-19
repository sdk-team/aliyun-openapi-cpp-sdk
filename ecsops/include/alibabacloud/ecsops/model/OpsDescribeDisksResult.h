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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEDISKSRESULT_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEDISKSRESULT_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeDisksResult : public ServiceResult
			{
			public:
				struct Disk
				{
					std::string regionNo;
					std::string createdTime;
					std::string lastDetachedTime;
					bool deleteAutoSnapshot;
					std::string businessStatus;
					std::string zoneNo;
					int iopsSize;
					std::string diskType;
					std::string izNo;
					std::string diskDesc;
					std::string modifiedTime;
					int diskSize;
					std::string imageId;
					std::string bid;
					std::string status;
					std::string houyiDiskId;
					std::string productCode;
					std::string lastAttachedTime;
					bool deleteWithInstance;
					std::string diskCategory;
					bool enableAutoSnapshot;
					std::string diskName;
					std::string ecsInstanceId;
					std::string mountPoint;
					bool portable;
					std::string snapshotId;
					bool active;
					bool bootable;
					long id;
					long aliUid;
					std::string diskId;
				};


				OpsDescribeDisksResult();
				explicit OpsDescribeDisksResult(const std::string &payload);
				~OpsDescribeDisksResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<Disk> getDisks()const;
				int getPageNo()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<Disk> disks_;
				int pageNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEDISKSRESULT_H_