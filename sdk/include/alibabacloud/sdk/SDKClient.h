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

#ifndef ALIBABACLOUD_SDK_SDKCLIENT_H_
#define ALIBABACLOUD_SDK_SDKCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "SDKExport.h"
#include "model/DemoRequest.h"
#include "model/DemoResult.h"


namespace AlibabaCloud
{
	namespace SDK
	{
		class ALIBABACLOUD_SDK_EXPORT SDKClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::DemoResult> DemoOutcome;
			typedef std::future<DemoOutcome> DemoOutcomeCallable;
			typedef std::function<void(const SDKClient*, const Model::DemoRequest&, const DemoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DemoAsyncHandler;

			SDKClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SDKClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SDKClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SDKClient();
			DemoOutcome demo(const Model::DemoRequest &request)const;
			void demoAsync(const Model::DemoRequest& request, const DemoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DemoOutcomeCallable demoCallable(const Model::DemoRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SDK_SDKCLIENT_H_
