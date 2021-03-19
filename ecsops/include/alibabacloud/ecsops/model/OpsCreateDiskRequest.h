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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSCREATEDISKREQUEST_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSCREATEDISKREQUEST_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsCreateDiskRequest : public RpcServiceRequest
			{

			public:
				OpsCreateDiskRequest();
				~OpsCreateDiskRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getIzNo()const;
				void setIzNo(const std::string& izNo);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getMountPoint()const;
				void setMountPoint(const std::string& mountPoint);
				std::string getDiskName()const;
				void setDiskName(const std::string& diskName);
				bool getDeleteAutoSnapshot()const;
				void setDeleteAutoSnapshot(bool deleteAutoSnapshot);
				std::string getDiskCategory()const;
				void setDiskCategory(const std::string& diskCategory);
				std::string getDiskDesc()const;
				void setDiskDesc(const std::string& diskDesc);
				bool getDeleteWithInstance()const;
				void setDeleteWithInstance(bool deleteWithInstance);
				std::string getEcsInstanceId()const;
				void setEcsInstanceId(const std::string& ecsInstanceId);
				bool getEnableAutoSnapshot()const;
				void setEnableAutoSnapshot(bool enableAutoSnapshot);
				int getDiskSize()const;
				void setDiskSize(int diskSize);
				bool getPortable()const;
				void setPortable(bool portable);
				int getBpsSize()const;
				void setBpsSize(int bpsSize);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);
				int getIopsSize()const;
				void setIopsSize(int iopsSize);

            private:
				long resourceOwnerId_;
				std::string izNo_;
				std::string snapshotId_;
				std::string accessKeyId_;
				std::string mountPoint_;
				std::string diskName_;
				bool deleteAutoSnapshot_;
				std::string diskCategory_;
				std::string diskDesc_;
				bool deleteWithInstance_;
				std::string ecsInstanceId_;
				bool enableAutoSnapshot_;
				int diskSize_;
				bool portable_;
				int bpsSize_;
				std::string regionNo_;
				int iopsSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSCREATEDISKREQUEST_H_