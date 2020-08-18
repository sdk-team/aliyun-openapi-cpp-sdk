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

#ifndef ALIBABACLOUD_FT_MODEL_GETMIGRATESTRATEGYRESULTRESULT_H_
#define ALIBABACLOUD_FT_MODEL_GETMIGRATESTRATEGYRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ft/FtExport.h>

namespace AlibabaCloud
{
	namespace Ft
	{
		namespace Model
		{
			class ALIBABACLOUD_FT_EXPORT GetMigrateStrategyResultResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct DataListItem
					{
						struct Modifier
						{
							std::string bucId;
							std::string id;
							std::string name;
						};
						std::string status;
						std::string dataItem;
						std::string createTime;
						std::string product;
						std::string env;
						std::string parentName;
						std::string type;
						int recordVersion;
						std::string modifiedTime;
						std::string strategyName;
						std::string version;
						std::string flowSpecial;
						long id;
						std::string api;
						Modifier modifier;
					};
					std::vector<DataListItem> dataList;
					int totalItem;
					int pageSize;
					int currentPage;
				};


				GetMigrateStrategyResultResult();
				explicit GetMigrateStrategyResultResult(const std::string &payload);
				~GetMigrateStrategyResultResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::string getMessageCN()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;
				std::string messageCN_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_GETMIGRATESTRATEGYRESULTRESULT_H_