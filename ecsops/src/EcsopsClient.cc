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

#include <alibabacloud/ecsops/EcsopsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ecsops;
using namespace AlibabaCloud::Ecsops::Model;

namespace
{
	const std::string SERVICE_NAME = "Ecsops";
}

EcsopsClient::EcsopsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EcsopsClient::EcsopsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EcsopsClient::EcsopsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

EcsopsClient::~EcsopsClient()
{}

EcsopsClient::OpsAllocateIpAddressOutcome EcsopsClient::opsAllocateIpAddress(const OpsAllocateIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsAllocateIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsAllocateIpAddressOutcome(OpsAllocateIpAddressResult(outcome.result()));
	else
		return OpsAllocateIpAddressOutcome(outcome.error());
}

void EcsopsClient::opsAllocateIpAddressAsync(const OpsAllocateIpAddressRequest& request, const OpsAllocateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsAllocateIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsAllocateIpAddressOutcomeCallable EcsopsClient::opsAllocateIpAddressCallable(const OpsAllocateIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsAllocateIpAddressOutcome()>>(
			[this, request]()
			{
			return this->opsAllocateIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsAttachDiskOutcome EcsopsClient::opsAttachDisk(const OpsAttachDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsAttachDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsAttachDiskOutcome(OpsAttachDiskResult(outcome.result()));
	else
		return OpsAttachDiskOutcome(outcome.error());
}

void EcsopsClient::opsAttachDiskAsync(const OpsAttachDiskRequest& request, const OpsAttachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsAttachDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsAttachDiskOutcomeCallable EcsopsClient::opsAttachDiskCallable(const OpsAttachDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsAttachDiskOutcome()>>(
			[this, request]()
			{
			return this->opsAttachDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsAttachSnapshotOutcome EcsopsClient::opsAttachSnapshot(const OpsAttachSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsAttachSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsAttachSnapshotOutcome(OpsAttachSnapshotResult(outcome.result()));
	else
		return OpsAttachSnapshotOutcome(outcome.error());
}

void EcsopsClient::opsAttachSnapshotAsync(const OpsAttachSnapshotRequest& request, const OpsAttachSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsAttachSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsAttachSnapshotOutcomeCallable EcsopsClient::opsAttachSnapshotCallable(const OpsAttachSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsAttachSnapshotOutcome()>>(
			[this, request]()
			{
			return this->opsAttachSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsAuthorizeSecurityGroupOutcome EcsopsClient::opsAuthorizeSecurityGroup(const OpsAuthorizeSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsAuthorizeSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsAuthorizeSecurityGroupOutcome(OpsAuthorizeSecurityGroupResult(outcome.result()));
	else
		return OpsAuthorizeSecurityGroupOutcome(outcome.error());
}

void EcsopsClient::opsAuthorizeSecurityGroupAsync(const OpsAuthorizeSecurityGroupRequest& request, const OpsAuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsAuthorizeSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsAuthorizeSecurityGroupOutcomeCallable EcsopsClient::opsAuthorizeSecurityGroupCallable(const OpsAuthorizeSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsAuthorizeSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->opsAuthorizeSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsAuthorizeSecurityGroupEgressOutcome EcsopsClient::opsAuthorizeSecurityGroupEgress(const OpsAuthorizeSecurityGroupEgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsAuthorizeSecurityGroupEgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsAuthorizeSecurityGroupEgressOutcome(OpsAuthorizeSecurityGroupEgressResult(outcome.result()));
	else
		return OpsAuthorizeSecurityGroupEgressOutcome(outcome.error());
}

void EcsopsClient::opsAuthorizeSecurityGroupEgressAsync(const OpsAuthorizeSecurityGroupEgressRequest& request, const OpsAuthorizeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsAuthorizeSecurityGroupEgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsAuthorizeSecurityGroupEgressOutcomeCallable EcsopsClient::opsAuthorizeSecurityGroupEgressCallable(const OpsAuthorizeSecurityGroupEgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsAuthorizeSecurityGroupEgressOutcome()>>(
			[this, request]()
			{
			return this->opsAuthorizeSecurityGroupEgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsCreateDiskOutcome EcsopsClient::opsCreateDisk(const OpsCreateDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsCreateDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsCreateDiskOutcome(OpsCreateDiskResult(outcome.result()));
	else
		return OpsCreateDiskOutcome(outcome.error());
}

void EcsopsClient::opsCreateDiskAsync(const OpsCreateDiskRequest& request, const OpsCreateDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsCreateDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsCreateDiskOutcomeCallable EcsopsClient::opsCreateDiskCallable(const OpsCreateDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsCreateDiskOutcome()>>(
			[this, request]()
			{
			return this->opsCreateDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsCreateImageOutcome EcsopsClient::opsCreateImage(const OpsCreateImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsCreateImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsCreateImageOutcome(OpsCreateImageResult(outcome.result()));
	else
		return OpsCreateImageOutcome(outcome.error());
}

void EcsopsClient::opsCreateImageAsync(const OpsCreateImageRequest& request, const OpsCreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsCreateImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsCreateImageOutcomeCallable EcsopsClient::opsCreateImageCallable(const OpsCreateImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsCreateImageOutcome()>>(
			[this, request]()
			{
			return this->opsCreateImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsCreateInstanceOutcome EcsopsClient::opsCreateInstance(const OpsCreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsCreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsCreateInstanceOutcome(OpsCreateInstanceResult(outcome.result()));
	else
		return OpsCreateInstanceOutcome(outcome.error());
}

void EcsopsClient::opsCreateInstanceAsync(const OpsCreateInstanceRequest& request, const OpsCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsCreateInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsCreateInstanceOutcomeCallable EcsopsClient::opsCreateInstanceCallable(const OpsCreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsCreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->opsCreateInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsCreateSecurityGroupOutcome EcsopsClient::opsCreateSecurityGroup(const OpsCreateSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsCreateSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsCreateSecurityGroupOutcome(OpsCreateSecurityGroupResult(outcome.result()));
	else
		return OpsCreateSecurityGroupOutcome(outcome.error());
}

void EcsopsClient::opsCreateSecurityGroupAsync(const OpsCreateSecurityGroupRequest& request, const OpsCreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsCreateSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsCreateSecurityGroupOutcomeCallable EcsopsClient::opsCreateSecurityGroupCallable(const OpsCreateSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsCreateSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->opsCreateSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsCreateSnapshotOutcome EcsopsClient::opsCreateSnapshot(const OpsCreateSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsCreateSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsCreateSnapshotOutcome(OpsCreateSnapshotResult(outcome.result()));
	else
		return OpsCreateSnapshotOutcome(outcome.error());
}

void EcsopsClient::opsCreateSnapshotAsync(const OpsCreateSnapshotRequest& request, const OpsCreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsCreateSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsCreateSnapshotOutcomeCallable EcsopsClient::opsCreateSnapshotCallable(const OpsCreateSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsCreateSnapshotOutcome()>>(
			[this, request]()
			{
			return this->opsCreateSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDeleteImageOutcome EcsopsClient::opsDeleteImage(const OpsDeleteImageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDeleteImageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDeleteImageOutcome(OpsDeleteImageResult(outcome.result()));
	else
		return OpsDeleteImageOutcome(outcome.error());
}

void EcsopsClient::opsDeleteImageAsync(const OpsDeleteImageRequest& request, const OpsDeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDeleteImage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDeleteImageOutcomeCallable EcsopsClient::opsDeleteImageCallable(const OpsDeleteImageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDeleteImageOutcome()>>(
			[this, request]()
			{
			return this->opsDeleteImage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDeleteSecurityGroupOutcome EcsopsClient::opsDeleteSecurityGroup(const OpsDeleteSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDeleteSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDeleteSecurityGroupOutcome(OpsDeleteSecurityGroupResult(outcome.result()));
	else
		return OpsDeleteSecurityGroupOutcome(outcome.error());
}

void EcsopsClient::opsDeleteSecurityGroupAsync(const OpsDeleteSecurityGroupRequest& request, const OpsDeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDeleteSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDeleteSecurityGroupOutcomeCallable EcsopsClient::opsDeleteSecurityGroupCallable(const OpsDeleteSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDeleteSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->opsDeleteSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDeleteSnapshotOutcome EcsopsClient::opsDeleteSnapshot(const OpsDeleteSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDeleteSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDeleteSnapshotOutcome(OpsDeleteSnapshotResult(outcome.result()));
	else
		return OpsDeleteSnapshotOutcome(outcome.error());
}

void EcsopsClient::opsDeleteSnapshotAsync(const OpsDeleteSnapshotRequest& request, const OpsDeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDeleteSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDeleteSnapshotOutcomeCallable EcsopsClient::opsDeleteSnapshotCallable(const OpsDeleteSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDeleteSnapshotOutcome()>>(
			[this, request]()
			{
			return this->opsDeleteSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDescribeDisksOutcome EcsopsClient::opsDescribeDisks(const OpsDescribeDisksRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDescribeDisksOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDescribeDisksOutcome(OpsDescribeDisksResult(outcome.result()));
	else
		return OpsDescribeDisksOutcome(outcome.error());
}

void EcsopsClient::opsDescribeDisksAsync(const OpsDescribeDisksRequest& request, const OpsDescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDescribeDisks(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDescribeDisksOutcomeCallable EcsopsClient::opsDescribeDisksCallable(const OpsDescribeDisksRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDescribeDisksOutcome()>>(
			[this, request]()
			{
			return this->opsDescribeDisks(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDescribeGroupAttributeOutcome EcsopsClient::opsDescribeGroupAttribute(const OpsDescribeGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDescribeGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDescribeGroupAttributeOutcome(OpsDescribeGroupAttributeResult(outcome.result()));
	else
		return OpsDescribeGroupAttributeOutcome(outcome.error());
}

void EcsopsClient::opsDescribeGroupAttributeAsync(const OpsDescribeGroupAttributeRequest& request, const OpsDescribeGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDescribeGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDescribeGroupAttributeOutcomeCallable EcsopsClient::opsDescribeGroupAttributeCallable(const OpsDescribeGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDescribeGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->opsDescribeGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDescribeGroupsOutcome EcsopsClient::opsDescribeGroups(const OpsDescribeGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDescribeGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDescribeGroupsOutcome(OpsDescribeGroupsResult(outcome.result()));
	else
		return OpsDescribeGroupsOutcome(outcome.error());
}

void EcsopsClient::opsDescribeGroupsAsync(const OpsDescribeGroupsRequest& request, const OpsDescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDescribeGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDescribeGroupsOutcomeCallable EcsopsClient::opsDescribeGroupsCallable(const OpsDescribeGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDescribeGroupsOutcome()>>(
			[this, request]()
			{
			return this->opsDescribeGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDescribeImagesOutcome EcsopsClient::opsDescribeImages(const OpsDescribeImagesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDescribeImagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDescribeImagesOutcome(OpsDescribeImagesResult(outcome.result()));
	else
		return OpsDescribeImagesOutcome(outcome.error());
}

void EcsopsClient::opsDescribeImagesAsync(const OpsDescribeImagesRequest& request, const OpsDescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDescribeImages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDescribeImagesOutcomeCallable EcsopsClient::opsDescribeImagesCallable(const OpsDescribeImagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDescribeImagesOutcome()>>(
			[this, request]()
			{
			return this->opsDescribeImages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDescribeInstancesOutcome EcsopsClient::opsDescribeInstances(const OpsDescribeInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDescribeInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDescribeInstancesOutcome(OpsDescribeInstancesResult(outcome.result()));
	else
		return OpsDescribeInstancesOutcome(outcome.error());
}

void EcsopsClient::opsDescribeInstancesAsync(const OpsDescribeInstancesRequest& request, const OpsDescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDescribeInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDescribeInstancesOutcomeCallable EcsopsClient::opsDescribeInstancesCallable(const OpsDescribeInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDescribeInstancesOutcome()>>(
			[this, request]()
			{
			return this->opsDescribeInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDescribeMountedSnapshotsOutcome EcsopsClient::opsDescribeMountedSnapshots(const OpsDescribeMountedSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDescribeMountedSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDescribeMountedSnapshotsOutcome(OpsDescribeMountedSnapshotsResult(outcome.result()));
	else
		return OpsDescribeMountedSnapshotsOutcome(outcome.error());
}

void EcsopsClient::opsDescribeMountedSnapshotsAsync(const OpsDescribeMountedSnapshotsRequest& request, const OpsDescribeMountedSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDescribeMountedSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDescribeMountedSnapshotsOutcomeCallable EcsopsClient::opsDescribeMountedSnapshotsCallable(const OpsDescribeMountedSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDescribeMountedSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->opsDescribeMountedSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDescribeRegionsOutcome EcsopsClient::opsDescribeRegions(const OpsDescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDescribeRegionsOutcome(OpsDescribeRegionsResult(outcome.result()));
	else
		return OpsDescribeRegionsOutcome(outcome.error());
}

void EcsopsClient::opsDescribeRegionsAsync(const OpsDescribeRegionsRequest& request, const OpsDescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDescribeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDescribeRegionsOutcomeCallable EcsopsClient::opsDescribeRegionsCallable(const OpsDescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->opsDescribeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDescribeSnapshotsOutcome EcsopsClient::opsDescribeSnapshots(const OpsDescribeSnapshotsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDescribeSnapshotsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDescribeSnapshotsOutcome(OpsDescribeSnapshotsResult(outcome.result()));
	else
		return OpsDescribeSnapshotsOutcome(outcome.error());
}

void EcsopsClient::opsDescribeSnapshotsAsync(const OpsDescribeSnapshotsRequest& request, const OpsDescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDescribeSnapshots(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDescribeSnapshotsOutcomeCallable EcsopsClient::opsDescribeSnapshotsCallable(const OpsDescribeSnapshotsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDescribeSnapshotsOutcome()>>(
			[this, request]()
			{
			return this->opsDescribeSnapshots(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDetachDiskOutcome EcsopsClient::opsDetachDisk(const OpsDetachDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDetachDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDetachDiskOutcome(OpsDetachDiskResult(outcome.result()));
	else
		return OpsDetachDiskOutcome(outcome.error());
}

void EcsopsClient::opsDetachDiskAsync(const OpsDetachDiskRequest& request, const OpsDetachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDetachDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDetachDiskOutcomeCallable EcsopsClient::opsDetachDiskCallable(const OpsDetachDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDetachDiskOutcome()>>(
			[this, request]()
			{
			return this->opsDetachDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDetachSnapshotOutcome EcsopsClient::opsDetachSnapshot(const OpsDetachSnapshotRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDetachSnapshotOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDetachSnapshotOutcome(OpsDetachSnapshotResult(outcome.result()));
	else
		return OpsDetachSnapshotOutcome(outcome.error());
}

void EcsopsClient::opsDetachSnapshotAsync(const OpsDetachSnapshotRequest& request, const OpsDetachSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDetachSnapshot(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDetachSnapshotOutcomeCallable EcsopsClient::opsDetachSnapshotCallable(const OpsDetachSnapshotRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDetachSnapshotOutcome()>>(
			[this, request]()
			{
			return this->opsDetachSnapshot(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsDetailNcOutcome EcsopsClient::opsDetailNc(const OpsDetailNcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsDetailNcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsDetailNcOutcome(OpsDetailNcResult(outcome.result()));
	else
		return OpsDetailNcOutcome(outcome.error());
}

void EcsopsClient::opsDetailNcAsync(const OpsDetailNcRequest& request, const OpsDetailNcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsDetailNc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsDetailNcOutcomeCallable EcsopsClient::opsDetailNcCallable(const OpsDetailNcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsDetailNcOutcome()>>(
			[this, request]()
			{
			return this->opsDetailNc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsGenerateVncUrlOutcome EcsopsClient::opsGenerateVncUrl(const OpsGenerateVncUrlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsGenerateVncUrlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsGenerateVncUrlOutcome(OpsGenerateVncUrlResult(outcome.result()));
	else
		return OpsGenerateVncUrlOutcome(outcome.error());
}

void EcsopsClient::opsGenerateVncUrlAsync(const OpsGenerateVncUrlRequest& request, const OpsGenerateVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsGenerateVncUrl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsGenerateVncUrlOutcomeCallable EcsopsClient::opsGenerateVncUrlCallable(const OpsGenerateVncUrlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsGenerateVncUrlOutcome()>>(
			[this, request]()
			{
			return this->opsGenerateVncUrl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsJoinSecurityGroupOutcome EcsopsClient::opsJoinSecurityGroup(const OpsJoinSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsJoinSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsJoinSecurityGroupOutcome(OpsJoinSecurityGroupResult(outcome.result()));
	else
		return OpsJoinSecurityGroupOutcome(outcome.error());
}

void EcsopsClient::opsJoinSecurityGroupAsync(const OpsJoinSecurityGroupRequest& request, const OpsJoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsJoinSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsJoinSecurityGroupOutcomeCallable EcsopsClient::opsJoinSecurityGroupCallable(const OpsJoinSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsJoinSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->opsJoinSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsLeaveSecurityGroupOutcome EcsopsClient::opsLeaveSecurityGroup(const OpsLeaveSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsLeaveSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsLeaveSecurityGroupOutcome(OpsLeaveSecurityGroupResult(outcome.result()));
	else
		return OpsLeaveSecurityGroupOutcome(outcome.error());
}

void EcsopsClient::opsLeaveSecurityGroupAsync(const OpsLeaveSecurityGroupRequest& request, const OpsLeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsLeaveSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsLeaveSecurityGroupOutcomeCallable EcsopsClient::opsLeaveSecurityGroupCallable(const OpsLeaveSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsLeaveSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->opsLeaveSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsLiveMigrateEcsInstanceOutcome EcsopsClient::opsLiveMigrateEcsInstance(const OpsLiveMigrateEcsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsLiveMigrateEcsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsLiveMigrateEcsInstanceOutcome(OpsLiveMigrateEcsInstanceResult(outcome.result()));
	else
		return OpsLiveMigrateEcsInstanceOutcome(outcome.error());
}

void EcsopsClient::opsLiveMigrateEcsInstanceAsync(const OpsLiveMigrateEcsInstanceRequest& request, const OpsLiveMigrateEcsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsLiveMigrateEcsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsLiveMigrateEcsInstanceOutcomeCallable EcsopsClient::opsLiveMigrateEcsInstanceCallable(const OpsLiveMigrateEcsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsLiveMigrateEcsInstanceOutcome()>>(
			[this, request]()
			{
			return this->opsLiveMigrateEcsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsMigrateEcsInstanceOutcome EcsopsClient::opsMigrateEcsInstance(const OpsMigrateEcsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsMigrateEcsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsMigrateEcsInstanceOutcome(OpsMigrateEcsInstanceResult(outcome.result()));
	else
		return OpsMigrateEcsInstanceOutcome(outcome.error());
}

void EcsopsClient::opsMigrateEcsInstanceAsync(const OpsMigrateEcsInstanceRequest& request, const OpsMigrateEcsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsMigrateEcsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsMigrateEcsInstanceOutcomeCallable EcsopsClient::opsMigrateEcsInstanceCallable(const OpsMigrateEcsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsMigrateEcsInstanceOutcome()>>(
			[this, request]()
			{
			return this->opsMigrateEcsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsModifyVncPasswdOutcome EcsopsClient::opsModifyVncPasswd(const OpsModifyVncPasswdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsModifyVncPasswdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsModifyVncPasswdOutcome(OpsModifyVncPasswdResult(outcome.result()));
	else
		return OpsModifyVncPasswdOutcome(outcome.error());
}

void EcsopsClient::opsModifyVncPasswdAsync(const OpsModifyVncPasswdRequest& request, const OpsModifyVncPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsModifyVncPasswd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsModifyVncPasswdOutcomeCallable EcsopsClient::opsModifyVncPasswdCallable(const OpsModifyVncPasswdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsModifyVncPasswdOutcome()>>(
			[this, request]()
			{
			return this->opsModifyVncPasswd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsMountIsoOutcome EcsopsClient::opsMountIso(const OpsMountIsoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsMountIsoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsMountIsoOutcome(OpsMountIsoResult(outcome.result()));
	else
		return OpsMountIsoOutcome(outcome.error());
}

void EcsopsClient::opsMountIsoAsync(const OpsMountIsoRequest& request, const OpsMountIsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsMountIso(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsMountIsoOutcomeCallable EcsopsClient::opsMountIsoCallable(const OpsMountIsoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsMountIsoOutcome()>>(
			[this, request]()
			{
			return this->opsMountIso(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsQueryAvailableIsosOutcome EcsopsClient::opsQueryAvailableIsos(const OpsQueryAvailableIsosRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsQueryAvailableIsosOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsQueryAvailableIsosOutcome(OpsQueryAvailableIsosResult(outcome.result()));
	else
		return OpsQueryAvailableIsosOutcome(outcome.error());
}

void EcsopsClient::opsQueryAvailableIsosAsync(const OpsQueryAvailableIsosRequest& request, const OpsQueryAvailableIsosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsQueryAvailableIsos(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsQueryAvailableIsosOutcomeCallable EcsopsClient::opsQueryAvailableIsosCallable(const OpsQueryAvailableIsosRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsQueryAvailableIsosOutcome()>>(
			[this, request]()
			{
			return this->opsQueryAvailableIsos(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsQueryAvailableNcsOutcome EcsopsClient::opsQueryAvailableNcs(const OpsQueryAvailableNcsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsQueryAvailableNcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsQueryAvailableNcsOutcome(OpsQueryAvailableNcsResult(outcome.result()));
	else
		return OpsQueryAvailableNcsOutcome(outcome.error());
}

void EcsopsClient::opsQueryAvailableNcsAsync(const OpsQueryAvailableNcsRequest& request, const OpsQueryAvailableNcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsQueryAvailableNcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsQueryAvailableNcsOutcomeCallable EcsopsClient::opsQueryAvailableNcsCallable(const OpsQueryAvailableNcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsQueryAvailableNcsOutcome()>>(
			[this, request]()
			{
			return this->opsQueryAvailableNcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsQueryMountedIsoOutcome EcsopsClient::opsQueryMountedIso(const OpsQueryMountedIsoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsQueryMountedIsoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsQueryMountedIsoOutcome(OpsQueryMountedIsoResult(outcome.result()));
	else
		return OpsQueryMountedIsoOutcome(outcome.error());
}

void EcsopsClient::opsQueryMountedIsoAsync(const OpsQueryMountedIsoRequest& request, const OpsQueryMountedIsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsQueryMountedIso(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsQueryMountedIsoOutcomeCallable EcsopsClient::opsQueryMountedIsoCallable(const OpsQueryMountedIsoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsQueryMountedIsoOutcome()>>(
			[this, request]()
			{
			return this->opsQueryMountedIso(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsQueryVncPasswdOutcome EcsopsClient::opsQueryVncPasswd(const OpsQueryVncPasswdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsQueryVncPasswdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsQueryVncPasswdOutcome(OpsQueryVncPasswdResult(outcome.result()));
	else
		return OpsQueryVncPasswdOutcome(outcome.error());
}

void EcsopsClient::opsQueryVncPasswdAsync(const OpsQueryVncPasswdRequest& request, const OpsQueryVncPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsQueryVncPasswd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsQueryVncPasswdOutcomeCallable EcsopsClient::opsQueryVncPasswdCallable(const OpsQueryVncPasswdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsQueryVncPasswdOutcome()>>(
			[this, request]()
			{
			return this->opsQueryVncPasswd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsReleaseDiskOutcome EcsopsClient::opsReleaseDisk(const OpsReleaseDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsReleaseDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsReleaseDiskOutcome(OpsReleaseDiskResult(outcome.result()));
	else
		return OpsReleaseDiskOutcome(outcome.error());
}

void EcsopsClient::opsReleaseDiskAsync(const OpsReleaseDiskRequest& request, const OpsReleaseDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsReleaseDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsReleaseDiskOutcomeCallable EcsopsClient::opsReleaseDiskCallable(const OpsReleaseDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsReleaseDiskOutcome()>>(
			[this, request]()
			{
			return this->opsReleaseDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsReleaseInstanceOutcome EcsopsClient::opsReleaseInstance(const OpsReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsReleaseInstanceOutcome(OpsReleaseInstanceResult(outcome.result()));
	else
		return OpsReleaseInstanceOutcome(outcome.error());
}

void EcsopsClient::opsReleaseInstanceAsync(const OpsReleaseInstanceRequest& request, const OpsReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsReleaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsReleaseInstanceOutcomeCallable EcsopsClient::opsReleaseInstanceCallable(const OpsReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->opsReleaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsReleaseIpAddressOutcome EcsopsClient::opsReleaseIpAddress(const OpsReleaseIpAddressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsReleaseIpAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsReleaseIpAddressOutcome(OpsReleaseIpAddressResult(outcome.result()));
	else
		return OpsReleaseIpAddressOutcome(outcome.error());
}

void EcsopsClient::opsReleaseIpAddressAsync(const OpsReleaseIpAddressRequest& request, const OpsReleaseIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsReleaseIpAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsReleaseIpAddressOutcomeCallable EcsopsClient::opsReleaseIpAddressCallable(const OpsReleaseIpAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsReleaseIpAddressOutcome()>>(
			[this, request]()
			{
			return this->opsReleaseIpAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsRenameInstanceOutcome EcsopsClient::opsRenameInstance(const OpsRenameInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsRenameInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsRenameInstanceOutcome(OpsRenameInstanceResult(outcome.result()));
	else
		return OpsRenameInstanceOutcome(outcome.error());
}

void EcsopsClient::opsRenameInstanceAsync(const OpsRenameInstanceRequest& request, const OpsRenameInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsRenameInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsRenameInstanceOutcomeCallable EcsopsClient::opsRenameInstanceCallable(const OpsRenameInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsRenameInstanceOutcome()>>(
			[this, request]()
			{
			return this->opsRenameInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsReplaceSystemDiskOutcome EcsopsClient::opsReplaceSystemDisk(const OpsReplaceSystemDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsReplaceSystemDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsReplaceSystemDiskOutcome(OpsReplaceSystemDiskResult(outcome.result()));
	else
		return OpsReplaceSystemDiskOutcome(outcome.error());
}

void EcsopsClient::opsReplaceSystemDiskAsync(const OpsReplaceSystemDiskRequest& request, const OpsReplaceSystemDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsReplaceSystemDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsReplaceSystemDiskOutcomeCallable EcsopsClient::opsReplaceSystemDiskCallable(const OpsReplaceSystemDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsReplaceSystemDiskOutcome()>>(
			[this, request]()
			{
			return this->opsReplaceSystemDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsResetDiskOutcome EcsopsClient::opsResetDisk(const OpsResetDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsResetDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsResetDiskOutcome(OpsResetDiskResult(outcome.result()));
	else
		return OpsResetDiskOutcome(outcome.error());
}

void EcsopsClient::opsResetDiskAsync(const OpsResetDiskRequest& request, const OpsResetDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsResetDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsResetDiskOutcomeCallable EcsopsClient::opsResetDiskCallable(const OpsResetDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsResetDiskOutcome()>>(
			[this, request]()
			{
			return this->opsResetDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsResetPasswdOutcome EcsopsClient::opsResetPasswd(const OpsResetPasswdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsResetPasswdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsResetPasswdOutcome(OpsResetPasswdResult(outcome.result()));
	else
		return OpsResetPasswdOutcome(outcome.error());
}

void EcsopsClient::opsResetPasswdAsync(const OpsResetPasswdRequest& request, const OpsResetPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsResetPasswd(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsResetPasswdOutcomeCallable EcsopsClient::opsResetPasswdCallable(const OpsResetPasswdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsResetPasswdOutcome()>>(
			[this, request]()
			{
			return this->opsResetPasswd(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsResizeDiskOutcome EcsopsClient::opsResizeDisk(const OpsResizeDiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsResizeDiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsResizeDiskOutcome(OpsResizeDiskResult(outcome.result()));
	else
		return OpsResizeDiskOutcome(outcome.error());
}

void EcsopsClient::opsResizeDiskAsync(const OpsResizeDiskRequest& request, const OpsResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsResizeDisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsResizeDiskOutcomeCallable EcsopsClient::opsResizeDiskCallable(const OpsResizeDiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsResizeDiskOutcome()>>(
			[this, request]()
			{
			return this->opsResizeDisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsRestartInstanceOutcome EcsopsClient::opsRestartInstance(const OpsRestartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsRestartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsRestartInstanceOutcome(OpsRestartInstanceResult(outcome.result()));
	else
		return OpsRestartInstanceOutcome(outcome.error());
}

void EcsopsClient::opsRestartInstanceAsync(const OpsRestartInstanceRequest& request, const OpsRestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsRestartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsRestartInstanceOutcomeCallable EcsopsClient::opsRestartInstanceCallable(const OpsRestartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsRestartInstanceOutcome()>>(
			[this, request]()
			{
			return this->opsRestartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsRevokeSecurityGroupOutcome EcsopsClient::opsRevokeSecurityGroup(const OpsRevokeSecurityGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsRevokeSecurityGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsRevokeSecurityGroupOutcome(OpsRevokeSecurityGroupResult(outcome.result()));
	else
		return OpsRevokeSecurityGroupOutcome(outcome.error());
}

void EcsopsClient::opsRevokeSecurityGroupAsync(const OpsRevokeSecurityGroupRequest& request, const OpsRevokeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsRevokeSecurityGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsRevokeSecurityGroupOutcomeCallable EcsopsClient::opsRevokeSecurityGroupCallable(const OpsRevokeSecurityGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsRevokeSecurityGroupOutcome()>>(
			[this, request]()
			{
			return this->opsRevokeSecurityGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsRevokeSecurityGroupEgressOutcome EcsopsClient::opsRevokeSecurityGroupEgress(const OpsRevokeSecurityGroupEgressRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsRevokeSecurityGroupEgressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsRevokeSecurityGroupEgressOutcome(OpsRevokeSecurityGroupEgressResult(outcome.result()));
	else
		return OpsRevokeSecurityGroupEgressOutcome(outcome.error());
}

void EcsopsClient::opsRevokeSecurityGroupEgressAsync(const OpsRevokeSecurityGroupEgressRequest& request, const OpsRevokeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsRevokeSecurityGroupEgress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsRevokeSecurityGroupEgressOutcomeCallable EcsopsClient::opsRevokeSecurityGroupEgressCallable(const OpsRevokeSecurityGroupEgressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsRevokeSecurityGroupEgressOutcome()>>(
			[this, request]()
			{
			return this->opsRevokeSecurityGroupEgress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsStartInstanceOutcome EcsopsClient::opsStartInstance(const OpsStartInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsStartInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsStartInstanceOutcome(OpsStartInstanceResult(outcome.result()));
	else
		return OpsStartInstanceOutcome(outcome.error());
}

void EcsopsClient::opsStartInstanceAsync(const OpsStartInstanceRequest& request, const OpsStartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsStartInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsStartInstanceOutcomeCallable EcsopsClient::opsStartInstanceCallable(const OpsStartInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsStartInstanceOutcome()>>(
			[this, request]()
			{
			return this->opsStartInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsStopInstanceOutcome EcsopsClient::opsStopInstance(const OpsStopInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsStopInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsStopInstanceOutcome(OpsStopInstanceResult(outcome.result()));
	else
		return OpsStopInstanceOutcome(outcome.error());
}

void EcsopsClient::opsStopInstanceAsync(const OpsStopInstanceRequest& request, const OpsStopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsStopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsStopInstanceOutcomeCallable EcsopsClient::opsStopInstanceCallable(const OpsStopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsStopInstanceOutcome()>>(
			[this, request]()
			{
			return this->opsStopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsUnMountIsoOutcome EcsopsClient::opsUnMountIso(const OpsUnMountIsoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsUnMountIsoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsUnMountIsoOutcome(OpsUnMountIsoResult(outcome.result()));
	else
		return OpsUnMountIsoOutcome(outcome.error());
}

void EcsopsClient::opsUnMountIsoAsync(const OpsUnMountIsoRequest& request, const OpsUnMountIsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsUnMountIso(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsUnMountIsoOutcomeCallable EcsopsClient::opsUnMountIsoCallable(const OpsUnMountIsoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsUnMountIsoOutcome()>>(
			[this, request]()
			{
			return this->opsUnMountIso(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

EcsopsClient::OpsUpgradeInstanceOutcome EcsopsClient::opsUpgradeInstance(const OpsUpgradeInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpsUpgradeInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpsUpgradeInstanceOutcome(OpsUpgradeInstanceResult(outcome.result()));
	else
		return OpsUpgradeInstanceOutcome(outcome.error());
}

void EcsopsClient::opsUpgradeInstanceAsync(const OpsUpgradeInstanceRequest& request, const OpsUpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, opsUpgradeInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

EcsopsClient::OpsUpgradeInstanceOutcomeCallable EcsopsClient::opsUpgradeInstanceCallable(const OpsUpgradeInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpsUpgradeInstanceOutcome()>>(
			[this, request]()
			{
			return this->opsUpgradeInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

