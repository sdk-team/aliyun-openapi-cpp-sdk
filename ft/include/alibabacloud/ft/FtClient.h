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

#ifndef ALIBABACLOUD_FT_FTCLIENT_H_
#define ALIBABACLOUD_FT_FTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "FtExport.h"
#include "model/BatchAuditTest01Request.h"
#include "model/BatchAuditTest01Result.h"
#include "model/BatchAuditTest02Request.h"
#include "model/BatchAuditTest02Result.h"
#include "model/DescribeResourceTypeRequest.h"
#include "model/DescribeResourceTypeResult.h"
#include "model/FTApiAliasApiRequest.h"
#include "model/FTApiAliasApiResult.h"
#include "model/FtDynamicAddressDubboRequest.h"
#include "model/FtDynamicAddressDubboResult.h"
#include "model/FtDynamicAddressHsfRequest.h"
#include "model/FtDynamicAddressHsfResult.h"
#include "model/FtEagleEyeRequest.h"
#include "model/FtEagleEyeResult.h"
#include "model/FtFlowSpecialRequest.h"
#include "model/FtFlowSpecialResult.h"
#include "model/FtGatedLaunchPolicy3ApiRequest.h"
#include "model/FtGatedLaunchPolicy3ApiResult.h"
#include "model/FtGatedLaunchPolicy4Request.h"
#include "model/FtGatedLaunchPolicy4Result.h"
#include "model/FtGatedLaunchPolicyApiRequest.h"
#include "model/FtGatedLaunchPolicyApiResult.h"
#include "model/FtIpFlowControlRequest.h"
#include "model/FtIpFlowControlResult.h"
#include "model/FtParamListRequest.h"
#include "model/FtParamListResult.h"
#include "model/TestDubboRetryApiRequest.h"
#include "model/TestDubboRetryApiResult.h"
#include "model/TestErrorCodeForGateWayRequest.h"
#include "model/TestErrorCodeForGateWayResult.h"
#include "model/TestHttpApiRequest.h"
#include "model/TestHttpApiResult.h"


namespace AlibabaCloud
{
	namespace Ft
	{
		class ALIBABACLOUD_FT_EXPORT FtClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchAuditTest01Result> BatchAuditTest01Outcome;
			typedef std::future<BatchAuditTest01Outcome> BatchAuditTest01OutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::BatchAuditTest01Request&, const BatchAuditTest01Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAuditTest01AsyncHandler;
			typedef Outcome<Error, Model::BatchAuditTest02Result> BatchAuditTest02Outcome;
			typedef std::future<BatchAuditTest02Outcome> BatchAuditTest02OutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::BatchAuditTest02Request&, const BatchAuditTest02Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAuditTest02AsyncHandler;
			typedef Outcome<Error, Model::DescribeResourceTypeResult> DescribeResourceTypeOutcome;
			typedef std::future<DescribeResourceTypeOutcome> DescribeResourceTypeOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::DescribeResourceTypeRequest&, const DescribeResourceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTypeAsyncHandler;
			typedef Outcome<Error, Model::FTApiAliasApiResult> FTApiAliasApiOutcome;
			typedef std::future<FTApiAliasApiOutcome> FTApiAliasApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FTApiAliasApiRequest&, const FTApiAliasApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FTApiAliasApiAsyncHandler;
			typedef Outcome<Error, Model::FtDynamicAddressDubboResult> FtDynamicAddressDubboOutcome;
			typedef std::future<FtDynamicAddressDubboOutcome> FtDynamicAddressDubboOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtDynamicAddressDubboRequest&, const FtDynamicAddressDubboOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtDynamicAddressDubboAsyncHandler;
			typedef Outcome<Error, Model::FtDynamicAddressHsfResult> FtDynamicAddressHsfOutcome;
			typedef std::future<FtDynamicAddressHsfOutcome> FtDynamicAddressHsfOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtDynamicAddressHsfRequest&, const FtDynamicAddressHsfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtDynamicAddressHsfAsyncHandler;
			typedef Outcome<Error, Model::FtEagleEyeResult> FtEagleEyeOutcome;
			typedef std::future<FtEagleEyeOutcome> FtEagleEyeOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtEagleEyeRequest&, const FtEagleEyeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtEagleEyeAsyncHandler;
			typedef Outcome<Error, Model::FtFlowSpecialResult> FtFlowSpecialOutcome;
			typedef std::future<FtFlowSpecialOutcome> FtFlowSpecialOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtFlowSpecialRequest&, const FtFlowSpecialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtFlowSpecialAsyncHandler;
			typedef Outcome<Error, Model::FtGatedLaunchPolicy3ApiResult> FtGatedLaunchPolicy3ApiOutcome;
			typedef std::future<FtGatedLaunchPolicy3ApiOutcome> FtGatedLaunchPolicy3ApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtGatedLaunchPolicy3ApiRequest&, const FtGatedLaunchPolicy3ApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtGatedLaunchPolicy3ApiAsyncHandler;
			typedef Outcome<Error, Model::FtGatedLaunchPolicy4Result> FtGatedLaunchPolicy4Outcome;
			typedef std::future<FtGatedLaunchPolicy4Outcome> FtGatedLaunchPolicy4OutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtGatedLaunchPolicy4Request&, const FtGatedLaunchPolicy4Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtGatedLaunchPolicy4AsyncHandler;
			typedef Outcome<Error, Model::FtGatedLaunchPolicyApiResult> FtGatedLaunchPolicyApiOutcome;
			typedef std::future<FtGatedLaunchPolicyApiOutcome> FtGatedLaunchPolicyApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtGatedLaunchPolicyApiRequest&, const FtGatedLaunchPolicyApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtGatedLaunchPolicyApiAsyncHandler;
			typedef Outcome<Error, Model::FtIpFlowControlResult> FtIpFlowControlOutcome;
			typedef std::future<FtIpFlowControlOutcome> FtIpFlowControlOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtIpFlowControlRequest&, const FtIpFlowControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtIpFlowControlAsyncHandler;
			typedef Outcome<Error, Model::FtParamListResult> FtParamListOutcome;
			typedef std::future<FtParamListOutcome> FtParamListOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtParamListRequest&, const FtParamListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtParamListAsyncHandler;
			typedef Outcome<Error, Model::TestDubboRetryApiResult> TestDubboRetryApiOutcome;
			typedef std::future<TestDubboRetryApiOutcome> TestDubboRetryApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::TestDubboRetryApiRequest&, const TestDubboRetryApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestDubboRetryApiAsyncHandler;
			typedef Outcome<Error, Model::TestErrorCodeForGateWayResult> TestErrorCodeForGateWayOutcome;
			typedef std::future<TestErrorCodeForGateWayOutcome> TestErrorCodeForGateWayOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::TestErrorCodeForGateWayRequest&, const TestErrorCodeForGateWayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestErrorCodeForGateWayAsyncHandler;
			typedef Outcome<Error, Model::TestHttpApiResult> TestHttpApiOutcome;
			typedef std::future<TestHttpApiOutcome> TestHttpApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::TestHttpApiRequest&, const TestHttpApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestHttpApiAsyncHandler;

			FtClient(const Credentials &credentials, const ClientConfiguration &configuration);
			FtClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			FtClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~FtClient();
			BatchAuditTest01Outcome batchAuditTest01(const Model::BatchAuditTest01Request &request)const;
			void batchAuditTest01Async(const Model::BatchAuditTest01Request& request, const BatchAuditTest01AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAuditTest01OutcomeCallable batchAuditTest01Callable(const Model::BatchAuditTest01Request& request) const;
			BatchAuditTest02Outcome batchAuditTest02(const Model::BatchAuditTest02Request &request)const;
			void batchAuditTest02Async(const Model::BatchAuditTest02Request& request, const BatchAuditTest02AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAuditTest02OutcomeCallable batchAuditTest02Callable(const Model::BatchAuditTest02Request& request) const;
			DescribeResourceTypeOutcome describeResourceType(const Model::DescribeResourceTypeRequest &request)const;
			void describeResourceTypeAsync(const Model::DescribeResourceTypeRequest& request, const DescribeResourceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeResourceTypeOutcomeCallable describeResourceTypeCallable(const Model::DescribeResourceTypeRequest& request) const;
			FTApiAliasApiOutcome fTApiAliasApi(const Model::FTApiAliasApiRequest &request)const;
			void fTApiAliasApiAsync(const Model::FTApiAliasApiRequest& request, const FTApiAliasApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FTApiAliasApiOutcomeCallable fTApiAliasApiCallable(const Model::FTApiAliasApiRequest& request) const;
			FtDynamicAddressDubboOutcome ftDynamicAddressDubbo(const Model::FtDynamicAddressDubboRequest &request)const;
			void ftDynamicAddressDubboAsync(const Model::FtDynamicAddressDubboRequest& request, const FtDynamicAddressDubboAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtDynamicAddressDubboOutcomeCallable ftDynamicAddressDubboCallable(const Model::FtDynamicAddressDubboRequest& request) const;
			FtDynamicAddressHsfOutcome ftDynamicAddressHsf(const Model::FtDynamicAddressHsfRequest &request)const;
			void ftDynamicAddressHsfAsync(const Model::FtDynamicAddressHsfRequest& request, const FtDynamicAddressHsfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtDynamicAddressHsfOutcomeCallable ftDynamicAddressHsfCallable(const Model::FtDynamicAddressHsfRequest& request) const;
			FtEagleEyeOutcome ftEagleEye(const Model::FtEagleEyeRequest &request)const;
			void ftEagleEyeAsync(const Model::FtEagleEyeRequest& request, const FtEagleEyeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtEagleEyeOutcomeCallable ftEagleEyeCallable(const Model::FtEagleEyeRequest& request) const;
			FtFlowSpecialOutcome ftFlowSpecial(const Model::FtFlowSpecialRequest &request)const;
			void ftFlowSpecialAsync(const Model::FtFlowSpecialRequest& request, const FtFlowSpecialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtFlowSpecialOutcomeCallable ftFlowSpecialCallable(const Model::FtFlowSpecialRequest& request) const;
			FtGatedLaunchPolicy3ApiOutcome ftGatedLaunchPolicy3Api(const Model::FtGatedLaunchPolicy3ApiRequest &request)const;
			void ftGatedLaunchPolicy3ApiAsync(const Model::FtGatedLaunchPolicy3ApiRequest& request, const FtGatedLaunchPolicy3ApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtGatedLaunchPolicy3ApiOutcomeCallable ftGatedLaunchPolicy3ApiCallable(const Model::FtGatedLaunchPolicy3ApiRequest& request) const;
			FtGatedLaunchPolicy4Outcome ftGatedLaunchPolicy4(const Model::FtGatedLaunchPolicy4Request &request)const;
			void ftGatedLaunchPolicy4Async(const Model::FtGatedLaunchPolicy4Request& request, const FtGatedLaunchPolicy4AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtGatedLaunchPolicy4OutcomeCallable ftGatedLaunchPolicy4Callable(const Model::FtGatedLaunchPolicy4Request& request) const;
			FtGatedLaunchPolicyApiOutcome ftGatedLaunchPolicyApi(const Model::FtGatedLaunchPolicyApiRequest &request)const;
			void ftGatedLaunchPolicyApiAsync(const Model::FtGatedLaunchPolicyApiRequest& request, const FtGatedLaunchPolicyApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtGatedLaunchPolicyApiOutcomeCallable ftGatedLaunchPolicyApiCallable(const Model::FtGatedLaunchPolicyApiRequest& request) const;
			FtIpFlowControlOutcome ftIpFlowControl(const Model::FtIpFlowControlRequest &request)const;
			void ftIpFlowControlAsync(const Model::FtIpFlowControlRequest& request, const FtIpFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtIpFlowControlOutcomeCallable ftIpFlowControlCallable(const Model::FtIpFlowControlRequest& request) const;
			FtParamListOutcome ftParamList(const Model::FtParamListRequest &request)const;
			void ftParamListAsync(const Model::FtParamListRequest& request, const FtParamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtParamListOutcomeCallable ftParamListCallable(const Model::FtParamListRequest& request) const;
			TestDubboRetryApiOutcome testDubboRetryApi(const Model::TestDubboRetryApiRequest &request)const;
			void testDubboRetryApiAsync(const Model::TestDubboRetryApiRequest& request, const TestDubboRetryApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestDubboRetryApiOutcomeCallable testDubboRetryApiCallable(const Model::TestDubboRetryApiRequest& request) const;
			TestErrorCodeForGateWayOutcome testErrorCodeForGateWay(const Model::TestErrorCodeForGateWayRequest &request)const;
			void testErrorCodeForGateWayAsync(const Model::TestErrorCodeForGateWayRequest& request, const TestErrorCodeForGateWayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestErrorCodeForGateWayOutcomeCallable testErrorCodeForGateWayCallable(const Model::TestErrorCodeForGateWayRequest& request) const;
			TestHttpApiOutcome testHttpApi(const Model::TestHttpApiRequest &request)const;
			void testHttpApiAsync(const Model::TestHttpApiRequest& request, const TestHttpApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestHttpApiOutcomeCallable testHttpApiCallable(const Model::TestHttpApiRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FT_FTCLIENT_H_
