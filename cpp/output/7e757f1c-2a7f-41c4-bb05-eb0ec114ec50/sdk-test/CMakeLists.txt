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

set(sdk-test_public_header 
	include/alibabacloud/sdk-test/Sdk_testClient.h
	include/alibabacloud/sdk-test/Sdk_testExport.h )

set(sdk-test_public_header_model 
	include/alibabacloud/sdk-test/model/DescribeRegionsRequest.h
	include/alibabacloud/sdk-test/model/DescribeRegionsResult.h )

set(sdk-test_src 
	src/Sdk-testClient.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc )

add_library(sdk-test ${LIB_TYPE}
	${sdk-test_public_header}
	${sdk-test_public_header_model}
	${sdk-test_src})

set_target_properties(sdk-test
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}sdk-test
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(sdk-test
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SDK_TEST_LIBRARY)
endif()

target_include_directories(sdk-test
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(sdk-test
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(sdk-test
		jsoncpp)
	target_include_directories(sdk-test
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(sdk-test
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(sdk-test
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(sdk-test
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(sdk-test
		jsoncpp)
endif()

install(FILES ${sdk-test_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sdk-test)
install(FILES ${sdk-test_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/sdk-test/model)
install(TARGETS sdk-test
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)