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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSCREATEINSTANCEREQUEST_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSCREATEINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_ECSOPS_EXPORT OpsCreateInstanceRequest : public RpcServiceRequest
			{

			public:
				OpsCreateInstanceRequest();
				~OpsCreateInstanceRequest();

				std::string getDataDisk4SnapshotId()const;
				void setDataDisk4SnapshotId(const std::string& dataDisk4SnapshotId);
				bool getDataDisk4EnableAutoSnapshot()const;
				void setDataDisk4EnableAutoSnapshot(bool dataDisk4EnableAutoSnapshot);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getIzNo()const;
				void setIzNo(const std::string& izNo);
				std::string getDataDisk3Description()const;
				void setDataDisk3Description(const std::string& dataDisk3Description);
				bool getDataDisk3Portable()const;
				void setDataDisk3Portable(bool dataDisk3Portable);
				bool getDataDisk3DeleteWithInstance()const;
				void setDataDisk3DeleteWithInstance(bool dataDisk3DeleteWithInstance);
				std::string getHostname()const;
				void setHostname(const std::string& hostname);
				std::string getPassword()const;
				void setPassword(const std::string& password);
				std::string getZoneNo()const;
				void setZoneNo(const std::string& zoneNo);
				int getCores()const;
				void setCores(int cores);
				std::string getSystemDiskCategory()const;
				void setSystemDiskCategory(const std::string& systemDiskCategory);
				bool getDataDisk4DeleteWithInstance()const;
				void setDataDisk4DeleteWithInstance(bool dataDisk4DeleteWithInstance);
				bool getDataDisk4DeleteAutoSnapshot()const;
				void setDataDisk4DeleteAutoSnapshot(bool dataDisk4DeleteAutoSnapshot);
				std::string getDataDisk1SnapshotId()const;
				void setDataDisk1SnapshotId(const std::string& dataDisk1SnapshotId);
				int getSystemDiskSize()const;
				void setSystemDiskSize(int systemDiskSize);
				int getIntranetTx()const;
				void setIntranetTx(int intranetTx);
				bool getDataDisk3EnableAutoSnapshot()const;
				void setDataDisk3EnableAutoSnapshot(bool dataDisk3EnableAutoSnapshot);
				std::string getSystemDeviceName()const;
				void setSystemDeviceName(const std::string& systemDeviceName);
				std::string getSystemDeviceDesc()const;
				void setSystemDeviceDesc(const std::string& systemDeviceDesc);
				std::string getDataDisk1Description()const;
				void setDataDisk1Description(const std::string& dataDisk1Description);
				bool getDataDisk2DeleteWithInstance()const;
				void setDataDisk2DeleteWithInstance(bool dataDisk2DeleteWithInstance);
				std::string getNcId()const;
				void setNcId(const std::string& ncId);
				std::string getDataDisk2Category()const;
				void setDataDisk2Category(const std::string& dataDisk2Category);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getDataDisk1Name()const;
				void setDataDisk1Name(const std::string& dataDisk1Name);
				int getSystemIopsSize()const;
				void setSystemIopsSize(int systemIopsSize);
				std::string getDataDisk3SnapshotId()const;
				void setDataDisk3SnapshotId(const std::string& dataDisk3SnapshotId);
				int getInternetTx()const;
				void setInternetTx(int internetTx);
				int getDataDisk1BpsSize()const;
				void setDataDisk1BpsSize(int dataDisk1BpsSize);
				int getDataDisk3BpsSize()const;
				void setDataDisk3BpsSize(int dataDisk3BpsSize);
				bool getDataDisk2EnableAutoSnapshot()const;
				void setDataDisk2EnableAutoSnapshot(bool dataDisk2EnableAutoSnapshot);
				std::string getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::string& privateIpAddress);
				int getDataDisk2IopsSize()const;
				void setDataDisk2IopsSize(int dataDisk2IopsSize);
				std::string getDataDisk4Category()const;
				void setDataDisk4Category(const std::string& dataDisk4Category);
				int getDataDisk4IopsSize()const;
				void setDataDisk4IopsSize(int dataDisk4IopsSize);
				bool getDataDisk1Portable()const;
				void setDataDisk1Portable(bool dataDisk1Portable);
				std::string getDataDisk2MountPoint()const;
				void setDataDisk2MountPoint(const std::string& dataDisk2MountPoint);
				int getDataDisk1Size()const;
				void setDataDisk1Size(int dataDisk1Size);
				std::string getVswId()const;
				void setVswId(const std::string& vswId);
				bool getDataDisk2DeleteAutoSnapshot()const;
				void setDataDisk2DeleteAutoSnapshot(bool dataDisk2DeleteAutoSnapshot);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				bool getDataDisk1EnableAutoSnapshot()const;
				void setDataDisk1EnableAutoSnapshot(bool dataDisk1EnableAutoSnapshot);
				std::string getVpcPrivateIp()const;
				void setVpcPrivateIp(const std::string& vpcPrivateIp);
				std::string getVlanId()const;
				void setVlanId(const std::string& vlanId);
				std::string getDataDisk4Name()const;
				void setDataDisk4Name(const std::string& dataDisk4Name);
				bool getIoOptimized()const;
				void setIoOptimized(bool ioOptimized);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getDataDisk2SnapshotId()const;
				void setDataDisk2SnapshotId(const std::string& dataDisk2SnapshotId);
				std::string getDataDisk4MountPoint()const;
				void setDataDisk4MountPoint(const std::string& dataDisk4MountPoint);
				bool getDataDisk4Portable()const;
				void setDataDisk4Portable(bool dataDisk4Portable);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getDataDisk2Size()const;
				void setDataDisk2Size(int dataDisk2Size);
				int getDataDisk4Size()const;
				void setDataDisk4Size(int dataDisk4Size);
				int getMem()const;
				void setMem(int mem);
				int getSystemBpsSize()const;
				void setSystemBpsSize(int systemBpsSize);
				std::string getDataDisk2Description()const;
				void setDataDisk2Description(const std::string& dataDisk2Description);
				bool getDataDisk1DeleteWithInstance()const;
				void setDataDisk1DeleteWithInstance(bool dataDisk1DeleteWithInstance);
				bool getDataDisk1DeleteAutoSnapshot()const;
				void setDataDisk1DeleteAutoSnapshot(bool dataDisk1DeleteAutoSnapshot);
				std::string getDataDisk2Name()const;
				void setDataDisk2Name(const std::string& dataDisk2Name);
				std::string getDataDisk3Name()const;
				void setDataDisk3Name(const std::string& dataDisk3Name);
				std::string getDataDisk1MountPoint()const;
				void setDataDisk1MountPoint(const std::string& dataDisk1MountPoint);
				int getIntranetRx()const;
				void setIntranetRx(int intranetRx);
				int getDataDisk3Size()const;
				void setDataDisk3Size(int dataDisk3Size);
				bool getComputeIntensive()const;
				void setComputeIntensive(bool computeIntensive);
				bool getEnableVmOsConfig()const;
				void setEnableVmOsConfig(bool enableVmOsConfig);
				std::string getDataDisk1Category()const;
				void setDataDisk1Category(const std::string& dataDisk1Category);
				std::string getDataDisk3MountPoint()const;
				void setDataDisk3MountPoint(const std::string& dataDisk3MountPoint);
				std::string getDataDisk4Description()const;
				void setDataDisk4Description(const std::string& dataDisk4Description);
				int getDataDisk2BpsSize()const;
				void setDataDisk2BpsSize(int dataDisk2BpsSize);
				int getInternetRx()const;
				void setInternetRx(int internetRx);
				int getDataDisk4BpsSize()const;
				void setDataDisk4BpsSize(int dataDisk4BpsSize);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);
				std::string getEcsInstanceName()const;
				void setEcsInstanceName(const std::string& ecsInstanceName);
				bool getAsync()const;
				void setAsync(bool async);
				int getDataDisk1IopsSize()const;
				void setDataDisk1IopsSize(int dataDisk1IopsSize);
				bool getDataDisk3DeleteAutoSnapshot()const;
				void setDataDisk3DeleteAutoSnapshot(bool dataDisk3DeleteAutoSnapshot);
				bool getDataDisk2Portable()const;
				void setDataDisk2Portable(bool dataDisk2Portable);
				std::string getDataDisk3Category()const;
				void setDataDisk3Category(const std::string& dataDisk3Category);
				int getDataDisk3IopsSize()const;
				void setDataDisk3IopsSize(int dataDisk3IopsSize);

            private:
				std::string dataDisk4SnapshotId_;
				bool dataDisk4EnableAutoSnapshot_;
				long resourceOwnerId_;
				std::string izNo_;
				std::string dataDisk3Description_;
				bool dataDisk3Portable_;
				bool dataDisk3DeleteWithInstance_;
				std::string hostname_;
				std::string password_;
				std::string zoneNo_;
				int cores_;
				std::string systemDiskCategory_;
				bool dataDisk4DeleteWithInstance_;
				bool dataDisk4DeleteAutoSnapshot_;
				std::string dataDisk1SnapshotId_;
				int systemDiskSize_;
				int intranetTx_;
				bool dataDisk3EnableAutoSnapshot_;
				std::string systemDeviceName_;
				std::string systemDeviceDesc_;
				std::string dataDisk1Description_;
				bool dataDisk2DeleteWithInstance_;
				std::string ncId_;
				std::string dataDisk2Category_;
				std::string groupId_;
				std::string dataDisk1Name_;
				int systemIopsSize_;
				std::string dataDisk3SnapshotId_;
				int internetTx_;
				int dataDisk1BpsSize_;
				int dataDisk3BpsSize_;
				bool dataDisk2EnableAutoSnapshot_;
				std::string privateIpAddress_;
				int dataDisk2IopsSize_;
				std::string dataDisk4Category_;
				int dataDisk4IopsSize_;
				bool dataDisk1Portable_;
				std::string dataDisk2MountPoint_;
				int dataDisk1Size_;
				std::string vswId_;
				bool dataDisk2DeleteAutoSnapshot_;
				std::string imageId_;
				bool dataDisk1EnableAutoSnapshot_;
				std::string vpcPrivateIp_;
				std::string vlanId_;
				std::string dataDisk4Name_;
				bool ioOptimized_;
				std::string description_;
				std::string dataDisk2SnapshotId_;
				std::string dataDisk4MountPoint_;
				bool dataDisk4Portable_;
				std::string accessKeyId_;
				int dataDisk2Size_;
				int dataDisk4Size_;
				int mem_;
				int systemBpsSize_;
				std::string dataDisk2Description_;
				bool dataDisk1DeleteWithInstance_;
				bool dataDisk1DeleteAutoSnapshot_;
				std::string dataDisk2Name_;
				std::string dataDisk3Name_;
				std::string dataDisk1MountPoint_;
				int intranetRx_;
				int dataDisk3Size_;
				bool computeIntensive_;
				bool enableVmOsConfig_;
				std::string dataDisk1Category_;
				std::string dataDisk3MountPoint_;
				std::string dataDisk4Description_;
				int dataDisk2BpsSize_;
				int internetRx_;
				int dataDisk4BpsSize_;
				std::string regionNo_;
				std::string ecsInstanceName_;
				bool async_;
				int dataDisk1IopsSize_;
				bool dataDisk3DeleteAutoSnapshot_;
				bool dataDisk2Portable_;
				std::string dataDisk3Category_;
				int dataDisk3IopsSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSCREATEINSTANCEREQUEST_H_