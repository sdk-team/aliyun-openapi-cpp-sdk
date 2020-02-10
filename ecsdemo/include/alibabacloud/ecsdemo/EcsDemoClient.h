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

#ifndef ALIBABACLOUD_ECSDEMO_ECSDEMOCLIENT_H_
#define ALIBABACLOUD_ECSDEMO_ECSDEMOCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "EcsDemoExport.h"
#include "model/CancelInstanceRequest.h"
#include "model/CancelInstanceResult.h"


namespace AlibabaCloud
{
	namespace EcsDemo
	{
		class ALIBABACLOUD_ECSDEMO_EXPORT EcsDemoClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CancelInstanceResult> CancelInstanceOutcome;
			typedef std::future<CancelInstanceOutcome> CancelInstanceOutcomeCallable;
			typedef std::function<void(const EcsDemoClient*, const Model::CancelInstanceRequest&, const CancelInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelInstanceAsyncHandler;

			EcsDemoClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EcsDemoClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EcsDemoClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EcsDemoClient();
			CancelInstanceOutcome cancelInstance(const Model::CancelInstanceRequest &request)const;
			void cancelInstanceAsync(const Model::CancelInstanceRequest& request, const CancelInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelInstanceOutcomeCallable cancelInstanceCallable(const Model::CancelInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ECSDEMO_ECSDEMOCLIENT_H_
