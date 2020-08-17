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

set(sdk_public_header 
	include/alibabacloud/sdk/SDKClient.h
	include/alibabacloud/sdk/SDKExport.h )

set(sdk_public_header_model 
	include/alibabacloud/sdk/model/DemoRequest.h
	include/alibabacloud/sdk/model/DemoResult.h )

set(sdk_src 
	src/SDKClient.cc
	src/model/DemoRequest.cc
	src/model/DemoResult.cc )

add_library(sdk ${LIB_TYPE}
	${sdk_public_header}
	${sdk_public_header_model}
	${sdk_src})

set_target_properties(sdk
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sdk
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sdk
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SDK_LIBRARY)
endif()

target_include_directories(sdk
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sdk
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sdk
		jsoncpp)
	target_include_directories(sdk
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sdk
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sdk
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sdk
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sdk
		jsoncpp)
endif()

install(FILES ${sdk_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sdk)
install(FILES ${sdk_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sdk/model)
install(TARGETS sdk
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)