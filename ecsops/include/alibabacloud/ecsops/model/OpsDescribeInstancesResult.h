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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEINSTANCESRESULT_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEINSTANCESRESULT_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeInstancesResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct Disk
					{
						std::string regionNo;
						bool deleteAutoSnapshot;
						std::string businessStatus;
						std::string zoneNo;
						int iopsSize;
						std::string diskType;
						std::string izNo;
						std::string diskDesc;
						int diskSize;
						std::string imageId;
						std::string bid;
						std::string status;
						std::string houyiDiskId;
						std::string productCode;
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
					std::string ecsInstanceName;
					std::string rackId;
					std::string regionNo;
					std::string description;
					std::string privateIpAddress;
					std::string createdTime;
					std::string vswId;
					std::string platform;
					std::string securityControl;
					int vncPort;
					std::string businessStatus;
					std::string zoneNo;
					std::string houyiStatus;
					std::string publicIpAddress;
					std::string netWorkType;
					std::string izNo;
					std::vector<std::string> groupIds;
					std::string imageId;
					std::string eipId;
					std::string bid;
					int disk;
					std::string vlanId;
					std::string status;
					bool ioOptimized;
					bool mountAvailable;
					std::string hostname;
					int intranetTx;
					bool networkValidation;
					std::string systemDeviceCategory;
					std::string eip;
					int intranetRx;
					std::string ecsInstanceId;
					int cores;
					std::string natIp;
					std::string imageName;
					std::string vncHost;
					int eipBandwidth;
					int mem;
					std::string vpcId;
					std::string ncId;
					std::string ncIp;
					std::vector<Instance::Disk> disks;
					int internetTx;
					int internetRx;
					std::string vncPassword;
					std::string aliUid;
				};


				OpsDescribeInstancesResult();
				explicit OpsDescribeInstancesResult(const std::string &payload);
				~OpsDescribeInstancesResult();
				std::vector<Instance> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				int totalCount_;
				int pageSize_;
				int pageNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEINSTANCESRESULT_H_