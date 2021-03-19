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

#ifndef ALIBABACLOUD_ECSOPS_ECSOPSCLIENT_H_
#define ALIBABACLOUD_ECSOPS_ECSOPSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EcsopsExport.h"
#include "model/OpsAllocateIpAddressRequest.h"
#include "model/OpsAllocateIpAddressResult.h"
#include "model/OpsAttachDiskRequest.h"
#include "model/OpsAttachDiskResult.h"
#include "model/OpsAttachSnapshotRequest.h"
#include "model/OpsAttachSnapshotResult.h"
#include "model/OpsAuthorizeSecurityGroupRequest.h"
#include "model/OpsAuthorizeSecurityGroupResult.h"
#include "model/OpsAuthorizeSecurityGroupEgressRequest.h"
#include "model/OpsAuthorizeSecurityGroupEgressResult.h"
#include "model/OpsCreateDiskRequest.h"
#include "model/OpsCreateDiskResult.h"
#include "model/OpsCreateImageRequest.h"
#include "model/OpsCreateImageResult.h"
#include "model/OpsCreateInstanceRequest.h"
#include "model/OpsCreateInstanceResult.h"
#include "model/OpsCreateSecurityGroupRequest.h"
#include "model/OpsCreateSecurityGroupResult.h"
#include "model/OpsCreateSnapshotRequest.h"
#include "model/OpsCreateSnapshotResult.h"
#include "model/OpsDeleteImageRequest.h"
#include "model/OpsDeleteImageResult.h"
#include "model/OpsDeleteSecurityGroupRequest.h"
#include "model/OpsDeleteSecurityGroupResult.h"
#include "model/OpsDeleteSnapshotRequest.h"
#include "model/OpsDeleteSnapshotResult.h"
#include "model/OpsDescribeDisksRequest.h"
#include "model/OpsDescribeDisksResult.h"
#include "model/OpsDescribeGroupAttributeRequest.h"
#include "model/OpsDescribeGroupAttributeResult.h"
#include "model/OpsDescribeGroupsRequest.h"
#include "model/OpsDescribeGroupsResult.h"
#include "model/OpsDescribeImagesRequest.h"
#include "model/OpsDescribeImagesResult.h"
#include "model/OpsDescribeInstancesRequest.h"
#include "model/OpsDescribeInstancesResult.h"
#include "model/OpsDescribeMountedSnapshotsRequest.h"
#include "model/OpsDescribeMountedSnapshotsResult.h"
#include "model/OpsDescribeRegionsRequest.h"
#include "model/OpsDescribeRegionsResult.h"
#include "model/OpsDescribeSnapshotsRequest.h"
#include "model/OpsDescribeSnapshotsResult.h"
#include "model/OpsDetachDiskRequest.h"
#include "model/OpsDetachDiskResult.h"
#include "model/OpsDetachSnapshotRequest.h"
#include "model/OpsDetachSnapshotResult.h"
#include "model/OpsDetailNcRequest.h"
#include "model/OpsDetailNcResult.h"
#include "model/OpsGenerateVncUrlRequest.h"
#include "model/OpsGenerateVncUrlResult.h"
#include "model/OpsJoinSecurityGroupRequest.h"
#include "model/OpsJoinSecurityGroupResult.h"
#include "model/OpsLeaveSecurityGroupRequest.h"
#include "model/OpsLeaveSecurityGroupResult.h"
#include "model/OpsLiveMigrateEcsInstanceRequest.h"
#include "model/OpsLiveMigrateEcsInstanceResult.h"
#include "model/OpsMigrateEcsInstanceRequest.h"
#include "model/OpsMigrateEcsInstanceResult.h"
#include "model/OpsModifyVncPasswdRequest.h"
#include "model/OpsModifyVncPasswdResult.h"
#include "model/OpsMountIsoRequest.h"
#include "model/OpsMountIsoResult.h"
#include "model/OpsQueryAvailableIsosRequest.h"
#include "model/OpsQueryAvailableIsosResult.h"
#include "model/OpsQueryAvailableNcsRequest.h"
#include "model/OpsQueryAvailableNcsResult.h"
#include "model/OpsQueryMountedIsoRequest.h"
#include "model/OpsQueryMountedIsoResult.h"
#include "model/OpsQueryVncPasswdRequest.h"
#include "model/OpsQueryVncPasswdResult.h"
#include "model/OpsReleaseDiskRequest.h"
#include "model/OpsReleaseDiskResult.h"
#include "model/OpsReleaseInstanceRequest.h"
#include "model/OpsReleaseInstanceResult.h"
#include "model/OpsReleaseIpAddressRequest.h"
#include "model/OpsReleaseIpAddressResult.h"
#include "model/OpsRenameInstanceRequest.h"
#include "model/OpsRenameInstanceResult.h"
#include "model/OpsReplaceSystemDiskRequest.h"
#include "model/OpsReplaceSystemDiskResult.h"
#include "model/OpsResetDiskRequest.h"
#include "model/OpsResetDiskResult.h"
#include "model/OpsResetPasswdRequest.h"
#include "model/OpsResetPasswdResult.h"
#include "model/OpsResizeDiskRequest.h"
#include "model/OpsResizeDiskResult.h"
#include "model/OpsRestartInstanceRequest.h"
#include "model/OpsRestartInstanceResult.h"
#include "model/OpsRevokeSecurityGroupRequest.h"
#include "model/OpsRevokeSecurityGroupResult.h"
#include "model/OpsRevokeSecurityGroupEgressRequest.h"
#include "model/OpsRevokeSecurityGroupEgressResult.h"
#include "model/OpsStartInstanceRequest.h"
#include "model/OpsStartInstanceResult.h"
#include "model/OpsStopInstanceRequest.h"
#include "model/OpsStopInstanceResult.h"
#include "model/OpsUnMountIsoRequest.h"
#include "model/OpsUnMountIsoResult.h"
#include "model/OpsUpgradeInstanceRequest.h"
#include "model/OpsUpgradeInstanceResult.h"


namespace AlibabaCloud
{
	namespace Ecsops
	{
		class ALIBABACLOUD_ECSOPS_EXPORT EcsopsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::OpsAllocateIpAddressResult> OpsAllocateIpAddressOutcome;
			typedef std::future<OpsAllocateIpAddressOutcome> OpsAllocateIpAddressOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsAllocateIpAddressRequest&, const OpsAllocateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsAllocateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::OpsAttachDiskResult> OpsAttachDiskOutcome;
			typedef std::future<OpsAttachDiskOutcome> OpsAttachDiskOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsAttachDiskRequest&, const OpsAttachDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsAttachDiskAsyncHandler;
			typedef Outcome<Error, Model::OpsAttachSnapshotResult> OpsAttachSnapshotOutcome;
			typedef std::future<OpsAttachSnapshotOutcome> OpsAttachSnapshotOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsAttachSnapshotRequest&, const OpsAttachSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsAttachSnapshotAsyncHandler;
			typedef Outcome<Error, Model::OpsAuthorizeSecurityGroupResult> OpsAuthorizeSecurityGroupOutcome;
			typedef std::future<OpsAuthorizeSecurityGroupOutcome> OpsAuthorizeSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsAuthorizeSecurityGroupRequest&, const OpsAuthorizeSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsAuthorizeSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::OpsAuthorizeSecurityGroupEgressResult> OpsAuthorizeSecurityGroupEgressOutcome;
			typedef std::future<OpsAuthorizeSecurityGroupEgressOutcome> OpsAuthorizeSecurityGroupEgressOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsAuthorizeSecurityGroupEgressRequest&, const OpsAuthorizeSecurityGroupEgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsAuthorizeSecurityGroupEgressAsyncHandler;
			typedef Outcome<Error, Model::OpsCreateDiskResult> OpsCreateDiskOutcome;
			typedef std::future<OpsCreateDiskOutcome> OpsCreateDiskOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsCreateDiskRequest&, const OpsCreateDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsCreateDiskAsyncHandler;
			typedef Outcome<Error, Model::OpsCreateImageResult> OpsCreateImageOutcome;
			typedef std::future<OpsCreateImageOutcome> OpsCreateImageOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsCreateImageRequest&, const OpsCreateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsCreateImageAsyncHandler;
			typedef Outcome<Error, Model::OpsCreateInstanceResult> OpsCreateInstanceOutcome;
			typedef std::future<OpsCreateInstanceOutcome> OpsCreateInstanceOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsCreateInstanceRequest&, const OpsCreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsCreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::OpsCreateSecurityGroupResult> OpsCreateSecurityGroupOutcome;
			typedef std::future<OpsCreateSecurityGroupOutcome> OpsCreateSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsCreateSecurityGroupRequest&, const OpsCreateSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsCreateSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::OpsCreateSnapshotResult> OpsCreateSnapshotOutcome;
			typedef std::future<OpsCreateSnapshotOutcome> OpsCreateSnapshotOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsCreateSnapshotRequest&, const OpsCreateSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsCreateSnapshotAsyncHandler;
			typedef Outcome<Error, Model::OpsDeleteImageResult> OpsDeleteImageOutcome;
			typedef std::future<OpsDeleteImageOutcome> OpsDeleteImageOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDeleteImageRequest&, const OpsDeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDeleteImageAsyncHandler;
			typedef Outcome<Error, Model::OpsDeleteSecurityGroupResult> OpsDeleteSecurityGroupOutcome;
			typedef std::future<OpsDeleteSecurityGroupOutcome> OpsDeleteSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDeleteSecurityGroupRequest&, const OpsDeleteSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDeleteSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::OpsDeleteSnapshotResult> OpsDeleteSnapshotOutcome;
			typedef std::future<OpsDeleteSnapshotOutcome> OpsDeleteSnapshotOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDeleteSnapshotRequest&, const OpsDeleteSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDeleteSnapshotAsyncHandler;
			typedef Outcome<Error, Model::OpsDescribeDisksResult> OpsDescribeDisksOutcome;
			typedef std::future<OpsDescribeDisksOutcome> OpsDescribeDisksOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDescribeDisksRequest&, const OpsDescribeDisksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDescribeDisksAsyncHandler;
			typedef Outcome<Error, Model::OpsDescribeGroupAttributeResult> OpsDescribeGroupAttributeOutcome;
			typedef std::future<OpsDescribeGroupAttributeOutcome> OpsDescribeGroupAttributeOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDescribeGroupAttributeRequest&, const OpsDescribeGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDescribeGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::OpsDescribeGroupsResult> OpsDescribeGroupsOutcome;
			typedef std::future<OpsDescribeGroupsOutcome> OpsDescribeGroupsOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDescribeGroupsRequest&, const OpsDescribeGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDescribeGroupsAsyncHandler;
			typedef Outcome<Error, Model::OpsDescribeImagesResult> OpsDescribeImagesOutcome;
			typedef std::future<OpsDescribeImagesOutcome> OpsDescribeImagesOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDescribeImagesRequest&, const OpsDescribeImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDescribeImagesAsyncHandler;
			typedef Outcome<Error, Model::OpsDescribeInstancesResult> OpsDescribeInstancesOutcome;
			typedef std::future<OpsDescribeInstancesOutcome> OpsDescribeInstancesOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDescribeInstancesRequest&, const OpsDescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::OpsDescribeMountedSnapshotsResult> OpsDescribeMountedSnapshotsOutcome;
			typedef std::future<OpsDescribeMountedSnapshotsOutcome> OpsDescribeMountedSnapshotsOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDescribeMountedSnapshotsRequest&, const OpsDescribeMountedSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDescribeMountedSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::OpsDescribeRegionsResult> OpsDescribeRegionsOutcome;
			typedef std::future<OpsDescribeRegionsOutcome> OpsDescribeRegionsOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDescribeRegionsRequest&, const OpsDescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::OpsDescribeSnapshotsResult> OpsDescribeSnapshotsOutcome;
			typedef std::future<OpsDescribeSnapshotsOutcome> OpsDescribeSnapshotsOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDescribeSnapshotsRequest&, const OpsDescribeSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDescribeSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::OpsDetachDiskResult> OpsDetachDiskOutcome;
			typedef std::future<OpsDetachDiskOutcome> OpsDetachDiskOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDetachDiskRequest&, const OpsDetachDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDetachDiskAsyncHandler;
			typedef Outcome<Error, Model::OpsDetachSnapshotResult> OpsDetachSnapshotOutcome;
			typedef std::future<OpsDetachSnapshotOutcome> OpsDetachSnapshotOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDetachSnapshotRequest&, const OpsDetachSnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDetachSnapshotAsyncHandler;
			typedef Outcome<Error, Model::OpsDetailNcResult> OpsDetailNcOutcome;
			typedef std::future<OpsDetailNcOutcome> OpsDetailNcOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsDetailNcRequest&, const OpsDetailNcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsDetailNcAsyncHandler;
			typedef Outcome<Error, Model::OpsGenerateVncUrlResult> OpsGenerateVncUrlOutcome;
			typedef std::future<OpsGenerateVncUrlOutcome> OpsGenerateVncUrlOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsGenerateVncUrlRequest&, const OpsGenerateVncUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsGenerateVncUrlAsyncHandler;
			typedef Outcome<Error, Model::OpsJoinSecurityGroupResult> OpsJoinSecurityGroupOutcome;
			typedef std::future<OpsJoinSecurityGroupOutcome> OpsJoinSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsJoinSecurityGroupRequest&, const OpsJoinSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsJoinSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::OpsLeaveSecurityGroupResult> OpsLeaveSecurityGroupOutcome;
			typedef std::future<OpsLeaveSecurityGroupOutcome> OpsLeaveSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsLeaveSecurityGroupRequest&, const OpsLeaveSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsLeaveSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::OpsLiveMigrateEcsInstanceResult> OpsLiveMigrateEcsInstanceOutcome;
			typedef std::future<OpsLiveMigrateEcsInstanceOutcome> OpsLiveMigrateEcsInstanceOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsLiveMigrateEcsInstanceRequest&, const OpsLiveMigrateEcsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsLiveMigrateEcsInstanceAsyncHandler;
			typedef Outcome<Error, Model::OpsMigrateEcsInstanceResult> OpsMigrateEcsInstanceOutcome;
			typedef std::future<OpsMigrateEcsInstanceOutcome> OpsMigrateEcsInstanceOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsMigrateEcsInstanceRequest&, const OpsMigrateEcsInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsMigrateEcsInstanceAsyncHandler;
			typedef Outcome<Error, Model::OpsModifyVncPasswdResult> OpsModifyVncPasswdOutcome;
			typedef std::future<OpsModifyVncPasswdOutcome> OpsModifyVncPasswdOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsModifyVncPasswdRequest&, const OpsModifyVncPasswdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsModifyVncPasswdAsyncHandler;
			typedef Outcome<Error, Model::OpsMountIsoResult> OpsMountIsoOutcome;
			typedef std::future<OpsMountIsoOutcome> OpsMountIsoOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsMountIsoRequest&, const OpsMountIsoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsMountIsoAsyncHandler;
			typedef Outcome<Error, Model::OpsQueryAvailableIsosResult> OpsQueryAvailableIsosOutcome;
			typedef std::future<OpsQueryAvailableIsosOutcome> OpsQueryAvailableIsosOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsQueryAvailableIsosRequest&, const OpsQueryAvailableIsosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsQueryAvailableIsosAsyncHandler;
			typedef Outcome<Error, Model::OpsQueryAvailableNcsResult> OpsQueryAvailableNcsOutcome;
			typedef std::future<OpsQueryAvailableNcsOutcome> OpsQueryAvailableNcsOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsQueryAvailableNcsRequest&, const OpsQueryAvailableNcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsQueryAvailableNcsAsyncHandler;
			typedef Outcome<Error, Model::OpsQueryMountedIsoResult> OpsQueryMountedIsoOutcome;
			typedef std::future<OpsQueryMountedIsoOutcome> OpsQueryMountedIsoOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsQueryMountedIsoRequest&, const OpsQueryMountedIsoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsQueryMountedIsoAsyncHandler;
			typedef Outcome<Error, Model::OpsQueryVncPasswdResult> OpsQueryVncPasswdOutcome;
			typedef std::future<OpsQueryVncPasswdOutcome> OpsQueryVncPasswdOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsQueryVncPasswdRequest&, const OpsQueryVncPasswdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsQueryVncPasswdAsyncHandler;
			typedef Outcome<Error, Model::OpsReleaseDiskResult> OpsReleaseDiskOutcome;
			typedef std::future<OpsReleaseDiskOutcome> OpsReleaseDiskOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsReleaseDiskRequest&, const OpsReleaseDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsReleaseDiskAsyncHandler;
			typedef Outcome<Error, Model::OpsReleaseInstanceResult> OpsReleaseInstanceOutcome;
			typedef std::future<OpsReleaseInstanceOutcome> OpsReleaseInstanceOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsReleaseInstanceRequest&, const OpsReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::OpsReleaseIpAddressResult> OpsReleaseIpAddressOutcome;
			typedef std::future<OpsReleaseIpAddressOutcome> OpsReleaseIpAddressOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsReleaseIpAddressRequest&, const OpsReleaseIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsReleaseIpAddressAsyncHandler;
			typedef Outcome<Error, Model::OpsRenameInstanceResult> OpsRenameInstanceOutcome;
			typedef std::future<OpsRenameInstanceOutcome> OpsRenameInstanceOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsRenameInstanceRequest&, const OpsRenameInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsRenameInstanceAsyncHandler;
			typedef Outcome<Error, Model::OpsReplaceSystemDiskResult> OpsReplaceSystemDiskOutcome;
			typedef std::future<OpsReplaceSystemDiskOutcome> OpsReplaceSystemDiskOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsReplaceSystemDiskRequest&, const OpsReplaceSystemDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsReplaceSystemDiskAsyncHandler;
			typedef Outcome<Error, Model::OpsResetDiskResult> OpsResetDiskOutcome;
			typedef std::future<OpsResetDiskOutcome> OpsResetDiskOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsResetDiskRequest&, const OpsResetDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsResetDiskAsyncHandler;
			typedef Outcome<Error, Model::OpsResetPasswdResult> OpsResetPasswdOutcome;
			typedef std::future<OpsResetPasswdOutcome> OpsResetPasswdOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsResetPasswdRequest&, const OpsResetPasswdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsResetPasswdAsyncHandler;
			typedef Outcome<Error, Model::OpsResizeDiskResult> OpsResizeDiskOutcome;
			typedef std::future<OpsResizeDiskOutcome> OpsResizeDiskOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsResizeDiskRequest&, const OpsResizeDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsResizeDiskAsyncHandler;
			typedef Outcome<Error, Model::OpsRestartInstanceResult> OpsRestartInstanceOutcome;
			typedef std::future<OpsRestartInstanceOutcome> OpsRestartInstanceOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsRestartInstanceRequest&, const OpsRestartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsRestartInstanceAsyncHandler;
			typedef Outcome<Error, Model::OpsRevokeSecurityGroupResult> OpsRevokeSecurityGroupOutcome;
			typedef std::future<OpsRevokeSecurityGroupOutcome> OpsRevokeSecurityGroupOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsRevokeSecurityGroupRequest&, const OpsRevokeSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsRevokeSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::OpsRevokeSecurityGroupEgressResult> OpsRevokeSecurityGroupEgressOutcome;
			typedef std::future<OpsRevokeSecurityGroupEgressOutcome> OpsRevokeSecurityGroupEgressOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsRevokeSecurityGroupEgressRequest&, const OpsRevokeSecurityGroupEgressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsRevokeSecurityGroupEgressAsyncHandler;
			typedef Outcome<Error, Model::OpsStartInstanceResult> OpsStartInstanceOutcome;
			typedef std::future<OpsStartInstanceOutcome> OpsStartInstanceOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsStartInstanceRequest&, const OpsStartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsStartInstanceAsyncHandler;
			typedef Outcome<Error, Model::OpsStopInstanceResult> OpsStopInstanceOutcome;
			typedef std::future<OpsStopInstanceOutcome> OpsStopInstanceOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsStopInstanceRequest&, const OpsStopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsStopInstanceAsyncHandler;
			typedef Outcome<Error, Model::OpsUnMountIsoResult> OpsUnMountIsoOutcome;
			typedef std::future<OpsUnMountIsoOutcome> OpsUnMountIsoOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsUnMountIsoRequest&, const OpsUnMountIsoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsUnMountIsoAsyncHandler;
			typedef Outcome<Error, Model::OpsUpgradeInstanceResult> OpsUpgradeInstanceOutcome;
			typedef std::future<OpsUpgradeInstanceOutcome> OpsUpgradeInstanceOutcomeCallable;
			typedef std::function<void(const EcsopsClient*, const Model::OpsUpgradeInstanceRequest&, const OpsUpgradeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpsUpgradeInstanceAsyncHandler;

			EcsopsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EcsopsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EcsopsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EcsopsClient();
			OpsAllocateIpAddressOutcome opsAllocateIpAddress(const Model::OpsAllocateIpAddressRequest &request)const;
			void opsAllocateIpAddressAsync(const Model::OpsAllocateIpAddressRequest& request, const OpsAllocateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsAllocateIpAddressOutcomeCallable opsAllocateIpAddressCallable(const Model::OpsAllocateIpAddressRequest& request) const;
			OpsAttachDiskOutcome opsAttachDisk(const Model::OpsAttachDiskRequest &request)const;
			void opsAttachDiskAsync(const Model::OpsAttachDiskRequest& request, const OpsAttachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsAttachDiskOutcomeCallable opsAttachDiskCallable(const Model::OpsAttachDiskRequest& request) const;
			OpsAttachSnapshotOutcome opsAttachSnapshot(const Model::OpsAttachSnapshotRequest &request)const;
			void opsAttachSnapshotAsync(const Model::OpsAttachSnapshotRequest& request, const OpsAttachSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsAttachSnapshotOutcomeCallable opsAttachSnapshotCallable(const Model::OpsAttachSnapshotRequest& request) const;
			OpsAuthorizeSecurityGroupOutcome opsAuthorizeSecurityGroup(const Model::OpsAuthorizeSecurityGroupRequest &request)const;
			void opsAuthorizeSecurityGroupAsync(const Model::OpsAuthorizeSecurityGroupRequest& request, const OpsAuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsAuthorizeSecurityGroupOutcomeCallable opsAuthorizeSecurityGroupCallable(const Model::OpsAuthorizeSecurityGroupRequest& request) const;
			OpsAuthorizeSecurityGroupEgressOutcome opsAuthorizeSecurityGroupEgress(const Model::OpsAuthorizeSecurityGroupEgressRequest &request)const;
			void opsAuthorizeSecurityGroupEgressAsync(const Model::OpsAuthorizeSecurityGroupEgressRequest& request, const OpsAuthorizeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsAuthorizeSecurityGroupEgressOutcomeCallable opsAuthorizeSecurityGroupEgressCallable(const Model::OpsAuthorizeSecurityGroupEgressRequest& request) const;
			OpsCreateDiskOutcome opsCreateDisk(const Model::OpsCreateDiskRequest &request)const;
			void opsCreateDiskAsync(const Model::OpsCreateDiskRequest& request, const OpsCreateDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsCreateDiskOutcomeCallable opsCreateDiskCallable(const Model::OpsCreateDiskRequest& request) const;
			OpsCreateImageOutcome opsCreateImage(const Model::OpsCreateImageRequest &request)const;
			void opsCreateImageAsync(const Model::OpsCreateImageRequest& request, const OpsCreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsCreateImageOutcomeCallable opsCreateImageCallable(const Model::OpsCreateImageRequest& request) const;
			OpsCreateInstanceOutcome opsCreateInstance(const Model::OpsCreateInstanceRequest &request)const;
			void opsCreateInstanceAsync(const Model::OpsCreateInstanceRequest& request, const OpsCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsCreateInstanceOutcomeCallable opsCreateInstanceCallable(const Model::OpsCreateInstanceRequest& request) const;
			OpsCreateSecurityGroupOutcome opsCreateSecurityGroup(const Model::OpsCreateSecurityGroupRequest &request)const;
			void opsCreateSecurityGroupAsync(const Model::OpsCreateSecurityGroupRequest& request, const OpsCreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsCreateSecurityGroupOutcomeCallable opsCreateSecurityGroupCallable(const Model::OpsCreateSecurityGroupRequest& request) const;
			OpsCreateSnapshotOutcome opsCreateSnapshot(const Model::OpsCreateSnapshotRequest &request)const;
			void opsCreateSnapshotAsync(const Model::OpsCreateSnapshotRequest& request, const OpsCreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsCreateSnapshotOutcomeCallable opsCreateSnapshotCallable(const Model::OpsCreateSnapshotRequest& request) const;
			OpsDeleteImageOutcome opsDeleteImage(const Model::OpsDeleteImageRequest &request)const;
			void opsDeleteImageAsync(const Model::OpsDeleteImageRequest& request, const OpsDeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDeleteImageOutcomeCallable opsDeleteImageCallable(const Model::OpsDeleteImageRequest& request) const;
			OpsDeleteSecurityGroupOutcome opsDeleteSecurityGroup(const Model::OpsDeleteSecurityGroupRequest &request)const;
			void opsDeleteSecurityGroupAsync(const Model::OpsDeleteSecurityGroupRequest& request, const OpsDeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDeleteSecurityGroupOutcomeCallable opsDeleteSecurityGroupCallable(const Model::OpsDeleteSecurityGroupRequest& request) const;
			OpsDeleteSnapshotOutcome opsDeleteSnapshot(const Model::OpsDeleteSnapshotRequest &request)const;
			void opsDeleteSnapshotAsync(const Model::OpsDeleteSnapshotRequest& request, const OpsDeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDeleteSnapshotOutcomeCallable opsDeleteSnapshotCallable(const Model::OpsDeleteSnapshotRequest& request) const;
			OpsDescribeDisksOutcome opsDescribeDisks(const Model::OpsDescribeDisksRequest &request)const;
			void opsDescribeDisksAsync(const Model::OpsDescribeDisksRequest& request, const OpsDescribeDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDescribeDisksOutcomeCallable opsDescribeDisksCallable(const Model::OpsDescribeDisksRequest& request) const;
			OpsDescribeGroupAttributeOutcome opsDescribeGroupAttribute(const Model::OpsDescribeGroupAttributeRequest &request)const;
			void opsDescribeGroupAttributeAsync(const Model::OpsDescribeGroupAttributeRequest& request, const OpsDescribeGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDescribeGroupAttributeOutcomeCallable opsDescribeGroupAttributeCallable(const Model::OpsDescribeGroupAttributeRequest& request) const;
			OpsDescribeGroupsOutcome opsDescribeGroups(const Model::OpsDescribeGroupsRequest &request)const;
			void opsDescribeGroupsAsync(const Model::OpsDescribeGroupsRequest& request, const OpsDescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDescribeGroupsOutcomeCallable opsDescribeGroupsCallable(const Model::OpsDescribeGroupsRequest& request) const;
			OpsDescribeImagesOutcome opsDescribeImages(const Model::OpsDescribeImagesRequest &request)const;
			void opsDescribeImagesAsync(const Model::OpsDescribeImagesRequest& request, const OpsDescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDescribeImagesOutcomeCallable opsDescribeImagesCallable(const Model::OpsDescribeImagesRequest& request) const;
			OpsDescribeInstancesOutcome opsDescribeInstances(const Model::OpsDescribeInstancesRequest &request)const;
			void opsDescribeInstancesAsync(const Model::OpsDescribeInstancesRequest& request, const OpsDescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDescribeInstancesOutcomeCallable opsDescribeInstancesCallable(const Model::OpsDescribeInstancesRequest& request) const;
			OpsDescribeMountedSnapshotsOutcome opsDescribeMountedSnapshots(const Model::OpsDescribeMountedSnapshotsRequest &request)const;
			void opsDescribeMountedSnapshotsAsync(const Model::OpsDescribeMountedSnapshotsRequest& request, const OpsDescribeMountedSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDescribeMountedSnapshotsOutcomeCallable opsDescribeMountedSnapshotsCallable(const Model::OpsDescribeMountedSnapshotsRequest& request) const;
			OpsDescribeRegionsOutcome opsDescribeRegions(const Model::OpsDescribeRegionsRequest &request)const;
			void opsDescribeRegionsAsync(const Model::OpsDescribeRegionsRequest& request, const OpsDescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDescribeRegionsOutcomeCallable opsDescribeRegionsCallable(const Model::OpsDescribeRegionsRequest& request) const;
			OpsDescribeSnapshotsOutcome opsDescribeSnapshots(const Model::OpsDescribeSnapshotsRequest &request)const;
			void opsDescribeSnapshotsAsync(const Model::OpsDescribeSnapshotsRequest& request, const OpsDescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDescribeSnapshotsOutcomeCallable opsDescribeSnapshotsCallable(const Model::OpsDescribeSnapshotsRequest& request) const;
			OpsDetachDiskOutcome opsDetachDisk(const Model::OpsDetachDiskRequest &request)const;
			void opsDetachDiskAsync(const Model::OpsDetachDiskRequest& request, const OpsDetachDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDetachDiskOutcomeCallable opsDetachDiskCallable(const Model::OpsDetachDiskRequest& request) const;
			OpsDetachSnapshotOutcome opsDetachSnapshot(const Model::OpsDetachSnapshotRequest &request)const;
			void opsDetachSnapshotAsync(const Model::OpsDetachSnapshotRequest& request, const OpsDetachSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDetachSnapshotOutcomeCallable opsDetachSnapshotCallable(const Model::OpsDetachSnapshotRequest& request) const;
			OpsDetailNcOutcome opsDetailNc(const Model::OpsDetailNcRequest &request)const;
			void opsDetailNcAsync(const Model::OpsDetailNcRequest& request, const OpsDetailNcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsDetailNcOutcomeCallable opsDetailNcCallable(const Model::OpsDetailNcRequest& request) const;
			OpsGenerateVncUrlOutcome opsGenerateVncUrl(const Model::OpsGenerateVncUrlRequest &request)const;
			void opsGenerateVncUrlAsync(const Model::OpsGenerateVncUrlRequest& request, const OpsGenerateVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsGenerateVncUrlOutcomeCallable opsGenerateVncUrlCallable(const Model::OpsGenerateVncUrlRequest& request) const;
			OpsJoinSecurityGroupOutcome opsJoinSecurityGroup(const Model::OpsJoinSecurityGroupRequest &request)const;
			void opsJoinSecurityGroupAsync(const Model::OpsJoinSecurityGroupRequest& request, const OpsJoinSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsJoinSecurityGroupOutcomeCallable opsJoinSecurityGroupCallable(const Model::OpsJoinSecurityGroupRequest& request) const;
			OpsLeaveSecurityGroupOutcome opsLeaveSecurityGroup(const Model::OpsLeaveSecurityGroupRequest &request)const;
			void opsLeaveSecurityGroupAsync(const Model::OpsLeaveSecurityGroupRequest& request, const OpsLeaveSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsLeaveSecurityGroupOutcomeCallable opsLeaveSecurityGroupCallable(const Model::OpsLeaveSecurityGroupRequest& request) const;
			OpsLiveMigrateEcsInstanceOutcome opsLiveMigrateEcsInstance(const Model::OpsLiveMigrateEcsInstanceRequest &request)const;
			void opsLiveMigrateEcsInstanceAsync(const Model::OpsLiveMigrateEcsInstanceRequest& request, const OpsLiveMigrateEcsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsLiveMigrateEcsInstanceOutcomeCallable opsLiveMigrateEcsInstanceCallable(const Model::OpsLiveMigrateEcsInstanceRequest& request) const;
			OpsMigrateEcsInstanceOutcome opsMigrateEcsInstance(const Model::OpsMigrateEcsInstanceRequest &request)const;
			void opsMigrateEcsInstanceAsync(const Model::OpsMigrateEcsInstanceRequest& request, const OpsMigrateEcsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsMigrateEcsInstanceOutcomeCallable opsMigrateEcsInstanceCallable(const Model::OpsMigrateEcsInstanceRequest& request) const;
			OpsModifyVncPasswdOutcome opsModifyVncPasswd(const Model::OpsModifyVncPasswdRequest &request)const;
			void opsModifyVncPasswdAsync(const Model::OpsModifyVncPasswdRequest& request, const OpsModifyVncPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsModifyVncPasswdOutcomeCallable opsModifyVncPasswdCallable(const Model::OpsModifyVncPasswdRequest& request) const;
			OpsMountIsoOutcome opsMountIso(const Model::OpsMountIsoRequest &request)const;
			void opsMountIsoAsync(const Model::OpsMountIsoRequest& request, const OpsMountIsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsMountIsoOutcomeCallable opsMountIsoCallable(const Model::OpsMountIsoRequest& request) const;
			OpsQueryAvailableIsosOutcome opsQueryAvailableIsos(const Model::OpsQueryAvailableIsosRequest &request)const;
			void opsQueryAvailableIsosAsync(const Model::OpsQueryAvailableIsosRequest& request, const OpsQueryAvailableIsosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsQueryAvailableIsosOutcomeCallable opsQueryAvailableIsosCallable(const Model::OpsQueryAvailableIsosRequest& request) const;
			OpsQueryAvailableNcsOutcome opsQueryAvailableNcs(const Model::OpsQueryAvailableNcsRequest &request)const;
			void opsQueryAvailableNcsAsync(const Model::OpsQueryAvailableNcsRequest& request, const OpsQueryAvailableNcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsQueryAvailableNcsOutcomeCallable opsQueryAvailableNcsCallable(const Model::OpsQueryAvailableNcsRequest& request) const;
			OpsQueryMountedIsoOutcome opsQueryMountedIso(const Model::OpsQueryMountedIsoRequest &request)const;
			void opsQueryMountedIsoAsync(const Model::OpsQueryMountedIsoRequest& request, const OpsQueryMountedIsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsQueryMountedIsoOutcomeCallable opsQueryMountedIsoCallable(const Model::OpsQueryMountedIsoRequest& request) const;
			OpsQueryVncPasswdOutcome opsQueryVncPasswd(const Model::OpsQueryVncPasswdRequest &request)const;
			void opsQueryVncPasswdAsync(const Model::OpsQueryVncPasswdRequest& request, const OpsQueryVncPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsQueryVncPasswdOutcomeCallable opsQueryVncPasswdCallable(const Model::OpsQueryVncPasswdRequest& request) const;
			OpsReleaseDiskOutcome opsReleaseDisk(const Model::OpsReleaseDiskRequest &request)const;
			void opsReleaseDiskAsync(const Model::OpsReleaseDiskRequest& request, const OpsReleaseDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsReleaseDiskOutcomeCallable opsReleaseDiskCallable(const Model::OpsReleaseDiskRequest& request) const;
			OpsReleaseInstanceOutcome opsReleaseInstance(const Model::OpsReleaseInstanceRequest &request)const;
			void opsReleaseInstanceAsync(const Model::OpsReleaseInstanceRequest& request, const OpsReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsReleaseInstanceOutcomeCallable opsReleaseInstanceCallable(const Model::OpsReleaseInstanceRequest& request) const;
			OpsReleaseIpAddressOutcome opsReleaseIpAddress(const Model::OpsReleaseIpAddressRequest &request)const;
			void opsReleaseIpAddressAsync(const Model::OpsReleaseIpAddressRequest& request, const OpsReleaseIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsReleaseIpAddressOutcomeCallable opsReleaseIpAddressCallable(const Model::OpsReleaseIpAddressRequest& request) const;
			OpsRenameInstanceOutcome opsRenameInstance(const Model::OpsRenameInstanceRequest &request)const;
			void opsRenameInstanceAsync(const Model::OpsRenameInstanceRequest& request, const OpsRenameInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsRenameInstanceOutcomeCallable opsRenameInstanceCallable(const Model::OpsRenameInstanceRequest& request) const;
			OpsReplaceSystemDiskOutcome opsReplaceSystemDisk(const Model::OpsReplaceSystemDiskRequest &request)const;
			void opsReplaceSystemDiskAsync(const Model::OpsReplaceSystemDiskRequest& request, const OpsReplaceSystemDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsReplaceSystemDiskOutcomeCallable opsReplaceSystemDiskCallable(const Model::OpsReplaceSystemDiskRequest& request) const;
			OpsResetDiskOutcome opsResetDisk(const Model::OpsResetDiskRequest &request)const;
			void opsResetDiskAsync(const Model::OpsResetDiskRequest& request, const OpsResetDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsResetDiskOutcomeCallable opsResetDiskCallable(const Model::OpsResetDiskRequest& request) const;
			OpsResetPasswdOutcome opsResetPasswd(const Model::OpsResetPasswdRequest &request)const;
			void opsResetPasswdAsync(const Model::OpsResetPasswdRequest& request, const OpsResetPasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsResetPasswdOutcomeCallable opsResetPasswdCallable(const Model::OpsResetPasswdRequest& request) const;
			OpsResizeDiskOutcome opsResizeDisk(const Model::OpsResizeDiskRequest &request)const;
			void opsResizeDiskAsync(const Model::OpsResizeDiskRequest& request, const OpsResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsResizeDiskOutcomeCallable opsResizeDiskCallable(const Model::OpsResizeDiskRequest& request) const;
			OpsRestartInstanceOutcome opsRestartInstance(const Model::OpsRestartInstanceRequest &request)const;
			void opsRestartInstanceAsync(const Model::OpsRestartInstanceRequest& request, const OpsRestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsRestartInstanceOutcomeCallable opsRestartInstanceCallable(const Model::OpsRestartInstanceRequest& request) const;
			OpsRevokeSecurityGroupOutcome opsRevokeSecurityGroup(const Model::OpsRevokeSecurityGroupRequest &request)const;
			void opsRevokeSecurityGroupAsync(const Model::OpsRevokeSecurityGroupRequest& request, const OpsRevokeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsRevokeSecurityGroupOutcomeCallable opsRevokeSecurityGroupCallable(const Model::OpsRevokeSecurityGroupRequest& request) const;
			OpsRevokeSecurityGroupEgressOutcome opsRevokeSecurityGroupEgress(const Model::OpsRevokeSecurityGroupEgressRequest &request)const;
			void opsRevokeSecurityGroupEgressAsync(const Model::OpsRevokeSecurityGroupEgressRequest& request, const OpsRevokeSecurityGroupEgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsRevokeSecurityGroupEgressOutcomeCallable opsRevokeSecurityGroupEgressCallable(const Model::OpsRevokeSecurityGroupEgressRequest& request) const;
			OpsStartInstanceOutcome opsStartInstance(const Model::OpsStartInstanceRequest &request)const;
			void opsStartInstanceAsync(const Model::OpsStartInstanceRequest& request, const OpsStartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsStartInstanceOutcomeCallable opsStartInstanceCallable(const Model::OpsStartInstanceRequest& request) const;
			OpsStopInstanceOutcome opsStopInstance(const Model::OpsStopInstanceRequest &request)const;
			void opsStopInstanceAsync(const Model::OpsStopInstanceRequest& request, const OpsStopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsStopInstanceOutcomeCallable opsStopInstanceCallable(const Model::OpsStopInstanceRequest& request) const;
			OpsUnMountIsoOutcome opsUnMountIso(const Model::OpsUnMountIsoRequest &request)const;
			void opsUnMountIsoAsync(const Model::OpsUnMountIsoRequest& request, const OpsUnMountIsoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsUnMountIsoOutcomeCallable opsUnMountIsoCallable(const Model::OpsUnMountIsoRequest& request) const;
			OpsUpgradeInstanceOutcome opsUpgradeInstance(const Model::OpsUpgradeInstanceRequest &request)const;
			void opsUpgradeInstanceAsync(const Model::OpsUpgradeInstanceRequest& request, const OpsUpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpsUpgradeInstanceOutcomeCallable opsUpgradeInstanceCallable(const Model::OpsUpgradeInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ECSOPS_ECSOPSCLIENT_H_
