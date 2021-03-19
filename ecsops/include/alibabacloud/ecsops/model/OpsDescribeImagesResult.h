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

#ifndef ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEIMAGESRESULT_H_
#define ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEIMAGESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecsops/EcsopsExport.h>

namespace AlibabaCloud
{
	namespace Ecsops
	{
		namespace Model
		{
			class ALIBABACLOUD_ECSOPS_EXPORT OpsDescribeImagesResult : public ServiceResult
			{
			public:
				struct Image
				{
					std::string status;
					std::string regionNo;
					std::string createdTime;
					std::string platform;
					int imageSize;
					std::string productCode;
					std::string osName;
					std::string osBit;
					std::string imageCategory;
					std::string remark;
					std::string imageName;
					std::string snapshotId;
					std::string modifiedTime;
					std::string osType;
					std::string version;
					std::string imageId;
					std::string displayName;
					std::string osMemo;
					long srcImageId;
					long id;
					std::string bid;
					bool supportIoOptimizedInstance;
					long aliUid;
					std::string osKind;
				};


				OpsDescribeImagesResult();
				explicit OpsDescribeImagesResult(const std::string &payload);
				~OpsDescribeImagesResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<Image> getImages()const;
				int getPageNo()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<Image> images_;
				int pageNo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECSOPS_MODEL_OPSDESCRIBEIMAGESRESULT_H_