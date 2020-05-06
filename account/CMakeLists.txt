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

set(account_public_header 
	include/alibabacloud/account/AccountClient.h
	include/alibabacloud/account/AccountExport.h )

set(account_public_header_model 
	include/alibabacloud/account/model/CreateAliyunAccountRequest.h
	include/alibabacloud/account/model/CreateAliyunAccountResult.h
	include/alibabacloud/account/model/CreateAliyunAccountForBidRequest.h
	include/alibabacloud/account/model/CreateAliyunAccountForBidResult.h
	include/alibabacloud/account/model/CreateAppRequest.h
	include/alibabacloud/account/model/CreateAppResult.h
	include/alibabacloud/account/model/CreateAppForBidRequest.h
	include/alibabacloud/account/model/CreateAppForBidResult.h
	include/alibabacloud/account/model/DeleteAppForBidRequest.h
	include/alibabacloud/account/model/DeleteAppForBidResult.h
	include/alibabacloud/account/model/GetPubKeyRequest.h
	include/alibabacloud/account/model/GetPubKeyResult.h
	include/alibabacloud/account/model/ListAppkeyByOwnerAndBidRequest.h
	include/alibabacloud/account/model/ListAppkeyByOwnerAndBidResult.h )

set(account_src 
	src/AccountClient.cc
	src/model/CreateAliyunAccountRequest.cc
	src/model/CreateAliyunAccountResult.cc
	src/model/CreateAliyunAccountForBidRequest.cc
	src/model/CreateAliyunAccountForBidResult.cc
	src/model/CreateAppRequest.cc
	src/model/CreateAppResult.cc
	src/model/CreateAppForBidRequest.cc
	src/model/CreateAppForBidResult.cc
	src/model/DeleteAppForBidRequest.cc
	src/model/DeleteAppForBidResult.cc
	src/model/GetPubKeyRequest.cc
	src/model/GetPubKeyResult.cc
	src/model/ListAppkeyByOwnerAndBidRequest.cc
	src/model/ListAppkeyByOwnerAndBidResult.cc )

add_library(account ${LIB_TYPE}
	${account_public_header}
	${account_public_header_model}
	${account_src})

set_target_properties(account
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}account
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(account
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ACCOUNT_LIBRARY)
endif()

target_include_directories(account
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(account
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(account
		jsoncpp)
	target_include_directories(account
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(account
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(account
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(account
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(account
		jsoncpp)
endif()

install(FILES ${account_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/account)
install(FILES ${account_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/account/model)
install(TARGETS account
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)