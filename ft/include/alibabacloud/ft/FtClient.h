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
#include "model/CountCloudProductCallTimesRequest.h"
#include "model/CountCloudProductCallTimesResult.h"
#include "model/DeleteAllStrategyRequest.h"
#include "model/DeleteAllStrategyResult.h"
#include "model/DescribeResourceTypeRequest.h"
#include "model/DescribeResourceTypeResult.h"
#include "model/FTApiAliasApiRequest.h"
#include "model/FTApiAliasApiResult.h"
#include "model/FtDynamicAddressDubboRequest.h"
#include "model/FtDynamicAddressDubboResult.h"
#include "model/FtDynamicAddressHsfRequest.h"
#include "model/FtDynamicAddressHsfResult.h"
#include "model/FtDynamicAddressHttpVpcRequest.h"
#include "model/FtDynamicAddressHttpVpcResult.h"
#include "model/FtEagleEyeRequest.h"
#include "model/FtEagleEyeResult.h"
#include "model/FtFlowSpecialRequest.h"
#include "model/FtFlowSpecialResult.h"
#include "model/FtFlowSpecial1586868138332Request.h"
#include "model/FtFlowSpecial1586868138332Result.h"
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
#include "model/GetMigrateStrategyResultRequest.h"
#include "model/GetMigrateStrategyResultResult.h"
#include "model/GetTairDataRequest.h"
#include "model/GetTairDataResult.h"
#include "model/MigrateStrategyRequest.h"
#include "model/MigrateStrategyResult.h"
#include "model/QueryDomainChangeRecordsRequest.h"
#include "model/QueryDomainChangeRecordsResult.h"
#include "model/QueryErrorApisRequest.h"
#include "model/QueryErrorApisResult.h"
#include "model/RpcDubboServiceRouteApiRequest.h"
#include "model/RpcDubboServiceRouteApiResult.h"
#include "model/RpcHsfServiceRouteMatchApiRequest.h"
#include "model/RpcHsfServiceRouteMatchApiResult.h"
#include "model/TestDubboRetryApiRequest.h"
#include "model/TestDubboRetryApiResult.h"
#include "model/TestErrorCodeForGateWayRequest.h"
#include "model/TestErrorCodeForGateWayResult.h"
#include "model/TestFlowStrategy01Request.h"
#include "model/TestFlowStrategy01Result.h"
#include "model/TestHttpApiRequest.h"
#include "model/TestHttpApiResult.h"
#include "model/TestIspHttpValidatorRequest.h"
#include "model/TestIspHttpValidatorResult.h"
#include "model/TestXmlServiceRoutePolicyRequest.h"
#include "model/TestXmlServiceRoutePolicyResult.h"
#include "model/UpdateDomainRecordsRegionIdRequest.h"
#include "model/UpdateDomainRecordsRegionIdResult.h"


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
			typedef Outcome<Error, Model::CountCloudProductCallTimesResult> CountCloudProductCallTimesOutcome;
			typedef std::future<CountCloudProductCallTimesOutcome> CountCloudProductCallTimesOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::CountCloudProductCallTimesRequest&, const CountCloudProductCallTimesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CountCloudProductCallTimesAsyncHandler;
			typedef Outcome<Error, Model::DeleteAllStrategyResult> DeleteAllStrategyOutcome;
			typedef std::future<DeleteAllStrategyOutcome> DeleteAllStrategyOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::DeleteAllStrategyRequest&, const DeleteAllStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllStrategyAsyncHandler;
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
			typedef Outcome<Error, Model::FtDynamicAddressHttpVpcResult> FtDynamicAddressHttpVpcOutcome;
			typedef std::future<FtDynamicAddressHttpVpcOutcome> FtDynamicAddressHttpVpcOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtDynamicAddressHttpVpcRequest&, const FtDynamicAddressHttpVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtDynamicAddressHttpVpcAsyncHandler;
			typedef Outcome<Error, Model::FtEagleEyeResult> FtEagleEyeOutcome;
			typedef std::future<FtEagleEyeOutcome> FtEagleEyeOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtEagleEyeRequest&, const FtEagleEyeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtEagleEyeAsyncHandler;
			typedef Outcome<Error, Model::FtFlowSpecialResult> FtFlowSpecialOutcome;
			typedef std::future<FtFlowSpecialOutcome> FtFlowSpecialOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtFlowSpecialRequest&, const FtFlowSpecialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtFlowSpecialAsyncHandler;
			typedef Outcome<Error, Model::FtFlowSpecial1586868138332Result> FtFlowSpecial1586868138332Outcome;
			typedef std::future<FtFlowSpecial1586868138332Outcome> FtFlowSpecial1586868138332OutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::FtFlowSpecial1586868138332Request&, const FtFlowSpecial1586868138332Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> FtFlowSpecial1586868138332AsyncHandler;
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
			typedef Outcome<Error, Model::GetMigrateStrategyResultResult> GetMigrateStrategyResultOutcome;
			typedef std::future<GetMigrateStrategyResultOutcome> GetMigrateStrategyResultOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::GetMigrateStrategyResultRequest&, const GetMigrateStrategyResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMigrateStrategyResultAsyncHandler;
			typedef Outcome<Error, Model::GetTairDataResult> GetTairDataOutcome;
			typedef std::future<GetTairDataOutcome> GetTairDataOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::GetTairDataRequest&, const GetTairDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTairDataAsyncHandler;
			typedef Outcome<Error, Model::MigrateStrategyResult> MigrateStrategyOutcome;
			typedef std::future<MigrateStrategyOutcome> MigrateStrategyOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::MigrateStrategyRequest&, const MigrateStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateStrategyAsyncHandler;
			typedef Outcome<Error, Model::QueryDomainChangeRecordsResult> QueryDomainChangeRecordsOutcome;
			typedef std::future<QueryDomainChangeRecordsOutcome> QueryDomainChangeRecordsOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::QueryDomainChangeRecordsRequest&, const QueryDomainChangeRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDomainChangeRecordsAsyncHandler;
			typedef Outcome<Error, Model::QueryErrorApisResult> QueryErrorApisOutcome;
			typedef std::future<QueryErrorApisOutcome> QueryErrorApisOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::QueryErrorApisRequest&, const QueryErrorApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryErrorApisAsyncHandler;
			typedef Outcome<Error, Model::RpcDubboServiceRouteApiResult> RpcDubboServiceRouteApiOutcome;
			typedef std::future<RpcDubboServiceRouteApiOutcome> RpcDubboServiceRouteApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::RpcDubboServiceRouteApiRequest&, const RpcDubboServiceRouteApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RpcDubboServiceRouteApiAsyncHandler;
			typedef Outcome<Error, Model::RpcHsfServiceRouteMatchApiResult> RpcHsfServiceRouteMatchApiOutcome;
			typedef std::future<RpcHsfServiceRouteMatchApiOutcome> RpcHsfServiceRouteMatchApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::RpcHsfServiceRouteMatchApiRequest&, const RpcHsfServiceRouteMatchApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RpcHsfServiceRouteMatchApiAsyncHandler;
			typedef Outcome<Error, Model::TestDubboRetryApiResult> TestDubboRetryApiOutcome;
			typedef std::future<TestDubboRetryApiOutcome> TestDubboRetryApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::TestDubboRetryApiRequest&, const TestDubboRetryApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestDubboRetryApiAsyncHandler;
			typedef Outcome<Error, Model::TestErrorCodeForGateWayResult> TestErrorCodeForGateWayOutcome;
			typedef std::future<TestErrorCodeForGateWayOutcome> TestErrorCodeForGateWayOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::TestErrorCodeForGateWayRequest&, const TestErrorCodeForGateWayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestErrorCodeForGateWayAsyncHandler;
			typedef Outcome<Error, Model::TestFlowStrategy01Result> TestFlowStrategy01Outcome;
			typedef std::future<TestFlowStrategy01Outcome> TestFlowStrategy01OutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::TestFlowStrategy01Request&, const TestFlowStrategy01Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestFlowStrategy01AsyncHandler;
			typedef Outcome<Error, Model::TestHttpApiResult> TestHttpApiOutcome;
			typedef std::future<TestHttpApiOutcome> TestHttpApiOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::TestHttpApiRequest&, const TestHttpApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestHttpApiAsyncHandler;
			typedef Outcome<Error, Model::TestIspHttpValidatorResult> TestIspHttpValidatorOutcome;
			typedef std::future<TestIspHttpValidatorOutcome> TestIspHttpValidatorOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::TestIspHttpValidatorRequest&, const TestIspHttpValidatorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestIspHttpValidatorAsyncHandler;
			typedef Outcome<Error, Model::TestXmlServiceRoutePolicyResult> TestXmlServiceRoutePolicyOutcome;
			typedef std::future<TestXmlServiceRoutePolicyOutcome> TestXmlServiceRoutePolicyOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::TestXmlServiceRoutePolicyRequest&, const TestXmlServiceRoutePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestXmlServiceRoutePolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateDomainRecordsRegionIdResult> UpdateDomainRecordsRegionIdOutcome;
			typedef std::future<UpdateDomainRecordsRegionIdOutcome> UpdateDomainRecordsRegionIdOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::UpdateDomainRecordsRegionIdRequest&, const UpdateDomainRecordsRegionIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainRecordsRegionIdAsyncHandler;

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
			CountCloudProductCallTimesOutcome countCloudProductCallTimes(const Model::CountCloudProductCallTimesRequest &request)const;
			void countCloudProductCallTimesAsync(const Model::CountCloudProductCallTimesRequest& request, const CountCloudProductCallTimesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CountCloudProductCallTimesOutcomeCallable countCloudProductCallTimesCallable(const Model::CountCloudProductCallTimesRequest& request) const;
			DeleteAllStrategyOutcome deleteAllStrategy(const Model::DeleteAllStrategyRequest &request)const;
			void deleteAllStrategyAsync(const Model::DeleteAllStrategyRequest& request, const DeleteAllStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAllStrategyOutcomeCallable deleteAllStrategyCallable(const Model::DeleteAllStrategyRequest& request) const;
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
			FtDynamicAddressHttpVpcOutcome ftDynamicAddressHttpVpc(const Model::FtDynamicAddressHttpVpcRequest &request)const;
			void ftDynamicAddressHttpVpcAsync(const Model::FtDynamicAddressHttpVpcRequest& request, const FtDynamicAddressHttpVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtDynamicAddressHttpVpcOutcomeCallable ftDynamicAddressHttpVpcCallable(const Model::FtDynamicAddressHttpVpcRequest& request) const;
			FtEagleEyeOutcome ftEagleEye(const Model::FtEagleEyeRequest &request)const;
			void ftEagleEyeAsync(const Model::FtEagleEyeRequest& request, const FtEagleEyeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtEagleEyeOutcomeCallable ftEagleEyeCallable(const Model::FtEagleEyeRequest& request) const;
			FtFlowSpecialOutcome ftFlowSpecial(const Model::FtFlowSpecialRequest &request)const;
			void ftFlowSpecialAsync(const Model::FtFlowSpecialRequest& request, const FtFlowSpecialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtFlowSpecialOutcomeCallable ftFlowSpecialCallable(const Model::FtFlowSpecialRequest& request) const;
			FtFlowSpecial1586868138332Outcome ftFlowSpecial1586868138332(const Model::FtFlowSpecial1586868138332Request &request)const;
			void ftFlowSpecial1586868138332Async(const Model::FtFlowSpecial1586868138332Request& request, const FtFlowSpecial1586868138332AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FtFlowSpecial1586868138332OutcomeCallable ftFlowSpecial1586868138332Callable(const Model::FtFlowSpecial1586868138332Request& request) const;
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
			GetMigrateStrategyResultOutcome getMigrateStrategyResult(const Model::GetMigrateStrategyResultRequest &request)const;
			void getMigrateStrategyResultAsync(const Model::GetMigrateStrategyResultRequest& request, const GetMigrateStrategyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMigrateStrategyResultOutcomeCallable getMigrateStrategyResultCallable(const Model::GetMigrateStrategyResultRequest& request) const;
			GetTairDataOutcome getTairData(const Model::GetTairDataRequest &request)const;
			void getTairDataAsync(const Model::GetTairDataRequest& request, const GetTairDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTairDataOutcomeCallable getTairDataCallable(const Model::GetTairDataRequest& request) const;
			MigrateStrategyOutcome migrateStrategy(const Model::MigrateStrategyRequest &request)const;
			void migrateStrategyAsync(const Model::MigrateStrategyRequest& request, const MigrateStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateStrategyOutcomeCallable migrateStrategyCallable(const Model::MigrateStrategyRequest& request) const;
			QueryDomainChangeRecordsOutcome queryDomainChangeRecords(const Model::QueryDomainChangeRecordsRequest &request)const;
			void queryDomainChangeRecordsAsync(const Model::QueryDomainChangeRecordsRequest& request, const QueryDomainChangeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDomainChangeRecordsOutcomeCallable queryDomainChangeRecordsCallable(const Model::QueryDomainChangeRecordsRequest& request) const;
			QueryErrorApisOutcome queryErrorApis(const Model::QueryErrorApisRequest &request)const;
			void queryErrorApisAsync(const Model::QueryErrorApisRequest& request, const QueryErrorApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryErrorApisOutcomeCallable queryErrorApisCallable(const Model::QueryErrorApisRequest& request) const;
			RpcDubboServiceRouteApiOutcome rpcDubboServiceRouteApi(const Model::RpcDubboServiceRouteApiRequest &request)const;
			void rpcDubboServiceRouteApiAsync(const Model::RpcDubboServiceRouteApiRequest& request, const RpcDubboServiceRouteApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RpcDubboServiceRouteApiOutcomeCallable rpcDubboServiceRouteApiCallable(const Model::RpcDubboServiceRouteApiRequest& request) const;
			RpcHsfServiceRouteMatchApiOutcome rpcHsfServiceRouteMatchApi(const Model::RpcHsfServiceRouteMatchApiRequest &request)const;
			void rpcHsfServiceRouteMatchApiAsync(const Model::RpcHsfServiceRouteMatchApiRequest& request, const RpcHsfServiceRouteMatchApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RpcHsfServiceRouteMatchApiOutcomeCallable rpcHsfServiceRouteMatchApiCallable(const Model::RpcHsfServiceRouteMatchApiRequest& request) const;
			TestDubboRetryApiOutcome testDubboRetryApi(const Model::TestDubboRetryApiRequest &request)const;
			void testDubboRetryApiAsync(const Model::TestDubboRetryApiRequest& request, const TestDubboRetryApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestDubboRetryApiOutcomeCallable testDubboRetryApiCallable(const Model::TestDubboRetryApiRequest& request) const;
			TestErrorCodeForGateWayOutcome testErrorCodeForGateWay(const Model::TestErrorCodeForGateWayRequest &request)const;
			void testErrorCodeForGateWayAsync(const Model::TestErrorCodeForGateWayRequest& request, const TestErrorCodeForGateWayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestErrorCodeForGateWayOutcomeCallable testErrorCodeForGateWayCallable(const Model::TestErrorCodeForGateWayRequest& request) const;
			TestFlowStrategy01Outcome testFlowStrategy01(const Model::TestFlowStrategy01Request &request)const;
			void testFlowStrategy01Async(const Model::TestFlowStrategy01Request& request, const TestFlowStrategy01AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestFlowStrategy01OutcomeCallable testFlowStrategy01Callable(const Model::TestFlowStrategy01Request& request) const;
			TestHttpApiOutcome testHttpApi(const Model::TestHttpApiRequest &request)const;
			void testHttpApiAsync(const Model::TestHttpApiRequest& request, const TestHttpApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestHttpApiOutcomeCallable testHttpApiCallable(const Model::TestHttpApiRequest& request) const;
			TestIspHttpValidatorOutcome testIspHttpValidator(const Model::TestIspHttpValidatorRequest &request)const;
			void testIspHttpValidatorAsync(const Model::TestIspHttpValidatorRequest& request, const TestIspHttpValidatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestIspHttpValidatorOutcomeCallable testIspHttpValidatorCallable(const Model::TestIspHttpValidatorRequest& request) const;
			TestXmlServiceRoutePolicyOutcome testXmlServiceRoutePolicy(const Model::TestXmlServiceRoutePolicyRequest &request)const;
			void testXmlServiceRoutePolicyAsync(const Model::TestXmlServiceRoutePolicyRequest& request, const TestXmlServiceRoutePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestXmlServiceRoutePolicyOutcomeCallable testXmlServiceRoutePolicyCallable(const Model::TestXmlServiceRoutePolicyRequest& request) const;
			UpdateDomainRecordsRegionIdOutcome updateDomainRecordsRegionId(const Model::UpdateDomainRecordsRegionIdRequest &request)const;
			void updateDomainRecordsRegionIdAsync(const Model::UpdateDomainRecordsRegionIdRequest& request, const UpdateDomainRecordsRegionIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDomainRecordsRegionIdOutcomeCallable updateDomainRecordsRegionIdCallable(const Model::UpdateDomainRecordsRegionIdRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FT_FTCLIENT_H_
