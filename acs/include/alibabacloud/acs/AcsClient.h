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

#ifndef ALIBABACLOUD_ACS_ACSCLIENT_H_
#define ALIBABACLOUD_ACS_ACSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "AcsExport.h"
#include "model/DeleteApiInDailyRequest.h"
#include "model/DeleteApiInDailyResult.h"
#include "model/DeleteApiOnlineRequest.h"
#include "model/DeleteApiOnlineResult.h"
#include "model/ModifyApiNameRequest.h"
#include "model/ModifyApiNameResult.h"
#include "model/ModifyApiNameInDailyRequest.h"
#include "model/ModifyApiNameInDailyResult.h"
#include "model/PurchaseApiRequest.h"
#include "model/PurchaseApiResult.h"
#include "model/PutFlowControlRequest.h"
#include "model/PutFlowControlResult.h"
#include "model/ResumePurchasedApiRequest.h"
#include "model/ResumePurchasedApiResult.h"
#include "model/StopPurchasedApiRequest.h"
#include "model/StopPurchasedApiResult.h"


namespace AlibabaCloud
{
	namespace Acs
	{
		class ALIBABACLOUD_ACS_EXPORT AcsClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::DeleteApiInDailyResult> DeleteApiInDailyOutcome;
			typedef std::future<DeleteApiInDailyOutcome> DeleteApiInDailyOutcomeCallable;
			typedef std::function<void(const AcsClient*, const Model::DeleteApiInDailyRequest&, const DeleteApiInDailyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiInDailyAsyncHandler;
			typedef Outcome<Error, Model::DeleteApiOnlineResult> DeleteApiOnlineOutcome;
			typedef std::future<DeleteApiOnlineOutcome> DeleteApiOnlineOutcomeCallable;
			typedef std::function<void(const AcsClient*, const Model::DeleteApiOnlineRequest&, const DeleteApiOnlineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiOnlineAsyncHandler;
			typedef Outcome<Error, Model::ModifyApiNameResult> ModifyApiNameOutcome;
			typedef std::future<ModifyApiNameOutcome> ModifyApiNameOutcomeCallable;
			typedef std::function<void(const AcsClient*, const Model::ModifyApiNameRequest&, const ModifyApiNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiNameAsyncHandler;
			typedef Outcome<Error, Model::ModifyApiNameInDailyResult> ModifyApiNameInDailyOutcome;
			typedef std::future<ModifyApiNameInDailyOutcome> ModifyApiNameInDailyOutcomeCallable;
			typedef std::function<void(const AcsClient*, const Model::ModifyApiNameInDailyRequest&, const ModifyApiNameInDailyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiNameInDailyAsyncHandler;
			typedef Outcome<Error, Model::PurchaseApiResult> PurchaseApiOutcome;
			typedef std::future<PurchaseApiOutcome> PurchaseApiOutcomeCallable;
			typedef std::function<void(const AcsClient*, const Model::PurchaseApiRequest&, const PurchaseApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PurchaseApiAsyncHandler;
			typedef Outcome<Error, Model::PutFlowControlResult> PutFlowControlOutcome;
			typedef std::future<PutFlowControlOutcome> PutFlowControlOutcomeCallable;
			typedef std::function<void(const AcsClient*, const Model::PutFlowControlRequest&, const PutFlowControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutFlowControlAsyncHandler;
			typedef Outcome<Error, Model::ResumePurchasedApiResult> ResumePurchasedApiOutcome;
			typedef std::future<ResumePurchasedApiOutcome> ResumePurchasedApiOutcomeCallable;
			typedef std::function<void(const AcsClient*, const Model::ResumePurchasedApiRequest&, const ResumePurchasedApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumePurchasedApiAsyncHandler;
			typedef Outcome<Error, Model::StopPurchasedApiResult> StopPurchasedApiOutcome;
			typedef std::future<StopPurchasedApiOutcome> StopPurchasedApiOutcomeCallable;
			typedef std::function<void(const AcsClient*, const Model::StopPurchasedApiRequest&, const StopPurchasedApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopPurchasedApiAsyncHandler;

			AcsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AcsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AcsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AcsClient();
			DeleteApiInDailyOutcome deleteApiInDaily(const Model::DeleteApiInDailyRequest &request)const;
			void deleteApiInDailyAsync(const Model::DeleteApiInDailyRequest& request, const DeleteApiInDailyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApiInDailyOutcomeCallable deleteApiInDailyCallable(const Model::DeleteApiInDailyRequest& request) const;
			DeleteApiOnlineOutcome deleteApiOnline(const Model::DeleteApiOnlineRequest &request)const;
			void deleteApiOnlineAsync(const Model::DeleteApiOnlineRequest& request, const DeleteApiOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApiOnlineOutcomeCallable deleteApiOnlineCallable(const Model::DeleteApiOnlineRequest& request) const;
			ModifyApiNameOutcome modifyApiName(const Model::ModifyApiNameRequest &request)const;
			void modifyApiNameAsync(const Model::ModifyApiNameRequest& request, const ModifyApiNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApiNameOutcomeCallable modifyApiNameCallable(const Model::ModifyApiNameRequest& request) const;
			ModifyApiNameInDailyOutcome modifyApiNameInDaily(const Model::ModifyApiNameInDailyRequest &request)const;
			void modifyApiNameInDailyAsync(const Model::ModifyApiNameInDailyRequest& request, const ModifyApiNameInDailyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApiNameInDailyOutcomeCallable modifyApiNameInDailyCallable(const Model::ModifyApiNameInDailyRequest& request) const;
			PurchaseApiOutcome purchaseApi(const Model::PurchaseApiRequest &request)const;
			void purchaseApiAsync(const Model::PurchaseApiRequest& request, const PurchaseApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PurchaseApiOutcomeCallable purchaseApiCallable(const Model::PurchaseApiRequest& request) const;
			PutFlowControlOutcome putFlowControl(const Model::PutFlowControlRequest &request)const;
			void putFlowControlAsync(const Model::PutFlowControlRequest& request, const PutFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutFlowControlOutcomeCallable putFlowControlCallable(const Model::PutFlowControlRequest& request) const;
			ResumePurchasedApiOutcome resumePurchasedApi(const Model::ResumePurchasedApiRequest &request)const;
			void resumePurchasedApiAsync(const Model::ResumePurchasedApiRequest& request, const ResumePurchasedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumePurchasedApiOutcomeCallable resumePurchasedApiCallable(const Model::ResumePurchasedApiRequest& request) const;
			StopPurchasedApiOutcome stopPurchasedApi(const Model::StopPurchasedApiRequest &request)const;
			void stopPurchasedApiAsync(const Model::StopPurchasedApiRequest& request, const StopPurchasedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopPurchasedApiOutcomeCallable stopPurchasedApiCallable(const Model::StopPurchasedApiRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ACS_ACSCLIENT_H_
