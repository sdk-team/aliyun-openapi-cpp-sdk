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

#include <alibabacloud/ecs/model/DescribePriceRequest.h>

using AlibabaCloud::Ecs::Model::DescribePriceRequest;

DescribePriceRequest::DescribePriceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribePrice")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePriceRequest::~DescribePriceRequest()
{}

int DescribePriceRequest::getDataDisk3Size()const
{
	return dataDisk3Size_;
}

void DescribePriceRequest::setDataDisk3Size(int dataDisk3Size)
{
	dataDisk3Size_ = dataDisk3Size;
	setParameter("DataDisk3Size", std::to_string(dataDisk3Size));
}

long DescribePriceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePriceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribePriceRequest::getDataDisk3Category()const
{
	return dataDisk3Category_;
}

void DescribePriceRequest::setDataDisk3Category(const std::string& dataDisk3Category)
{
	dataDisk3Category_ = dataDisk3Category;
	setParameter("DataDisk3Category", dataDisk3Category);
}

int DescribePriceRequest::getDataDisk4Size()const
{
	return dataDisk4Size_;
}

void DescribePriceRequest::setDataDisk4Size(int dataDisk4Size)
{
	dataDisk4Size_ = dataDisk4Size;
	setParameter("DataDisk4Size", std::to_string(dataDisk4Size));
}

std::string DescribePriceRequest::getPriceUnit()const
{
	return priceUnit_;
}

void DescribePriceRequest::setPriceUnit(const std::string& priceUnit)
{
	priceUnit_ = priceUnit;
	setParameter("PriceUnit", priceUnit);
}

int DescribePriceRequest::getPeriod()const
{
	return period_;
}

void DescribePriceRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string DescribePriceRequest::getDataDisk1PerformanceLevel()const
{
	return dataDisk1PerformanceLevel_;
}

void DescribePriceRequest::setDataDisk1PerformanceLevel(const std::string& dataDisk1PerformanceLevel)
{
	dataDisk1PerformanceLevel_ = dataDisk1PerformanceLevel;
	setParameter("DataDisk1PerformanceLevel", dataDisk1PerformanceLevel);
}

long DescribePriceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePriceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribePriceRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribePriceRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string DescribePriceRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void DescribePriceRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setParameter("InstanceNetworkType", instanceNetworkType);
}

int DescribePriceRequest::getInstanceAmount()const
{
	return instanceAmount_;
}

void DescribePriceRequest::setInstanceAmount(int instanceAmount)
{
	instanceAmount_ = instanceAmount;
	setParameter("InstanceAmount", std::to_string(instanceAmount));
}

std::string DescribePriceRequest::getDataDisk3PerformanceLevel()const
{
	return dataDisk3PerformanceLevel_;
}

void DescribePriceRequest::setDataDisk3PerformanceLevel(const std::string& dataDisk3PerformanceLevel)
{
	dataDisk3PerformanceLevel_ = dataDisk3PerformanceLevel;
	setParameter("DataDisk3PerformanceLevel", dataDisk3PerformanceLevel);
}

std::string DescribePriceRequest::getImageId()const
{
	return imageId_;
}

void DescribePriceRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setParameter("ImageId", imageId);
}

std::string DescribePriceRequest::getIoOptimized()const
{
	return ioOptimized_;
}

void DescribePriceRequest::setIoOptimized(const std::string& ioOptimized)
{
	ioOptimized_ = ioOptimized;
	setParameter("IoOptimized", ioOptimized);
}

int DescribePriceRequest::getInternetMaxBandwidthOut()const
{
	return internetMaxBandwidthOut_;
}

void DescribePriceRequest::setInternetMaxBandwidthOut(int internetMaxBandwidthOut)
{
	internetMaxBandwidthOut_ = internetMaxBandwidthOut;
	setParameter("InternetMaxBandwidthOut", std::to_string(internetMaxBandwidthOut));
}

std::string DescribePriceRequest::getSystemDiskCategory()const
{
	return systemDiskCategory_;
}

void DescribePriceRequest::setSystemDiskCategory(const std::string& systemDiskCategory)
{
	systemDiskCategory_ = systemDiskCategory;
	setParameter("SystemDiskCategory", systemDiskCategory);
}

std::string DescribePriceRequest::getPlatform()const
{
	return platform_;
}

void DescribePriceRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

int DescribePriceRequest::getCapacity()const
{
	return capacity_;
}

void DescribePriceRequest::setCapacity(int capacity)
{
	capacity_ = capacity;
	setParameter("Capacity", std::to_string(capacity));
}

std::string DescribePriceRequest::getSystemDiskPerformanceLevel()const
{
	return systemDiskPerformanceLevel_;
}

void DescribePriceRequest::setSystemDiskPerformanceLevel(const std::string& systemDiskPerformanceLevel)
{
	systemDiskPerformanceLevel_ = systemDiskPerformanceLevel;
	setParameter("SystemDiskPerformanceLevel", systemDiskPerformanceLevel);
}

std::string DescribePriceRequest::getDataDisk4Category()const
{
	return dataDisk4Category_;
}

void DescribePriceRequest::setDataDisk4Category(const std::string& dataDisk4Category)
{
	dataDisk4Category_ = dataDisk4Category;
	setParameter("DataDisk4Category", dataDisk4Category);
}

std::string DescribePriceRequest::getDataDisk4PerformanceLevel()const
{
	return dataDisk4PerformanceLevel_;
}

void DescribePriceRequest::setDataDisk4PerformanceLevel(const std::string& dataDisk4PerformanceLevel)
{
	dataDisk4PerformanceLevel_ = dataDisk4PerformanceLevel;
	setParameter("DataDisk4PerformanceLevel", dataDisk4PerformanceLevel);
}

std::string DescribePriceRequest::getRegionId()const
{
	return regionId_;
}

void DescribePriceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribePriceRequest::getScope()const
{
	return scope_;
}

void DescribePriceRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

std::string DescribePriceRequest::getInstanceType()const
{
	return instanceType_;
}

void DescribePriceRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string DescribePriceRequest::getDataDisk2Category()const
{
	return dataDisk2Category_;
}

void DescribePriceRequest::setDataDisk2Category(const std::string& dataDisk2Category)
{
	dataDisk2Category_ = dataDisk2Category;
	setParameter("DataDisk2Category", dataDisk2Category);
}

int DescribePriceRequest::getDataDisk1Size()const
{
	return dataDisk1Size_;
}

void DescribePriceRequest::setDataDisk1Size(int dataDisk1Size)
{
	dataDisk1Size_ = dataDisk1Size;
	setParameter("DataDisk1Size", std::to_string(dataDisk1Size));
}

int DescribePriceRequest::getAmount()const
{
	return amount_;
}

void DescribePriceRequest::setAmount(int amount)
{
	amount_ = amount;
	setParameter("Amount", std::to_string(amount));
}

std::string DescribePriceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribePriceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribePriceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribePriceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribePriceRequest::getDataDisk2Size()const
{
	return dataDisk2Size_;
}

void DescribePriceRequest::setDataDisk2Size(int dataDisk2Size)
{
	dataDisk2Size_ = dataDisk2Size;
	setParameter("DataDisk2Size", std::to_string(dataDisk2Size));
}

std::string DescribePriceRequest::getResourceType()const
{
	return resourceType_;
}

void DescribePriceRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string DescribePriceRequest::getDataDisk1Category()const
{
	return dataDisk1Category_;
}

void DescribePriceRequest::setDataDisk1Category(const std::string& dataDisk1Category)
{
	dataDisk1Category_ = dataDisk1Category;
	setParameter("DataDisk1Category", dataDisk1Category);
}

std::string DescribePriceRequest::getDataDisk2PerformanceLevel()const
{
	return dataDisk2PerformanceLevel_;
}

void DescribePriceRequest::setDataDisk2PerformanceLevel(const std::string& dataDisk2PerformanceLevel)
{
	dataDisk2PerformanceLevel_ = dataDisk2PerformanceLevel;
	setParameter("DataDisk2PerformanceLevel", dataDisk2PerformanceLevel);
}

int DescribePriceRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void DescribePriceRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string DescribePriceRequest::getOfferingType()const
{
	return offeringType_;
}

void DescribePriceRequest::setOfferingType(const std::string& offeringType)
{
	offeringType_ = offeringType;
	setParameter("OfferingType", offeringType);
}

