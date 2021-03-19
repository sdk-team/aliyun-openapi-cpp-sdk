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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEDISKSREQUEST_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEDISKSREQUEST_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeDisksRequest : public RpcServiceRequest
			{

			public:
				OpsDescribeDisksRequest();
				~OpsDescribeDisksRequest();

				std::string getFuzzyDiskName()const;
				void setFuzzyDiskName(const std::string& fuzzyDiskName);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getIzNo()const;
				void setIzNo(const std::string& izNo);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getExcludeStatus()const;
				void setExcludeStatus(const std::string& excludeStatus);
				bool getDeleteAutoSnapshot()const;
				void setDeleteAutoSnapshot(bool deleteAutoSnapshot);
				std::string getDiskCategory()const;
				void setDiskCategory(const std::string& diskCategory);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getDiskIds()const;
				void setDiskIds(const std::string& diskIds);
				bool getDeleteWithInstance()const;
				void setDeleteWithInstance(bool deleteWithInstance);
				std::string getEcsInstanceId()const;
				void setEcsInstanceId(const std::string& ecsInstanceId);
				bool getEnableAutoSnapshot()const;
				void setEnableAutoSnapshot(bool enableAutoSnapshot);
				bool getActive()const;
				void setActive(bool active);
				std::string getCreateTimeFrom()const;
				void setCreateTimeFrom(const std::string& createTimeFrom);
				bool getPortable()const;
				void setPortable(bool portable);
				std::string getDiskType()const;
				void setDiskType(const std::string& diskType);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);
				int getPageNo()const;
				void setPageNo(int pageNo);
				std::string getCreateTimeTo()const;
				void setCreateTimeTo(const std::string& createTimeTo);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string fuzzyDiskName_;
				long resourceOwnerId_;
				std::string izNo_;
				std::string snapshotId_;
				std::string imageId_;
				std::string accessKeyId_;
				std::string excludeStatus_;
				bool deleteAutoSnapshot_;
				std::string diskCategory_;
				int pageSize_;
				std::string diskIds_;
				bool deleteWithInstance_;
				std::string ecsInstanceId_;
				bool enableAutoSnapshot_;
				bool active_;
				std::string createTimeFrom_;
				bool portable_;
				std::string diskType_;
				std::string regionNo_;
				int pageNo_;
				std::string createTimeTo_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEDISKSREQUEST_H_