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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBESNAPSHOTSREQUEST_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBESNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecsops/EcsopsExport.h>

namespace AlibabaCloud
{
	namespace Ecsops
	{
		namespace Model
		{
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeSnapshotsRequest : public RpcServiceRequest
			{

			public:
				OpsDescribeSnapshotsRequest();
				~OpsDescribeSnapshotsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotIds()const;
				void setSnapshotIds(const std::string& snapshotIds);
				std::string getSnapshotName()const;
				void setSnapshotName(const std::string& snapshotName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				bool getCreateFinished()const;
				void setCreateFinished(bool createFinished);
				std::string getFuzzySnapshotName()const;
				void setFuzzySnapshotName(const std::string& fuzzySnapshotName);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getSourceDiskId()const;
				void setSourceDiskId(const std::string& sourceDiskId);
				std::string getEcsInstanceId()const;
				void setEcsInstanceId(const std::string& ecsInstanceId);
				std::string getSnapshotTypes()const;
				void setSnapshotTypes(const std::string& snapshotTypes);
				std::string getSourceDiskType()const;
				void setSourceDiskType(const std::string& sourceDiskType);
				std::string getCreateTimeFrom()const;
				void setCreateTimeFrom(const std::string& createTimeFrom);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);
				int getPageNo()const;
				void setPageNo(int pageNo);
				std::string getCreateTimeTo()const;
				void setCreateTimeTo(const std::string& createTimeTo);

            private:
				long resourceOwnerId_;
				std::string snapshotIds_;
				std::string snapshotName_;
				std::string accessKeyId_;
				bool createFinished_;
				std::string fuzzySnapshotName_;
				int pageSize_;
				std::string sourceDiskId_;
				std::string ecsInstanceId_;
				std::string snapshotTypes_;
				std::string sourceDiskType_;
				std::string createTimeFrom_;
				std::string regionNo_;
				int pageNo_;
				std::string createTimeTo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBESNAPSHOTSREQUEST_H_