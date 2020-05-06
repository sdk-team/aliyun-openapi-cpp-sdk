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

#ifndef ALIBABACLOUD_ACCOUNT_ACCOUNTCLIENT_H_
#define ALIBABACLOUD_ACCOUNT_ACCOUNTCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AccountExport.h"
#include "model/CreateAliyunAccountRequest.h"
#include "model/CreateAliyunAccountResult.h"
#include "model/CreateAliyunAccountForBidRequest.h"
#include "model/CreateAliyunAccountForBidResult.h"
#include "model/CreateAppRequest.h"
#include "model/CreateAppResult.h"
#include "model/CreateAppForBidRequest.h"
#include "model/CreateAppForBidResult.h"
#include "model/DeleteAppForBidRequest.h"
#include "model/DeleteAppForBidResult.h"
#include "model/GetPubKeyRequest.h"
#include "model/GetPubKeyResult.h"
#include "model/ListAppkeyByOwnerAndBidRequest.h"
#include "model/ListAppkeyByOwnerAndBidResult.h"


namespace AlibabaCloud
{
	namespace Account
	{
		class ALIBABACLOUD_ACCOUNT_EXPORT AccountClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAliyunAccountResult> CreateAliyunAccountOutcome;
			typedef std::future<CreateAliyunAccountOutcome> CreateAliyunAccountOutcomeCallable;
			typedef std::function<void(const AccountClient*, const Model::CreateAliyunAccountRequest&, const CreateAliyunAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliyunAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateAliyunAccountForBidResult> CreateAliyunAccountForBidOutcome;
			typedef std::future<CreateAliyunAccountForBidOutcome> CreateAliyunAccountForBidOutcomeCallable;
			typedef std::function<void(const AccountClient*, const Model::CreateAliyunAccountForBidRequest&, const CreateAliyunAccountForBidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliyunAccountForBidAsyncHandler;
			typedef Outcome<Error, Model::CreateAppResult> CreateAppOutcome;
			typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
			typedef std::function<void(const AccountClient*, const Model::CreateAppRequest&, const CreateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
			typedef Outcome<Error, Model::CreateAppForBidResult> CreateAppForBidOutcome;
			typedef std::future<CreateAppForBidOutcome> CreateAppForBidOutcomeCallable;
			typedef std::function<void(const AccountClient*, const Model::CreateAppForBidRequest&, const CreateAppForBidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppForBidAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppForBidResult> DeleteAppForBidOutcome;
			typedef std::future<DeleteAppForBidOutcome> DeleteAppForBidOutcomeCallable;
			typedef std::function<void(const AccountClient*, const Model::DeleteAppForBidRequest&, const DeleteAppForBidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppForBidAsyncHandler;
			typedef Outcome<Error, Model::GetPubKeyResult> GetPubKeyOutcome;
			typedef std::future<GetPubKeyOutcome> GetPubKeyOutcomeCallable;
			typedef std::function<void(const AccountClient*, const Model::GetPubKeyRequest&, const GetPubKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPubKeyAsyncHandler;
			typedef Outcome<Error, Model::ListAppkeyByOwnerAndBidResult> ListAppkeyByOwnerAndBidOutcome;
			typedef std::future<ListAppkeyByOwnerAndBidOutcome> ListAppkeyByOwnerAndBidOutcomeCallable;
			typedef std::function<void(const AccountClient*, const Model::ListAppkeyByOwnerAndBidRequest&, const ListAppkeyByOwnerAndBidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppkeyByOwnerAndBidAsyncHandler;

			AccountClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AccountClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AccountClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AccountClient();
			CreateAliyunAccountOutcome createAliyunAccount(const Model::CreateAliyunAccountRequest &request)const;
			void createAliyunAccountAsync(const Model::CreateAliyunAccountRequest& request, const CreateAliyunAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAliyunAccountOutcomeCallable createAliyunAccountCallable(const Model::CreateAliyunAccountRequest& request) const;
			CreateAliyunAccountForBidOutcome createAliyunAccountForBid(const Model::CreateAliyunAccountForBidRequest &request)const;
			void createAliyunAccountForBidAsync(const Model::CreateAliyunAccountForBidRequest& request, const CreateAliyunAccountForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAliyunAccountForBidOutcomeCallable createAliyunAccountForBidCallable(const Model::CreateAliyunAccountForBidRequest& request) const;
			CreateAppOutcome createApp(const Model::CreateAppRequest &request)const;
			void createAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppOutcomeCallable createAppCallable(const Model::CreateAppRequest& request) const;
			CreateAppForBidOutcome createAppForBid(const Model::CreateAppForBidRequest &request)const;
			void createAppForBidAsync(const Model::CreateAppForBidRequest& request, const CreateAppForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppForBidOutcomeCallable createAppForBidCallable(const Model::CreateAppForBidRequest& request) const;
			DeleteAppForBidOutcome deleteAppForBid(const Model::DeleteAppForBidRequest &request)const;
			void deleteAppForBidAsync(const Model::DeleteAppForBidRequest& request, const DeleteAppForBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppForBidOutcomeCallable deleteAppForBidCallable(const Model::DeleteAppForBidRequest& request) const;
			GetPubKeyOutcome getPubKey(const Model::GetPubKeyRequest &request)const;
			void getPubKeyAsync(const Model::GetPubKeyRequest& request, const GetPubKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPubKeyOutcomeCallable getPubKeyCallable(const Model::GetPubKeyRequest& request) const;
			ListAppkeyByOwnerAndBidOutcome listAppkeyByOwnerAndBid(const Model::ListAppkeyByOwnerAndBidRequest &request)const;
			void listAppkeyByOwnerAndBidAsync(const Model::ListAppkeyByOwnerAndBidRequest& request, const ListAppkeyByOwnerAndBidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppkeyByOwnerAndBidOutcomeCallable listAppkeyByOwnerAndBidCallable(const Model::ListAppkeyByOwnerAndBidRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ACCOUNT_ACCOUNTCLIENT_H_
