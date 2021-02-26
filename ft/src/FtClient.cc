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

#include <alibabacloud/ft/FtClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Ft;
using namespace AlibabaCloud::Ft::Model;

namespace
{
	const std::string SERVICE_NAME = "Ft";
}

FtClient::FtClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::FtClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::FtClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

FtClient::~FtClient()
{}

FtClient::BatchAuditTest01Outcome FtClient::batchAuditTest01(const BatchAuditTest01Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAuditTest01Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAuditTest01Outcome(BatchAuditTest01Result(outcome.result()));
	else
		return BatchAuditTest01Outcome(outcome.error());
}

void FtClient::batchAuditTest01Async(const BatchAuditTest01Request& request, const BatchAuditTest01AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAuditTest01(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::BatchAuditTest01OutcomeCallable FtClient::batchAuditTest01Callable(const BatchAuditTest01Request &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAuditTest01Outcome()>>(
			[this, request]()
			{
			return this->batchAuditTest01(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::BatchAuditTest02Outcome FtClient::batchAuditTest02(const BatchAuditTest02Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchAuditTest02Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchAuditTest02Outcome(BatchAuditTest02Result(outcome.result()));
	else
		return BatchAuditTest02Outcome(outcome.error());
}

void FtClient::batchAuditTest02Async(const BatchAuditTest02Request& request, const BatchAuditTest02AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchAuditTest02(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::BatchAuditTest02OutcomeCallable FtClient::batchAuditTest02Callable(const BatchAuditTest02Request &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchAuditTest02Outcome()>>(
			[this, request]()
			{
			return this->batchAuditTest02(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::CountCloudProductCallTimesOutcome FtClient::countCloudProductCallTimes(const CountCloudProductCallTimesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CountCloudProductCallTimesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CountCloudProductCallTimesOutcome(CountCloudProductCallTimesResult(outcome.result()));
	else
		return CountCloudProductCallTimesOutcome(outcome.error());
}

void FtClient::countCloudProductCallTimesAsync(const CountCloudProductCallTimesRequest& request, const CountCloudProductCallTimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, countCloudProductCallTimes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::CountCloudProductCallTimesOutcomeCallable FtClient::countCloudProductCallTimesCallable(const CountCloudProductCallTimesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CountCloudProductCallTimesOutcome()>>(
			[this, request]()
			{
			return this->countCloudProductCallTimes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::DeleteAllStrategyOutcome FtClient::deleteAllStrategy(const DeleteAllStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAllStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAllStrategyOutcome(DeleteAllStrategyResult(outcome.result()));
	else
		return DeleteAllStrategyOutcome(outcome.error());
}

void FtClient::deleteAllStrategyAsync(const DeleteAllStrategyRequest& request, const DeleteAllStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAllStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::DeleteAllStrategyOutcomeCallable FtClient::deleteAllStrategyCallable(const DeleteAllStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAllStrategyOutcome()>>(
			[this, request]()
			{
			return this->deleteAllStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::DescribeResourceTypeOutcome FtClient::describeResourceType(const DescribeResourceTypeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeResourceTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeResourceTypeOutcome(DescribeResourceTypeResult(outcome.result()));
	else
		return DescribeResourceTypeOutcome(outcome.error());
}

void FtClient::describeResourceTypeAsync(const DescribeResourceTypeRequest& request, const DescribeResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeResourceType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::DescribeResourceTypeOutcomeCallable FtClient::describeResourceTypeCallable(const DescribeResourceTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeResourceTypeOutcome()>>(
			[this, request]()
			{
			return this->describeResourceType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FTApiAliasApiOutcome FtClient::fTApiAliasApi(const FTApiAliasApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FTApiAliasApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FTApiAliasApiOutcome(FTApiAliasApiResult(outcome.result()));
	else
		return FTApiAliasApiOutcome(outcome.error());
}

void FtClient::fTApiAliasApiAsync(const FTApiAliasApiRequest& request, const FTApiAliasApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fTApiAliasApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FTApiAliasApiOutcomeCallable FtClient::fTApiAliasApiCallable(const FTApiAliasApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FTApiAliasApiOutcome()>>(
			[this, request]()
			{
			return this->fTApiAliasApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtDynamicAddressDubboOutcome FtClient::ftDynamicAddressDubbo(const FtDynamicAddressDubboRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtDynamicAddressDubboOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtDynamicAddressDubboOutcome(FtDynamicAddressDubboResult(outcome.result()));
	else
		return FtDynamicAddressDubboOutcome(outcome.error());
}

void FtClient::ftDynamicAddressDubboAsync(const FtDynamicAddressDubboRequest& request, const FtDynamicAddressDubboAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftDynamicAddressDubbo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtDynamicAddressDubboOutcomeCallable FtClient::ftDynamicAddressDubboCallable(const FtDynamicAddressDubboRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtDynamicAddressDubboOutcome()>>(
			[this, request]()
			{
			return this->ftDynamicAddressDubbo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtDynamicAddressHsfOutcome FtClient::ftDynamicAddressHsf(const FtDynamicAddressHsfRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtDynamicAddressHsfOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtDynamicAddressHsfOutcome(FtDynamicAddressHsfResult(outcome.result()));
	else
		return FtDynamicAddressHsfOutcome(outcome.error());
}

void FtClient::ftDynamicAddressHsfAsync(const FtDynamicAddressHsfRequest& request, const FtDynamicAddressHsfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftDynamicAddressHsf(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtDynamicAddressHsfOutcomeCallable FtClient::ftDynamicAddressHsfCallable(const FtDynamicAddressHsfRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtDynamicAddressHsfOutcome()>>(
			[this, request]()
			{
			return this->ftDynamicAddressHsf(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtDynamicAddressHttpVpcOutcome FtClient::ftDynamicAddressHttpVpc(const FtDynamicAddressHttpVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtDynamicAddressHttpVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtDynamicAddressHttpVpcOutcome(FtDynamicAddressHttpVpcResult(outcome.result()));
	else
		return FtDynamicAddressHttpVpcOutcome(outcome.error());
}

void FtClient::ftDynamicAddressHttpVpcAsync(const FtDynamicAddressHttpVpcRequest& request, const FtDynamicAddressHttpVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftDynamicAddressHttpVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtDynamicAddressHttpVpcOutcomeCallable FtClient::ftDynamicAddressHttpVpcCallable(const FtDynamicAddressHttpVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtDynamicAddressHttpVpcOutcome()>>(
			[this, request]()
			{
			return this->ftDynamicAddressHttpVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtEagleEyeOutcome FtClient::ftEagleEye(const FtEagleEyeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtEagleEyeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtEagleEyeOutcome(FtEagleEyeResult(outcome.result()));
	else
		return FtEagleEyeOutcome(outcome.error());
}

void FtClient::ftEagleEyeAsync(const FtEagleEyeRequest& request, const FtEagleEyeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftEagleEye(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtEagleEyeOutcomeCallable FtClient::ftEagleEyeCallable(const FtEagleEyeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtEagleEyeOutcome()>>(
			[this, request]()
			{
			return this->ftEagleEye(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtFlowSpecialOutcome FtClient::ftFlowSpecial(const FtFlowSpecialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtFlowSpecialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtFlowSpecialOutcome(FtFlowSpecialResult(outcome.result()));
	else
		return FtFlowSpecialOutcome(outcome.error());
}

void FtClient::ftFlowSpecialAsync(const FtFlowSpecialRequest& request, const FtFlowSpecialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftFlowSpecial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtFlowSpecialOutcomeCallable FtClient::ftFlowSpecialCallable(const FtFlowSpecialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtFlowSpecialOutcome()>>(
			[this, request]()
			{
			return this->ftFlowSpecial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtFlowSpecial1586868138332Outcome FtClient::ftFlowSpecial1586868138332(const FtFlowSpecial1586868138332Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtFlowSpecial1586868138332Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtFlowSpecial1586868138332Outcome(FtFlowSpecial1586868138332Result(outcome.result()));
	else
		return FtFlowSpecial1586868138332Outcome(outcome.error());
}

void FtClient::ftFlowSpecial1586868138332Async(const FtFlowSpecial1586868138332Request& request, const FtFlowSpecial1586868138332AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftFlowSpecial1586868138332(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtFlowSpecial1586868138332OutcomeCallable FtClient::ftFlowSpecial1586868138332Callable(const FtFlowSpecial1586868138332Request &request) const
{
	auto task = std::make_shared<std::packaged_task<FtFlowSpecial1586868138332Outcome()>>(
			[this, request]()
			{
			return this->ftFlowSpecial1586868138332(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtGatedLaunchPolicy3ApiOutcome FtClient::ftGatedLaunchPolicy3Api(const FtGatedLaunchPolicy3ApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtGatedLaunchPolicy3ApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtGatedLaunchPolicy3ApiOutcome(FtGatedLaunchPolicy3ApiResult(outcome.result()));
	else
		return FtGatedLaunchPolicy3ApiOutcome(outcome.error());
}

void FtClient::ftGatedLaunchPolicy3ApiAsync(const FtGatedLaunchPolicy3ApiRequest& request, const FtGatedLaunchPolicy3ApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftGatedLaunchPolicy3Api(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtGatedLaunchPolicy3ApiOutcomeCallable FtClient::ftGatedLaunchPolicy3ApiCallable(const FtGatedLaunchPolicy3ApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtGatedLaunchPolicy3ApiOutcome()>>(
			[this, request]()
			{
			return this->ftGatedLaunchPolicy3Api(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtGatedLaunchPolicy4Outcome FtClient::ftGatedLaunchPolicy4(const FtGatedLaunchPolicy4Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtGatedLaunchPolicy4Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtGatedLaunchPolicy4Outcome(FtGatedLaunchPolicy4Result(outcome.result()));
	else
		return FtGatedLaunchPolicy4Outcome(outcome.error());
}

void FtClient::ftGatedLaunchPolicy4Async(const FtGatedLaunchPolicy4Request& request, const FtGatedLaunchPolicy4AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftGatedLaunchPolicy4(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtGatedLaunchPolicy4OutcomeCallable FtClient::ftGatedLaunchPolicy4Callable(const FtGatedLaunchPolicy4Request &request) const
{
	auto task = std::make_shared<std::packaged_task<FtGatedLaunchPolicy4Outcome()>>(
			[this, request]()
			{
			return this->ftGatedLaunchPolicy4(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtGatedLaunchPolicyApiOutcome FtClient::ftGatedLaunchPolicyApi(const FtGatedLaunchPolicyApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtGatedLaunchPolicyApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtGatedLaunchPolicyApiOutcome(FtGatedLaunchPolicyApiResult(outcome.result()));
	else
		return FtGatedLaunchPolicyApiOutcome(outcome.error());
}

void FtClient::ftGatedLaunchPolicyApiAsync(const FtGatedLaunchPolicyApiRequest& request, const FtGatedLaunchPolicyApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftGatedLaunchPolicyApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtGatedLaunchPolicyApiOutcomeCallable FtClient::ftGatedLaunchPolicyApiCallable(const FtGatedLaunchPolicyApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtGatedLaunchPolicyApiOutcome()>>(
			[this, request]()
			{
			return this->ftGatedLaunchPolicyApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtIpFlowControlOutcome FtClient::ftIpFlowControl(const FtIpFlowControlRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtIpFlowControlOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtIpFlowControlOutcome(FtIpFlowControlResult(outcome.result()));
	else
		return FtIpFlowControlOutcome(outcome.error());
}

void FtClient::ftIpFlowControlAsync(const FtIpFlowControlRequest& request, const FtIpFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftIpFlowControl(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtIpFlowControlOutcomeCallable FtClient::ftIpFlowControlCallable(const FtIpFlowControlRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtIpFlowControlOutcome()>>(
			[this, request]()
			{
			return this->ftIpFlowControl(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::FtParamListOutcome FtClient::ftParamList(const FtParamListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FtParamListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FtParamListOutcome(FtParamListResult(outcome.result()));
	else
		return FtParamListOutcome(outcome.error());
}

void FtClient::ftParamListAsync(const FtParamListRequest& request, const FtParamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, ftParamList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::FtParamListOutcomeCallable FtClient::ftParamListCallable(const FtParamListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FtParamListOutcome()>>(
			[this, request]()
			{
			return this->ftParamList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::GetMigrateStrategyResultOutcome FtClient::getMigrateStrategyResult(const GetMigrateStrategyResultRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetMigrateStrategyResultOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetMigrateStrategyResultOutcome(GetMigrateStrategyResultResult(outcome.result()));
	else
		return GetMigrateStrategyResultOutcome(outcome.error());
}

void FtClient::getMigrateStrategyResultAsync(const GetMigrateStrategyResultRequest& request, const GetMigrateStrategyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getMigrateStrategyResult(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::GetMigrateStrategyResultOutcomeCallable FtClient::getMigrateStrategyResultCallable(const GetMigrateStrategyResultRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetMigrateStrategyResultOutcome()>>(
			[this, request]()
			{
			return this->getMigrateStrategyResult(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::GetTairDataOutcome FtClient::getTairData(const GetTairDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTairDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTairDataOutcome(GetTairDataResult(outcome.result()));
	else
		return GetTairDataOutcome(outcome.error());
}

void FtClient::getTairDataAsync(const GetTairDataRequest& request, const GetTairDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTairData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::GetTairDataOutcomeCallable FtClient::getTairDataCallable(const GetTairDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTairDataOutcome()>>(
			[this, request]()
			{
			return this->getTairData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::MigrateStrategyOutcome FtClient::migrateStrategy(const MigrateStrategyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MigrateStrategyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MigrateStrategyOutcome(MigrateStrategyResult(outcome.result()));
	else
		return MigrateStrategyOutcome(outcome.error());
}

void FtClient::migrateStrategyAsync(const MigrateStrategyRequest& request, const MigrateStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, migrateStrategy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::MigrateStrategyOutcomeCallable FtClient::migrateStrategyCallable(const MigrateStrategyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MigrateStrategyOutcome()>>(
			[this, request]()
			{
			return this->migrateStrategy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::QueryDomainChangeRecordsOutcome FtClient::queryDomainChangeRecords(const QueryDomainChangeRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDomainChangeRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDomainChangeRecordsOutcome(QueryDomainChangeRecordsResult(outcome.result()));
	else
		return QueryDomainChangeRecordsOutcome(outcome.error());
}

void FtClient::queryDomainChangeRecordsAsync(const QueryDomainChangeRecordsRequest& request, const QueryDomainChangeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDomainChangeRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::QueryDomainChangeRecordsOutcomeCallable FtClient::queryDomainChangeRecordsCallable(const QueryDomainChangeRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDomainChangeRecordsOutcome()>>(
			[this, request]()
			{
			return this->queryDomainChangeRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::QueryErrorApisOutcome FtClient::queryErrorApis(const QueryErrorApisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryErrorApisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryErrorApisOutcome(QueryErrorApisResult(outcome.result()));
	else
		return QueryErrorApisOutcome(outcome.error());
}

void FtClient::queryErrorApisAsync(const QueryErrorApisRequest& request, const QueryErrorApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryErrorApis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::QueryErrorApisOutcomeCallable FtClient::queryErrorApisCallable(const QueryErrorApisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryErrorApisOutcome()>>(
			[this, request]()
			{
			return this->queryErrorApis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::RpcDubboServiceRouteApiOutcome FtClient::rpcDubboServiceRouteApi(const RpcDubboServiceRouteApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RpcDubboServiceRouteApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RpcDubboServiceRouteApiOutcome(RpcDubboServiceRouteApiResult(outcome.result()));
	else
		return RpcDubboServiceRouteApiOutcome(outcome.error());
}

void FtClient::rpcDubboServiceRouteApiAsync(const RpcDubboServiceRouteApiRequest& request, const RpcDubboServiceRouteApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rpcDubboServiceRouteApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::RpcDubboServiceRouteApiOutcomeCallable FtClient::rpcDubboServiceRouteApiCallable(const RpcDubboServiceRouteApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RpcDubboServiceRouteApiOutcome()>>(
			[this, request]()
			{
			return this->rpcDubboServiceRouteApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::RpcHsfServiceRouteMatchApiOutcome FtClient::rpcHsfServiceRouteMatchApi(const RpcHsfServiceRouteMatchApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RpcHsfServiceRouteMatchApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RpcHsfServiceRouteMatchApiOutcome(RpcHsfServiceRouteMatchApiResult(outcome.result()));
	else
		return RpcHsfServiceRouteMatchApiOutcome(outcome.error());
}

void FtClient::rpcHsfServiceRouteMatchApiAsync(const RpcHsfServiceRouteMatchApiRequest& request, const RpcHsfServiceRouteMatchApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rpcHsfServiceRouteMatchApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::RpcHsfServiceRouteMatchApiOutcomeCallable FtClient::rpcHsfServiceRouteMatchApiCallable(const RpcHsfServiceRouteMatchApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RpcHsfServiceRouteMatchApiOutcome()>>(
			[this, request]()
			{
			return this->rpcHsfServiceRouteMatchApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::TestDubboRetryApiOutcome FtClient::testDubboRetryApi(const TestDubboRetryApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestDubboRetryApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestDubboRetryApiOutcome(TestDubboRetryApiResult(outcome.result()));
	else
		return TestDubboRetryApiOutcome(outcome.error());
}

void FtClient::testDubboRetryApiAsync(const TestDubboRetryApiRequest& request, const TestDubboRetryApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testDubboRetryApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::TestDubboRetryApiOutcomeCallable FtClient::testDubboRetryApiCallable(const TestDubboRetryApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestDubboRetryApiOutcome()>>(
			[this, request]()
			{
			return this->testDubboRetryApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::TestErrorCodeForGateWayOutcome FtClient::testErrorCodeForGateWay(const TestErrorCodeForGateWayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestErrorCodeForGateWayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestErrorCodeForGateWayOutcome(TestErrorCodeForGateWayResult(outcome.result()));
	else
		return TestErrorCodeForGateWayOutcome(outcome.error());
}

void FtClient::testErrorCodeForGateWayAsync(const TestErrorCodeForGateWayRequest& request, const TestErrorCodeForGateWayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testErrorCodeForGateWay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::TestErrorCodeForGateWayOutcomeCallable FtClient::testErrorCodeForGateWayCallable(const TestErrorCodeForGateWayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestErrorCodeForGateWayOutcome()>>(
			[this, request]()
			{
			return this->testErrorCodeForGateWay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::TestFlowStrategy01Outcome FtClient::testFlowStrategy01(const TestFlowStrategy01Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestFlowStrategy01Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestFlowStrategy01Outcome(TestFlowStrategy01Result(outcome.result()));
	else
		return TestFlowStrategy01Outcome(outcome.error());
}

void FtClient::testFlowStrategy01Async(const TestFlowStrategy01Request& request, const TestFlowStrategy01AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testFlowStrategy01(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::TestFlowStrategy01OutcomeCallable FtClient::testFlowStrategy01Callable(const TestFlowStrategy01Request &request) const
{
	auto task = std::make_shared<std::packaged_task<TestFlowStrategy01Outcome()>>(
			[this, request]()
			{
			return this->testFlowStrategy01(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::TestHttpApiOutcome FtClient::testHttpApi(const TestHttpApiRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestHttpApiOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestHttpApiOutcome(TestHttpApiResult(outcome.result()));
	else
		return TestHttpApiOutcome(outcome.error());
}

void FtClient::testHttpApiAsync(const TestHttpApiRequest& request, const TestHttpApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testHttpApi(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::TestHttpApiOutcomeCallable FtClient::testHttpApiCallable(const TestHttpApiRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestHttpApiOutcome()>>(
			[this, request]()
			{
			return this->testHttpApi(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::TestIspHttpValidatorOutcome FtClient::testIspHttpValidator(const TestIspHttpValidatorRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestIspHttpValidatorOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestIspHttpValidatorOutcome(TestIspHttpValidatorResult(outcome.result()));
	else
		return TestIspHttpValidatorOutcome(outcome.error());
}

void FtClient::testIspHttpValidatorAsync(const TestIspHttpValidatorRequest& request, const TestIspHttpValidatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testIspHttpValidator(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::TestIspHttpValidatorOutcomeCallable FtClient::testIspHttpValidatorCallable(const TestIspHttpValidatorRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestIspHttpValidatorOutcome()>>(
			[this, request]()
			{
			return this->testIspHttpValidator(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::TestXmlServiceRoutePolicyOutcome FtClient::testXmlServiceRoutePolicy(const TestXmlServiceRoutePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TestXmlServiceRoutePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TestXmlServiceRoutePolicyOutcome(TestXmlServiceRoutePolicyResult(outcome.result()));
	else
		return TestXmlServiceRoutePolicyOutcome(outcome.error());
}

void FtClient::testXmlServiceRoutePolicyAsync(const TestXmlServiceRoutePolicyRequest& request, const TestXmlServiceRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, testXmlServiceRoutePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::TestXmlServiceRoutePolicyOutcomeCallable FtClient::testXmlServiceRoutePolicyCallable(const TestXmlServiceRoutePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TestXmlServiceRoutePolicyOutcome()>>(
			[this, request]()
			{
			return this->testXmlServiceRoutePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

FtClient::UpdateDomainRecordsRegionIdOutcome FtClient::updateDomainRecordsRegionId(const UpdateDomainRecordsRegionIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateDomainRecordsRegionIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateDomainRecordsRegionIdOutcome(UpdateDomainRecordsRegionIdResult(outcome.result()));
	else
		return UpdateDomainRecordsRegionIdOutcome(outcome.error());
}

void FtClient::updateDomainRecordsRegionIdAsync(const UpdateDomainRecordsRegionIdRequest& request, const UpdateDomainRecordsRegionIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateDomainRecordsRegionId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

FtClient::UpdateDomainRecordsRegionIdOutcomeCallable FtClient::updateDomainRecordsRegionIdCallable(const UpdateDomainRecordsRegionIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateDomainRecordsRegionIdOutcome()>>(
			[this, request]()
			{
			return this->updateDomainRecordsRegionId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

