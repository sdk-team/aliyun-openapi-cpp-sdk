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

set(ecsdemo_public_header 
	include/alibabacloud/ecsdemo/EcsDemoClient.h
	include/alibabacloud/ecsdemo/EcsDemoExport.h )

set(ecsdemo_public_header_model 
	include/alibabacloud/ecsdemo/model/CancelInstanceRequest.h
	include/alibabacloud/ecsdemo/model/CancelInstanceResult.h )

set(ecsdemo_src 
	src/EcsDemoClient.cc
	src/model/CancelInstanceRequest.cc
	src/model/CancelInstanceResult.cc )

add_library(ecsdemo ${LIB_TYPE}
	${ecsdemo_public_header}
	${ecsdemo_public_header_model}
	${ecsdemo_src})

set_target_properties(ecsdemo
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ecsdemo
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ecsdemo
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ECSDEMO_LIBRARY)
endif()

target_include_directories(ecsdemo
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ecsdemo
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ecsdemo
		jsoncpp)
	target_include_directories(ecsdemo
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ecsdemo
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ecsdemo
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ecsdemo
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ecsdemo
		jsoncpp)
endif()

install(FILES ${ecsdemo_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ecsdemo)
install(FILES ${ecsdemo_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ecsdemo/model)
install(TARGETS ecsdemo
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)