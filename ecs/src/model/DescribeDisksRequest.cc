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

#include <alibabacloud/ecs/model/DescribeDisksRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDisksRequest;

DescribeDisksRequest::DescribeDisksRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDisks")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDisksRequest::~DescribeDisksRequest()
{}

long DescribeDisksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDisksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDisksRequest::getFilter2Value()const
{
	return filter2Value_;
}

void DescribeDisksRequest::setFilter2Value(const std::string& filter2Value)
{
	filter2Value_ = filter2Value;
	setParameter("Filter2Value", filter2Value);
}

std::string DescribeDisksRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void DescribeDisksRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

std::string DescribeDisksRequest::getDiskName()const
{
	return diskName_;
}

void DescribeDisksRequest::setDiskName(const std::string& diskName)
{
	diskName_ = diskName;
	setParameter("DiskName", diskName);
}

bool DescribeDisksRequest::getDeleteAutoSnapshot()const
{
	return deleteAutoSnapshot_;
}

void DescribeDisksRequest::setDeleteAutoSnapshot(bool deleteAutoSnapshot)
{
	deleteAutoSnapshot_ = deleteAutoSnapshot;
	setParameter("DeleteAutoSnapshot", deleteAutoSnapshot ? "true" : "false");
}

std::string DescribeDisksRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDisksRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDisksRequest::getDiskChargeType()const
{
	return diskChargeType_;
}

void DescribeDisksRequest::setDiskChargeType(const std::string& diskChargeType)
{
	diskChargeType_ = diskChargeType;
	setParameter("DiskChargeType", diskChargeType);
}

std::string DescribeDisksRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeDisksRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setParameter("LockReason", lockReason);
}

std::string DescribeDisksRequest::getFilter1Key()const
{
	return filter1Key_;
}

void DescribeDisksRequest::setFilter1Key(const std::string& filter1Key)
{
	filter1Key_ = filter1Key;
	setParameter("Filter1Key", filter1Key);
}

std::vector<DescribeDisksRequest::Tag> DescribeDisksRequest::getTag()const
{
	return tag_;
}

void DescribeDisksRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

bool DescribeDisksRequest::getEnableAutoSnapshot()const
{
	return enableAutoSnapshot_;
}

void DescribeDisksRequest::setEnableAutoSnapshot(bool enableAutoSnapshot)
{
	enableAutoSnapshot_ = enableAutoSnapshot;
	setParameter("EnableAutoSnapshot", enableAutoSnapshot ? "true" : "false");
}

bool DescribeDisksRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeDisksRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string DescribeDisksRequest::getFilter1Value()const
{
	return filter1Value_;
}

void DescribeDisksRequest::setFilter1Value(const std::string& filter1Value)
{
	filter1Value_ = filter1Value;
	setParameter("Filter1Value", filter1Value);
}

bool DescribeDisksRequest::getPortable()const
{
	return portable_;
}

void DescribeDisksRequest::setPortable(bool portable)
{
	portable_ = portable;
	setParameter("Portable", portable ? "true" : "false");
}

long DescribeDisksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDisksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> DescribeDisksRequest::getAdditionalAttributes()const
{
	return additionalAttributes_;
}

void DescribeDisksRequest::setAdditionalAttributes(const std::vector<std::string>& additionalAttributes)
{
	additionalAttributes_ = additionalAttributes;
	for(int dep1 = 0; dep1!= additionalAttributes.size(); dep1++) {
		setParameter("AdditionalAttributes."+ std::to_string(dep1), additionalAttributes.at(dep1));
	}
}

std::string DescribeDisksRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDisksRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeDisksRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDisksRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeDisksRequest::getStatus()const
{
	return status_;
}

void DescribeDisksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

std::string DescribeDisksRequest::getSnapshotId()const
{
	return snapshotId_;
}

void DescribeDisksRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

int DescribeDisksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDisksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDisksRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDisksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeDisksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDisksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDisksRequest::getDiskIds()const
{
	return diskIds_;
}

void DescribeDisksRequest::setDiskIds(const std::string& diskIds)
{
	diskIds_ = diskIds;
	setParameter("DiskIds", diskIds);
}

bool DescribeDisksRequest::getDeleteWithInstance()const
{
	return deleteWithInstance_;
}

void DescribeDisksRequest::setDeleteWithInstance(bool deleteWithInstance)
{
	deleteWithInstance_ = deleteWithInstance;
	setParameter("DeleteWithInstance", deleteWithInstance ? "true" : "false");
}

std::string DescribeDisksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDisksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDisksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDisksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool DescribeDisksRequest::getEnableAutomatedSnapshotPolicy()const
{
	return enableAutomatedSnapshotPolicy_;
}

void DescribeDisksRequest::setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy)
{
	enableAutomatedSnapshotPolicy_ = enableAutomatedSnapshotPolicy;
	setParameter("EnableAutomatedSnapshotPolicy", enableAutomatedSnapshotPolicy ? "true" : "false");
}

std::string DescribeDisksRequest::getFilter2Key()const
{
	return filter2Key_;
}

void DescribeDisksRequest::setFilter2Key(const std::string& filter2Key)
{
	filter2Key_ = filter2Key;
	setParameter("Filter2Key", filter2Key);
}

std::string DescribeDisksRequest::getDiskType()const
{
	return diskType_;
}

void DescribeDisksRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setParameter("DiskType", diskType);
}

bool DescribeDisksRequest::getEnableShared()const
{
	return enableShared_;
}

void DescribeDisksRequest::setEnableShared(bool enableShared)
{
	enableShared_ = enableShared;
	setParameter("EnableShared", enableShared ? "true" : "false");
}

bool DescribeDisksRequest::getEncrypted()const
{
	return encrypted_;
}

void DescribeDisksRequest::setEncrypted(bool encrypted)
{
	encrypted_ = encrypted;
	setParameter("Encrypted", encrypted ? "true" : "false");
}

std::string DescribeDisksRequest::getCategory()const
{
	return category_;
}

void DescribeDisksRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string DescribeDisksRequest::getKMSKeyId()const
{
	return kMSKeyId_;
}

void DescribeDisksRequest::setKMSKeyId(const std::string& kMSKeyId)
{
	kMSKeyId_ = kMSKeyId;
	setParameter("KMSKeyId", kMSKeyId);
}

