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

#include <alibabacloud/acs/AcsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Acs;
using namespace AlibabaCloud::Acs::Model;

namespace
{
	const std::string SERVICE_NAME = "Acs";
}

AcsClient::AcsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "12334");
}

AcsClient::AcsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "12334");
}

AcsClient::AcsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "12334");
}

AcsClient::~AcsClient()
{}

AcsClient::DeleteApiInDailyOutcome AcsClient::deleteApiInDaily(const DeleteApiInDailyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApiInDailyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApiInDailyOutcome(DeleteApiInDailyResult(outcome.result()));
	else
		return DeleteApiInDailyOutcome(outcome.error());
}

void AcsClient::deleteApiInDailyAsync(const DeleteApiInDailyRequest& request, const DeleteApiInDailyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApiInDaily(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcsClient::DeleteApiInDailyOutcomeCallable AcsClient::deleteApiInDailyCallable(const DeleteApiInDailyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApiInDailyOutcome()>>(
			[this, request]()
			{
			return this->deleteApiInDaily(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcsClient::DeleteApiOnlineOutcome AcsClient::deleteApiOnline(const DeleteApiOnlineRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApiOnlineOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApiOnlineOutcome(DeleteApiOnlineResult(outcome.result()));
	else
		return DeleteApiOnlineOutcome(outcome.error());
}

void AcsClient::deleteApiOnlineAsync(const DeleteApiOnlineRequest& request, const DeleteApiOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApiOnline(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcsClient::DeleteApiOnlineOutcomeCallable AcsClient::deleteApiOnlineCallable(const DeleteApiOnlineRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApiOnlineOutcome()>>(
			[this, request]()
			{
			return this->deleteApiOnline(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcsClient::ResumePurchasedApiOutcome AcsClient::resumePurchasedApi(const ResumePurchasedApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResumePurchasedApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResumePurchasedApiOutcome(ResumePurchasedApiResult(outcome.result()));
	else
		return ResumePurchasedApiOutcome(outcome.error());
}

void AcsClient::resumePurchasedApiAsync(const ResumePurchasedApiRequest& request, const ResumePurchasedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resumePurchasedApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcsClient::ResumePurchasedApiOutcomeCallable AcsClient::resumePurchasedApiCallable(const ResumePurchasedApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResumePurchasedApiOutcome()>>(
			[this, request]()
			{
			return this->resumePurchasedApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcsClient::StopPurchasedApiOutcome AcsClient::stopPurchasedApi(const StopPurchasedApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopPurchasedApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopPurchasedApiOutcome(StopPurchasedApiResult(outcome.result()));
	else
		return StopPurchasedApiOutcome(outcome.error());
}

void AcsClient::stopPurchasedApiAsync(const StopPurchasedApiRequest& request, const StopPurchasedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopPurchasedApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcsClient::StopPurchasedApiOutcomeCallable AcsClient::stopPurchasedApiCallable(const StopPurchasedApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopPurchasedApiOutcome()>>(
			[this, request]()
			{
			return this->stopPurchasedApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcsClient::ModifyApiNameInDailyOutcome AcsClient::modifyApiNameInDaily(const ModifyApiNameInDailyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApiNameInDailyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApiNameInDailyOutcome(ModifyApiNameInDailyResult(outcome.result()));
	else
		return ModifyApiNameInDailyOutcome(outcome.error());
}

void AcsClient::modifyApiNameInDailyAsync(const ModifyApiNameInDailyRequest& request, const ModifyApiNameInDailyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApiNameInDaily(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcsClient::ModifyApiNameInDailyOutcomeCallable AcsClient::modifyApiNameInDailyCallable(const ModifyApiNameInDailyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApiNameInDailyOutcome()>>(
			[this, request]()
			{
			return this->modifyApiNameInDaily(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcsClient::PutFlowControlOutcome AcsClient::putFlowControl(const PutFlowControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutFlowControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutFlowControlOutcome(PutFlowControlResult(outcome.result()));
	else
		return PutFlowControlOutcome(outcome.error());
}

void AcsClient::putFlowControlAsync(const PutFlowControlRequest& request, const PutFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putFlowControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcsClient::PutFlowControlOutcomeCallable AcsClient::putFlowControlCallable(const PutFlowControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutFlowControlOutcome()>>(
			[this, request]()
			{
			return this->putFlowControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcsClient::ModifyApiNameOutcome AcsClient::modifyApiName(const ModifyApiNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyApiNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyApiNameOutcome(ModifyApiNameResult(outcome.result()));
	else
		return ModifyApiNameOutcome(outcome.error());
}

void AcsClient::modifyApiNameAsync(const ModifyApiNameRequest& request, const ModifyApiNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyApiName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcsClient::ModifyApiNameOutcomeCallable AcsClient::modifyApiNameCallable(const ModifyApiNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyApiNameOutcome()>>(
			[this, request]()
			{
			return this->modifyApiName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcsClient::PurchaseApiOutcome AcsClient::purchaseApi(const PurchaseApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PurchaseApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PurchaseApiOutcome(PurchaseApiResult(outcome.result()));
	else
		return PurchaseApiOutcome(outcome.error());
}

void AcsClient::purchaseApiAsync(const PurchaseApiRequest& request, const PurchaseApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, purchaseApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcsClient::PurchaseApiOutcomeCallable AcsClient::purchaseApiCallable(const PurchaseApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PurchaseApiOutcome()>>(
			[this, request]()
			{
			return this->purchaseApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

