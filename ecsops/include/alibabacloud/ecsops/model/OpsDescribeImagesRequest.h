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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEIMAGESREQUEST_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecsops/EcsopsExport.h>

namespace AlibabaCloud
{
	namespace Ecsops
	{
		namespace Model
		{
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeImagesRequest : public RpcServiceRequest
			{

			public:
				OpsDescribeImagesRequest();
				~OpsDescribeImagesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSnapshotId()const;
				void setSnapshotId(const std::string& snapshotId);
				std::string getCreateTimeFrom()const;
				void setCreateTimeFrom(const std::string& createTimeFrom);
				std::string getFuzzyImageName()const;
				void setFuzzyImageName(const std::string& fuzzyImageName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionNo()const;
				void setRegionNo(const std::string& regionNo);
				bool getQuoted()const;
				void setQuoted(bool quoted);
				std::string getImageTypes()const;
				void setImageTypes(const std::string& imageTypes);
				std::string getImageName()const;
				void setImageName(const std::string& imageName);
				int getPageNo()const;
				void setPageNo(int pageNo);
				std::string getCreateTimeTo()const;
				void setCreateTimeTo(const std::string& createTimeTo);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getImageIds()const;
				void setImageIds(const std::string& imageIds);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				long resourceOwnerId_;
				std::string snapshotId_;
				std::string createTimeFrom_;
				std::string fuzzyImageName_;
				std::string accessKeyId_;
				std::string regionNo_;
				bool quoted_;
				std::string imageTypes_;
				std::string imageName_;
				int pageNo_;
				std::string createTimeTo_;
				int pageSize_;
				std::string imageIds_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEIMAGESREQUEST_H_