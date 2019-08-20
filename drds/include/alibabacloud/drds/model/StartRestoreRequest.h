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

#ifndef ALIBABACLOUD_DRDS_MODEL_STARTRESTOREREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_STARTRESTOREREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT StartRestoreRequest : public RpcServiceRequest
			{

			public:
				StartRestoreRequest();
				~StartRestoreRequest();

				std::string getPreferredBackupTime()const;
				void setPreferredBackupTime(const std::string& preferredBackupTime);
				std::string getBackupDbNames()const;
				void setBackupDbNames(const std::string& backupDbNames);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				std::string getBackupMode()const;
				void setBackupMode(const std::string& backupMode);
				std::string getBackupLevel()const;
				void setBackupLevel(const std::string& backupLevel);
				std::string getDrdsInstanceId()const;
				void setDrdsInstanceId(const std::string& drdsInstanceId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string preferredBackupTime_;
				std::string backupDbNames_;
				std::string backupId_;
				std::string backupMode_;
				std::string backupLevel_;
				std::string drdsInstanceId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_STARTRESTOREREQUEST_H_