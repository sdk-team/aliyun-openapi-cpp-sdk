#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(acs_public_header 
	include/alibabacloud/acs/AcsClient.h
	include/alibabacloud/acs/AcsExport.h )

set(acs_public_header_model 
	include/alibabacloud/acs/model/DeleteApiInDailyRequest.h
	include/alibabacloud/acs/model/DeleteApiInDailyResult.h
	include/alibabacloud/acs/model/DeleteApiOnlineRequest.h
	include/alibabacloud/acs/model/DeleteApiOnlineResult.h
	include/alibabacloud/acs/model/ResumePurchasedApiRequest.h
	include/alibabacloud/acs/model/ResumePurchasedApiResult.h
	include/alibabacloud/acs/model/StopPurchasedApiRequest.h
	include/alibabacloud/acs/model/StopPurchasedApiResult.h
	include/alibabacloud/acs/model/ModifyApiNameInDailyRequest.h
	include/alibabacloud/acs/model/ModifyApiNameInDailyResult.h
	include/alibabacloud/acs/model/PutFlowControlRequest.h
	include/alibabacloud/acs/model/PutFlowControlResult.h
	include/alibabacloud/acs/model/ModifyApiNameRequest.h
	include/alibabacloud/acs/model/ModifyApiNameResult.h
	include/alibabacloud/acs/model/PurchaseApiRequest.h
	include/alibabacloud/acs/model/PurchaseApiResult.h )

set(acs_src 
	src/AcsClient.cc
	src/model/DeleteApiInDailyRequest.cc
	src/model/DeleteApiInDailyResult.cc
	src/model/DeleteApiOnlineRequest.cc
	src/model/DeleteApiOnlineResult.cc
	src/model/ResumePurchasedApiRequest.cc
	src/model/ResumePurchasedApiResult.cc
	src/model/StopPurchasedApiRequest.cc
	src/model/StopPurchasedApiResult.cc
	src/model/ModifyApiNameInDailyRequest.cc
	src/model/ModifyApiNameInDailyResult.cc
	src/model/PutFlowControlRequest.cc
	src/model/PutFlowControlResult.cc
	src/model/ModifyApiNameRequest.cc
	src/model/ModifyApiNameResult.cc
	src/model/PurchaseApiRequest.cc
	src/model/PurchaseApiResult.cc )

add_library(acs ${LIB_TYPE}
	${acs_public_header}
	${acs_public_header_model}
	${acs_src})

set_target_properties(acs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}acs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(acs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ACS_LIBRARY)
endif()

target_include_directories(acs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(acs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(acs
		jsoncpp)
	target_include_directories(acs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(acs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(acs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(acs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(acs
		jsoncpp)
endif()

install(FILES ${acs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/acs)
install(FILES ${acs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/acs/model)
install(TARGETS acs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)