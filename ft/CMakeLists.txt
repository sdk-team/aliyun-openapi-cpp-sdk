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

set(ft_public_header 
	include/alibabacloud/ft/FtClient.h
	include/alibabacloud/ft/FtExport.h )

set(ft_public_header_model 
	include/alibabacloud/ft/model/BatchAuditTest01Request.h
	include/alibabacloud/ft/model/BatchAuditTest01Result.h
	include/alibabacloud/ft/model/BatchAuditTest02Request.h
	include/alibabacloud/ft/model/BatchAuditTest02Result.h
	include/alibabacloud/ft/model/CountCloudProductCallTimesRequest.h
	include/alibabacloud/ft/model/CountCloudProductCallTimesResult.h
	include/alibabacloud/ft/model/DescribeResourceTypeRequest.h
	include/alibabacloud/ft/model/DescribeResourceTypeResult.h
	include/alibabacloud/ft/model/FTApiAliasApiRequest.h
	include/alibabacloud/ft/model/FTApiAliasApiResult.h
	include/alibabacloud/ft/model/FtDynamicAddressDubboRequest.h
	include/alibabacloud/ft/model/FtDynamicAddressDubboResult.h
	include/alibabacloud/ft/model/FtDynamicAddressHsfRequest.h
	include/alibabacloud/ft/model/FtDynamicAddressHsfResult.h
	include/alibabacloud/ft/model/FtEagleEyeRequest.h
	include/alibabacloud/ft/model/FtEagleEyeResult.h
	include/alibabacloud/ft/model/FtFlowSpecialRequest.h
	include/alibabacloud/ft/model/FtFlowSpecialResult.h
	include/alibabacloud/ft/model/FtFlowSpecial1586868138332Request.h
	include/alibabacloud/ft/model/FtFlowSpecial1586868138332Result.h
	include/alibabacloud/ft/model/FtGatedLaunchPolicy3ApiRequest.h
	include/alibabacloud/ft/model/FtGatedLaunchPolicy3ApiResult.h
	include/alibabacloud/ft/model/FtGatedLaunchPolicy4Request.h
	include/alibabacloud/ft/model/FtGatedLaunchPolicy4Result.h
	include/alibabacloud/ft/model/FtGatedLaunchPolicyApiRequest.h
	include/alibabacloud/ft/model/FtGatedLaunchPolicyApiResult.h
	include/alibabacloud/ft/model/FtIpFlowControlRequest.h
	include/alibabacloud/ft/model/FtIpFlowControlResult.h
	include/alibabacloud/ft/model/FtParamListRequest.h
	include/alibabacloud/ft/model/FtParamListResult.h
	include/alibabacloud/ft/model/GetMigrateStrategyResultRequest.h
	include/alibabacloud/ft/model/GetMigrateStrategyResultResult.h
	include/alibabacloud/ft/model/GetTairDataRequest.h
	include/alibabacloud/ft/model/GetTairDataResult.h
	include/alibabacloud/ft/model/MigrateStrategyRequest.h
	include/alibabacloud/ft/model/MigrateStrategyResult.h
	include/alibabacloud/ft/model/QueryDomainChangeRecordsRequest.h
	include/alibabacloud/ft/model/QueryDomainChangeRecordsResult.h
	include/alibabacloud/ft/model/TestDubboRetryApiRequest.h
	include/alibabacloud/ft/model/TestDubboRetryApiResult.h
	include/alibabacloud/ft/model/TestErrorCodeForGateWayRequest.h
	include/alibabacloud/ft/model/TestErrorCodeForGateWayResult.h
	include/alibabacloud/ft/model/TestFlowStrategy01Request.h
	include/alibabacloud/ft/model/TestFlowStrategy01Result.h
	include/alibabacloud/ft/model/TestHttpApiRequest.h
	include/alibabacloud/ft/model/TestHttpApiResult.h
	include/alibabacloud/ft/model/TestIspHttpValidatorRequest.h
	include/alibabacloud/ft/model/TestIspHttpValidatorResult.h
	include/alibabacloud/ft/model/TestXmlServiceRoutePolicyRequest.h
	include/alibabacloud/ft/model/TestXmlServiceRoutePolicyResult.h
	include/alibabacloud/ft/model/UpdateDomainRecordsRegionIdRequest.h
	include/alibabacloud/ft/model/UpdateDomainRecordsRegionIdResult.h )

set(ft_src 
	src/FtClient.cc
	src/model/BatchAuditTest01Request.cc
	src/model/BatchAuditTest01Result.cc
	src/model/BatchAuditTest02Request.cc
	src/model/BatchAuditTest02Result.cc
	src/model/CountCloudProductCallTimesRequest.cc
	src/model/CountCloudProductCallTimesResult.cc
	src/model/DescribeResourceTypeRequest.cc
	src/model/DescribeResourceTypeResult.cc
	src/model/FTApiAliasApiRequest.cc
	src/model/FTApiAliasApiResult.cc
	src/model/FtDynamicAddressDubboRequest.cc
	src/model/FtDynamicAddressDubboResult.cc
	src/model/FtDynamicAddressHsfRequest.cc
	src/model/FtDynamicAddressHsfResult.cc
	src/model/FtEagleEyeRequest.cc
	src/model/FtEagleEyeResult.cc
	src/model/FtFlowSpecialRequest.cc
	src/model/FtFlowSpecialResult.cc
	src/model/FtFlowSpecial1586868138332Request.cc
	src/model/FtFlowSpecial1586868138332Result.cc
	src/model/FtGatedLaunchPolicy3ApiRequest.cc
	src/model/FtGatedLaunchPolicy3ApiResult.cc
	src/model/FtGatedLaunchPolicy4Request.cc
	src/model/FtGatedLaunchPolicy4Result.cc
	src/model/FtGatedLaunchPolicyApiRequest.cc
	src/model/FtGatedLaunchPolicyApiResult.cc
	src/model/FtIpFlowControlRequest.cc
	src/model/FtIpFlowControlResult.cc
	src/model/FtParamListRequest.cc
	src/model/FtParamListResult.cc
	src/model/GetMigrateStrategyResultRequest.cc
	src/model/GetMigrateStrategyResultResult.cc
	src/model/GetTairDataRequest.cc
	src/model/GetTairDataResult.cc
	src/model/MigrateStrategyRequest.cc
	src/model/MigrateStrategyResult.cc
	src/model/QueryDomainChangeRecordsRequest.cc
	src/model/QueryDomainChangeRecordsResult.cc
	src/model/TestDubboRetryApiRequest.cc
	src/model/TestDubboRetryApiResult.cc
	src/model/TestErrorCodeForGateWayRequest.cc
	src/model/TestErrorCodeForGateWayResult.cc
	src/model/TestFlowStrategy01Request.cc
	src/model/TestFlowStrategy01Result.cc
	src/model/TestHttpApiRequest.cc
	src/model/TestHttpApiResult.cc
	src/model/TestIspHttpValidatorRequest.cc
	src/model/TestIspHttpValidatorResult.cc
	src/model/TestXmlServiceRoutePolicyRequest.cc
	src/model/TestXmlServiceRoutePolicyResult.cc
	src/model/UpdateDomainRecordsRegionIdRequest.cc
	src/model/UpdateDomainRecordsRegionIdResult.cc )

add_library(ft ${LIB_TYPE}
	${ft_public_header}
	${ft_public_header_model}
	${ft_src})

set_target_properties(ft
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ft
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ft
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_FT_LIBRARY)
endif()

target_include_directories(ft
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ft
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ft
		jsoncpp)
	target_include_directories(ft
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ft
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ft
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ft
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ft
		jsoncpp)
endif()

install(FILES ${ft_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ft)
install(FILES ${ft_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ft/model)
install(TARGETS ft
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)