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

set(ecsops_public_header 
	include/alibabacloud/ecsops/EcsopsClient.h
	include/alibabacloud/ecsops/EcsopsExport.h )

set(ecsops_public_header_model 
	include/alibabacloud/ecsops/model/OpsAllocateIpAddressRequest.h
	include/alibabacloud/ecsops/model/OpsAllocateIpAddressResult.h
	include/alibabacloud/ecsops/model/OpsAttachDiskRequest.h
	include/alibabacloud/ecsops/model/OpsAttachDiskResult.h
	include/alibabacloud/ecsops/model/OpsAttachSnapshotRequest.h
	include/alibabacloud/ecsops/model/OpsAttachSnapshotResult.h
	include/alibabacloud/ecsops/model/OpsAuthorizeSecurityGroupRequest.h
	include/alibabacloud/ecsops/model/OpsAuthorizeSecurityGroupResult.h
	include/alibabacloud/ecsops/model/OpsAuthorizeSecurityGroupEgressRequest.h
	include/alibabacloud/ecsops/model/OpsAuthorizeSecurityGroupEgressResult.h
	include/alibabacloud/ecsops/model/OpsCreateDiskRequest.h
	include/alibabacloud/ecsops/model/OpsCreateDiskResult.h
	include/alibabacloud/ecsops/model/OpsCreateImageRequest.h
	include/alibabacloud/ecsops/model/OpsCreateImageResult.h
	include/alibabacloud/ecsops/model/OpsCreateInstanceRequest.h
	include/alibabacloud/ecsops/model/OpsCreateInstanceResult.h
	include/alibabacloud/ecsops/model/OpsCreateSecurityGroupRequest.h
	include/alibabacloud/ecsops/model/OpsCreateSecurityGroupResult.h
	include/alibabacloud/ecsops/model/OpsCreateSnapshotRequest.h
	include/alibabacloud/ecsops/model/OpsCreateSnapshotResult.h
	include/alibabacloud/ecsops/model/OpsDeleteImageRequest.h
	include/alibabacloud/ecsops/model/OpsDeleteImageResult.h
	include/alibabacloud/ecsops/model/OpsDeleteSecurityGroupRequest.h
	include/alibabacloud/ecsops/model/OpsDeleteSecurityGroupResult.h
	include/alibabacloud/ecsops/model/OpsDeleteSnapshotRequest.h
	include/alibabacloud/ecsops/model/OpsDeleteSnapshotResult.h
	include/alibabacloud/ecsops/model/OpsDescribeDisksRequest.h
	include/alibabacloud/ecsops/model/OpsDescribeDisksResult.h
	include/alibabacloud/ecsops/model/OpsDescribeGroupAttributeRequest.h
	include/alibabacloud/ecsops/model/OpsDescribeGroupAttributeResult.h
	include/alibabacloud/ecsops/model/OpsDescribeGroupsRequest.h
	include/alibabacloud/ecsops/model/OpsDescribeGroupsResult.h
	include/alibabacloud/ecsops/model/OpsDescribeImagesRequest.h
	include/alibabacloud/ecsops/model/OpsDescribeImagesResult.h
	include/alibabacloud/ecsops/model/OpsDescribeInstancesRequest.h
	include/alibabacloud/ecsops/model/OpsDescribeInstancesResult.h
	include/alibabacloud/ecsops/model/OpsDescribeMountedSnapshotsRequest.h
	include/alibabacloud/ecsops/model/OpsDescribeMountedSnapshotsResult.h
	include/alibabacloud/ecsops/model/OpsDescribeRegionsRequest.h
	include/alibabacloud/ecsops/model/OpsDescribeRegionsResult.h
	include/alibabacloud/ecsops/model/OpsDescribeSnapshotsRequest.h
	include/alibabacloud/ecsops/model/OpsDescribeSnapshotsResult.h
	include/alibabacloud/ecsops/model/OpsDetachDiskRequest.h
	include/alibabacloud/ecsops/model/OpsDetachDiskResult.h
	include/alibabacloud/ecsops/model/OpsDetachSnapshotRequest.h
	include/alibabacloud/ecsops/model/OpsDetachSnapshotResult.h
	include/alibabacloud/ecsops/model/OpsDetailNcRequest.h
	include/alibabacloud/ecsops/model/OpsDetailNcResult.h
	include/alibabacloud/ecsops/model/OpsGenerateVncUrlRequest.h
	include/alibabacloud/ecsops/model/OpsGenerateVncUrlResult.h
	include/alibabacloud/ecsops/model/OpsJoinSecurityGroupRequest.h
	include/alibabacloud/ecsops/model/OpsJoinSecurityGroupResult.h
	include/alibabacloud/ecsops/model/OpsLeaveSecurityGroupRequest.h
	include/alibabacloud/ecsops/model/OpsLeaveSecurityGroupResult.h
	include/alibabacloud/ecsops/model/OpsLiveMigrateEcsInstanceRequest.h
	include/alibabacloud/ecsops/model/OpsLiveMigrateEcsInstanceResult.h
	include/alibabacloud/ecsops/model/OpsMigrateEcsInstanceRequest.h
	include/alibabacloud/ecsops/model/OpsMigrateEcsInstanceResult.h
	include/alibabacloud/ecsops/model/OpsModifyVncPasswdRequest.h
	include/alibabacloud/ecsops/model/OpsModifyVncPasswdResult.h
	include/alibabacloud/ecsops/model/OpsMountIsoRequest.h
	include/alibabacloud/ecsops/model/OpsMountIsoResult.h
	include/alibabacloud/ecsops/model/OpsQueryAvailableIsosRequest.h
	include/alibabacloud/ecsops/model/OpsQueryAvailableIsosResult.h
	include/alibabacloud/ecsops/model/OpsQueryAvailableNcsRequest.h
	include/alibabacloud/ecsops/model/OpsQueryAvailableNcsResult.h
	include/alibabacloud/ecsops/model/OpsQueryMountedIsoRequest.h
	include/alibabacloud/ecsops/model/OpsQueryMountedIsoResult.h
	include/alibabacloud/ecsops/model/OpsQueryVncPasswdRequest.h
	include/alibabacloud/ecsops/model/OpsQueryVncPasswdResult.h
	include/alibabacloud/ecsops/model/OpsReleaseDiskRequest.h
	include/alibabacloud/ecsops/model/OpsReleaseDiskResult.h
	include/alibabacloud/ecsops/model/OpsReleaseInstanceRequest.h
	include/alibabacloud/ecsops/model/OpsReleaseInstanceResult.h
	include/alibabacloud/ecsops/model/OpsReleaseIpAddressRequest.h
	include/alibabacloud/ecsops/model/OpsReleaseIpAddressResult.h
	include/alibabacloud/ecsops/model/OpsRenameInstanceRequest.h
	include/alibabacloud/ecsops/model/OpsRenameInstanceResult.h
	include/alibabacloud/ecsops/model/OpsReplaceSystemDiskRequest.h
	include/alibabacloud/ecsops/model/OpsReplaceSystemDiskResult.h
	include/alibabacloud/ecsops/model/OpsResetDiskRequest.h
	include/alibabacloud/ecsops/model/OpsResetDiskResult.h
	include/alibabacloud/ecsops/model/OpsResetPasswdRequest.h
	include/alibabacloud/ecsops/model/OpsResetPasswdResult.h
	include/alibabacloud/ecsops/model/OpsResizeDiskRequest.h
	include/alibabacloud/ecsops/model/OpsResizeDiskResult.h
	include/alibabacloud/ecsops/model/OpsRestartInstanceRequest.h
	include/alibabacloud/ecsops/model/OpsRestartInstanceResult.h
	include/alibabacloud/ecsops/model/OpsRevokeSecurityGroupRequest.h
	include/alibabacloud/ecsops/model/OpsRevokeSecurityGroupResult.h
	include/alibabacloud/ecsops/model/OpsRevokeSecurityGroupEgressRequest.h
	include/alibabacloud/ecsops/model/OpsRevokeSecurityGroupEgressResult.h
	include/alibabacloud/ecsops/model/OpsStartInstanceRequest.h
	include/alibabacloud/ecsops/model/OpsStartInstanceResult.h
	include/alibabacloud/ecsops/model/OpsStopInstanceRequest.h
	include/alibabacloud/ecsops/model/OpsStopInstanceResult.h
	include/alibabacloud/ecsops/model/OpsUnMountIsoRequest.h
	include/alibabacloud/ecsops/model/OpsUnMountIsoResult.h
	include/alibabacloud/ecsops/model/OpsUpgradeInstanceRequest.h
	include/alibabacloud/ecsops/model/OpsUpgradeInstanceResult.h )

set(ecsops_src 
	src/EcsopsClient.cc
	src/model/OpsAllocateIpAddressRequest.cc
	src/model/OpsAllocateIpAddressResult.cc
	src/model/OpsAttachDiskRequest.cc
	src/model/OpsAttachDiskResult.cc
	src/model/OpsAttachSnapshotRequest.cc
	src/model/OpsAttachSnapshotResult.cc
	src/model/OpsAuthorizeSecurityGroupRequest.cc
	src/model/OpsAuthorizeSecurityGroupResult.cc
	src/model/OpsAuthorizeSecurityGroupEgressRequest.cc
	src/model/OpsAuthorizeSecurityGroupEgressResult.cc
	src/model/OpsCreateDiskRequest.cc
	src/model/OpsCreateDiskResult.cc
	src/model/OpsCreateImageRequest.cc
	src/model/OpsCreateImageResult.cc
	src/model/OpsCreateInstanceRequest.cc
	src/model/OpsCreateInstanceResult.cc
	src/model/OpsCreateSecurityGroupRequest.cc
	src/model/OpsCreateSecurityGroupResult.cc
	src/model/OpsCreateSnapshotRequest.cc
	src/model/OpsCreateSnapshotResult.cc
	src/model/OpsDeleteImageRequest.cc
	src/model/OpsDeleteImageResult.cc
	src/model/OpsDeleteSecurityGroupRequest.cc
	src/model/OpsDeleteSecurityGroupResult.cc
	src/model/OpsDeleteSnapshotRequest.cc
	src/model/OpsDeleteSnapshotResult.cc
	src/model/OpsDescribeDisksRequest.cc
	src/model/OpsDescribeDisksResult.cc
	src/model/OpsDescribeGroupAttributeRequest.cc
	src/model/OpsDescribeGroupAttributeResult.cc
	src/model/OpsDescribeGroupsRequest.cc
	src/model/OpsDescribeGroupsResult.cc
	src/model/OpsDescribeImagesRequest.cc
	src/model/OpsDescribeImagesResult.cc
	src/model/OpsDescribeInstancesRequest.cc
	src/model/OpsDescribeInstancesResult.cc
	src/model/OpsDescribeMountedSnapshotsRequest.cc
	src/model/OpsDescribeMountedSnapshotsResult.cc
	src/model/OpsDescribeRegionsRequest.cc
	src/model/OpsDescribeRegionsResult.cc
	src/model/OpsDescribeSnapshotsRequest.cc
	src/model/OpsDescribeSnapshotsResult.cc
	src/model/OpsDetachDiskRequest.cc
	src/model/OpsDetachDiskResult.cc
	src/model/OpsDetachSnapshotRequest.cc
	src/model/OpsDetachSnapshotResult.cc
	src/model/OpsDetailNcRequest.cc
	src/model/OpsDetailNcResult.cc
	src/model/OpsGenerateVncUrlRequest.cc
	src/model/OpsGenerateVncUrlResult.cc
	src/model/OpsJoinSecurityGroupRequest.cc
	src/model/OpsJoinSecurityGroupResult.cc
	src/model/OpsLeaveSecurityGroupRequest.cc
	src/model/OpsLeaveSecurityGroupResult.cc
	src/model/OpsLiveMigrateEcsInstanceRequest.cc
	src/model/OpsLiveMigrateEcsInstanceResult.cc
	src/model/OpsMigrateEcsInstanceRequest.cc
	src/model/OpsMigrateEcsInstanceResult.cc
	src/model/OpsModifyVncPasswdRequest.cc
	src/model/OpsModifyVncPasswdResult.cc
	src/model/OpsMountIsoRequest.cc
	src/model/OpsMountIsoResult.cc
	src/model/OpsQueryAvailableIsosRequest.cc
	src/model/OpsQueryAvailableIsosResult.cc
	src/model/OpsQueryAvailableNcsRequest.cc
	src/model/OpsQueryAvailableNcsResult.cc
	src/model/OpsQueryMountedIsoRequest.cc
	src/model/OpsQueryMountedIsoResult.cc
	src/model/OpsQueryVncPasswdRequest.cc
	src/model/OpsQueryVncPasswdResult.cc
	src/model/OpsReleaseDiskRequest.cc
	src/model/OpsReleaseDiskResult.cc
	src/model/OpsReleaseInstanceRequest.cc
	src/model/OpsReleaseInstanceResult.cc
	src/model/OpsReleaseIpAddressRequest.cc
	src/model/OpsReleaseIpAddressResult.cc
	src/model/OpsRenameInstanceRequest.cc
	src/model/OpsRenameInstanceResult.cc
	src/model/OpsReplaceSystemDiskRequest.cc
	src/model/OpsReplaceSystemDiskResult.cc
	src/model/OpsResetDiskRequest.cc
	src/model/OpsResetDiskResult.cc
	src/model/OpsResetPasswdRequest.cc
	src/model/OpsResetPasswdResult.cc
	src/model/OpsResizeDiskRequest.cc
	src/model/OpsResizeDiskResult.cc
	src/model/OpsRestartInstanceRequest.cc
	src/model/OpsRestartInstanceResult.cc
	src/model/OpsRevokeSecurityGroupRequest.cc
	src/model/OpsRevokeSecurityGroupResult.cc
	src/model/OpsRevokeSecurityGroupEgressRequest.cc
	src/model/OpsRevokeSecurityGroupEgressResult.cc
	src/model/OpsStartInstanceRequest.cc
	src/model/OpsStartInstanceResult.cc
	src/model/OpsStopInstanceRequest.cc
	src/model/OpsStopInstanceResult.cc
	src/model/OpsUnMountIsoRequest.cc
	src/model/OpsUnMountIsoResult.cc
	src/model/OpsUpgradeInstanceRequest.cc
	src/model/OpsUpgradeInstanceResult.cc )

add_library(ecsops ${LIB_TYPE}
	${ecsops_public_header}
	${ecsops_public_header_model}
	${ecsops_src})

set_target_properties(ecsops
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ecsops
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ecsops
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ECSOPS_LIBRARY)
endif()

target_include_directories(ecsops
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ecsops
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ecsops
		jsoncpp)
	target_include_directories(ecsops
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ecsops
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ecsops
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ecsops
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ecsops
		jsoncpp)
endif()

install(FILES ${ecsops_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ecsops)
install(FILES ${ecsops_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ecsops/model)
install(TARGETS ecsops
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)