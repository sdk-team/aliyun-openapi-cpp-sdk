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
#include <alibabacloud/core/RoaServiceClient.h>
#include "FtExport.h"
#include "model/RoaHttpStringResponseTestRequest.h"
#include "model/RoaHttpStringResponseTestResult.h"


namespace AlibabaCloud
{
	namespace Ft
	{
		class ALIBABACLOUD_FT_EXPORT FtClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::RoaHttpStringResponseTestResult> RoaHttpStringResponseTestOutcome;
			typedef std::future<RoaHttpStringResponseTestOutcome> RoaHttpStringResponseTestOutcomeCallable;
			typedef std::function<void(const FtClient*, const Model::RoaHttpStringResponseTestRequest&, const RoaHttpStringResponseTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RoaHttpStringResponseTestAsyncHandler;

			FtClient(const Credentials &credentials, const ClientConfiguration &configuration);
			FtClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			FtClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~FtClient();
			RoaHttpStringResponseTestOutcome roaHttpStringResponseTest(const Model::RoaHttpStringResponseTestRequest &request)const;
			void roaHttpStringResponseTestAsync(const Model::RoaHttpStringResponseTestRequest& request, const RoaHttpStringResponseTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RoaHttpStringResponseTestOutcomeCallable roaHttpStringResponseTestCallable(const Model::RoaHttpStringResponseTestRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FT_FTCLIENT_H_
