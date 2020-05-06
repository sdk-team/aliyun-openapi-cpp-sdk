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

#include <alibabacloud/account/AccountClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Account;
using namespace AlibabaCloud::Account::Model;

namespace
{
	const std::string SERVICE_NAME = "Account";
}

AccountClient::AccountClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AccountClient::AccountClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AccountClient::AccountClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AccountClient::~AccountClient()
{}

AccountClient::CreateAliyunAccountOutcome AccountClient::createAliyunAccount(const CreateAliyunAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAliyunAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAliyunAccountOutcome(CreateAliyunAccountResult(outcome.result()));
	else
		return CreateAliyunAccountOutcome(outcome.error());
}

void AccountClient::createAliyunAccountAsync(const CreateAliyunAccountRequest& request, const CreateAliyunAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAliyunAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountClient::CreateAliyunAccountOutcomeCallable AccountClient::createAliyunAccountCallable(const CreateAliyunAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAliyunAccountOutcome()>>(
			[this, request]()
			{
			return this->createAliyunAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountClient::CreateAliyunAccountForBidOutcome AccountClient::createAliyunAccountForBid(const CreateAliyunAccountForBidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAliyunAccountForBidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAliyunAccountForBidOutcome(CreateAliyunAccountForBidResult(outcome.result()));
	else
		return CreateAliyunAccountForBidOutcome(outcome.error());
}

void AccountClient::createAliyunAccountForBidAsync(const CreateAliyunAccountForBidRequest& request, const CreateAliyunAccountForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAliyunAccountForBid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountClient::CreateAliyunAccountForBidOutcomeCallable AccountClient::createAliyunAccountForBidCallable(const CreateAliyunAccountForBidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAliyunAccountForBidOutcome()>>(
			[this, request]()
			{
			return this->createAliyunAccountForBid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountClient::CreateAppOutcome AccountClient::createApp(const CreateAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppOutcome(CreateAppResult(outcome.result()));
	else
		return CreateAppOutcome(outcome.error());
}

void AccountClient::createAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountClient::CreateAppOutcomeCallable AccountClient::createAppCallable(const CreateAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppOutcome()>>(
			[this, request]()
			{
			return this->createApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountClient::CreateAppForBidOutcome AccountClient::createAppForBid(const CreateAppForBidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppForBidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppForBidOutcome(CreateAppForBidResult(outcome.result()));
	else
		return CreateAppForBidOutcome(outcome.error());
}

void AccountClient::createAppForBidAsync(const CreateAppForBidRequest& request, const CreateAppForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppForBid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountClient::CreateAppForBidOutcomeCallable AccountClient::createAppForBidCallable(const CreateAppForBidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppForBidOutcome()>>(
			[this, request]()
			{
			return this->createAppForBid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountClient::DeleteAppForBidOutcome AccountClient::deleteAppForBid(const DeleteAppForBidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAppForBidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAppForBidOutcome(DeleteAppForBidResult(outcome.result()));
	else
		return DeleteAppForBidOutcome(outcome.error());
}

void AccountClient::deleteAppForBidAsync(const DeleteAppForBidRequest& request, const DeleteAppForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAppForBid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountClient::DeleteAppForBidOutcomeCallable AccountClient::deleteAppForBidCallable(const DeleteAppForBidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAppForBidOutcome()>>(
			[this, request]()
			{
			return this->deleteAppForBid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountClient::GetPubKeyOutcome AccountClient::getPubKey(const GetPubKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPubKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPubKeyOutcome(GetPubKeyResult(outcome.result()));
	else
		return GetPubKeyOutcome(outcome.error());
}

void AccountClient::getPubKeyAsync(const GetPubKeyRequest& request, const GetPubKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPubKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountClient::GetPubKeyOutcomeCallable AccountClient::getPubKeyCallable(const GetPubKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPubKeyOutcome()>>(
			[this, request]()
			{
			return this->getPubKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AccountClient::ListAppkeyByOwnerAndBidOutcome AccountClient::listAppkeyByOwnerAndBid(const ListAppkeyByOwnerAndBidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAppkeyByOwnerAndBidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAppkeyByOwnerAndBidOutcome(ListAppkeyByOwnerAndBidResult(outcome.result()));
	else
		return ListAppkeyByOwnerAndBidOutcome(outcome.error());
}

void AccountClient::listAppkeyByOwnerAndBidAsync(const ListAppkeyByOwnerAndBidRequest& request, const ListAppkeyByOwnerAndBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAppkeyByOwnerAndBid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AccountClient::ListAppkeyByOwnerAndBidOutcomeCallable AccountClient::listAppkeyByOwnerAndBidCallable(const ListAppkeyByOwnerAndBidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAppkeyByOwnerAndBidOutcome()>>(
			[this, request]()
			{
			return this->listAppkeyByOwnerAndBid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

