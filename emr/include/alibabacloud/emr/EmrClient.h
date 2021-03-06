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

#ifndef ALIBABACLOUD_EMR_EMRCLIENT_H_
#define ALIBABACLOUD_EMR_EMRCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EmrExport.h"
#include "model/CreateFlowRequest.h"
#include "model/CreateFlowResult.h"
#include "model/DescribeDataSourceCommandRequest.h"
#include "model/DescribeDataSourceCommandResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/GetJobOutputStatisticInfoRequest.h"
#include "model/GetJobOutputStatisticInfoResult.h"
#include "model/ListResourcePoolRequest.h"
#include "model/ListResourcePoolResult.h"
#include "model/ListFlowClusterHostRequest.h"
#include "model/ListFlowClusterHostResult.h"
#include "model/KillFlowRequest.h"
#include "model/KillFlowResult.h"
#include "model/RunOpsCommandRequest.h"
#include "model/RunOpsCommandResult.h"
#include "model/DescribeClusterStatisticsRequest.h"
#include "model/DescribeClusterStatisticsResult.h"
#include "model/ModifyExecutionPlanJobInfoRequest.h"
#include "model/ModifyExecutionPlanJobInfoResult.h"
#include "model/DeleteClusterTemplateRequest.h"
#include "model/DeleteClusterTemplateResult.h"
#include "model/CancelOrderRequest.h"
#include "model/CancelOrderResult.h"
#include "model/CreateAlertDingDingGroupRequest.h"
#include "model/CreateAlertDingDingGroupResult.h"
#include "model/MetastoreUpdateKafkaTopicRequest.h"
#include "model/MetastoreUpdateKafkaTopicResult.h"
#include "model/StartFlowRequest.h"
#include "model/StartFlowResult.h"
#include "model/ListClusterServiceConfigHistoryRequest.h"
#include "model/ListClusterServiceConfigHistoryResult.h"
#include "model/ListDataSourceSchemaTableRequest.h"
#include "model/ListDataSourceSchemaTableResult.h"
#include "model/CreateJobRequest.h"
#include "model/CreateJobResult.h"
#include "model/AttachClusterForNoteRequest.h"
#include "model/AttachClusterForNoteResult.h"
#include "model/QueryAlarmHistoryRequest.h"
#include "model/QueryAlarmHistoryResult.h"
#include "model/ListJobExecutionPlanHierarchyRequest.h"
#include "model/ListJobExecutionPlanHierarchyResult.h"
#include "model/ListExecutionPlansRequest.h"
#include "model/ListExecutionPlansResult.h"
#include "model/ListJobMigrateInfoRequest.h"
#include "model/ListJobMigrateInfoResult.h"
#include "model/CloneFlowRequest.h"
#include "model/CloneFlowResult.h"
#include "model/ListEmrMainVersionRequest.h"
#include "model/ListEmrMainVersionResult.h"
#include "model/CreateClusterTemplateRequest.h"
#include "model/CreateClusterTemplateResult.h"
#include "model/MetastoreDropDatabaseRequest.h"
#include "model/MetastoreDropDatabaseResult.h"
#include "model/ListAlertContactsRequest.h"
#include "model/ListAlertContactsResult.h"
#include "model/MetastoreDescribeDatabaseRequest.h"
#include "model/MetastoreDescribeDatabaseResult.h"
#include "model/ListFlowInstanceRequest.h"
#include "model/ListFlowInstanceResult.h"
#include "model/ListJobExecutionInstanceTrendRequest.h"
#include "model/ListJobExecutionInstanceTrendResult.h"
#include "model/MetastoreDescribeTaskRequest.h"
#include "model/MetastoreDescribeTaskResult.h"
#include "model/DescribeClusterServiceConfigHistoryRequest.h"
#include "model/DescribeClusterServiceConfigHistoryResult.h"
#include "model/GetJobMigrateResultRequest.h"
#include "model/GetJobMigrateResultResult.h"
#include "model/GetHdfsCapacityStatisticInfoRequest.h"
#include "model/GetHdfsCapacityStatisticInfoResult.h"
#include "model/ResumeExecutionPlanSchedulerRequest.h"
#include "model/ResumeExecutionPlanSchedulerResult.h"
#include "model/ListFlowNodeInstanceRequest.h"
#include "model/ListFlowNodeInstanceResult.h"
#include "model/DescribeDataSourceRequest.h"
#include "model/DescribeDataSourceResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/DescribeFlowVariableCollectionRequest.h"
#include "model/DescribeFlowVariableCollectionResult.h"
#include "model/CreateAlertUserGroupRequest.h"
#include "model/CreateAlertUserGroupResult.h"
#include "model/DescribeScalingActivityRequest.h"
#include "model/DescribeScalingActivityResult.h"
#include "model/ListEmrAvailableResourceRequest.h"
#include "model/ListEmrAvailableResourceResult.h"
#include "model/ReleaseETLJobRequest.h"
#include "model/ReleaseETLJobResult.h"
#include "model/DescribeEmrMainVersionRequest.h"
#include "model/DescribeEmrMainVersionResult.h"
#include "model/DescribeClusterServiceConfigTagRequest.h"
#include "model/DescribeClusterServiceConfigTagResult.h"
#include "model/DeleteETLJobRequest.h"
#include "model/DeleteETLJobResult.h"
#include "model/RunClusterServiceActionRequest.h"
#include "model/RunClusterServiceActionResult.h"
#include "model/SuspendFlowRequest.h"
#include "model/SuspendFlowResult.h"
#include "model/MetastoreDataPreviewRequest.h"
#include "model/MetastoreDataPreviewResult.h"
#include "model/AuthorizeSecurityGroupRequest.h"
#include "model/AuthorizeSecurityGroupResult.h"
#include "model/ModifyClusterTemplateRequest.h"
#include "model/ModifyClusterTemplateResult.h"
#include "model/AttachPubIpRequest.h"
#include "model/AttachPubIpResult.h"
#include "model/RunExecutionPlanRequest.h"
#include "model/RunExecutionPlanResult.h"
#include "model/ContextQueryLogRequest.h"
#include "model/ContextQueryLogResult.h"
#include "model/ListClusterOperationHostRequest.h"
#include "model/ListClusterOperationHostResult.h"
#include "model/ListClusterTemplatesRequest.h"
#include "model/ListClusterTemplatesResult.h"
#include "model/DescribeFlowCategoryRequest.h"
#include "model/DescribeFlowCategoryResult.h"
#include "model/ModifyFlowJobRequest.h"
#include "model/ModifyFlowJobResult.h"
#include "model/ListScalingRuleRequest.h"
#include "model/ListScalingRuleResult.h"
#include "model/DeleteFlowRequest.h"
#include "model/DeleteFlowResult.h"
#include "model/DeleteDataSourceRequest.h"
#include "model/DeleteDataSourceResult.h"
#include "model/RunETLJobRequest.h"
#include "model/RunETLJobResult.h"
#include "model/CreateClusterHostGroupRequest.h"
#include "model/CreateClusterHostGroupResult.h"
#include "model/DescribeClusterTemplateRequest.h"
#include "model/DescribeClusterTemplateResult.h"
#include "model/ModifyScalingRuleRequest.h"
#include "model/ModifyScalingRuleResult.h"
#include "model/ListClusterServiceComponentHealthInfoRequest.h"
#include "model/ListClusterServiceComponentHealthInfoResult.h"
#include "model/ListFlowProjectRequest.h"
#include "model/ListFlowProjectResult.h"
#include "model/RemoveClusterHostsRequest.h"
#include "model/RemoveClusterHostsResult.h"
#include "model/ListETLJobTriggerEntityRequest.h"
#include "model/ListETLJobTriggerEntityResult.h"
#include "model/ModifyAlertDingDingGroupRequest.h"
#include "model/ModifyAlertDingDingGroupResult.h"
#include "model/CreateETLJobRequest.h"
#include "model/CreateETLJobResult.h"
#include "model/SaveParagraphRequest.h"
#include "model/SaveParagraphResult.h"
#include "model/DeleteParagraphRequest.h"
#include "model/DeleteParagraphResult.h"
#include "model/ListFlowJobHistoryRequest.h"
#include "model/ListFlowJobHistoryResult.h"
#include "model/CreateClusterScriptRequest.h"
#include "model/CreateClusterScriptResult.h"
#include "model/SubmitFlowRequest.h"
#include "model/SubmitFlowResult.h"
#include "model/GetQueueInputStatisticInfoRequest.h"
#include "model/GetQueueInputStatisticInfoResult.h"
#include "model/ListClusterServiceQuickLinkRequest.h"
#include "model/ListClusterServiceQuickLinkResult.h"
#include "model/MetastoreUpdateTableRequest.h"
#include "model/MetastoreUpdateTableResult.h"
#include "model/ListClusterHostGroupRequest.h"
#include "model/ListClusterHostGroupResult.h"
#include "model/StopParagraphRequest.h"
#include "model/StopParagraphResult.h"
#include "model/MetastoreDeleteKafkaTopicRequest.h"
#include "model/MetastoreDeleteKafkaTopicResult.h"
#include "model/ResumeFlowRequest.h"
#include "model/ResumeFlowResult.h"
#include "model/DeleteFlowProjectByIdRequest.h"
#include "model/DeleteFlowProjectByIdResult.h"
#include "model/SuspendExecutionPlanInstanceRequest.h"
#include "model/SuspendExecutionPlanInstanceResult.h"
#include "model/GetUserSubmissionStatisticInfoRequest.h"
#include "model/GetUserSubmissionStatisticInfoResult.h"
#include "model/DeleteScalingTaskGroupRequest.h"
#include "model/DeleteScalingTaskGroupResult.h"
#include "model/DescribeParagraphRequest.h"
#include "model/DescribeParagraphResult.h"
#include "model/MetastoreCreateDatabaseRequest.h"
#include "model/MetastoreCreateDatabaseResult.h"
#include "model/ListFailureJobExecutionInstancesRequest.h"
#include "model/ListFailureJobExecutionInstancesResult.h"
#include "model/DeleteFlowJobRequest.h"
#include "model/DeleteFlowJobResult.h"
#include "model/RefreshClusterResourcePoolRequest.h"
#include "model/RefreshClusterResourcePoolResult.h"
#include "model/ModifyJobRequest.h"
#include "model/ModifyJobResult.h"
#include "model/MetastoreCreateDataResourceRequest.h"
#include "model/MetastoreCreateDataResourceResult.h"
#include "model/KillETLJobInstanceRequest.h"
#include "model/KillETLJobInstanceResult.h"
#include "model/DescribeFlowJobRequest.h"
#include "model/DescribeFlowJobResult.h"
#include "model/RetryExecutionPlanInstanceRequest.h"
#include "model/RetryExecutionPlanInstanceResult.h"
#include "model/RerunFlowRequest.h"
#include "model/RerunFlowResult.h"
#include "model/MetastoreRetryTaskRequest.h"
#include "model/MetastoreRetryTaskResult.h"
#include "model/DescribeClusterOperationHostTaskLogRequest.h"
#include "model/DescribeClusterOperationHostTaskLogResult.h"
#include "model/CreateScalingTaskGroupRequest.h"
#include "model/CreateScalingTaskGroupResult.h"
#include "model/KillFlowJobRequest.h"
#include "model/KillFlowJobResult.h"
#include "model/DescribeFlowRequest.h"
#include "model/DescribeFlowResult.h"
#include "model/DescribeClusterV2Request.h"
#include "model/DescribeClusterV2Result.h"
#include "model/DescribeDataSourceSchemaDatabaseRequest.h"
#include "model/DescribeDataSourceSchemaDatabaseResult.h"
#include "model/DescribeETLJobStageOutputSchemaRequest.h"
#include "model/DescribeETLJobStageOutputSchemaResult.h"
#include "model/CreateFlowProjectClusterSettingRequest.h"
#include "model/CreateFlowProjectClusterSettingResult.h"
#include "model/ListClusterScriptsRequest.h"
#include "model/ListClusterScriptsResult.h"
#include "model/DescribeFlowInstanceRequest.h"
#include "model/DescribeFlowInstanceResult.h"
#include "model/CreateDataSourceRequest.h"
#include "model/CreateDataSourceResult.h"
#include "model/GetUserInputStatisticInfoRequest.h"
#include "model/GetUserInputStatisticInfoResult.h"
#include "model/ModifyAlertContactRequest.h"
#include "model/ModifyAlertContactResult.h"
#include "model/CreateAlertContactRequest.h"
#include "model/CreateAlertContactResult.h"
#include "model/DeleteAlertDingDingGroupsRequest.h"
#include "model/DeleteAlertDingDingGroupsResult.h"
#include "model/MetastoreModifyDataResourceRequest.h"
#include "model/MetastoreModifyDataResourceResult.h"
#include "model/ListExecutePlanMigrateInfoRequest.h"
#include "model/ListExecutePlanMigrateInfoResult.h"
#include "model/GetOpsCommandResultOnceRequest.h"
#include "model/GetOpsCommandResultOnceResult.h"
#include "model/ResumeExecutionPlanInstanceRequest.h"
#include "model/ResumeExecutionPlanInstanceResult.h"
#include "model/CreateParagraphRequest.h"
#include "model/CreateParagraphResult.h"
#include "model/GetJobInputStatisticInfoRequest.h"
#include "model/GetJobInputStatisticInfoResult.h"
#include "model/DeleteFlowProjectUserRequest.h"
#include "model/DeleteFlowProjectUserResult.h"
#include "model/CreateResourceQueueRequest.h"
#include "model/CreateResourceQueueResult.h"
#include "model/ListDependedServiceRequest.h"
#include "model/ListDependedServiceResult.h"
#include "model/CloneETLJobRequest.h"
#include "model/CloneETLJobResult.h"
#include "model/DeleteAlertContactsRequest.h"
#include "model/DeleteAlertContactsResult.h"
#include "model/MetastoreListTablePartitionRequest.h"
#include "model/MetastoreListTablePartitionResult.h"
#include "model/CreateClusterV2Request.h"
#include "model/CreateClusterV2Result.h"
#include "model/ModifyExecutionPlanScheduleInfoRequest.h"
#include "model/ModifyExecutionPlanScheduleInfoResult.h"
#include "model/ListClusterHostRequest.h"
#include "model/ListClusterHostResult.h"
#include "model/DescribeClusterServiceRequest.h"
#include "model/DescribeClusterServiceResult.h"
#include "model/GetQueueOutputStatisticInfoRequest.h"
#include "model/GetQueueOutputStatisticInfoResult.h"
#include "model/CreateExecutionPlanRequest.h"
#include "model/CreateExecutionPlanResult.h"
#include "model/MetastoreCreateTableRequest.h"
#include "model/MetastoreCreateTableResult.h"
#include "model/DeleteAlertUserGroupsRequest.h"
#include "model/DeleteAlertUserGroupsResult.h"
#include "model/MetastoreListKafkaConsumerGroupRequest.h"
#include "model/MetastoreListKafkaConsumerGroupResult.h"
#include "model/CommonApiWhiteListRequest.h"
#include "model/CommonApiWhiteListResult.h"
#include "model/CreateFlowForWebRequest.h"
#include "model/CreateFlowForWebResult.h"
#include "model/DeleteScalingRuleRequest.h"
#include "model/DeleteScalingRuleResult.h"
#include "model/QuerySlsMetricDataRequest.h"
#include "model/QuerySlsMetricDataResult.h"
#include "model/DescribeFlowJobStatisticRequest.h"
#include "model/DescribeFlowJobStatisticResult.h"
#include "model/MetastoreListKafkaTopicRequest.h"
#include "model/MetastoreListKafkaTopicResult.h"
#include "model/DescribeJobRequest.h"
#include "model/DescribeJobResult.h"
#include "model/ReleaseClusterHostGroupRequest.h"
#include "model/ReleaseClusterHostGroupResult.h"
#include "model/ListOpsOperationRequest.h"
#include "model/ListOpsOperationResult.h"
#include "model/ModifyFlowProjectRequest.h"
#include "model/ModifyFlowProjectResult.h"
#include "model/ModifyClusterHostGroupRequest.h"
#include "model/ModifyClusterHostGroupResult.h"
#include "model/DescribeUserStatisticsRequest.h"
#include "model/DescribeUserStatisticsResult.h"
#include "model/DescribeFlowNodeInstanceLauncherLogRequest.h"
#include "model/DescribeFlowNodeInstanceLauncherLogResult.h"
#include "model/ListFlowRequest.h"
#include "model/ListFlowResult.h"
#include "model/DeleteClusterScriptRequest.h"
#include "model/DeleteClusterScriptResult.h"
#include "model/ListResourceQueueRequest.h"
#include "model/ListResourceQueueResult.h"
#include "model/ListClusterOperationRequest.h"
#include "model/ListClusterOperationResult.h"
#include "model/KillExecutionPlanInstanceRequest.h"
#include "model/KillExecutionPlanInstanceResult.h"
#include "model/UpdateNavNodeRequest.h"
#include "model/UpdateNavNodeResult.h"
#include "model/CloneFlowJobRequest.h"
#include "model/CloneFlowJobResult.h"
#include "model/CreateResourcePoolRequest.h"
#include "model/CreateResourcePoolResult.h"
#include "model/CreateFlowJobRequest.h"
#include "model/CreateFlowJobResult.h"
#include "model/DeleteFlowCategoryRequest.h"
#include "model/DeleteFlowCategoryResult.h"
#include "model/MigrateJobsRequest.h"
#include "model/MigrateJobsResult.h"
#include "model/KillExecutionJobInstanceRequest.h"
#include "model/KillExecutionJobInstanceResult.h"
#include "model/CreateClusterWithTemplateRequest.h"
#include "model/CreateClusterWithTemplateResult.h"
#include "model/ListFlowClusterAllRequest.h"
#include "model/ListFlowClusterAllResult.h"
#include "model/ModifyExecutionPlanRequest.h"
#include "model/ModifyExecutionPlanResult.h"
#include "model/ListUserStatisticsRequest.h"
#include "model/ListUserStatisticsResult.h"
#include "model/AddClusterServiceRequest.h"
#include "model/AddClusterServiceResult.h"
#include "model/ModifyFlowCategoryRequest.h"
#include "model/ModifyFlowCategoryResult.h"
#include "model/QueryAlarmRulesRequest.h"
#include "model/QueryAlarmRulesResult.h"
#include "model/ModifyClusterServiceConfigRequest.h"
#include "model/ModifyClusterServiceConfigResult.h"
#include "model/ListNotesRequest.h"
#include "model/ListNotesResult.h"
#include "model/MetastoreListDataResourcesRequest.h"
#include "model/MetastoreListDataResourcesResult.h"
#include "model/UpdateETLJobRequest.h"
#include "model/UpdateETLJobResult.h"
#include "model/DescribeScalingTaskGroupRequest.h"
#include "model/DescribeScalingTaskGroupResult.h"
#include "model/MetastoreDescribeDataSourceRequest.h"
#include "model/MetastoreDescribeDataSourceResult.h"
#include "model/ListExecutionPlanInstanceTrendRequest.h"
#include "model/ListExecutionPlanInstanceTrendResult.h"
#include "model/ResolveETLJobSqlSchemaRequest.h"
#include "model/ResolveETLJobSqlSchemaResult.h"
#include "model/UpdateETLJobStageRequest.h"
#include "model/UpdateETLJobStageResult.h"
#include "model/SearchLogRequest.h"
#include "model/SearchLogResult.h"
#include "model/RenderResourcePoolXmlRequest.h"
#include "model/RenderResourcePoolXmlResult.h"
#include "model/UpdateDataSourceRequest.h"
#include "model/UpdateDataSourceResult.h"
#include "model/ModifyScalingTaskGroupRequest.h"
#include "model/ModifyScalingTaskGroupResult.h"
#include "model/ListDataSourceSchemaDatabaseRequest.h"
#include "model/ListDataSourceSchemaDatabaseResult.h"
#include "model/DescribeFlowProjectRequest.h"
#include "model/DescribeFlowProjectResult.h"
#include "model/CreateUsersRequest.h"
#include "model/CreateUsersResult.h"
#include "model/CheckDataSourceRequest.h"
#include "model/CheckDataSourceResult.h"
#include "model/ListScalingActivityRequest.h"
#include "model/ListScalingActivityResult.h"
#include "model/CreateNoteRequest.h"
#include "model/CreateNoteResult.h"
#include "model/DeleteResourcePoolRequest.h"
#include "model/DeleteResourcePoolResult.h"
#include "model/ListFlowJobRequest.h"
#include "model/ListFlowJobResult.h"
#include "model/RetryExecutionPlanRequest.h"
#include "model/RetryExecutionPlanResult.h"
#include "model/DescribeAvailableInstanceTypeRequest.h"
#include "model/DescribeAvailableInstanceTypeResult.h"
#include "model/MetastoreUpdateKafkaTopicBatchRequest.h"
#include "model/MetastoreUpdateKafkaTopicBatchResult.h"
#include "model/ListNavSubTreeRequest.h"
#include "model/ListNavSubTreeResult.h"
#include "model/ListFlowNodeInstanceContainerStatusRequest.h"
#include "model/ListFlowNodeInstanceContainerStatusResult.h"
#include "model/CreateFlowProjectRequest.h"
#include "model/CreateFlowProjectResult.h"
#include "model/MetastoreListDataSourceRequest.h"
#include "model/MetastoreListDataSourceResult.h"
#include "model/GetSupportedOpsCommandRequest.h"
#include "model/GetSupportedOpsCommandResult.h"
#include "model/DescribeETLJobSqlSchemaRequest.h"
#include "model/DescribeETLJobSqlSchemaResult.h"
#include "model/CreateVerificationCodeRequest.h"
#include "model/CreateVerificationCodeResult.h"
#include "model/ListExecutionPlanInstancesRequest.h"
#include "model/ListExecutionPlanInstancesResult.h"
#include "model/DetachClusterForNoteRequest.h"
#include "model/DetachClusterForNoteResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/MetastoreDescribeKafkaConsumerGroupRequest.h"
#include "model/MetastoreDescribeKafkaConsumerGroupResult.h"
#include "model/MetastoreListTaskRequest.h"
#include "model/MetastoreListTaskResult.h"
#include "model/DescribeClusterOpLogRequest.h"
#include "model/DescribeClusterOpLogResult.h"
#include "model/DescribeFlowNodeInstanceRequest.h"
#include "model/DescribeFlowNodeInstanceResult.h"
#include "model/MetastoreDescribeKafkaTopicRequest.h"
#include "model/MetastoreDescribeKafkaTopicResult.h"
#include "model/ListScalingTaskGroupRequest.h"
#include "model/ListScalingTaskGroupResult.h"
#include "model/GetQueueSubmissionStatisticInfoRequest.h"
#include "model/GetQueueSubmissionStatisticInfoResult.h"
#include "model/ListDataSourceRequest.h"
#include "model/ListDataSourceResult.h"
#include "model/ModifyUserStatisticsRequest.h"
#include "model/ModifyUserStatisticsResult.h"
#include "model/MetastoreCreateKafkaTopicRequest.h"
#include "model/MetastoreCreateKafkaTopicResult.h"
#include "model/ListETLJobInstanceRequest.h"
#include "model/ListETLJobInstanceResult.h"
#include "model/ModifyFlowVariableCollectionRequest.h"
#include "model/ModifyFlowVariableCollectionResult.h"
#include "model/DescribeETLJobInstanceRequest.h"
#include "model/DescribeETLJobInstanceResult.h"
#include "model/ModifyExecutionPlanBasicInfoRequest.h"
#include "model/ModifyExecutionPlanBasicInfoResult.h"
#include "model/SubmitFlowJobRequest.h"
#include "model/SubmitFlowJobResult.h"
#include "model/CreateUserPasswordRequest.h"
#include "model/CreateUserPasswordResult.h"
#include "model/DescribeETLJobRequest.h"
#include "model/DescribeETLJobResult.h"
#include "model/ListClusterHostComponentRequest.h"
#include "model/ListClusterHostComponentResult.h"
#include "model/ListAlertDingDingGroupRequest.h"
#include "model/ListAlertDingDingGroupResult.h"
#include "model/CloneDataSourceRequest.h"
#include "model/CloneDataSourceResult.h"
#include "model/GetJobRunningTimeStatisticInfoRequest.h"
#include "model/GetJobRunningTimeStatisticInfoResult.h"
#include "model/ListFlowProjectClusterSettingRequest.h"
#include "model/ListFlowProjectClusterSettingResult.h"
#include "model/DescribeFlowProjectClusterSettingRequest.h"
#include "model/DescribeFlowProjectClusterSettingResult.h"
#include "model/SyncDataSourceSchemaTableRequest.h"
#include "model/SyncDataSourceSchemaTableResult.h"
#include "model/ListJobExecutionInstancesRequest.h"
#include "model/ListJobExecutionInstancesResult.h"
#include "model/TerminateClusterOperationRequest.h"
#include "model/TerminateClusterOperationResult.h"
#include "model/ListSlsLogstoreInfoRequest.h"
#include "model/ListSlsLogstoreInfoResult.h"
#include "model/MetastoreDropTableRequest.h"
#include "model/MetastoreDropTableResult.h"
#include "model/GetOpsCommandDetailRequest.h"
#include "model/GetOpsCommandDetailResult.h"
#include "model/ListClusterServiceRequest.h"
#include "model/ListClusterServiceResult.h"
#include "model/CreateScalingRuleRequest.h"
#include "model/CreateScalingRuleResult.h"
#include "model/CreateNavNodeRequest.h"
#include "model/CreateNavNodeResult.h"
#include "model/DeleteFlowProjectRequest.h"
#include "model/DeleteFlowProjectResult.h"
#include "model/ReleaseClusterRequest.h"
#include "model/ReleaseClusterResult.h"
#include "model/RetryCreateUserPasswordRequest.h"
#include "model/RetryCreateUserPasswordResult.h"
#include "model/ListSupportedServiceNameRequest.h"
#include "model/ListSupportedServiceNameResult.h"
#include "model/ListJobInstanceWorkersRequest.h"
#include "model/ListJobInstanceWorkersResult.h"
#include "model/DeleteNoteRequest.h"
#include "model/DeleteNoteResult.h"
#include "model/ListFlowClusterAllHostsRequest.h"
#include "model/ListFlowClusterAllHostsResult.h"
#include "model/MigrateClusterHostGroupHostRequest.h"
#include "model/MigrateClusterHostGroupHostResult.h"
#include "model/GetLogHistogramRequest.h"
#include "model/GetLogHistogramResult.h"
#include "model/MetastoreDeleteDataResourceRequest.h"
#include "model/MetastoreDeleteDataResourceResult.h"
#include "model/DeleteResourceQueueRequest.h"
#include "model/DeleteResourceQueueResult.h"
#include "model/DescribeClusterResourcePoolSchedulerTypeRequest.h"
#include "model/DescribeClusterResourcePoolSchedulerTypeResult.h"
#include "model/DescribeFlowCategoryTreeRequest.h"
#include "model/DescribeFlowCategoryTreeResult.h"
#include "model/ListServiceLogRequest.h"
#include "model/ListServiceLogResult.h"
#include "model/ListFlowNodeSqlResultRequest.h"
#include "model/ListFlowNodeSqlResultResult.h"
#include "model/ModifyFlowForWebRequest.h"
#include "model/ModifyFlowForWebResult.h"
#include "model/RunNoteParagraphsRequest.h"
#include "model/RunNoteParagraphsResult.h"
#include "model/ListJobExecutionPlanParamsRequest.h"
#include "model/ListJobExecutionPlanParamsResult.h"
#include "model/DescribeFlowNodeInstanceContainerLogRequest.h"
#include "model/DescribeFlowNodeInstanceContainerLogResult.h"
#include "model/CancelETLJobReleaseRequest.h"
#include "model/CancelETLJobReleaseResult.h"
#include "model/ListClusterTagRequest.h"
#include "model/ListClusterTagResult.h"
#include "model/GetUserOutputStatisticInfoRequest.h"
#include "model/GetUserOutputStatisticInfoResult.h"
#include "model/ModifyJobExecutionPlanFolderRequest.h"
#include "model/ModifyJobExecutionPlanFolderResult.h"
#include "model/DescribeClusterBasicInfoRequest.h"
#include "model/DescribeClusterBasicInfoResult.h"
#include "model/GetOpsCommandResultRequest.h"
#include "model/GetOpsCommandResultResult.h"
#include "model/ListEmrAvailableConfigRequest.h"
#include "model/ListEmrAvailableConfigResult.h"
#include "model/ModifyAlertUserGroupRequest.h"
#include "model/ModifyAlertUserGroupResult.h"
#include "model/MetastoreListDatabasesRequest.h"
#include "model/MetastoreListDatabasesResult.h"
#include "model/ListAlertUserGroupRequest.h"
#include "model/ListAlertUserGroupResult.h"
#include "model/ModifyResourceQueueRequest.h"
#include "model/ModifyResourceQueueResult.h"
#include "model/MetastoreSearchTablesRequest.h"
#include "model/MetastoreSearchTablesResult.h"
#include "model/ListFlowClusterRequest.h"
#include "model/ListFlowClusterResult.h"
#include "model/DescribeSecurityGroupAttributeRequest.h"
#include "model/DescribeSecurityGroupAttributeResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/ListFlowCategoryRequest.h"
#include "model/ListFlowCategoryResult.h"
#include "model/ModifyJobExecutionPlanParamRequest.h"
#include "model/ModifyJobExecutionPlanParamResult.h"
#include "model/ResizeClusterV2Request.h"
#include "model/ResizeClusterV2Result.h"
#include "model/DescribeExecutionPlanRequest.h"
#include "model/DescribeExecutionPlanResult.h"
#include "model/CreateFlowProjectUserRequest.h"
#include "model/CreateFlowProjectUserResult.h"
#include "model/CreateFlowCategoryRequest.h"
#include "model/CreateFlowCategoryResult.h"
#include "model/DeleteFlowProjectClusterSettingRequest.h"
#include "model/DeleteFlowProjectClusterSettingResult.h"
#include "model/DeleteExecutionPlanRequest.h"
#include "model/DeleteExecutionPlanResult.h"
#include "model/ListClusterServiceCustomActionSupportConfigRequest.h"
#include "model/ListClusterServiceCustomActionSupportConfigResult.h"
#include "model/MetastoreDescribeTableRequest.h"
#include "model/MetastoreDescribeTableResult.h"
#include "model/GetLogDownloadUrlRequest.h"
#include "model/GetLogDownloadUrlResult.h"
#include "model/ModifyFlowRequest.h"
#include "model/ModifyFlowResult.h"
#include "model/DescribeScalingRuleRequest.h"
#include "model/DescribeScalingRuleResult.h"
#include "model/RunParagraphRequest.h"
#include "model/RunParagraphResult.h"
#include "model/SyncDataSourceSchemaDatabaseRequest.h"
#include "model/SyncDataSourceSchemaDatabaseResult.h"
#include "model/CreateUserStatisticsRequest.h"
#include "model/CreateUserStatisticsResult.h"
#include "model/DescribeClusterServiceConfigRequest.h"
#include "model/DescribeClusterServiceConfigResult.h"
#include "model/ModifyFlowProjectClusterSettingRequest.h"
#include "model/ModifyFlowProjectClusterSettingResult.h"
#include "model/DeleteJobRequest.h"
#include "model/DeleteJobResult.h"
#include "model/ModifyExecutionPlanClusterInfoRequest.h"
#include "model/ModifyExecutionPlanClusterInfoResult.h"
#include "model/ModifyClusterNameRequest.h"
#include "model/ModifyClusterNameResult.h"
#include "model/MetastoreListTablesRequest.h"
#include "model/MetastoreListTablesResult.h"
#include "model/ListClusterOperationHostTaskRequest.h"
#include "model/ListClusterOperationHostTaskResult.h"
#include "model/ModifyResourcePoolRequest.h"
#include "model/ModifyResourcePoolResult.h"
#include "model/DescribeClusterScriptRequest.h"
#include "model/DescribeClusterScriptResult.h"
#include "model/ListRequiredServiceRequest.h"
#include "model/ListRequiredServiceResult.h"
#include "model/ListFlowProjectUserRequest.h"
#include "model/ListFlowProjectUserResult.h"
#include "model/SuspendExecutionPlanSchedulerRequest.h"
#include "model/SuspendExecutionPlanSchedulerResult.h"
#include "model/ModifyResourcePoolSchedulerTypeRequest.h"
#include "model/ModifyResourcePoolSchedulerTypeResult.h"
#include "model/ListOpsOperationTaskRequest.h"
#include "model/ListOpsOperationTaskResult.h"
#include "model/DeleteClusterHostGroupRequest.h"
#include "model/DeleteClusterHostGroupResult.h"
#include "model/DeleteNavNodeRequest.h"
#include "model/DeleteNavNodeResult.h"
#include "model/DescribeDataSourceSchemaTableRequest.h"
#include "model/DescribeDataSourceSchemaTableResult.h"
#include "model/UpdateProjectSettingRequest.h"
#include "model/UpdateProjectSettingResult.h"
#include "model/OperateExistsNodeClusterRequest.h"
#include "model/OperateExistsNodeClusterResult.h"
#include "model/DescribeNoteRequest.h"
#include "model/DescribeNoteResult.h"


namespace AlibabaCloud
{
	namespace Emr
	{
		class ALIBABACLOUD_EMR_EXPORT EmrClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateFlowResult> CreateFlowOutcome;
			typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowRequest&, const CreateFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSourceCommandResult> DescribeDataSourceCommandOutcome;
			typedef std::future<DescribeDataSourceCommandOutcome> DescribeDataSourceCommandOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeDataSourceCommandRequest&, const DescribeDataSourceCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceCommandAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::GetJobOutputStatisticInfoResult> GetJobOutputStatisticInfoOutcome;
			typedef std::future<GetJobOutputStatisticInfoOutcome> GetJobOutputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetJobOutputStatisticInfoRequest&, const GetJobOutputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobOutputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::ListResourcePoolResult> ListResourcePoolOutcome;
			typedef std::future<ListResourcePoolOutcome> ListResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListResourcePoolRequest&, const ListResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterHostResult> ListFlowClusterHostOutcome;
			typedef std::future<ListFlowClusterHostOutcome> ListFlowClusterHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterHostRequest&, const ListFlowClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterHostAsyncHandler;
			typedef Outcome<Error, Model::KillFlowResult> KillFlowOutcome;
			typedef std::future<KillFlowOutcome> KillFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::KillFlowRequest&, const KillFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillFlowAsyncHandler;
			typedef Outcome<Error, Model::RunOpsCommandResult> RunOpsCommandOutcome;
			typedef std::future<RunOpsCommandOutcome> RunOpsCommandOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunOpsCommandRequest&, const RunOpsCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunOpsCommandAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterStatisticsResult> DescribeClusterStatisticsOutcome;
			typedef std::future<DescribeClusterStatisticsOutcome> DescribeClusterStatisticsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterStatisticsRequest&, const DescribeClusterStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ModifyExecutionPlanJobInfoResult> ModifyExecutionPlanJobInfoOutcome;
			typedef std::future<ModifyExecutionPlanJobInfoOutcome> ModifyExecutionPlanJobInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyExecutionPlanJobInfoRequest&, const ModifyExecutionPlanJobInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExecutionPlanJobInfoAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterTemplateResult> DeleteClusterTemplateOutcome;
			typedef std::future<DeleteClusterTemplateOutcome> DeleteClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteClusterTemplateRequest&, const DeleteClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::CancelOrderResult> CancelOrderOutcome;
			typedef std::future<CancelOrderOutcome> CancelOrderOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CancelOrderRequest&, const CancelOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertDingDingGroupResult> CreateAlertDingDingGroupOutcome;
			typedef std::future<CreateAlertDingDingGroupOutcome> CreateAlertDingDingGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateAlertDingDingGroupRequest&, const CreateAlertDingDingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertDingDingGroupAsyncHandler;
			typedef Outcome<Error, Model::MetastoreUpdateKafkaTopicResult> MetastoreUpdateKafkaTopicOutcome;
			typedef std::future<MetastoreUpdateKafkaTopicOutcome> MetastoreUpdateKafkaTopicOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreUpdateKafkaTopicRequest&, const MetastoreUpdateKafkaTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreUpdateKafkaTopicAsyncHandler;
			typedef Outcome<Error, Model::StartFlowResult> StartFlowOutcome;
			typedef std::future<StartFlowOutcome> StartFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::StartFlowRequest&, const StartFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartFlowAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceConfigHistoryResult> ListClusterServiceConfigHistoryOutcome;
			typedef std::future<ListClusterServiceConfigHistoryOutcome> ListClusterServiceConfigHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceConfigHistoryRequest&, const ListClusterServiceConfigHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceConfigHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceSchemaTableResult> ListDataSourceSchemaTableOutcome;
			typedef std::future<ListDataSourceSchemaTableOutcome> ListDataSourceSchemaTableOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListDataSourceSchemaTableRequest&, const ListDataSourceSchemaTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceSchemaTableAsyncHandler;
			typedef Outcome<Error, Model::CreateJobResult> CreateJobOutcome;
			typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateJobRequest&, const CreateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
			typedef Outcome<Error, Model::AttachClusterForNoteResult> AttachClusterForNoteOutcome;
			typedef std::future<AttachClusterForNoteOutcome> AttachClusterForNoteOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AttachClusterForNoteRequest&, const AttachClusterForNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachClusterForNoteAsyncHandler;
			typedef Outcome<Error, Model::QueryAlarmHistoryResult> QueryAlarmHistoryOutcome;
			typedef std::future<QueryAlarmHistoryOutcome> QueryAlarmHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::QueryAlarmHistoryRequest&, const QueryAlarmHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAlarmHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListJobExecutionPlanHierarchyResult> ListJobExecutionPlanHierarchyOutcome;
			typedef std::future<ListJobExecutionPlanHierarchyOutcome> ListJobExecutionPlanHierarchyOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobExecutionPlanHierarchyRequest&, const ListJobExecutionPlanHierarchyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobExecutionPlanHierarchyAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionPlansResult> ListExecutionPlansOutcome;
			typedef std::future<ListExecutionPlansOutcome> ListExecutionPlansOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListExecutionPlansRequest&, const ListExecutionPlansOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionPlansAsyncHandler;
			typedef Outcome<Error, Model::ListJobMigrateInfoResult> ListJobMigrateInfoOutcome;
			typedef std::future<ListJobMigrateInfoOutcome> ListJobMigrateInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobMigrateInfoRequest&, const ListJobMigrateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobMigrateInfoAsyncHandler;
			typedef Outcome<Error, Model::CloneFlowResult> CloneFlowOutcome;
			typedef std::future<CloneFlowOutcome> CloneFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CloneFlowRequest&, const CloneFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneFlowAsyncHandler;
			typedef Outcome<Error, Model::ListEmrMainVersionResult> ListEmrMainVersionOutcome;
			typedef std::future<ListEmrMainVersionOutcome> ListEmrMainVersionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListEmrMainVersionRequest&, const ListEmrMainVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrMainVersionAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterTemplateResult> CreateClusterTemplateOutcome;
			typedef std::future<CreateClusterTemplateOutcome> CreateClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterTemplateRequest&, const CreateClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDropDatabaseResult> MetastoreDropDatabaseOutcome;
			typedef std::future<MetastoreDropDatabaseOutcome> MetastoreDropDatabaseOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDropDatabaseRequest&, const MetastoreDropDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDropDatabaseAsyncHandler;
			typedef Outcome<Error, Model::ListAlertContactsResult> ListAlertContactsOutcome;
			typedef std::future<ListAlertContactsOutcome> ListAlertContactsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListAlertContactsRequest&, const ListAlertContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlertContactsAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDescribeDatabaseResult> MetastoreDescribeDatabaseOutcome;
			typedef std::future<MetastoreDescribeDatabaseOutcome> MetastoreDescribeDatabaseOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDescribeDatabaseRequest&, const MetastoreDescribeDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDescribeDatabaseAsyncHandler;
			typedef Outcome<Error, Model::ListFlowInstanceResult> ListFlowInstanceOutcome;
			typedef std::future<ListFlowInstanceOutcome> ListFlowInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowInstanceRequest&, const ListFlowInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListJobExecutionInstanceTrendResult> ListJobExecutionInstanceTrendOutcome;
			typedef std::future<ListJobExecutionInstanceTrendOutcome> ListJobExecutionInstanceTrendOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobExecutionInstanceTrendRequest&, const ListJobExecutionInstanceTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobExecutionInstanceTrendAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDescribeTaskResult> MetastoreDescribeTaskOutcome;
			typedef std::future<MetastoreDescribeTaskOutcome> MetastoreDescribeTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDescribeTaskRequest&, const MetastoreDescribeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDescribeTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceConfigHistoryResult> DescribeClusterServiceConfigHistoryOutcome;
			typedef std::future<DescribeClusterServiceConfigHistoryOutcome> DescribeClusterServiceConfigHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceConfigHistoryRequest&, const DescribeClusterServiceConfigHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceConfigHistoryAsyncHandler;
			typedef Outcome<Error, Model::GetJobMigrateResultResult> GetJobMigrateResultOutcome;
			typedef std::future<GetJobMigrateResultOutcome> GetJobMigrateResultOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetJobMigrateResultRequest&, const GetJobMigrateResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobMigrateResultAsyncHandler;
			typedef Outcome<Error, Model::GetHdfsCapacityStatisticInfoResult> GetHdfsCapacityStatisticInfoOutcome;
			typedef std::future<GetHdfsCapacityStatisticInfoOutcome> GetHdfsCapacityStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetHdfsCapacityStatisticInfoRequest&, const GetHdfsCapacityStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHdfsCapacityStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::ResumeExecutionPlanSchedulerResult> ResumeExecutionPlanSchedulerOutcome;
			typedef std::future<ResumeExecutionPlanSchedulerOutcome> ResumeExecutionPlanSchedulerOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResumeExecutionPlanSchedulerRequest&, const ResumeExecutionPlanSchedulerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeExecutionPlanSchedulerAsyncHandler;
			typedef Outcome<Error, Model::ListFlowNodeInstanceResult> ListFlowNodeInstanceOutcome;
			typedef std::future<ListFlowNodeInstanceOutcome> ListFlowNodeInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowNodeInstanceRequest&, const ListFlowNodeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowNodeInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSourceResult> DescribeDataSourceOutcome;
			typedef std::future<DescribeDataSourceOutcome> DescribeDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeDataSourceRequest&, const DescribeDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowVariableCollectionResult> DescribeFlowVariableCollectionOutcome;
			typedef std::future<DescribeFlowVariableCollectionOutcome> DescribeFlowVariableCollectionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowVariableCollectionRequest&, const DescribeFlowVariableCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowVariableCollectionAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertUserGroupResult> CreateAlertUserGroupOutcome;
			typedef std::future<CreateAlertUserGroupOutcome> CreateAlertUserGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateAlertUserGroupRequest&, const CreateAlertUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingActivityResult> DescribeScalingActivityOutcome;
			typedef std::future<DescribeScalingActivityOutcome> DescribeScalingActivityOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingActivityRequest&, const DescribeScalingActivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingActivityAsyncHandler;
			typedef Outcome<Error, Model::ListEmrAvailableResourceResult> ListEmrAvailableResourceOutcome;
			typedef std::future<ListEmrAvailableResourceOutcome> ListEmrAvailableResourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListEmrAvailableResourceRequest&, const ListEmrAvailableResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrAvailableResourceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseETLJobResult> ReleaseETLJobOutcome;
			typedef std::future<ReleaseETLJobOutcome> ReleaseETLJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ReleaseETLJobRequest&, const ReleaseETLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseETLJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmrMainVersionResult> DescribeEmrMainVersionOutcome;
			typedef std::future<DescribeEmrMainVersionOutcome> DescribeEmrMainVersionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeEmrMainVersionRequest&, const DescribeEmrMainVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmrMainVersionAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceConfigTagResult> DescribeClusterServiceConfigTagOutcome;
			typedef std::future<DescribeClusterServiceConfigTagOutcome> DescribeClusterServiceConfigTagOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceConfigTagRequest&, const DescribeClusterServiceConfigTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceConfigTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteETLJobResult> DeleteETLJobOutcome;
			typedef std::future<DeleteETLJobOutcome> DeleteETLJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteETLJobRequest&, const DeleteETLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteETLJobAsyncHandler;
			typedef Outcome<Error, Model::RunClusterServiceActionResult> RunClusterServiceActionOutcome;
			typedef std::future<RunClusterServiceActionOutcome> RunClusterServiceActionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunClusterServiceActionRequest&, const RunClusterServiceActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunClusterServiceActionAsyncHandler;
			typedef Outcome<Error, Model::SuspendFlowResult> SuspendFlowOutcome;
			typedef std::future<SuspendFlowOutcome> SuspendFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SuspendFlowRequest&, const SuspendFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendFlowAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDataPreviewResult> MetastoreDataPreviewOutcome;
			typedef std::future<MetastoreDataPreviewOutcome> MetastoreDataPreviewOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDataPreviewRequest&, const MetastoreDataPreviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDataPreviewAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeSecurityGroupResult> AuthorizeSecurityGroupOutcome;
			typedef std::future<AuthorizeSecurityGroupOutcome> AuthorizeSecurityGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AuthorizeSecurityGroupRequest&, const AuthorizeSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterTemplateResult> ModifyClusterTemplateOutcome;
			typedef std::future<ModifyClusterTemplateOutcome> ModifyClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterTemplateRequest&, const ModifyClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::AttachPubIpResult> AttachPubIpOutcome;
			typedef std::future<AttachPubIpOutcome> AttachPubIpOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AttachPubIpRequest&, const AttachPubIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachPubIpAsyncHandler;
			typedef Outcome<Error, Model::RunExecutionPlanResult> RunExecutionPlanOutcome;
			typedef std::future<RunExecutionPlanOutcome> RunExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunExecutionPlanRequest&, const RunExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::ContextQueryLogResult> ContextQueryLogOutcome;
			typedef std::future<ContextQueryLogOutcome> ContextQueryLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ContextQueryLogRequest&, const ContextQueryLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContextQueryLogAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationHostResult> ListClusterOperationHostOutcome;
			typedef std::future<ListClusterOperationHostOutcome> ListClusterOperationHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationHostRequest&, const ListClusterOperationHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationHostAsyncHandler;
			typedef Outcome<Error, Model::ListClusterTemplatesResult> ListClusterTemplatesOutcome;
			typedef std::future<ListClusterTemplatesOutcome> ListClusterTemplatesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterTemplatesRequest&, const ListClusterTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowCategoryResult> DescribeFlowCategoryOutcome;
			typedef std::future<DescribeFlowCategoryOutcome> DescribeFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowCategoryRequest&, const DescribeFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowJobResult> ModifyFlowJobOutcome;
			typedef std::future<ModifyFlowJobOutcome> ModifyFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowJobRequest&, const ModifyFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowJobAsyncHandler;
			typedef Outcome<Error, Model::ListScalingRuleResult> ListScalingRuleOutcome;
			typedef std::future<ListScalingRuleOutcome> ListScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingRuleRequest&, const ListScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowResult> DeleteFlowOutcome;
			typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowRequest&, const DeleteFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSourceResult> DeleteDataSourceOutcome;
			typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteDataSourceRequest&, const DeleteDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourceAsyncHandler;
			typedef Outcome<Error, Model::RunETLJobResult> RunETLJobOutcome;
			typedef std::future<RunETLJobOutcome> RunETLJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunETLJobRequest&, const RunETLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunETLJobAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterHostGroupResult> CreateClusterHostGroupOutcome;
			typedef std::future<CreateClusterHostGroupOutcome> CreateClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterHostGroupRequest&, const CreateClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterTemplateResult> DescribeClusterTemplateOutcome;
			typedef std::future<DescribeClusterTemplateOutcome> DescribeClusterTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterTemplateRequest&, const DescribeClusterTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterTemplateAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingRuleResult> ModifyScalingRuleOutcome;
			typedef std::future<ModifyScalingRuleOutcome> ModifyScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyScalingRuleRequest&, const ModifyScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceComponentHealthInfoResult> ListClusterServiceComponentHealthInfoOutcome;
			typedef std::future<ListClusterServiceComponentHealthInfoOutcome> ListClusterServiceComponentHealthInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceComponentHealthInfoRequest&, const ListClusterServiceComponentHealthInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceComponentHealthInfoAsyncHandler;
			typedef Outcome<Error, Model::ListFlowProjectResult> ListFlowProjectOutcome;
			typedef std::future<ListFlowProjectOutcome> ListFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowProjectRequest&, const ListFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::RemoveClusterHostsResult> RemoveClusterHostsOutcome;
			typedef std::future<RemoveClusterHostsOutcome> RemoveClusterHostsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RemoveClusterHostsRequest&, const RemoveClusterHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveClusterHostsAsyncHandler;
			typedef Outcome<Error, Model::ListETLJobTriggerEntityResult> ListETLJobTriggerEntityOutcome;
			typedef std::future<ListETLJobTriggerEntityOutcome> ListETLJobTriggerEntityOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListETLJobTriggerEntityRequest&, const ListETLJobTriggerEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListETLJobTriggerEntityAsyncHandler;
			typedef Outcome<Error, Model::ModifyAlertDingDingGroupResult> ModifyAlertDingDingGroupOutcome;
			typedef std::future<ModifyAlertDingDingGroupOutcome> ModifyAlertDingDingGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyAlertDingDingGroupRequest&, const ModifyAlertDingDingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlertDingDingGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateETLJobResult> CreateETLJobOutcome;
			typedef std::future<CreateETLJobOutcome> CreateETLJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateETLJobRequest&, const CreateETLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateETLJobAsyncHandler;
			typedef Outcome<Error, Model::SaveParagraphResult> SaveParagraphOutcome;
			typedef std::future<SaveParagraphOutcome> SaveParagraphOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SaveParagraphRequest&, const SaveParagraphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveParagraphAsyncHandler;
			typedef Outcome<Error, Model::DeleteParagraphResult> DeleteParagraphOutcome;
			typedef std::future<DeleteParagraphOutcome> DeleteParagraphOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteParagraphRequest&, const DeleteParagraphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParagraphAsyncHandler;
			typedef Outcome<Error, Model::ListFlowJobHistoryResult> ListFlowJobHistoryOutcome;
			typedef std::future<ListFlowJobHistoryOutcome> ListFlowJobHistoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowJobHistoryRequest&, const ListFlowJobHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowJobHistoryAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterScriptResult> CreateClusterScriptOutcome;
			typedef std::future<CreateClusterScriptOutcome> CreateClusterScriptOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterScriptRequest&, const CreateClusterScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterScriptAsyncHandler;
			typedef Outcome<Error, Model::SubmitFlowResult> SubmitFlowOutcome;
			typedef std::future<SubmitFlowOutcome> SubmitFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SubmitFlowRequest&, const SubmitFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFlowAsyncHandler;
			typedef Outcome<Error, Model::GetQueueInputStatisticInfoResult> GetQueueInputStatisticInfoOutcome;
			typedef std::future<GetQueueInputStatisticInfoOutcome> GetQueueInputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetQueueInputStatisticInfoRequest&, const GetQueueInputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQueueInputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceQuickLinkResult> ListClusterServiceQuickLinkOutcome;
			typedef std::future<ListClusterServiceQuickLinkOutcome> ListClusterServiceQuickLinkOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceQuickLinkRequest&, const ListClusterServiceQuickLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceQuickLinkAsyncHandler;
			typedef Outcome<Error, Model::MetastoreUpdateTableResult> MetastoreUpdateTableOutcome;
			typedef std::future<MetastoreUpdateTableOutcome> MetastoreUpdateTableOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreUpdateTableRequest&, const MetastoreUpdateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreUpdateTableAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHostGroupResult> ListClusterHostGroupOutcome;
			typedef std::future<ListClusterHostGroupOutcome> ListClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterHostGroupRequest&, const ListClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::StopParagraphResult> StopParagraphOutcome;
			typedef std::future<StopParagraphOutcome> StopParagraphOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::StopParagraphRequest&, const StopParagraphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopParagraphAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDeleteKafkaTopicResult> MetastoreDeleteKafkaTopicOutcome;
			typedef std::future<MetastoreDeleteKafkaTopicOutcome> MetastoreDeleteKafkaTopicOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDeleteKafkaTopicRequest&, const MetastoreDeleteKafkaTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDeleteKafkaTopicAsyncHandler;
			typedef Outcome<Error, Model::ResumeFlowResult> ResumeFlowOutcome;
			typedef std::future<ResumeFlowOutcome> ResumeFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResumeFlowRequest&, const ResumeFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectByIdResult> DeleteFlowProjectByIdOutcome;
			typedef std::future<DeleteFlowProjectByIdOutcome> DeleteFlowProjectByIdOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectByIdRequest&, const DeleteFlowProjectByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectByIdAsyncHandler;
			typedef Outcome<Error, Model::SuspendExecutionPlanInstanceResult> SuspendExecutionPlanInstanceOutcome;
			typedef std::future<SuspendExecutionPlanInstanceOutcome> SuspendExecutionPlanInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SuspendExecutionPlanInstanceRequest&, const SuspendExecutionPlanInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendExecutionPlanInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetUserSubmissionStatisticInfoResult> GetUserSubmissionStatisticInfoOutcome;
			typedef std::future<GetUserSubmissionStatisticInfoOutcome> GetUserSubmissionStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetUserSubmissionStatisticInfoRequest&, const GetUserSubmissionStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserSubmissionStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingTaskGroupResult> DeleteScalingTaskGroupOutcome;
			typedef std::future<DeleteScalingTaskGroupOutcome> DeleteScalingTaskGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteScalingTaskGroupRequest&, const DeleteScalingTaskGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingTaskGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeParagraphResult> DescribeParagraphOutcome;
			typedef std::future<DescribeParagraphOutcome> DescribeParagraphOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeParagraphRequest&, const DescribeParagraphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParagraphAsyncHandler;
			typedef Outcome<Error, Model::MetastoreCreateDatabaseResult> MetastoreCreateDatabaseOutcome;
			typedef std::future<MetastoreCreateDatabaseOutcome> MetastoreCreateDatabaseOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreCreateDatabaseRequest&, const MetastoreCreateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreCreateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::ListFailureJobExecutionInstancesResult> ListFailureJobExecutionInstancesOutcome;
			typedef std::future<ListFailureJobExecutionInstancesOutcome> ListFailureJobExecutionInstancesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFailureJobExecutionInstancesRequest&, const ListFailureJobExecutionInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFailureJobExecutionInstancesAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowJobResult> DeleteFlowJobOutcome;
			typedef std::future<DeleteFlowJobOutcome> DeleteFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowJobRequest&, const DeleteFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowJobAsyncHandler;
			typedef Outcome<Error, Model::RefreshClusterResourcePoolResult> RefreshClusterResourcePoolOutcome;
			typedef std::future<RefreshClusterResourcePoolOutcome> RefreshClusterResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RefreshClusterResourcePoolRequest&, const RefreshClusterResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshClusterResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ModifyJobResult> ModifyJobOutcome;
			typedef std::future<ModifyJobOutcome> ModifyJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyJobRequest&, const ModifyJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJobAsyncHandler;
			typedef Outcome<Error, Model::MetastoreCreateDataResourceResult> MetastoreCreateDataResourceOutcome;
			typedef std::future<MetastoreCreateDataResourceOutcome> MetastoreCreateDataResourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreCreateDataResourceRequest&, const MetastoreCreateDataResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreCreateDataResourceAsyncHandler;
			typedef Outcome<Error, Model::KillETLJobInstanceResult> KillETLJobInstanceOutcome;
			typedef std::future<KillETLJobInstanceOutcome> KillETLJobInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::KillETLJobInstanceRequest&, const KillETLJobInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillETLJobInstanceAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowJobResult> DescribeFlowJobOutcome;
			typedef std::future<DescribeFlowJobOutcome> DescribeFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowJobRequest&, const DescribeFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowJobAsyncHandler;
			typedef Outcome<Error, Model::RetryExecutionPlanInstanceResult> RetryExecutionPlanInstanceOutcome;
			typedef std::future<RetryExecutionPlanInstanceOutcome> RetryExecutionPlanInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RetryExecutionPlanInstanceRequest&, const RetryExecutionPlanInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryExecutionPlanInstanceAsyncHandler;
			typedef Outcome<Error, Model::RerunFlowResult> RerunFlowOutcome;
			typedef std::future<RerunFlowOutcome> RerunFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RerunFlowRequest&, const RerunFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RerunFlowAsyncHandler;
			typedef Outcome<Error, Model::MetastoreRetryTaskResult> MetastoreRetryTaskOutcome;
			typedef std::future<MetastoreRetryTaskOutcome> MetastoreRetryTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreRetryTaskRequest&, const MetastoreRetryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreRetryTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterOperationHostTaskLogResult> DescribeClusterOperationHostTaskLogOutcome;
			typedef std::future<DescribeClusterOperationHostTaskLogOutcome> DescribeClusterOperationHostTaskLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterOperationHostTaskLogRequest&, const DescribeClusterOperationHostTaskLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterOperationHostTaskLogAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingTaskGroupResult> CreateScalingTaskGroupOutcome;
			typedef std::future<CreateScalingTaskGroupOutcome> CreateScalingTaskGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateScalingTaskGroupRequest&, const CreateScalingTaskGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingTaskGroupAsyncHandler;
			typedef Outcome<Error, Model::KillFlowJobResult> KillFlowJobOutcome;
			typedef std::future<KillFlowJobOutcome> KillFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::KillFlowJobRequest&, const KillFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillFlowJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowResult> DescribeFlowOutcome;
			typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowRequest&, const DescribeFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterV2Result> DescribeClusterV2Outcome;
			typedef std::future<DescribeClusterV2Outcome> DescribeClusterV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterV2Request&, const DescribeClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSourceSchemaDatabaseResult> DescribeDataSourceSchemaDatabaseOutcome;
			typedef std::future<DescribeDataSourceSchemaDatabaseOutcome> DescribeDataSourceSchemaDatabaseOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeDataSourceSchemaDatabaseRequest&, const DescribeDataSourceSchemaDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceSchemaDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeETLJobStageOutputSchemaResult> DescribeETLJobStageOutputSchemaOutcome;
			typedef std::future<DescribeETLJobStageOutputSchemaOutcome> DescribeETLJobStageOutputSchemaOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeETLJobStageOutputSchemaRequest&, const DescribeETLJobStageOutputSchemaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeETLJobStageOutputSchemaAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowProjectClusterSettingResult> CreateFlowProjectClusterSettingOutcome;
			typedef std::future<CreateFlowProjectClusterSettingOutcome> CreateFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowProjectClusterSettingRequest&, const CreateFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::ListClusterScriptsResult> ListClusterScriptsOutcome;
			typedef std::future<ListClusterScriptsOutcome> ListClusterScriptsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterScriptsRequest&, const ListClusterScriptsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterScriptsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowInstanceResult> DescribeFlowInstanceOutcome;
			typedef std::future<DescribeFlowInstanceOutcome> DescribeFlowInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowInstanceRequest&, const DescribeFlowInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateDataSourceResult> CreateDataSourceOutcome;
			typedef std::future<CreateDataSourceOutcome> CreateDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateDataSourceRequest&, const CreateDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataSourceAsyncHandler;
			typedef Outcome<Error, Model::GetUserInputStatisticInfoResult> GetUserInputStatisticInfoOutcome;
			typedef std::future<GetUserInputStatisticInfoOutcome> GetUserInputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetUserInputStatisticInfoRequest&, const GetUserInputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserInputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifyAlertContactResult> ModifyAlertContactOutcome;
			typedef std::future<ModifyAlertContactOutcome> ModifyAlertContactOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyAlertContactRequest&, const ModifyAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlertContactAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertContactResult> CreateAlertContactOutcome;
			typedef std::future<CreateAlertContactOutcome> CreateAlertContactOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateAlertContactRequest&, const CreateAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertContactAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertDingDingGroupsResult> DeleteAlertDingDingGroupsOutcome;
			typedef std::future<DeleteAlertDingDingGroupsOutcome> DeleteAlertDingDingGroupsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteAlertDingDingGroupsRequest&, const DeleteAlertDingDingGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertDingDingGroupsAsyncHandler;
			typedef Outcome<Error, Model::MetastoreModifyDataResourceResult> MetastoreModifyDataResourceOutcome;
			typedef std::future<MetastoreModifyDataResourceOutcome> MetastoreModifyDataResourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreModifyDataResourceRequest&, const MetastoreModifyDataResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreModifyDataResourceAsyncHandler;
			typedef Outcome<Error, Model::ListExecutePlanMigrateInfoResult> ListExecutePlanMigrateInfoOutcome;
			typedef std::future<ListExecutePlanMigrateInfoOutcome> ListExecutePlanMigrateInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListExecutePlanMigrateInfoRequest&, const ListExecutePlanMigrateInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutePlanMigrateInfoAsyncHandler;
			typedef Outcome<Error, Model::GetOpsCommandResultOnceResult> GetOpsCommandResultOnceOutcome;
			typedef std::future<GetOpsCommandResultOnceOutcome> GetOpsCommandResultOnceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetOpsCommandResultOnceRequest&, const GetOpsCommandResultOnceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpsCommandResultOnceAsyncHandler;
			typedef Outcome<Error, Model::ResumeExecutionPlanInstanceResult> ResumeExecutionPlanInstanceOutcome;
			typedef std::future<ResumeExecutionPlanInstanceOutcome> ResumeExecutionPlanInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResumeExecutionPlanInstanceRequest&, const ResumeExecutionPlanInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeExecutionPlanInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateParagraphResult> CreateParagraphOutcome;
			typedef std::future<CreateParagraphOutcome> CreateParagraphOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateParagraphRequest&, const CreateParagraphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateParagraphAsyncHandler;
			typedef Outcome<Error, Model::GetJobInputStatisticInfoResult> GetJobInputStatisticInfoOutcome;
			typedef std::future<GetJobInputStatisticInfoOutcome> GetJobInputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetJobInputStatisticInfoRequest&, const GetJobInputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobInputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectUserResult> DeleteFlowProjectUserOutcome;
			typedef std::future<DeleteFlowProjectUserOutcome> DeleteFlowProjectUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectUserRequest&, const DeleteFlowProjectUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectUserAsyncHandler;
			typedef Outcome<Error, Model::CreateResourceQueueResult> CreateResourceQueueOutcome;
			typedef std::future<CreateResourceQueueOutcome> CreateResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateResourceQueueRequest&, const CreateResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::ListDependedServiceResult> ListDependedServiceOutcome;
			typedef std::future<ListDependedServiceOutcome> ListDependedServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListDependedServiceRequest&, const ListDependedServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDependedServiceAsyncHandler;
			typedef Outcome<Error, Model::CloneETLJobResult> CloneETLJobOutcome;
			typedef std::future<CloneETLJobOutcome> CloneETLJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CloneETLJobRequest&, const CloneETLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneETLJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertContactsResult> DeleteAlertContactsOutcome;
			typedef std::future<DeleteAlertContactsOutcome> DeleteAlertContactsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteAlertContactsRequest&, const DeleteAlertContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertContactsAsyncHandler;
			typedef Outcome<Error, Model::MetastoreListTablePartitionResult> MetastoreListTablePartitionOutcome;
			typedef std::future<MetastoreListTablePartitionOutcome> MetastoreListTablePartitionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreListTablePartitionRequest&, const MetastoreListTablePartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreListTablePartitionAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterV2Result> CreateClusterV2Outcome;
			typedef std::future<CreateClusterV2Outcome> CreateClusterV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterV2Request&, const CreateClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterV2AsyncHandler;
			typedef Outcome<Error, Model::ModifyExecutionPlanScheduleInfoResult> ModifyExecutionPlanScheduleInfoOutcome;
			typedef std::future<ModifyExecutionPlanScheduleInfoOutcome> ModifyExecutionPlanScheduleInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyExecutionPlanScheduleInfoRequest&, const ModifyExecutionPlanScheduleInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExecutionPlanScheduleInfoAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHostResult> ListClusterHostOutcome;
			typedef std::future<ListClusterHostOutcome> ListClusterHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterHostRequest&, const ListClusterHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHostAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceResult> DescribeClusterServiceOutcome;
			typedef std::future<DescribeClusterServiceOutcome> DescribeClusterServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceRequest&, const DescribeClusterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceAsyncHandler;
			typedef Outcome<Error, Model::GetQueueOutputStatisticInfoResult> GetQueueOutputStatisticInfoOutcome;
			typedef std::future<GetQueueOutputStatisticInfoOutcome> GetQueueOutputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetQueueOutputStatisticInfoRequest&, const GetQueueOutputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQueueOutputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::CreateExecutionPlanResult> CreateExecutionPlanOutcome;
			typedef std::future<CreateExecutionPlanOutcome> CreateExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateExecutionPlanRequest&, const CreateExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::MetastoreCreateTableResult> MetastoreCreateTableOutcome;
			typedef std::future<MetastoreCreateTableOutcome> MetastoreCreateTableOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreCreateTableRequest&, const MetastoreCreateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreCreateTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertUserGroupsResult> DeleteAlertUserGroupsOutcome;
			typedef std::future<DeleteAlertUserGroupsOutcome> DeleteAlertUserGroupsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteAlertUserGroupsRequest&, const DeleteAlertUserGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertUserGroupsAsyncHandler;
			typedef Outcome<Error, Model::MetastoreListKafkaConsumerGroupResult> MetastoreListKafkaConsumerGroupOutcome;
			typedef std::future<MetastoreListKafkaConsumerGroupOutcome> MetastoreListKafkaConsumerGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreListKafkaConsumerGroupRequest&, const MetastoreListKafkaConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreListKafkaConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::CommonApiWhiteListResult> CommonApiWhiteListOutcome;
			typedef std::future<CommonApiWhiteListOutcome> CommonApiWhiteListOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CommonApiWhiteListRequest&, const CommonApiWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommonApiWhiteListAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowForWebResult> CreateFlowForWebOutcome;
			typedef std::future<CreateFlowForWebOutcome> CreateFlowForWebOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowForWebRequest&, const CreateFlowForWebOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowForWebAsyncHandler;
			typedef Outcome<Error, Model::DeleteScalingRuleResult> DeleteScalingRuleOutcome;
			typedef std::future<DeleteScalingRuleOutcome> DeleteScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteScalingRuleRequest&, const DeleteScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::QuerySlsMetricDataResult> QuerySlsMetricDataOutcome;
			typedef std::future<QuerySlsMetricDataOutcome> QuerySlsMetricDataOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::QuerySlsMetricDataRequest&, const QuerySlsMetricDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySlsMetricDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowJobStatisticResult> DescribeFlowJobStatisticOutcome;
			typedef std::future<DescribeFlowJobStatisticOutcome> DescribeFlowJobStatisticOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowJobStatisticRequest&, const DescribeFlowJobStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowJobStatisticAsyncHandler;
			typedef Outcome<Error, Model::MetastoreListKafkaTopicResult> MetastoreListKafkaTopicOutcome;
			typedef std::future<MetastoreListKafkaTopicOutcome> MetastoreListKafkaTopicOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreListKafkaTopicRequest&, const MetastoreListKafkaTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreListKafkaTopicAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobResult> DescribeJobOutcome;
			typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeJobRequest&, const DescribeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterHostGroupResult> ReleaseClusterHostGroupOutcome;
			typedef std::future<ReleaseClusterHostGroupOutcome> ReleaseClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ReleaseClusterHostGroupRequest&, const ReleaseClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::ListOpsOperationResult> ListOpsOperationOutcome;
			typedef std::future<ListOpsOperationOutcome> ListOpsOperationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListOpsOperationRequest&, const ListOpsOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOpsOperationAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowProjectResult> ModifyFlowProjectOutcome;
			typedef std::future<ModifyFlowProjectOutcome> ModifyFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowProjectRequest&, const ModifyFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterHostGroupResult> ModifyClusterHostGroupOutcome;
			typedef std::future<ModifyClusterHostGroupOutcome> ModifyClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterHostGroupRequest&, const ModifyClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserStatisticsResult> DescribeUserStatisticsOutcome;
			typedef std::future<DescribeUserStatisticsOutcome> DescribeUserStatisticsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeUserStatisticsRequest&, const DescribeUserStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowNodeInstanceLauncherLogResult> DescribeFlowNodeInstanceLauncherLogOutcome;
			typedef std::future<DescribeFlowNodeInstanceLauncherLogOutcome> DescribeFlowNodeInstanceLauncherLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowNodeInstanceLauncherLogRequest&, const DescribeFlowNodeInstanceLauncherLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowNodeInstanceLauncherLogAsyncHandler;
			typedef Outcome<Error, Model::ListFlowResult> ListFlowOutcome;
			typedef std::future<ListFlowOutcome> ListFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowRequest&, const ListFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterScriptResult> DeleteClusterScriptOutcome;
			typedef std::future<DeleteClusterScriptOutcome> DeleteClusterScriptOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteClusterScriptRequest&, const DeleteClusterScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterScriptAsyncHandler;
			typedef Outcome<Error, Model::ListResourceQueueResult> ListResourceQueueOutcome;
			typedef std::future<ListResourceQueueOutcome> ListResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListResourceQueueRequest&, const ListResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationResult> ListClusterOperationOutcome;
			typedef std::future<ListClusterOperationOutcome> ListClusterOperationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationRequest&, const ListClusterOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationAsyncHandler;
			typedef Outcome<Error, Model::KillExecutionPlanInstanceResult> KillExecutionPlanInstanceOutcome;
			typedef std::future<KillExecutionPlanInstanceOutcome> KillExecutionPlanInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::KillExecutionPlanInstanceRequest&, const KillExecutionPlanInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillExecutionPlanInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateNavNodeResult> UpdateNavNodeOutcome;
			typedef std::future<UpdateNavNodeOutcome> UpdateNavNodeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateNavNodeRequest&, const UpdateNavNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNavNodeAsyncHandler;
			typedef Outcome<Error, Model::CloneFlowJobResult> CloneFlowJobOutcome;
			typedef std::future<CloneFlowJobOutcome> CloneFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CloneFlowJobRequest&, const CloneFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneFlowJobAsyncHandler;
			typedef Outcome<Error, Model::CreateResourcePoolResult> CreateResourcePoolOutcome;
			typedef std::future<CreateResourcePoolOutcome> CreateResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateResourcePoolRequest&, const CreateResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowJobResult> CreateFlowJobOutcome;
			typedef std::future<CreateFlowJobOutcome> CreateFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowJobRequest&, const CreateFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowCategoryResult> DeleteFlowCategoryOutcome;
			typedef std::future<DeleteFlowCategoryOutcome> DeleteFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowCategoryRequest&, const DeleteFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::MigrateJobsResult> MigrateJobsOutcome;
			typedef std::future<MigrateJobsOutcome> MigrateJobsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MigrateJobsRequest&, const MigrateJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateJobsAsyncHandler;
			typedef Outcome<Error, Model::KillExecutionJobInstanceResult> KillExecutionJobInstanceOutcome;
			typedef std::future<KillExecutionJobInstanceOutcome> KillExecutionJobInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::KillExecutionJobInstanceRequest&, const KillExecutionJobInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillExecutionJobInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterWithTemplateResult> CreateClusterWithTemplateOutcome;
			typedef std::future<CreateClusterWithTemplateOutcome> CreateClusterWithTemplateOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateClusterWithTemplateRequest&, const CreateClusterWithTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterWithTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterAllResult> ListFlowClusterAllOutcome;
			typedef std::future<ListFlowClusterAllOutcome> ListFlowClusterAllOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterAllRequest&, const ListFlowClusterAllOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterAllAsyncHandler;
			typedef Outcome<Error, Model::ModifyExecutionPlanResult> ModifyExecutionPlanOutcome;
			typedef std::future<ModifyExecutionPlanOutcome> ModifyExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyExecutionPlanRequest&, const ModifyExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::ListUserStatisticsResult> ListUserStatisticsOutcome;
			typedef std::future<ListUserStatisticsOutcome> ListUserStatisticsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListUserStatisticsRequest&, const ListUserStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserStatisticsAsyncHandler;
			typedef Outcome<Error, Model::AddClusterServiceResult> AddClusterServiceOutcome;
			typedef std::future<AddClusterServiceOutcome> AddClusterServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::AddClusterServiceRequest&, const AddClusterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddClusterServiceAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowCategoryResult> ModifyFlowCategoryOutcome;
			typedef std::future<ModifyFlowCategoryOutcome> ModifyFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowCategoryRequest&, const ModifyFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::QueryAlarmRulesResult> QueryAlarmRulesOutcome;
			typedef std::future<QueryAlarmRulesOutcome> QueryAlarmRulesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::QueryAlarmRulesRequest&, const QueryAlarmRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAlarmRulesAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterServiceConfigResult> ModifyClusterServiceConfigOutcome;
			typedef std::future<ModifyClusterServiceConfigOutcome> ModifyClusterServiceConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterServiceConfigRequest&, const ModifyClusterServiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterServiceConfigAsyncHandler;
			typedef Outcome<Error, Model::ListNotesResult> ListNotesOutcome;
			typedef std::future<ListNotesOutcome> ListNotesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListNotesRequest&, const ListNotesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNotesAsyncHandler;
			typedef Outcome<Error, Model::MetastoreListDataResourcesResult> MetastoreListDataResourcesOutcome;
			typedef std::future<MetastoreListDataResourcesOutcome> MetastoreListDataResourcesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreListDataResourcesRequest&, const MetastoreListDataResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreListDataResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateETLJobResult> UpdateETLJobOutcome;
			typedef std::future<UpdateETLJobOutcome> UpdateETLJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateETLJobRequest&, const UpdateETLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateETLJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingTaskGroupResult> DescribeScalingTaskGroupOutcome;
			typedef std::future<DescribeScalingTaskGroupOutcome> DescribeScalingTaskGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingTaskGroupRequest&, const DescribeScalingTaskGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingTaskGroupAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDescribeDataSourceResult> MetastoreDescribeDataSourceOutcome;
			typedef std::future<MetastoreDescribeDataSourceOutcome> MetastoreDescribeDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDescribeDataSourceRequest&, const MetastoreDescribeDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDescribeDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionPlanInstanceTrendResult> ListExecutionPlanInstanceTrendOutcome;
			typedef std::future<ListExecutionPlanInstanceTrendOutcome> ListExecutionPlanInstanceTrendOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListExecutionPlanInstanceTrendRequest&, const ListExecutionPlanInstanceTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionPlanInstanceTrendAsyncHandler;
			typedef Outcome<Error, Model::ResolveETLJobSqlSchemaResult> ResolveETLJobSqlSchemaOutcome;
			typedef std::future<ResolveETLJobSqlSchemaOutcome> ResolveETLJobSqlSchemaOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResolveETLJobSqlSchemaRequest&, const ResolveETLJobSqlSchemaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResolveETLJobSqlSchemaAsyncHandler;
			typedef Outcome<Error, Model::UpdateETLJobStageResult> UpdateETLJobStageOutcome;
			typedef std::future<UpdateETLJobStageOutcome> UpdateETLJobStageOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateETLJobStageRequest&, const UpdateETLJobStageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateETLJobStageAsyncHandler;
			typedef Outcome<Error, Model::SearchLogResult> SearchLogOutcome;
			typedef std::future<SearchLogOutcome> SearchLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SearchLogRequest&, const SearchLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchLogAsyncHandler;
			typedef Outcome<Error, Model::RenderResourcePoolXmlResult> RenderResourcePoolXmlOutcome;
			typedef std::future<RenderResourcePoolXmlOutcome> RenderResourcePoolXmlOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RenderResourcePoolXmlRequest&, const RenderResourcePoolXmlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenderResourcePoolXmlAsyncHandler;
			typedef Outcome<Error, Model::UpdateDataSourceResult> UpdateDataSourceOutcome;
			typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateDataSourceRequest&, const UpdateDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingTaskGroupResult> ModifyScalingTaskGroupOutcome;
			typedef std::future<ModifyScalingTaskGroupOutcome> ModifyScalingTaskGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyScalingTaskGroupRequest&, const ModifyScalingTaskGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingTaskGroupAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceSchemaDatabaseResult> ListDataSourceSchemaDatabaseOutcome;
			typedef std::future<ListDataSourceSchemaDatabaseOutcome> ListDataSourceSchemaDatabaseOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListDataSourceSchemaDatabaseRequest&, const ListDataSourceSchemaDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceSchemaDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowProjectResult> DescribeFlowProjectOutcome;
			typedef std::future<DescribeFlowProjectOutcome> DescribeFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowProjectRequest&, const DescribeFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateUsersResult> CreateUsersOutcome;
			typedef std::future<CreateUsersOutcome> CreateUsersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateUsersRequest&, const CreateUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsersAsyncHandler;
			typedef Outcome<Error, Model::CheckDataSourceResult> CheckDataSourceOutcome;
			typedef std::future<CheckDataSourceOutcome> CheckDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CheckDataSourceRequest&, const CheckDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ListScalingActivityResult> ListScalingActivityOutcome;
			typedef std::future<ListScalingActivityOutcome> ListScalingActivityOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingActivityRequest&, const ListScalingActivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingActivityAsyncHandler;
			typedef Outcome<Error, Model::CreateNoteResult> CreateNoteOutcome;
			typedef std::future<CreateNoteOutcome> CreateNoteOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateNoteRequest&, const CreateNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNoteAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourcePoolResult> DeleteResourcePoolOutcome;
			typedef std::future<DeleteResourcePoolOutcome> DeleteResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteResourcePoolRequest&, const DeleteResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::ListFlowJobResult> ListFlowJobOutcome;
			typedef std::future<ListFlowJobOutcome> ListFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowJobRequest&, const ListFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowJobAsyncHandler;
			typedef Outcome<Error, Model::RetryExecutionPlanResult> RetryExecutionPlanOutcome;
			typedef std::future<RetryExecutionPlanOutcome> RetryExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RetryExecutionPlanRequest&, const RetryExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::DescribeAvailableInstanceTypeResult> DescribeAvailableInstanceTypeOutcome;
			typedef std::future<DescribeAvailableInstanceTypeOutcome> DescribeAvailableInstanceTypeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeAvailableInstanceTypeRequest&, const DescribeAvailableInstanceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableInstanceTypeAsyncHandler;
			typedef Outcome<Error, Model::MetastoreUpdateKafkaTopicBatchResult> MetastoreUpdateKafkaTopicBatchOutcome;
			typedef std::future<MetastoreUpdateKafkaTopicBatchOutcome> MetastoreUpdateKafkaTopicBatchOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreUpdateKafkaTopicBatchRequest&, const MetastoreUpdateKafkaTopicBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreUpdateKafkaTopicBatchAsyncHandler;
			typedef Outcome<Error, Model::ListNavSubTreeResult> ListNavSubTreeOutcome;
			typedef std::future<ListNavSubTreeOutcome> ListNavSubTreeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListNavSubTreeRequest&, const ListNavSubTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNavSubTreeAsyncHandler;
			typedef Outcome<Error, Model::ListFlowNodeInstanceContainerStatusResult> ListFlowNodeInstanceContainerStatusOutcome;
			typedef std::future<ListFlowNodeInstanceContainerStatusOutcome> ListFlowNodeInstanceContainerStatusOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowNodeInstanceContainerStatusRequest&, const ListFlowNodeInstanceContainerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowNodeInstanceContainerStatusAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowProjectResult> CreateFlowProjectOutcome;
			typedef std::future<CreateFlowProjectOutcome> CreateFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowProjectRequest&, const CreateFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::MetastoreListDataSourceResult> MetastoreListDataSourceOutcome;
			typedef std::future<MetastoreListDataSourceOutcome> MetastoreListDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreListDataSourceRequest&, const MetastoreListDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreListDataSourceAsyncHandler;
			typedef Outcome<Error, Model::GetSupportedOpsCommandResult> GetSupportedOpsCommandOutcome;
			typedef std::future<GetSupportedOpsCommandOutcome> GetSupportedOpsCommandOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetSupportedOpsCommandRequest&, const GetSupportedOpsCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSupportedOpsCommandAsyncHandler;
			typedef Outcome<Error, Model::DescribeETLJobSqlSchemaResult> DescribeETLJobSqlSchemaOutcome;
			typedef std::future<DescribeETLJobSqlSchemaOutcome> DescribeETLJobSqlSchemaOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeETLJobSqlSchemaRequest&, const DescribeETLJobSqlSchemaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeETLJobSqlSchemaAsyncHandler;
			typedef Outcome<Error, Model::CreateVerificationCodeResult> CreateVerificationCodeOutcome;
			typedef std::future<CreateVerificationCodeOutcome> CreateVerificationCodeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateVerificationCodeRequest&, const CreateVerificationCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerificationCodeAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionPlanInstancesResult> ListExecutionPlanInstancesOutcome;
			typedef std::future<ListExecutionPlanInstancesOutcome> ListExecutionPlanInstancesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListExecutionPlanInstancesRequest&, const ListExecutionPlanInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionPlanInstancesAsyncHandler;
			typedef Outcome<Error, Model::DetachClusterForNoteResult> DetachClusterForNoteOutcome;
			typedef std::future<DetachClusterForNoteOutcome> DetachClusterForNoteOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DetachClusterForNoteRequest&, const DetachClusterForNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachClusterForNoteAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDescribeKafkaConsumerGroupResult> MetastoreDescribeKafkaConsumerGroupOutcome;
			typedef std::future<MetastoreDescribeKafkaConsumerGroupOutcome> MetastoreDescribeKafkaConsumerGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDescribeKafkaConsumerGroupRequest&, const MetastoreDescribeKafkaConsumerGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDescribeKafkaConsumerGroupAsyncHandler;
			typedef Outcome<Error, Model::MetastoreListTaskResult> MetastoreListTaskOutcome;
			typedef std::future<MetastoreListTaskOutcome> MetastoreListTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreListTaskRequest&, const MetastoreListTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreListTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterOpLogResult> DescribeClusterOpLogOutcome;
			typedef std::future<DescribeClusterOpLogOutcome> DescribeClusterOpLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterOpLogRequest&, const DescribeClusterOpLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterOpLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowNodeInstanceResult> DescribeFlowNodeInstanceOutcome;
			typedef std::future<DescribeFlowNodeInstanceOutcome> DescribeFlowNodeInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowNodeInstanceRequest&, const DescribeFlowNodeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowNodeInstanceAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDescribeKafkaTopicResult> MetastoreDescribeKafkaTopicOutcome;
			typedef std::future<MetastoreDescribeKafkaTopicOutcome> MetastoreDescribeKafkaTopicOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDescribeKafkaTopicRequest&, const MetastoreDescribeKafkaTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDescribeKafkaTopicAsyncHandler;
			typedef Outcome<Error, Model::ListScalingTaskGroupResult> ListScalingTaskGroupOutcome;
			typedef std::future<ListScalingTaskGroupOutcome> ListScalingTaskGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListScalingTaskGroupRequest&, const ListScalingTaskGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScalingTaskGroupAsyncHandler;
			typedef Outcome<Error, Model::GetQueueSubmissionStatisticInfoResult> GetQueueSubmissionStatisticInfoOutcome;
			typedef std::future<GetQueueSubmissionStatisticInfoOutcome> GetQueueSubmissionStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetQueueSubmissionStatisticInfoRequest&, const GetQueueSubmissionStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQueueSubmissionStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceResult> ListDataSourceOutcome;
			typedef std::future<ListDataSourceOutcome> ListDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListDataSourceRequest&, const ListDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserStatisticsResult> ModifyUserStatisticsOutcome;
			typedef std::future<ModifyUserStatisticsOutcome> ModifyUserStatisticsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyUserStatisticsRequest&, const ModifyUserStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserStatisticsAsyncHandler;
			typedef Outcome<Error, Model::MetastoreCreateKafkaTopicResult> MetastoreCreateKafkaTopicOutcome;
			typedef std::future<MetastoreCreateKafkaTopicOutcome> MetastoreCreateKafkaTopicOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreCreateKafkaTopicRequest&, const MetastoreCreateKafkaTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreCreateKafkaTopicAsyncHandler;
			typedef Outcome<Error, Model::ListETLJobInstanceResult> ListETLJobInstanceOutcome;
			typedef std::future<ListETLJobInstanceOutcome> ListETLJobInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListETLJobInstanceRequest&, const ListETLJobInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListETLJobInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowVariableCollectionResult> ModifyFlowVariableCollectionOutcome;
			typedef std::future<ModifyFlowVariableCollectionOutcome> ModifyFlowVariableCollectionOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowVariableCollectionRequest&, const ModifyFlowVariableCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowVariableCollectionAsyncHandler;
			typedef Outcome<Error, Model::DescribeETLJobInstanceResult> DescribeETLJobInstanceOutcome;
			typedef std::future<DescribeETLJobInstanceOutcome> DescribeETLJobInstanceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeETLJobInstanceRequest&, const DescribeETLJobInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeETLJobInstanceAsyncHandler;
			typedef Outcome<Error, Model::ModifyExecutionPlanBasicInfoResult> ModifyExecutionPlanBasicInfoOutcome;
			typedef std::future<ModifyExecutionPlanBasicInfoOutcome> ModifyExecutionPlanBasicInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyExecutionPlanBasicInfoRequest&, const ModifyExecutionPlanBasicInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExecutionPlanBasicInfoAsyncHandler;
			typedef Outcome<Error, Model::SubmitFlowJobResult> SubmitFlowJobOutcome;
			typedef std::future<SubmitFlowJobOutcome> SubmitFlowJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SubmitFlowJobRequest&, const SubmitFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFlowJobAsyncHandler;
			typedef Outcome<Error, Model::CreateUserPasswordResult> CreateUserPasswordOutcome;
			typedef std::future<CreateUserPasswordOutcome> CreateUserPasswordOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateUserPasswordRequest&, const CreateUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::DescribeETLJobResult> DescribeETLJobOutcome;
			typedef std::future<DescribeETLJobOutcome> DescribeETLJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeETLJobRequest&, const DescribeETLJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeETLJobAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHostComponentResult> ListClusterHostComponentOutcome;
			typedef std::future<ListClusterHostComponentOutcome> ListClusterHostComponentOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterHostComponentRequest&, const ListClusterHostComponentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHostComponentAsyncHandler;
			typedef Outcome<Error, Model::ListAlertDingDingGroupResult> ListAlertDingDingGroupOutcome;
			typedef std::future<ListAlertDingDingGroupOutcome> ListAlertDingDingGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListAlertDingDingGroupRequest&, const ListAlertDingDingGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlertDingDingGroupAsyncHandler;
			typedef Outcome<Error, Model::CloneDataSourceResult> CloneDataSourceOutcome;
			typedef std::future<CloneDataSourceOutcome> CloneDataSourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CloneDataSourceRequest&, const CloneDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneDataSourceAsyncHandler;
			typedef Outcome<Error, Model::GetJobRunningTimeStatisticInfoResult> GetJobRunningTimeStatisticInfoOutcome;
			typedef std::future<GetJobRunningTimeStatisticInfoOutcome> GetJobRunningTimeStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetJobRunningTimeStatisticInfoRequest&, const GetJobRunningTimeStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobRunningTimeStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::ListFlowProjectClusterSettingResult> ListFlowProjectClusterSettingOutcome;
			typedef std::future<ListFlowProjectClusterSettingOutcome> ListFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowProjectClusterSettingRequest&, const ListFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowProjectClusterSettingResult> DescribeFlowProjectClusterSettingOutcome;
			typedef std::future<DescribeFlowProjectClusterSettingOutcome> DescribeFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowProjectClusterSettingRequest&, const DescribeFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::SyncDataSourceSchemaTableResult> SyncDataSourceSchemaTableOutcome;
			typedef std::future<SyncDataSourceSchemaTableOutcome> SyncDataSourceSchemaTableOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SyncDataSourceSchemaTableRequest&, const SyncDataSourceSchemaTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncDataSourceSchemaTableAsyncHandler;
			typedef Outcome<Error, Model::ListJobExecutionInstancesResult> ListJobExecutionInstancesOutcome;
			typedef std::future<ListJobExecutionInstancesOutcome> ListJobExecutionInstancesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobExecutionInstancesRequest&, const ListJobExecutionInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobExecutionInstancesAsyncHandler;
			typedef Outcome<Error, Model::TerminateClusterOperationResult> TerminateClusterOperationOutcome;
			typedef std::future<TerminateClusterOperationOutcome> TerminateClusterOperationOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::TerminateClusterOperationRequest&, const TerminateClusterOperationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TerminateClusterOperationAsyncHandler;
			typedef Outcome<Error, Model::ListSlsLogstoreInfoResult> ListSlsLogstoreInfoOutcome;
			typedef std::future<ListSlsLogstoreInfoOutcome> ListSlsLogstoreInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListSlsLogstoreInfoRequest&, const ListSlsLogstoreInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSlsLogstoreInfoAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDropTableResult> MetastoreDropTableOutcome;
			typedef std::future<MetastoreDropTableOutcome> MetastoreDropTableOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDropTableRequest&, const MetastoreDropTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDropTableAsyncHandler;
			typedef Outcome<Error, Model::GetOpsCommandDetailResult> GetOpsCommandDetailOutcome;
			typedef std::future<GetOpsCommandDetailOutcome> GetOpsCommandDetailOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetOpsCommandDetailRequest&, const GetOpsCommandDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpsCommandDetailAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceResult> ListClusterServiceOutcome;
			typedef std::future<ListClusterServiceOutcome> ListClusterServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceRequest&, const ListClusterServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateScalingRuleResult> CreateScalingRuleOutcome;
			typedef std::future<CreateScalingRuleOutcome> CreateScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateScalingRuleRequest&, const CreateScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateNavNodeResult> CreateNavNodeOutcome;
			typedef std::future<CreateNavNodeOutcome> CreateNavNodeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateNavNodeRequest&, const CreateNavNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNavNodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectResult> DeleteFlowProjectOutcome;
			typedef std::future<DeleteFlowProjectOutcome> DeleteFlowProjectOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectRequest&, const DeleteFlowProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectAsyncHandler;
			typedef Outcome<Error, Model::ReleaseClusterResult> ReleaseClusterOutcome;
			typedef std::future<ReleaseClusterOutcome> ReleaseClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ReleaseClusterRequest&, const ReleaseClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseClusterAsyncHandler;
			typedef Outcome<Error, Model::RetryCreateUserPasswordResult> RetryCreateUserPasswordOutcome;
			typedef std::future<RetryCreateUserPasswordOutcome> RetryCreateUserPasswordOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RetryCreateUserPasswordRequest&, const RetryCreateUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryCreateUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::ListSupportedServiceNameResult> ListSupportedServiceNameOutcome;
			typedef std::future<ListSupportedServiceNameOutcome> ListSupportedServiceNameOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListSupportedServiceNameRequest&, const ListSupportedServiceNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSupportedServiceNameAsyncHandler;
			typedef Outcome<Error, Model::ListJobInstanceWorkersResult> ListJobInstanceWorkersOutcome;
			typedef std::future<ListJobInstanceWorkersOutcome> ListJobInstanceWorkersOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobInstanceWorkersRequest&, const ListJobInstanceWorkersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobInstanceWorkersAsyncHandler;
			typedef Outcome<Error, Model::DeleteNoteResult> DeleteNoteOutcome;
			typedef std::future<DeleteNoteOutcome> DeleteNoteOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteNoteRequest&, const DeleteNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNoteAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterAllHostsResult> ListFlowClusterAllHostsOutcome;
			typedef std::future<ListFlowClusterAllHostsOutcome> ListFlowClusterAllHostsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterAllHostsRequest&, const ListFlowClusterAllHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterAllHostsAsyncHandler;
			typedef Outcome<Error, Model::MigrateClusterHostGroupHostResult> MigrateClusterHostGroupHostOutcome;
			typedef std::future<MigrateClusterHostGroupHostOutcome> MigrateClusterHostGroupHostOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MigrateClusterHostGroupHostRequest&, const MigrateClusterHostGroupHostOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateClusterHostGroupHostAsyncHandler;
			typedef Outcome<Error, Model::GetLogHistogramResult> GetLogHistogramOutcome;
			typedef std::future<GetLogHistogramOutcome> GetLogHistogramOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetLogHistogramRequest&, const GetLogHistogramOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLogHistogramAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDeleteDataResourceResult> MetastoreDeleteDataResourceOutcome;
			typedef std::future<MetastoreDeleteDataResourceOutcome> MetastoreDeleteDataResourceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDeleteDataResourceRequest&, const MetastoreDeleteDataResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDeleteDataResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteResourceQueueResult> DeleteResourceQueueOutcome;
			typedef std::future<DeleteResourceQueueOutcome> DeleteResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteResourceQueueRequest&, const DeleteResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResourcePoolSchedulerTypeResult> DescribeClusterResourcePoolSchedulerTypeOutcome;
			typedef std::future<DescribeClusterResourcePoolSchedulerTypeOutcome> DescribeClusterResourcePoolSchedulerTypeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterResourcePoolSchedulerTypeRequest&, const DescribeClusterResourcePoolSchedulerTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterResourcePoolSchedulerTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowCategoryTreeResult> DescribeFlowCategoryTreeOutcome;
			typedef std::future<DescribeFlowCategoryTreeOutcome> DescribeFlowCategoryTreeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowCategoryTreeRequest&, const DescribeFlowCategoryTreeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowCategoryTreeAsyncHandler;
			typedef Outcome<Error, Model::ListServiceLogResult> ListServiceLogOutcome;
			typedef std::future<ListServiceLogOutcome> ListServiceLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListServiceLogRequest&, const ListServiceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceLogAsyncHandler;
			typedef Outcome<Error, Model::ListFlowNodeSqlResultResult> ListFlowNodeSqlResultOutcome;
			typedef std::future<ListFlowNodeSqlResultOutcome> ListFlowNodeSqlResultOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowNodeSqlResultRequest&, const ListFlowNodeSqlResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowNodeSqlResultAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowForWebResult> ModifyFlowForWebOutcome;
			typedef std::future<ModifyFlowForWebOutcome> ModifyFlowForWebOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowForWebRequest&, const ModifyFlowForWebOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowForWebAsyncHandler;
			typedef Outcome<Error, Model::RunNoteParagraphsResult> RunNoteParagraphsOutcome;
			typedef std::future<RunNoteParagraphsOutcome> RunNoteParagraphsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunNoteParagraphsRequest&, const RunNoteParagraphsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunNoteParagraphsAsyncHandler;
			typedef Outcome<Error, Model::ListJobExecutionPlanParamsResult> ListJobExecutionPlanParamsOutcome;
			typedef std::future<ListJobExecutionPlanParamsOutcome> ListJobExecutionPlanParamsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListJobExecutionPlanParamsRequest&, const ListJobExecutionPlanParamsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobExecutionPlanParamsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowNodeInstanceContainerLogResult> DescribeFlowNodeInstanceContainerLogOutcome;
			typedef std::future<DescribeFlowNodeInstanceContainerLogOutcome> DescribeFlowNodeInstanceContainerLogOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeFlowNodeInstanceContainerLogRequest&, const DescribeFlowNodeInstanceContainerLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowNodeInstanceContainerLogAsyncHandler;
			typedef Outcome<Error, Model::CancelETLJobReleaseResult> CancelETLJobReleaseOutcome;
			typedef std::future<CancelETLJobReleaseOutcome> CancelETLJobReleaseOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CancelETLJobReleaseRequest&, const CancelETLJobReleaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelETLJobReleaseAsyncHandler;
			typedef Outcome<Error, Model::ListClusterTagResult> ListClusterTagOutcome;
			typedef std::future<ListClusterTagOutcome> ListClusterTagOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterTagRequest&, const ListClusterTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterTagAsyncHandler;
			typedef Outcome<Error, Model::GetUserOutputStatisticInfoResult> GetUserOutputStatisticInfoOutcome;
			typedef std::future<GetUserOutputStatisticInfoOutcome> GetUserOutputStatisticInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetUserOutputStatisticInfoRequest&, const GetUserOutputStatisticInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserOutputStatisticInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifyJobExecutionPlanFolderResult> ModifyJobExecutionPlanFolderOutcome;
			typedef std::future<ModifyJobExecutionPlanFolderOutcome> ModifyJobExecutionPlanFolderOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyJobExecutionPlanFolderRequest&, const ModifyJobExecutionPlanFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJobExecutionPlanFolderAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterBasicInfoResult> DescribeClusterBasicInfoOutcome;
			typedef std::future<DescribeClusterBasicInfoOutcome> DescribeClusterBasicInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterBasicInfoRequest&, const DescribeClusterBasicInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterBasicInfoAsyncHandler;
			typedef Outcome<Error, Model::GetOpsCommandResultResult> GetOpsCommandResultOutcome;
			typedef std::future<GetOpsCommandResultOutcome> GetOpsCommandResultOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetOpsCommandResultRequest&, const GetOpsCommandResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpsCommandResultAsyncHandler;
			typedef Outcome<Error, Model::ListEmrAvailableConfigResult> ListEmrAvailableConfigOutcome;
			typedef std::future<ListEmrAvailableConfigOutcome> ListEmrAvailableConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListEmrAvailableConfigRequest&, const ListEmrAvailableConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrAvailableConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyAlertUserGroupResult> ModifyAlertUserGroupOutcome;
			typedef std::future<ModifyAlertUserGroupOutcome> ModifyAlertUserGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyAlertUserGroupRequest&, const ModifyAlertUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlertUserGroupAsyncHandler;
			typedef Outcome<Error, Model::MetastoreListDatabasesResult> MetastoreListDatabasesOutcome;
			typedef std::future<MetastoreListDatabasesOutcome> MetastoreListDatabasesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreListDatabasesRequest&, const MetastoreListDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreListDatabasesAsyncHandler;
			typedef Outcome<Error, Model::ListAlertUserGroupResult> ListAlertUserGroupOutcome;
			typedef std::future<ListAlertUserGroupOutcome> ListAlertUserGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListAlertUserGroupRequest&, const ListAlertUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlertUserGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourceQueueResult> ModifyResourceQueueOutcome;
			typedef std::future<ModifyResourceQueueOutcome> ModifyResourceQueueOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyResourceQueueRequest&, const ModifyResourceQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceQueueAsyncHandler;
			typedef Outcome<Error, Model::MetastoreSearchTablesResult> MetastoreSearchTablesOutcome;
			typedef std::future<MetastoreSearchTablesOutcome> MetastoreSearchTablesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreSearchTablesRequest&, const MetastoreSearchTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreSearchTablesAsyncHandler;
			typedef Outcome<Error, Model::ListFlowClusterResult> ListFlowClusterOutcome;
			typedef std::future<ListFlowClusterOutcome> ListFlowClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowClusterRequest&, const ListFlowClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecurityGroupAttributeResult> DescribeSecurityGroupAttributeOutcome;
			typedef std::future<DescribeSecurityGroupAttributeOutcome> DescribeSecurityGroupAttributeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeSecurityGroupAttributeRequest&, const DescribeSecurityGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::ListFlowCategoryResult> ListFlowCategoryOutcome;
			typedef std::future<ListFlowCategoryOutcome> ListFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowCategoryRequest&, const ListFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::ModifyJobExecutionPlanParamResult> ModifyJobExecutionPlanParamOutcome;
			typedef std::future<ModifyJobExecutionPlanParamOutcome> ModifyJobExecutionPlanParamOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyJobExecutionPlanParamRequest&, const ModifyJobExecutionPlanParamOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyJobExecutionPlanParamAsyncHandler;
			typedef Outcome<Error, Model::ResizeClusterV2Result> ResizeClusterV2Outcome;
			typedef std::future<ResizeClusterV2Outcome> ResizeClusterV2OutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ResizeClusterV2Request&, const ResizeClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResizeClusterV2AsyncHandler;
			typedef Outcome<Error, Model::DescribeExecutionPlanResult> DescribeExecutionPlanOutcome;
			typedef std::future<DescribeExecutionPlanOutcome> DescribeExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeExecutionPlanRequest&, const DescribeExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowProjectUserResult> CreateFlowProjectUserOutcome;
			typedef std::future<CreateFlowProjectUserOutcome> CreateFlowProjectUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowProjectUserRequest&, const CreateFlowProjectUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowProjectUserAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowCategoryResult> CreateFlowCategoryOutcome;
			typedef std::future<CreateFlowCategoryOutcome> CreateFlowCategoryOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateFlowCategoryRequest&, const CreateFlowCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowProjectClusterSettingResult> DeleteFlowProjectClusterSettingOutcome;
			typedef std::future<DeleteFlowProjectClusterSettingOutcome> DeleteFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteFlowProjectClusterSettingRequest&, const DeleteFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::DeleteExecutionPlanResult> DeleteExecutionPlanOutcome;
			typedef std::future<DeleteExecutionPlanOutcome> DeleteExecutionPlanOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteExecutionPlanRequest&, const DeleteExecutionPlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExecutionPlanAsyncHandler;
			typedef Outcome<Error, Model::ListClusterServiceCustomActionSupportConfigResult> ListClusterServiceCustomActionSupportConfigOutcome;
			typedef std::future<ListClusterServiceCustomActionSupportConfigOutcome> ListClusterServiceCustomActionSupportConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterServiceCustomActionSupportConfigRequest&, const ListClusterServiceCustomActionSupportConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterServiceCustomActionSupportConfigAsyncHandler;
			typedef Outcome<Error, Model::MetastoreDescribeTableResult> MetastoreDescribeTableOutcome;
			typedef std::future<MetastoreDescribeTableOutcome> MetastoreDescribeTableOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreDescribeTableRequest&, const MetastoreDescribeTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreDescribeTableAsyncHandler;
			typedef Outcome<Error, Model::GetLogDownloadUrlResult> GetLogDownloadUrlOutcome;
			typedef std::future<GetLogDownloadUrlOutcome> GetLogDownloadUrlOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::GetLogDownloadUrlRequest&, const GetLogDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLogDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowResult> ModifyFlowOutcome;
			typedef std::future<ModifyFlowOutcome> ModifyFlowOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowRequest&, const ModifyFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeScalingRuleResult> DescribeScalingRuleOutcome;
			typedef std::future<DescribeScalingRuleOutcome> DescribeScalingRuleOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeScalingRuleRequest&, const DescribeScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::RunParagraphResult> RunParagraphOutcome;
			typedef std::future<RunParagraphOutcome> RunParagraphOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::RunParagraphRequest&, const RunParagraphOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunParagraphAsyncHandler;
			typedef Outcome<Error, Model::SyncDataSourceSchemaDatabaseResult> SyncDataSourceSchemaDatabaseOutcome;
			typedef std::future<SyncDataSourceSchemaDatabaseOutcome> SyncDataSourceSchemaDatabaseOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SyncDataSourceSchemaDatabaseRequest&, const SyncDataSourceSchemaDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncDataSourceSchemaDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateUserStatisticsResult> CreateUserStatisticsOutcome;
			typedef std::future<CreateUserStatisticsOutcome> CreateUserStatisticsOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::CreateUserStatisticsRequest&, const CreateUserStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterServiceConfigResult> DescribeClusterServiceConfigOutcome;
			typedef std::future<DescribeClusterServiceConfigOutcome> DescribeClusterServiceConfigOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterServiceConfigRequest&, const DescribeClusterServiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterServiceConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowProjectClusterSettingResult> ModifyFlowProjectClusterSettingOutcome;
			typedef std::future<ModifyFlowProjectClusterSettingOutcome> ModifyFlowProjectClusterSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyFlowProjectClusterSettingRequest&, const ModifyFlowProjectClusterSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowProjectClusterSettingAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobResult> DeleteJobOutcome;
			typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteJobRequest&, const DeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
			typedef Outcome<Error, Model::ModifyExecutionPlanClusterInfoResult> ModifyExecutionPlanClusterInfoOutcome;
			typedef std::future<ModifyExecutionPlanClusterInfoOutcome> ModifyExecutionPlanClusterInfoOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyExecutionPlanClusterInfoRequest&, const ModifyExecutionPlanClusterInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyExecutionPlanClusterInfoAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterNameResult> ModifyClusterNameOutcome;
			typedef std::future<ModifyClusterNameOutcome> ModifyClusterNameOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyClusterNameRequest&, const ModifyClusterNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNameAsyncHandler;
			typedef Outcome<Error, Model::MetastoreListTablesResult> MetastoreListTablesOutcome;
			typedef std::future<MetastoreListTablesOutcome> MetastoreListTablesOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::MetastoreListTablesRequest&, const MetastoreListTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MetastoreListTablesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterOperationHostTaskResult> ListClusterOperationHostTaskOutcome;
			typedef std::future<ListClusterOperationHostTaskOutcome> ListClusterOperationHostTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListClusterOperationHostTaskRequest&, const ListClusterOperationHostTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterOperationHostTaskAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourcePoolResult> ModifyResourcePoolOutcome;
			typedef std::future<ModifyResourcePoolOutcome> ModifyResourcePoolOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyResourcePoolRequest&, const ModifyResourcePoolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePoolAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterScriptResult> DescribeClusterScriptOutcome;
			typedef std::future<DescribeClusterScriptOutcome> DescribeClusterScriptOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeClusterScriptRequest&, const DescribeClusterScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterScriptAsyncHandler;
			typedef Outcome<Error, Model::ListRequiredServiceResult> ListRequiredServiceOutcome;
			typedef std::future<ListRequiredServiceOutcome> ListRequiredServiceOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListRequiredServiceRequest&, const ListRequiredServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRequiredServiceAsyncHandler;
			typedef Outcome<Error, Model::ListFlowProjectUserResult> ListFlowProjectUserOutcome;
			typedef std::future<ListFlowProjectUserOutcome> ListFlowProjectUserOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListFlowProjectUserRequest&, const ListFlowProjectUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowProjectUserAsyncHandler;
			typedef Outcome<Error, Model::SuspendExecutionPlanSchedulerResult> SuspendExecutionPlanSchedulerOutcome;
			typedef std::future<SuspendExecutionPlanSchedulerOutcome> SuspendExecutionPlanSchedulerOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::SuspendExecutionPlanSchedulerRequest&, const SuspendExecutionPlanSchedulerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendExecutionPlanSchedulerAsyncHandler;
			typedef Outcome<Error, Model::ModifyResourcePoolSchedulerTypeResult> ModifyResourcePoolSchedulerTypeOutcome;
			typedef std::future<ModifyResourcePoolSchedulerTypeOutcome> ModifyResourcePoolSchedulerTypeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ModifyResourcePoolSchedulerTypeRequest&, const ModifyResourcePoolSchedulerTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePoolSchedulerTypeAsyncHandler;
			typedef Outcome<Error, Model::ListOpsOperationTaskResult> ListOpsOperationTaskOutcome;
			typedef std::future<ListOpsOperationTaskOutcome> ListOpsOperationTaskOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::ListOpsOperationTaskRequest&, const ListOpsOperationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOpsOperationTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterHostGroupResult> DeleteClusterHostGroupOutcome;
			typedef std::future<DeleteClusterHostGroupOutcome> DeleteClusterHostGroupOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteClusterHostGroupRequest&, const DeleteClusterHostGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterHostGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteNavNodeResult> DeleteNavNodeOutcome;
			typedef std::future<DeleteNavNodeOutcome> DeleteNavNodeOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DeleteNavNodeRequest&, const DeleteNavNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNavNodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataSourceSchemaTableResult> DescribeDataSourceSchemaTableOutcome;
			typedef std::future<DescribeDataSourceSchemaTableOutcome> DescribeDataSourceSchemaTableOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeDataSourceSchemaTableRequest&, const DescribeDataSourceSchemaTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataSourceSchemaTableAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectSettingResult> UpdateProjectSettingOutcome;
			typedef std::future<UpdateProjectSettingOutcome> UpdateProjectSettingOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::UpdateProjectSettingRequest&, const UpdateProjectSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectSettingAsyncHandler;
			typedef Outcome<Error, Model::OperateExistsNodeClusterResult> OperateExistsNodeClusterOutcome;
			typedef std::future<OperateExistsNodeClusterOutcome> OperateExistsNodeClusterOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::OperateExistsNodeClusterRequest&, const OperateExistsNodeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateExistsNodeClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeNoteResult> DescribeNoteOutcome;
			typedef std::future<DescribeNoteOutcome> DescribeNoteOutcomeCallable;
			typedef std::function<void(const EmrClient*, const Model::DescribeNoteRequest&, const DescribeNoteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNoteAsyncHandler;

			EmrClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EmrClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EmrClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EmrClient();
			CreateFlowOutcome createFlow(const Model::CreateFlowRequest &request)const;
			void createFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowOutcomeCallable createFlowCallable(const Model::CreateFlowRequest& request) const;
			DescribeDataSourceCommandOutcome describeDataSourceCommand(const Model::DescribeDataSourceCommandRequest &request)const;
			void describeDataSourceCommandAsync(const Model::DescribeDataSourceCommandRequest& request, const DescribeDataSourceCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSourceCommandOutcomeCallable describeDataSourceCommandCallable(const Model::DescribeDataSourceCommandRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			GetJobOutputStatisticInfoOutcome getJobOutputStatisticInfo(const Model::GetJobOutputStatisticInfoRequest &request)const;
			void getJobOutputStatisticInfoAsync(const Model::GetJobOutputStatisticInfoRequest& request, const GetJobOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobOutputStatisticInfoOutcomeCallable getJobOutputStatisticInfoCallable(const Model::GetJobOutputStatisticInfoRequest& request) const;
			ListResourcePoolOutcome listResourcePool(const Model::ListResourcePoolRequest &request)const;
			void listResourcePoolAsync(const Model::ListResourcePoolRequest& request, const ListResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourcePoolOutcomeCallable listResourcePoolCallable(const Model::ListResourcePoolRequest& request) const;
			ListFlowClusterHostOutcome listFlowClusterHost(const Model::ListFlowClusterHostRequest &request)const;
			void listFlowClusterHostAsync(const Model::ListFlowClusterHostRequest& request, const ListFlowClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterHostOutcomeCallable listFlowClusterHostCallable(const Model::ListFlowClusterHostRequest& request) const;
			KillFlowOutcome killFlow(const Model::KillFlowRequest &request)const;
			void killFlowAsync(const Model::KillFlowRequest& request, const KillFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillFlowOutcomeCallable killFlowCallable(const Model::KillFlowRequest& request) const;
			RunOpsCommandOutcome runOpsCommand(const Model::RunOpsCommandRequest &request)const;
			void runOpsCommandAsync(const Model::RunOpsCommandRequest& request, const RunOpsCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunOpsCommandOutcomeCallable runOpsCommandCallable(const Model::RunOpsCommandRequest& request) const;
			DescribeClusterStatisticsOutcome describeClusterStatistics(const Model::DescribeClusterStatisticsRequest &request)const;
			void describeClusterStatisticsAsync(const Model::DescribeClusterStatisticsRequest& request, const DescribeClusterStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterStatisticsOutcomeCallable describeClusterStatisticsCallable(const Model::DescribeClusterStatisticsRequest& request) const;
			ModifyExecutionPlanJobInfoOutcome modifyExecutionPlanJobInfo(const Model::ModifyExecutionPlanJobInfoRequest &request)const;
			void modifyExecutionPlanJobInfoAsync(const Model::ModifyExecutionPlanJobInfoRequest& request, const ModifyExecutionPlanJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExecutionPlanJobInfoOutcomeCallable modifyExecutionPlanJobInfoCallable(const Model::ModifyExecutionPlanJobInfoRequest& request) const;
			DeleteClusterTemplateOutcome deleteClusterTemplate(const Model::DeleteClusterTemplateRequest &request)const;
			void deleteClusterTemplateAsync(const Model::DeleteClusterTemplateRequest& request, const DeleteClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterTemplateOutcomeCallable deleteClusterTemplateCallable(const Model::DeleteClusterTemplateRequest& request) const;
			CancelOrderOutcome cancelOrder(const Model::CancelOrderRequest &request)const;
			void cancelOrderAsync(const Model::CancelOrderRequest& request, const CancelOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOrderOutcomeCallable cancelOrderCallable(const Model::CancelOrderRequest& request) const;
			CreateAlertDingDingGroupOutcome createAlertDingDingGroup(const Model::CreateAlertDingDingGroupRequest &request)const;
			void createAlertDingDingGroupAsync(const Model::CreateAlertDingDingGroupRequest& request, const CreateAlertDingDingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertDingDingGroupOutcomeCallable createAlertDingDingGroupCallable(const Model::CreateAlertDingDingGroupRequest& request) const;
			MetastoreUpdateKafkaTopicOutcome metastoreUpdateKafkaTopic(const Model::MetastoreUpdateKafkaTopicRequest &request)const;
			void metastoreUpdateKafkaTopicAsync(const Model::MetastoreUpdateKafkaTopicRequest& request, const MetastoreUpdateKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreUpdateKafkaTopicOutcomeCallable metastoreUpdateKafkaTopicCallable(const Model::MetastoreUpdateKafkaTopicRequest& request) const;
			StartFlowOutcome startFlow(const Model::StartFlowRequest &request)const;
			void startFlowAsync(const Model::StartFlowRequest& request, const StartFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartFlowOutcomeCallable startFlowCallable(const Model::StartFlowRequest& request) const;
			ListClusterServiceConfigHistoryOutcome listClusterServiceConfigHistory(const Model::ListClusterServiceConfigHistoryRequest &request)const;
			void listClusterServiceConfigHistoryAsync(const Model::ListClusterServiceConfigHistoryRequest& request, const ListClusterServiceConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceConfigHistoryOutcomeCallable listClusterServiceConfigHistoryCallable(const Model::ListClusterServiceConfigHistoryRequest& request) const;
			ListDataSourceSchemaTableOutcome listDataSourceSchemaTable(const Model::ListDataSourceSchemaTableRequest &request)const;
			void listDataSourceSchemaTableAsync(const Model::ListDataSourceSchemaTableRequest& request, const ListDataSourceSchemaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceSchemaTableOutcomeCallable listDataSourceSchemaTableCallable(const Model::ListDataSourceSchemaTableRequest& request) const;
			CreateJobOutcome createJob(const Model::CreateJobRequest &request)const;
			void createJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobOutcomeCallable createJobCallable(const Model::CreateJobRequest& request) const;
			AttachClusterForNoteOutcome attachClusterForNote(const Model::AttachClusterForNoteRequest &request)const;
			void attachClusterForNoteAsync(const Model::AttachClusterForNoteRequest& request, const AttachClusterForNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachClusterForNoteOutcomeCallable attachClusterForNoteCallable(const Model::AttachClusterForNoteRequest& request) const;
			QueryAlarmHistoryOutcome queryAlarmHistory(const Model::QueryAlarmHistoryRequest &request)const;
			void queryAlarmHistoryAsync(const Model::QueryAlarmHistoryRequest& request, const QueryAlarmHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAlarmHistoryOutcomeCallable queryAlarmHistoryCallable(const Model::QueryAlarmHistoryRequest& request) const;
			ListJobExecutionPlanHierarchyOutcome listJobExecutionPlanHierarchy(const Model::ListJobExecutionPlanHierarchyRequest &request)const;
			void listJobExecutionPlanHierarchyAsync(const Model::ListJobExecutionPlanHierarchyRequest& request, const ListJobExecutionPlanHierarchyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobExecutionPlanHierarchyOutcomeCallable listJobExecutionPlanHierarchyCallable(const Model::ListJobExecutionPlanHierarchyRequest& request) const;
			ListExecutionPlansOutcome listExecutionPlans(const Model::ListExecutionPlansRequest &request)const;
			void listExecutionPlansAsync(const Model::ListExecutionPlansRequest& request, const ListExecutionPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionPlansOutcomeCallable listExecutionPlansCallable(const Model::ListExecutionPlansRequest& request) const;
			ListJobMigrateInfoOutcome listJobMigrateInfo(const Model::ListJobMigrateInfoRequest &request)const;
			void listJobMigrateInfoAsync(const Model::ListJobMigrateInfoRequest& request, const ListJobMigrateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobMigrateInfoOutcomeCallable listJobMigrateInfoCallable(const Model::ListJobMigrateInfoRequest& request) const;
			CloneFlowOutcome cloneFlow(const Model::CloneFlowRequest &request)const;
			void cloneFlowAsync(const Model::CloneFlowRequest& request, const CloneFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneFlowOutcomeCallable cloneFlowCallable(const Model::CloneFlowRequest& request) const;
			ListEmrMainVersionOutcome listEmrMainVersion(const Model::ListEmrMainVersionRequest &request)const;
			void listEmrMainVersionAsync(const Model::ListEmrMainVersionRequest& request, const ListEmrMainVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrMainVersionOutcomeCallable listEmrMainVersionCallable(const Model::ListEmrMainVersionRequest& request) const;
			CreateClusterTemplateOutcome createClusterTemplate(const Model::CreateClusterTemplateRequest &request)const;
			void createClusterTemplateAsync(const Model::CreateClusterTemplateRequest& request, const CreateClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterTemplateOutcomeCallable createClusterTemplateCallable(const Model::CreateClusterTemplateRequest& request) const;
			MetastoreDropDatabaseOutcome metastoreDropDatabase(const Model::MetastoreDropDatabaseRequest &request)const;
			void metastoreDropDatabaseAsync(const Model::MetastoreDropDatabaseRequest& request, const MetastoreDropDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDropDatabaseOutcomeCallable metastoreDropDatabaseCallable(const Model::MetastoreDropDatabaseRequest& request) const;
			ListAlertContactsOutcome listAlertContacts(const Model::ListAlertContactsRequest &request)const;
			void listAlertContactsAsync(const Model::ListAlertContactsRequest& request, const ListAlertContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlertContactsOutcomeCallable listAlertContactsCallable(const Model::ListAlertContactsRequest& request) const;
			MetastoreDescribeDatabaseOutcome metastoreDescribeDatabase(const Model::MetastoreDescribeDatabaseRequest &request)const;
			void metastoreDescribeDatabaseAsync(const Model::MetastoreDescribeDatabaseRequest& request, const MetastoreDescribeDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDescribeDatabaseOutcomeCallable metastoreDescribeDatabaseCallable(const Model::MetastoreDescribeDatabaseRequest& request) const;
			ListFlowInstanceOutcome listFlowInstance(const Model::ListFlowInstanceRequest &request)const;
			void listFlowInstanceAsync(const Model::ListFlowInstanceRequest& request, const ListFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowInstanceOutcomeCallable listFlowInstanceCallable(const Model::ListFlowInstanceRequest& request) const;
			ListJobExecutionInstanceTrendOutcome listJobExecutionInstanceTrend(const Model::ListJobExecutionInstanceTrendRequest &request)const;
			void listJobExecutionInstanceTrendAsync(const Model::ListJobExecutionInstanceTrendRequest& request, const ListJobExecutionInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobExecutionInstanceTrendOutcomeCallable listJobExecutionInstanceTrendCallable(const Model::ListJobExecutionInstanceTrendRequest& request) const;
			MetastoreDescribeTaskOutcome metastoreDescribeTask(const Model::MetastoreDescribeTaskRequest &request)const;
			void metastoreDescribeTaskAsync(const Model::MetastoreDescribeTaskRequest& request, const MetastoreDescribeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDescribeTaskOutcomeCallable metastoreDescribeTaskCallable(const Model::MetastoreDescribeTaskRequest& request) const;
			DescribeClusterServiceConfigHistoryOutcome describeClusterServiceConfigHistory(const Model::DescribeClusterServiceConfigHistoryRequest &request)const;
			void describeClusterServiceConfigHistoryAsync(const Model::DescribeClusterServiceConfigHistoryRequest& request, const DescribeClusterServiceConfigHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceConfigHistoryOutcomeCallable describeClusterServiceConfigHistoryCallable(const Model::DescribeClusterServiceConfigHistoryRequest& request) const;
			GetJobMigrateResultOutcome getJobMigrateResult(const Model::GetJobMigrateResultRequest &request)const;
			void getJobMigrateResultAsync(const Model::GetJobMigrateResultRequest& request, const GetJobMigrateResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobMigrateResultOutcomeCallable getJobMigrateResultCallable(const Model::GetJobMigrateResultRequest& request) const;
			GetHdfsCapacityStatisticInfoOutcome getHdfsCapacityStatisticInfo(const Model::GetHdfsCapacityStatisticInfoRequest &request)const;
			void getHdfsCapacityStatisticInfoAsync(const Model::GetHdfsCapacityStatisticInfoRequest& request, const GetHdfsCapacityStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHdfsCapacityStatisticInfoOutcomeCallable getHdfsCapacityStatisticInfoCallable(const Model::GetHdfsCapacityStatisticInfoRequest& request) const;
			ResumeExecutionPlanSchedulerOutcome resumeExecutionPlanScheduler(const Model::ResumeExecutionPlanSchedulerRequest &request)const;
			void resumeExecutionPlanSchedulerAsync(const Model::ResumeExecutionPlanSchedulerRequest& request, const ResumeExecutionPlanSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeExecutionPlanSchedulerOutcomeCallable resumeExecutionPlanSchedulerCallable(const Model::ResumeExecutionPlanSchedulerRequest& request) const;
			ListFlowNodeInstanceOutcome listFlowNodeInstance(const Model::ListFlowNodeInstanceRequest &request)const;
			void listFlowNodeInstanceAsync(const Model::ListFlowNodeInstanceRequest& request, const ListFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowNodeInstanceOutcomeCallable listFlowNodeInstanceCallable(const Model::ListFlowNodeInstanceRequest& request) const;
			DescribeDataSourceOutcome describeDataSource(const Model::DescribeDataSourceRequest &request)const;
			void describeDataSourceAsync(const Model::DescribeDataSourceRequest& request, const DescribeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSourceOutcomeCallable describeDataSourceCallable(const Model::DescribeDataSourceRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			DescribeFlowVariableCollectionOutcome describeFlowVariableCollection(const Model::DescribeFlowVariableCollectionRequest &request)const;
			void describeFlowVariableCollectionAsync(const Model::DescribeFlowVariableCollectionRequest& request, const DescribeFlowVariableCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowVariableCollectionOutcomeCallable describeFlowVariableCollectionCallable(const Model::DescribeFlowVariableCollectionRequest& request) const;
			CreateAlertUserGroupOutcome createAlertUserGroup(const Model::CreateAlertUserGroupRequest &request)const;
			void createAlertUserGroupAsync(const Model::CreateAlertUserGroupRequest& request, const CreateAlertUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertUserGroupOutcomeCallable createAlertUserGroupCallable(const Model::CreateAlertUserGroupRequest& request) const;
			DescribeScalingActivityOutcome describeScalingActivity(const Model::DescribeScalingActivityRequest &request)const;
			void describeScalingActivityAsync(const Model::DescribeScalingActivityRequest& request, const DescribeScalingActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingActivityOutcomeCallable describeScalingActivityCallable(const Model::DescribeScalingActivityRequest& request) const;
			ListEmrAvailableResourceOutcome listEmrAvailableResource(const Model::ListEmrAvailableResourceRequest &request)const;
			void listEmrAvailableResourceAsync(const Model::ListEmrAvailableResourceRequest& request, const ListEmrAvailableResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrAvailableResourceOutcomeCallable listEmrAvailableResourceCallable(const Model::ListEmrAvailableResourceRequest& request) const;
			ReleaseETLJobOutcome releaseETLJob(const Model::ReleaseETLJobRequest &request)const;
			void releaseETLJobAsync(const Model::ReleaseETLJobRequest& request, const ReleaseETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseETLJobOutcomeCallable releaseETLJobCallable(const Model::ReleaseETLJobRequest& request) const;
			DescribeEmrMainVersionOutcome describeEmrMainVersion(const Model::DescribeEmrMainVersionRequest &request)const;
			void describeEmrMainVersionAsync(const Model::DescribeEmrMainVersionRequest& request, const DescribeEmrMainVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmrMainVersionOutcomeCallable describeEmrMainVersionCallable(const Model::DescribeEmrMainVersionRequest& request) const;
			DescribeClusterServiceConfigTagOutcome describeClusterServiceConfigTag(const Model::DescribeClusterServiceConfigTagRequest &request)const;
			void describeClusterServiceConfigTagAsync(const Model::DescribeClusterServiceConfigTagRequest& request, const DescribeClusterServiceConfigTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceConfigTagOutcomeCallable describeClusterServiceConfigTagCallable(const Model::DescribeClusterServiceConfigTagRequest& request) const;
			DeleteETLJobOutcome deleteETLJob(const Model::DeleteETLJobRequest &request)const;
			void deleteETLJobAsync(const Model::DeleteETLJobRequest& request, const DeleteETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteETLJobOutcomeCallable deleteETLJobCallable(const Model::DeleteETLJobRequest& request) const;
			RunClusterServiceActionOutcome runClusterServiceAction(const Model::RunClusterServiceActionRequest &request)const;
			void runClusterServiceActionAsync(const Model::RunClusterServiceActionRequest& request, const RunClusterServiceActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunClusterServiceActionOutcomeCallable runClusterServiceActionCallable(const Model::RunClusterServiceActionRequest& request) const;
			SuspendFlowOutcome suspendFlow(const Model::SuspendFlowRequest &request)const;
			void suspendFlowAsync(const Model::SuspendFlowRequest& request, const SuspendFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendFlowOutcomeCallable suspendFlowCallable(const Model::SuspendFlowRequest& request) const;
			MetastoreDataPreviewOutcome metastoreDataPreview(const Model::MetastoreDataPreviewRequest &request)const;
			void metastoreDataPreviewAsync(const Model::MetastoreDataPreviewRequest& request, const MetastoreDataPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDataPreviewOutcomeCallable metastoreDataPreviewCallable(const Model::MetastoreDataPreviewRequest& request) const;
			AuthorizeSecurityGroupOutcome authorizeSecurityGroup(const Model::AuthorizeSecurityGroupRequest &request)const;
			void authorizeSecurityGroupAsync(const Model::AuthorizeSecurityGroupRequest& request, const AuthorizeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeSecurityGroupOutcomeCallable authorizeSecurityGroupCallable(const Model::AuthorizeSecurityGroupRequest& request) const;
			ModifyClusterTemplateOutcome modifyClusterTemplate(const Model::ModifyClusterTemplateRequest &request)const;
			void modifyClusterTemplateAsync(const Model::ModifyClusterTemplateRequest& request, const ModifyClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterTemplateOutcomeCallable modifyClusterTemplateCallable(const Model::ModifyClusterTemplateRequest& request) const;
			AttachPubIpOutcome attachPubIp(const Model::AttachPubIpRequest &request)const;
			void attachPubIpAsync(const Model::AttachPubIpRequest& request, const AttachPubIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachPubIpOutcomeCallable attachPubIpCallable(const Model::AttachPubIpRequest& request) const;
			RunExecutionPlanOutcome runExecutionPlan(const Model::RunExecutionPlanRequest &request)const;
			void runExecutionPlanAsync(const Model::RunExecutionPlanRequest& request, const RunExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunExecutionPlanOutcomeCallable runExecutionPlanCallable(const Model::RunExecutionPlanRequest& request) const;
			ContextQueryLogOutcome contextQueryLog(const Model::ContextQueryLogRequest &request)const;
			void contextQueryLogAsync(const Model::ContextQueryLogRequest& request, const ContextQueryLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContextQueryLogOutcomeCallable contextQueryLogCallable(const Model::ContextQueryLogRequest& request) const;
			ListClusterOperationHostOutcome listClusterOperationHost(const Model::ListClusterOperationHostRequest &request)const;
			void listClusterOperationHostAsync(const Model::ListClusterOperationHostRequest& request, const ListClusterOperationHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationHostOutcomeCallable listClusterOperationHostCallable(const Model::ListClusterOperationHostRequest& request) const;
			ListClusterTemplatesOutcome listClusterTemplates(const Model::ListClusterTemplatesRequest &request)const;
			void listClusterTemplatesAsync(const Model::ListClusterTemplatesRequest& request, const ListClusterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterTemplatesOutcomeCallable listClusterTemplatesCallable(const Model::ListClusterTemplatesRequest& request) const;
			DescribeFlowCategoryOutcome describeFlowCategory(const Model::DescribeFlowCategoryRequest &request)const;
			void describeFlowCategoryAsync(const Model::DescribeFlowCategoryRequest& request, const DescribeFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowCategoryOutcomeCallable describeFlowCategoryCallable(const Model::DescribeFlowCategoryRequest& request) const;
			ModifyFlowJobOutcome modifyFlowJob(const Model::ModifyFlowJobRequest &request)const;
			void modifyFlowJobAsync(const Model::ModifyFlowJobRequest& request, const ModifyFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowJobOutcomeCallable modifyFlowJobCallable(const Model::ModifyFlowJobRequest& request) const;
			ListScalingRuleOutcome listScalingRule(const Model::ListScalingRuleRequest &request)const;
			void listScalingRuleAsync(const Model::ListScalingRuleRequest& request, const ListScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingRuleOutcomeCallable listScalingRuleCallable(const Model::ListScalingRuleRequest& request) const;
			DeleteFlowOutcome deleteFlow(const Model::DeleteFlowRequest &request)const;
			void deleteFlowAsync(const Model::DeleteFlowRequest& request, const DeleteFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowOutcomeCallable deleteFlowCallable(const Model::DeleteFlowRequest& request) const;
			DeleteDataSourceOutcome deleteDataSource(const Model::DeleteDataSourceRequest &request)const;
			void deleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSourceOutcomeCallable deleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;
			RunETLJobOutcome runETLJob(const Model::RunETLJobRequest &request)const;
			void runETLJobAsync(const Model::RunETLJobRequest& request, const RunETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunETLJobOutcomeCallable runETLJobCallable(const Model::RunETLJobRequest& request) const;
			CreateClusterHostGroupOutcome createClusterHostGroup(const Model::CreateClusterHostGroupRequest &request)const;
			void createClusterHostGroupAsync(const Model::CreateClusterHostGroupRequest& request, const CreateClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterHostGroupOutcomeCallable createClusterHostGroupCallable(const Model::CreateClusterHostGroupRequest& request) const;
			DescribeClusterTemplateOutcome describeClusterTemplate(const Model::DescribeClusterTemplateRequest &request)const;
			void describeClusterTemplateAsync(const Model::DescribeClusterTemplateRequest& request, const DescribeClusterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterTemplateOutcomeCallable describeClusterTemplateCallable(const Model::DescribeClusterTemplateRequest& request) const;
			ModifyScalingRuleOutcome modifyScalingRule(const Model::ModifyScalingRuleRequest &request)const;
			void modifyScalingRuleAsync(const Model::ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingRuleOutcomeCallable modifyScalingRuleCallable(const Model::ModifyScalingRuleRequest& request) const;
			ListClusterServiceComponentHealthInfoOutcome listClusterServiceComponentHealthInfo(const Model::ListClusterServiceComponentHealthInfoRequest &request)const;
			void listClusterServiceComponentHealthInfoAsync(const Model::ListClusterServiceComponentHealthInfoRequest& request, const ListClusterServiceComponentHealthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceComponentHealthInfoOutcomeCallable listClusterServiceComponentHealthInfoCallable(const Model::ListClusterServiceComponentHealthInfoRequest& request) const;
			ListFlowProjectOutcome listFlowProject(const Model::ListFlowProjectRequest &request)const;
			void listFlowProjectAsync(const Model::ListFlowProjectRequest& request, const ListFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowProjectOutcomeCallable listFlowProjectCallable(const Model::ListFlowProjectRequest& request) const;
			RemoveClusterHostsOutcome removeClusterHosts(const Model::RemoveClusterHostsRequest &request)const;
			void removeClusterHostsAsync(const Model::RemoveClusterHostsRequest& request, const RemoveClusterHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveClusterHostsOutcomeCallable removeClusterHostsCallable(const Model::RemoveClusterHostsRequest& request) const;
			ListETLJobTriggerEntityOutcome listETLJobTriggerEntity(const Model::ListETLJobTriggerEntityRequest &request)const;
			void listETLJobTriggerEntityAsync(const Model::ListETLJobTriggerEntityRequest& request, const ListETLJobTriggerEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListETLJobTriggerEntityOutcomeCallable listETLJobTriggerEntityCallable(const Model::ListETLJobTriggerEntityRequest& request) const;
			ModifyAlertDingDingGroupOutcome modifyAlertDingDingGroup(const Model::ModifyAlertDingDingGroupRequest &request)const;
			void modifyAlertDingDingGroupAsync(const Model::ModifyAlertDingDingGroupRequest& request, const ModifyAlertDingDingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAlertDingDingGroupOutcomeCallable modifyAlertDingDingGroupCallable(const Model::ModifyAlertDingDingGroupRequest& request) const;
			CreateETLJobOutcome createETLJob(const Model::CreateETLJobRequest &request)const;
			void createETLJobAsync(const Model::CreateETLJobRequest& request, const CreateETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateETLJobOutcomeCallable createETLJobCallable(const Model::CreateETLJobRequest& request) const;
			SaveParagraphOutcome saveParagraph(const Model::SaveParagraphRequest &request)const;
			void saveParagraphAsync(const Model::SaveParagraphRequest& request, const SaveParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveParagraphOutcomeCallable saveParagraphCallable(const Model::SaveParagraphRequest& request) const;
			DeleteParagraphOutcome deleteParagraph(const Model::DeleteParagraphRequest &request)const;
			void deleteParagraphAsync(const Model::DeleteParagraphRequest& request, const DeleteParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteParagraphOutcomeCallable deleteParagraphCallable(const Model::DeleteParagraphRequest& request) const;
			ListFlowJobHistoryOutcome listFlowJobHistory(const Model::ListFlowJobHistoryRequest &request)const;
			void listFlowJobHistoryAsync(const Model::ListFlowJobHistoryRequest& request, const ListFlowJobHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowJobHistoryOutcomeCallable listFlowJobHistoryCallable(const Model::ListFlowJobHistoryRequest& request) const;
			CreateClusterScriptOutcome createClusterScript(const Model::CreateClusterScriptRequest &request)const;
			void createClusterScriptAsync(const Model::CreateClusterScriptRequest& request, const CreateClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterScriptOutcomeCallable createClusterScriptCallable(const Model::CreateClusterScriptRequest& request) const;
			SubmitFlowOutcome submitFlow(const Model::SubmitFlowRequest &request)const;
			void submitFlowAsync(const Model::SubmitFlowRequest& request, const SubmitFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFlowOutcomeCallable submitFlowCallable(const Model::SubmitFlowRequest& request) const;
			GetQueueInputStatisticInfoOutcome getQueueInputStatisticInfo(const Model::GetQueueInputStatisticInfoRequest &request)const;
			void getQueueInputStatisticInfoAsync(const Model::GetQueueInputStatisticInfoRequest& request, const GetQueueInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQueueInputStatisticInfoOutcomeCallable getQueueInputStatisticInfoCallable(const Model::GetQueueInputStatisticInfoRequest& request) const;
			ListClusterServiceQuickLinkOutcome listClusterServiceQuickLink(const Model::ListClusterServiceQuickLinkRequest &request)const;
			void listClusterServiceQuickLinkAsync(const Model::ListClusterServiceQuickLinkRequest& request, const ListClusterServiceQuickLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceQuickLinkOutcomeCallable listClusterServiceQuickLinkCallable(const Model::ListClusterServiceQuickLinkRequest& request) const;
			MetastoreUpdateTableOutcome metastoreUpdateTable(const Model::MetastoreUpdateTableRequest &request)const;
			void metastoreUpdateTableAsync(const Model::MetastoreUpdateTableRequest& request, const MetastoreUpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreUpdateTableOutcomeCallable metastoreUpdateTableCallable(const Model::MetastoreUpdateTableRequest& request) const;
			ListClusterHostGroupOutcome listClusterHostGroup(const Model::ListClusterHostGroupRequest &request)const;
			void listClusterHostGroupAsync(const Model::ListClusterHostGroupRequest& request, const ListClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHostGroupOutcomeCallable listClusterHostGroupCallable(const Model::ListClusterHostGroupRequest& request) const;
			StopParagraphOutcome stopParagraph(const Model::StopParagraphRequest &request)const;
			void stopParagraphAsync(const Model::StopParagraphRequest& request, const StopParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopParagraphOutcomeCallable stopParagraphCallable(const Model::StopParagraphRequest& request) const;
			MetastoreDeleteKafkaTopicOutcome metastoreDeleteKafkaTopic(const Model::MetastoreDeleteKafkaTopicRequest &request)const;
			void metastoreDeleteKafkaTopicAsync(const Model::MetastoreDeleteKafkaTopicRequest& request, const MetastoreDeleteKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDeleteKafkaTopicOutcomeCallable metastoreDeleteKafkaTopicCallable(const Model::MetastoreDeleteKafkaTopicRequest& request) const;
			ResumeFlowOutcome resumeFlow(const Model::ResumeFlowRequest &request)const;
			void resumeFlowAsync(const Model::ResumeFlowRequest& request, const ResumeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeFlowOutcomeCallable resumeFlowCallable(const Model::ResumeFlowRequest& request) const;
			DeleteFlowProjectByIdOutcome deleteFlowProjectById(const Model::DeleteFlowProjectByIdRequest &request)const;
			void deleteFlowProjectByIdAsync(const Model::DeleteFlowProjectByIdRequest& request, const DeleteFlowProjectByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectByIdOutcomeCallable deleteFlowProjectByIdCallable(const Model::DeleteFlowProjectByIdRequest& request) const;
			SuspendExecutionPlanInstanceOutcome suspendExecutionPlanInstance(const Model::SuspendExecutionPlanInstanceRequest &request)const;
			void suspendExecutionPlanInstanceAsync(const Model::SuspendExecutionPlanInstanceRequest& request, const SuspendExecutionPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendExecutionPlanInstanceOutcomeCallable suspendExecutionPlanInstanceCallable(const Model::SuspendExecutionPlanInstanceRequest& request) const;
			GetUserSubmissionStatisticInfoOutcome getUserSubmissionStatisticInfo(const Model::GetUserSubmissionStatisticInfoRequest &request)const;
			void getUserSubmissionStatisticInfoAsync(const Model::GetUserSubmissionStatisticInfoRequest& request, const GetUserSubmissionStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserSubmissionStatisticInfoOutcomeCallable getUserSubmissionStatisticInfoCallable(const Model::GetUserSubmissionStatisticInfoRequest& request) const;
			DeleteScalingTaskGroupOutcome deleteScalingTaskGroup(const Model::DeleteScalingTaskGroupRequest &request)const;
			void deleteScalingTaskGroupAsync(const Model::DeleteScalingTaskGroupRequest& request, const DeleteScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScalingTaskGroupOutcomeCallable deleteScalingTaskGroupCallable(const Model::DeleteScalingTaskGroupRequest& request) const;
			DescribeParagraphOutcome describeParagraph(const Model::DescribeParagraphRequest &request)const;
			void describeParagraphAsync(const Model::DescribeParagraphRequest& request, const DescribeParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeParagraphOutcomeCallable describeParagraphCallable(const Model::DescribeParagraphRequest& request) const;
			MetastoreCreateDatabaseOutcome metastoreCreateDatabase(const Model::MetastoreCreateDatabaseRequest &request)const;
			void metastoreCreateDatabaseAsync(const Model::MetastoreCreateDatabaseRequest& request, const MetastoreCreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreCreateDatabaseOutcomeCallable metastoreCreateDatabaseCallable(const Model::MetastoreCreateDatabaseRequest& request) const;
			ListFailureJobExecutionInstancesOutcome listFailureJobExecutionInstances(const Model::ListFailureJobExecutionInstancesRequest &request)const;
			void listFailureJobExecutionInstancesAsync(const Model::ListFailureJobExecutionInstancesRequest& request, const ListFailureJobExecutionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFailureJobExecutionInstancesOutcomeCallable listFailureJobExecutionInstancesCallable(const Model::ListFailureJobExecutionInstancesRequest& request) const;
			DeleteFlowJobOutcome deleteFlowJob(const Model::DeleteFlowJobRequest &request)const;
			void deleteFlowJobAsync(const Model::DeleteFlowJobRequest& request, const DeleteFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowJobOutcomeCallable deleteFlowJobCallable(const Model::DeleteFlowJobRequest& request) const;
			RefreshClusterResourcePoolOutcome refreshClusterResourcePool(const Model::RefreshClusterResourcePoolRequest &request)const;
			void refreshClusterResourcePoolAsync(const Model::RefreshClusterResourcePoolRequest& request, const RefreshClusterResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshClusterResourcePoolOutcomeCallable refreshClusterResourcePoolCallable(const Model::RefreshClusterResourcePoolRequest& request) const;
			ModifyJobOutcome modifyJob(const Model::ModifyJobRequest &request)const;
			void modifyJobAsync(const Model::ModifyJobRequest& request, const ModifyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyJobOutcomeCallable modifyJobCallable(const Model::ModifyJobRequest& request) const;
			MetastoreCreateDataResourceOutcome metastoreCreateDataResource(const Model::MetastoreCreateDataResourceRequest &request)const;
			void metastoreCreateDataResourceAsync(const Model::MetastoreCreateDataResourceRequest& request, const MetastoreCreateDataResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreCreateDataResourceOutcomeCallable metastoreCreateDataResourceCallable(const Model::MetastoreCreateDataResourceRequest& request) const;
			KillETLJobInstanceOutcome killETLJobInstance(const Model::KillETLJobInstanceRequest &request)const;
			void killETLJobInstanceAsync(const Model::KillETLJobInstanceRequest& request, const KillETLJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillETLJobInstanceOutcomeCallable killETLJobInstanceCallable(const Model::KillETLJobInstanceRequest& request) const;
			DescribeFlowJobOutcome describeFlowJob(const Model::DescribeFlowJobRequest &request)const;
			void describeFlowJobAsync(const Model::DescribeFlowJobRequest& request, const DescribeFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowJobOutcomeCallable describeFlowJobCallable(const Model::DescribeFlowJobRequest& request) const;
			RetryExecutionPlanInstanceOutcome retryExecutionPlanInstance(const Model::RetryExecutionPlanInstanceRequest &request)const;
			void retryExecutionPlanInstanceAsync(const Model::RetryExecutionPlanInstanceRequest& request, const RetryExecutionPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryExecutionPlanInstanceOutcomeCallable retryExecutionPlanInstanceCallable(const Model::RetryExecutionPlanInstanceRequest& request) const;
			RerunFlowOutcome rerunFlow(const Model::RerunFlowRequest &request)const;
			void rerunFlowAsync(const Model::RerunFlowRequest& request, const RerunFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RerunFlowOutcomeCallable rerunFlowCallable(const Model::RerunFlowRequest& request) const;
			MetastoreRetryTaskOutcome metastoreRetryTask(const Model::MetastoreRetryTaskRequest &request)const;
			void metastoreRetryTaskAsync(const Model::MetastoreRetryTaskRequest& request, const MetastoreRetryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreRetryTaskOutcomeCallable metastoreRetryTaskCallable(const Model::MetastoreRetryTaskRequest& request) const;
			DescribeClusterOperationHostTaskLogOutcome describeClusterOperationHostTaskLog(const Model::DescribeClusterOperationHostTaskLogRequest &request)const;
			void describeClusterOperationHostTaskLogAsync(const Model::DescribeClusterOperationHostTaskLogRequest& request, const DescribeClusterOperationHostTaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOperationHostTaskLogOutcomeCallable describeClusterOperationHostTaskLogCallable(const Model::DescribeClusterOperationHostTaskLogRequest& request) const;
			CreateScalingTaskGroupOutcome createScalingTaskGroup(const Model::CreateScalingTaskGroupRequest &request)const;
			void createScalingTaskGroupAsync(const Model::CreateScalingTaskGroupRequest& request, const CreateScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScalingTaskGroupOutcomeCallable createScalingTaskGroupCallable(const Model::CreateScalingTaskGroupRequest& request) const;
			KillFlowJobOutcome killFlowJob(const Model::KillFlowJobRequest &request)const;
			void killFlowJobAsync(const Model::KillFlowJobRequest& request, const KillFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillFlowJobOutcomeCallable killFlowJobCallable(const Model::KillFlowJobRequest& request) const;
			DescribeFlowOutcome describeFlow(const Model::DescribeFlowRequest &request)const;
			void describeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowOutcomeCallable describeFlowCallable(const Model::DescribeFlowRequest& request) const;
			DescribeClusterV2Outcome describeClusterV2(const Model::DescribeClusterV2Request &request)const;
			void describeClusterV2Async(const Model::DescribeClusterV2Request& request, const DescribeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterV2OutcomeCallable describeClusterV2Callable(const Model::DescribeClusterV2Request& request) const;
			DescribeDataSourceSchemaDatabaseOutcome describeDataSourceSchemaDatabase(const Model::DescribeDataSourceSchemaDatabaseRequest &request)const;
			void describeDataSourceSchemaDatabaseAsync(const Model::DescribeDataSourceSchemaDatabaseRequest& request, const DescribeDataSourceSchemaDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSourceSchemaDatabaseOutcomeCallable describeDataSourceSchemaDatabaseCallable(const Model::DescribeDataSourceSchemaDatabaseRequest& request) const;
			DescribeETLJobStageOutputSchemaOutcome describeETLJobStageOutputSchema(const Model::DescribeETLJobStageOutputSchemaRequest &request)const;
			void describeETLJobStageOutputSchemaAsync(const Model::DescribeETLJobStageOutputSchemaRequest& request, const DescribeETLJobStageOutputSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeETLJobStageOutputSchemaOutcomeCallable describeETLJobStageOutputSchemaCallable(const Model::DescribeETLJobStageOutputSchemaRequest& request) const;
			CreateFlowProjectClusterSettingOutcome createFlowProjectClusterSetting(const Model::CreateFlowProjectClusterSettingRequest &request)const;
			void createFlowProjectClusterSettingAsync(const Model::CreateFlowProjectClusterSettingRequest& request, const CreateFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowProjectClusterSettingOutcomeCallable createFlowProjectClusterSettingCallable(const Model::CreateFlowProjectClusterSettingRequest& request) const;
			ListClusterScriptsOutcome listClusterScripts(const Model::ListClusterScriptsRequest &request)const;
			void listClusterScriptsAsync(const Model::ListClusterScriptsRequest& request, const ListClusterScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterScriptsOutcomeCallable listClusterScriptsCallable(const Model::ListClusterScriptsRequest& request) const;
			DescribeFlowInstanceOutcome describeFlowInstance(const Model::DescribeFlowInstanceRequest &request)const;
			void describeFlowInstanceAsync(const Model::DescribeFlowInstanceRequest& request, const DescribeFlowInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowInstanceOutcomeCallable describeFlowInstanceCallable(const Model::DescribeFlowInstanceRequest& request) const;
			CreateDataSourceOutcome createDataSource(const Model::CreateDataSourceRequest &request)const;
			void createDataSourceAsync(const Model::CreateDataSourceRequest& request, const CreateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataSourceOutcomeCallable createDataSourceCallable(const Model::CreateDataSourceRequest& request) const;
			GetUserInputStatisticInfoOutcome getUserInputStatisticInfo(const Model::GetUserInputStatisticInfoRequest &request)const;
			void getUserInputStatisticInfoAsync(const Model::GetUserInputStatisticInfoRequest& request, const GetUserInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserInputStatisticInfoOutcomeCallable getUserInputStatisticInfoCallable(const Model::GetUserInputStatisticInfoRequest& request) const;
			ModifyAlertContactOutcome modifyAlertContact(const Model::ModifyAlertContactRequest &request)const;
			void modifyAlertContactAsync(const Model::ModifyAlertContactRequest& request, const ModifyAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAlertContactOutcomeCallable modifyAlertContactCallable(const Model::ModifyAlertContactRequest& request) const;
			CreateAlertContactOutcome createAlertContact(const Model::CreateAlertContactRequest &request)const;
			void createAlertContactAsync(const Model::CreateAlertContactRequest& request, const CreateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertContactOutcomeCallable createAlertContactCallable(const Model::CreateAlertContactRequest& request) const;
			DeleteAlertDingDingGroupsOutcome deleteAlertDingDingGroups(const Model::DeleteAlertDingDingGroupsRequest &request)const;
			void deleteAlertDingDingGroupsAsync(const Model::DeleteAlertDingDingGroupsRequest& request, const DeleteAlertDingDingGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertDingDingGroupsOutcomeCallable deleteAlertDingDingGroupsCallable(const Model::DeleteAlertDingDingGroupsRequest& request) const;
			MetastoreModifyDataResourceOutcome metastoreModifyDataResource(const Model::MetastoreModifyDataResourceRequest &request)const;
			void metastoreModifyDataResourceAsync(const Model::MetastoreModifyDataResourceRequest& request, const MetastoreModifyDataResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreModifyDataResourceOutcomeCallable metastoreModifyDataResourceCallable(const Model::MetastoreModifyDataResourceRequest& request) const;
			ListExecutePlanMigrateInfoOutcome listExecutePlanMigrateInfo(const Model::ListExecutePlanMigrateInfoRequest &request)const;
			void listExecutePlanMigrateInfoAsync(const Model::ListExecutePlanMigrateInfoRequest& request, const ListExecutePlanMigrateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutePlanMigrateInfoOutcomeCallable listExecutePlanMigrateInfoCallable(const Model::ListExecutePlanMigrateInfoRequest& request) const;
			GetOpsCommandResultOnceOutcome getOpsCommandResultOnce(const Model::GetOpsCommandResultOnceRequest &request)const;
			void getOpsCommandResultOnceAsync(const Model::GetOpsCommandResultOnceRequest& request, const GetOpsCommandResultOnceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpsCommandResultOnceOutcomeCallable getOpsCommandResultOnceCallable(const Model::GetOpsCommandResultOnceRequest& request) const;
			ResumeExecutionPlanInstanceOutcome resumeExecutionPlanInstance(const Model::ResumeExecutionPlanInstanceRequest &request)const;
			void resumeExecutionPlanInstanceAsync(const Model::ResumeExecutionPlanInstanceRequest& request, const ResumeExecutionPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeExecutionPlanInstanceOutcomeCallable resumeExecutionPlanInstanceCallable(const Model::ResumeExecutionPlanInstanceRequest& request) const;
			CreateParagraphOutcome createParagraph(const Model::CreateParagraphRequest &request)const;
			void createParagraphAsync(const Model::CreateParagraphRequest& request, const CreateParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateParagraphOutcomeCallable createParagraphCallable(const Model::CreateParagraphRequest& request) const;
			GetJobInputStatisticInfoOutcome getJobInputStatisticInfo(const Model::GetJobInputStatisticInfoRequest &request)const;
			void getJobInputStatisticInfoAsync(const Model::GetJobInputStatisticInfoRequest& request, const GetJobInputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobInputStatisticInfoOutcomeCallable getJobInputStatisticInfoCallable(const Model::GetJobInputStatisticInfoRequest& request) const;
			DeleteFlowProjectUserOutcome deleteFlowProjectUser(const Model::DeleteFlowProjectUserRequest &request)const;
			void deleteFlowProjectUserAsync(const Model::DeleteFlowProjectUserRequest& request, const DeleteFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectUserOutcomeCallable deleteFlowProjectUserCallable(const Model::DeleteFlowProjectUserRequest& request) const;
			CreateResourceQueueOutcome createResourceQueue(const Model::CreateResourceQueueRequest &request)const;
			void createResourceQueueAsync(const Model::CreateResourceQueueRequest& request, const CreateResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourceQueueOutcomeCallable createResourceQueueCallable(const Model::CreateResourceQueueRequest& request) const;
			ListDependedServiceOutcome listDependedService(const Model::ListDependedServiceRequest &request)const;
			void listDependedServiceAsync(const Model::ListDependedServiceRequest& request, const ListDependedServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDependedServiceOutcomeCallable listDependedServiceCallable(const Model::ListDependedServiceRequest& request) const;
			CloneETLJobOutcome cloneETLJob(const Model::CloneETLJobRequest &request)const;
			void cloneETLJobAsync(const Model::CloneETLJobRequest& request, const CloneETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneETLJobOutcomeCallable cloneETLJobCallable(const Model::CloneETLJobRequest& request) const;
			DeleteAlertContactsOutcome deleteAlertContacts(const Model::DeleteAlertContactsRequest &request)const;
			void deleteAlertContactsAsync(const Model::DeleteAlertContactsRequest& request, const DeleteAlertContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertContactsOutcomeCallable deleteAlertContactsCallable(const Model::DeleteAlertContactsRequest& request) const;
			MetastoreListTablePartitionOutcome metastoreListTablePartition(const Model::MetastoreListTablePartitionRequest &request)const;
			void metastoreListTablePartitionAsync(const Model::MetastoreListTablePartitionRequest& request, const MetastoreListTablePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreListTablePartitionOutcomeCallable metastoreListTablePartitionCallable(const Model::MetastoreListTablePartitionRequest& request) const;
			CreateClusterV2Outcome createClusterV2(const Model::CreateClusterV2Request &request)const;
			void createClusterV2Async(const Model::CreateClusterV2Request& request, const CreateClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterV2OutcomeCallable createClusterV2Callable(const Model::CreateClusterV2Request& request) const;
			ModifyExecutionPlanScheduleInfoOutcome modifyExecutionPlanScheduleInfo(const Model::ModifyExecutionPlanScheduleInfoRequest &request)const;
			void modifyExecutionPlanScheduleInfoAsync(const Model::ModifyExecutionPlanScheduleInfoRequest& request, const ModifyExecutionPlanScheduleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExecutionPlanScheduleInfoOutcomeCallable modifyExecutionPlanScheduleInfoCallable(const Model::ModifyExecutionPlanScheduleInfoRequest& request) const;
			ListClusterHostOutcome listClusterHost(const Model::ListClusterHostRequest &request)const;
			void listClusterHostAsync(const Model::ListClusterHostRequest& request, const ListClusterHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHostOutcomeCallable listClusterHostCallable(const Model::ListClusterHostRequest& request) const;
			DescribeClusterServiceOutcome describeClusterService(const Model::DescribeClusterServiceRequest &request)const;
			void describeClusterServiceAsync(const Model::DescribeClusterServiceRequest& request, const DescribeClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceOutcomeCallable describeClusterServiceCallable(const Model::DescribeClusterServiceRequest& request) const;
			GetQueueOutputStatisticInfoOutcome getQueueOutputStatisticInfo(const Model::GetQueueOutputStatisticInfoRequest &request)const;
			void getQueueOutputStatisticInfoAsync(const Model::GetQueueOutputStatisticInfoRequest& request, const GetQueueOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQueueOutputStatisticInfoOutcomeCallable getQueueOutputStatisticInfoCallable(const Model::GetQueueOutputStatisticInfoRequest& request) const;
			CreateExecutionPlanOutcome createExecutionPlan(const Model::CreateExecutionPlanRequest &request)const;
			void createExecutionPlanAsync(const Model::CreateExecutionPlanRequest& request, const CreateExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExecutionPlanOutcomeCallable createExecutionPlanCallable(const Model::CreateExecutionPlanRequest& request) const;
			MetastoreCreateTableOutcome metastoreCreateTable(const Model::MetastoreCreateTableRequest &request)const;
			void metastoreCreateTableAsync(const Model::MetastoreCreateTableRequest& request, const MetastoreCreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreCreateTableOutcomeCallable metastoreCreateTableCallable(const Model::MetastoreCreateTableRequest& request) const;
			DeleteAlertUserGroupsOutcome deleteAlertUserGroups(const Model::DeleteAlertUserGroupsRequest &request)const;
			void deleteAlertUserGroupsAsync(const Model::DeleteAlertUserGroupsRequest& request, const DeleteAlertUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertUserGroupsOutcomeCallable deleteAlertUserGroupsCallable(const Model::DeleteAlertUserGroupsRequest& request) const;
			MetastoreListKafkaConsumerGroupOutcome metastoreListKafkaConsumerGroup(const Model::MetastoreListKafkaConsumerGroupRequest &request)const;
			void metastoreListKafkaConsumerGroupAsync(const Model::MetastoreListKafkaConsumerGroupRequest& request, const MetastoreListKafkaConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreListKafkaConsumerGroupOutcomeCallable metastoreListKafkaConsumerGroupCallable(const Model::MetastoreListKafkaConsumerGroupRequest& request) const;
			CommonApiWhiteListOutcome commonApiWhiteList(const Model::CommonApiWhiteListRequest &request)const;
			void commonApiWhiteListAsync(const Model::CommonApiWhiteListRequest& request, const CommonApiWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommonApiWhiteListOutcomeCallable commonApiWhiteListCallable(const Model::CommonApiWhiteListRequest& request) const;
			CreateFlowForWebOutcome createFlowForWeb(const Model::CreateFlowForWebRequest &request)const;
			void createFlowForWebAsync(const Model::CreateFlowForWebRequest& request, const CreateFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowForWebOutcomeCallable createFlowForWebCallable(const Model::CreateFlowForWebRequest& request) const;
			DeleteScalingRuleOutcome deleteScalingRule(const Model::DeleteScalingRuleRequest &request)const;
			void deleteScalingRuleAsync(const Model::DeleteScalingRuleRequest& request, const DeleteScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScalingRuleOutcomeCallable deleteScalingRuleCallable(const Model::DeleteScalingRuleRequest& request) const;
			QuerySlsMetricDataOutcome querySlsMetricData(const Model::QuerySlsMetricDataRequest &request)const;
			void querySlsMetricDataAsync(const Model::QuerySlsMetricDataRequest& request, const QuerySlsMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySlsMetricDataOutcomeCallable querySlsMetricDataCallable(const Model::QuerySlsMetricDataRequest& request) const;
			DescribeFlowJobStatisticOutcome describeFlowJobStatistic(const Model::DescribeFlowJobStatisticRequest &request)const;
			void describeFlowJobStatisticAsync(const Model::DescribeFlowJobStatisticRequest& request, const DescribeFlowJobStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowJobStatisticOutcomeCallable describeFlowJobStatisticCallable(const Model::DescribeFlowJobStatisticRequest& request) const;
			MetastoreListKafkaTopicOutcome metastoreListKafkaTopic(const Model::MetastoreListKafkaTopicRequest &request)const;
			void metastoreListKafkaTopicAsync(const Model::MetastoreListKafkaTopicRequest& request, const MetastoreListKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreListKafkaTopicOutcomeCallable metastoreListKafkaTopicCallable(const Model::MetastoreListKafkaTopicRequest& request) const;
			DescribeJobOutcome describeJob(const Model::DescribeJobRequest &request)const;
			void describeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobOutcomeCallable describeJobCallable(const Model::DescribeJobRequest& request) const;
			ReleaseClusterHostGroupOutcome releaseClusterHostGroup(const Model::ReleaseClusterHostGroupRequest &request)const;
			void releaseClusterHostGroupAsync(const Model::ReleaseClusterHostGroupRequest& request, const ReleaseClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterHostGroupOutcomeCallable releaseClusterHostGroupCallable(const Model::ReleaseClusterHostGroupRequest& request) const;
			ListOpsOperationOutcome listOpsOperation(const Model::ListOpsOperationRequest &request)const;
			void listOpsOperationAsync(const Model::ListOpsOperationRequest& request, const ListOpsOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOpsOperationOutcomeCallable listOpsOperationCallable(const Model::ListOpsOperationRequest& request) const;
			ModifyFlowProjectOutcome modifyFlowProject(const Model::ModifyFlowProjectRequest &request)const;
			void modifyFlowProjectAsync(const Model::ModifyFlowProjectRequest& request, const ModifyFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowProjectOutcomeCallable modifyFlowProjectCallable(const Model::ModifyFlowProjectRequest& request) const;
			ModifyClusterHostGroupOutcome modifyClusterHostGroup(const Model::ModifyClusterHostGroupRequest &request)const;
			void modifyClusterHostGroupAsync(const Model::ModifyClusterHostGroupRequest& request, const ModifyClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterHostGroupOutcomeCallable modifyClusterHostGroupCallable(const Model::ModifyClusterHostGroupRequest& request) const;
			DescribeUserStatisticsOutcome describeUserStatistics(const Model::DescribeUserStatisticsRequest &request)const;
			void describeUserStatisticsAsync(const Model::DescribeUserStatisticsRequest& request, const DescribeUserStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserStatisticsOutcomeCallable describeUserStatisticsCallable(const Model::DescribeUserStatisticsRequest& request) const;
			DescribeFlowNodeInstanceLauncherLogOutcome describeFlowNodeInstanceLauncherLog(const Model::DescribeFlowNodeInstanceLauncherLogRequest &request)const;
			void describeFlowNodeInstanceLauncherLogAsync(const Model::DescribeFlowNodeInstanceLauncherLogRequest& request, const DescribeFlowNodeInstanceLauncherLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowNodeInstanceLauncherLogOutcomeCallable describeFlowNodeInstanceLauncherLogCallable(const Model::DescribeFlowNodeInstanceLauncherLogRequest& request) const;
			ListFlowOutcome listFlow(const Model::ListFlowRequest &request)const;
			void listFlowAsync(const Model::ListFlowRequest& request, const ListFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowOutcomeCallable listFlowCallable(const Model::ListFlowRequest& request) const;
			DeleteClusterScriptOutcome deleteClusterScript(const Model::DeleteClusterScriptRequest &request)const;
			void deleteClusterScriptAsync(const Model::DeleteClusterScriptRequest& request, const DeleteClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterScriptOutcomeCallable deleteClusterScriptCallable(const Model::DeleteClusterScriptRequest& request) const;
			ListResourceQueueOutcome listResourceQueue(const Model::ListResourceQueueRequest &request)const;
			void listResourceQueueAsync(const Model::ListResourceQueueRequest& request, const ListResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceQueueOutcomeCallable listResourceQueueCallable(const Model::ListResourceQueueRequest& request) const;
			ListClusterOperationOutcome listClusterOperation(const Model::ListClusterOperationRequest &request)const;
			void listClusterOperationAsync(const Model::ListClusterOperationRequest& request, const ListClusterOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationOutcomeCallable listClusterOperationCallable(const Model::ListClusterOperationRequest& request) const;
			KillExecutionPlanInstanceOutcome killExecutionPlanInstance(const Model::KillExecutionPlanInstanceRequest &request)const;
			void killExecutionPlanInstanceAsync(const Model::KillExecutionPlanInstanceRequest& request, const KillExecutionPlanInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillExecutionPlanInstanceOutcomeCallable killExecutionPlanInstanceCallable(const Model::KillExecutionPlanInstanceRequest& request) const;
			UpdateNavNodeOutcome updateNavNode(const Model::UpdateNavNodeRequest &request)const;
			void updateNavNodeAsync(const Model::UpdateNavNodeRequest& request, const UpdateNavNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNavNodeOutcomeCallable updateNavNodeCallable(const Model::UpdateNavNodeRequest& request) const;
			CloneFlowJobOutcome cloneFlowJob(const Model::CloneFlowJobRequest &request)const;
			void cloneFlowJobAsync(const Model::CloneFlowJobRequest& request, const CloneFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneFlowJobOutcomeCallable cloneFlowJobCallable(const Model::CloneFlowJobRequest& request) const;
			CreateResourcePoolOutcome createResourcePool(const Model::CreateResourcePoolRequest &request)const;
			void createResourcePoolAsync(const Model::CreateResourcePoolRequest& request, const CreateResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateResourcePoolOutcomeCallable createResourcePoolCallable(const Model::CreateResourcePoolRequest& request) const;
			CreateFlowJobOutcome createFlowJob(const Model::CreateFlowJobRequest &request)const;
			void createFlowJobAsync(const Model::CreateFlowJobRequest& request, const CreateFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowJobOutcomeCallable createFlowJobCallable(const Model::CreateFlowJobRequest& request) const;
			DeleteFlowCategoryOutcome deleteFlowCategory(const Model::DeleteFlowCategoryRequest &request)const;
			void deleteFlowCategoryAsync(const Model::DeleteFlowCategoryRequest& request, const DeleteFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowCategoryOutcomeCallable deleteFlowCategoryCallable(const Model::DeleteFlowCategoryRequest& request) const;
			MigrateJobsOutcome migrateJobs(const Model::MigrateJobsRequest &request)const;
			void migrateJobsAsync(const Model::MigrateJobsRequest& request, const MigrateJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateJobsOutcomeCallable migrateJobsCallable(const Model::MigrateJobsRequest& request) const;
			KillExecutionJobInstanceOutcome killExecutionJobInstance(const Model::KillExecutionJobInstanceRequest &request)const;
			void killExecutionJobInstanceAsync(const Model::KillExecutionJobInstanceRequest& request, const KillExecutionJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillExecutionJobInstanceOutcomeCallable killExecutionJobInstanceCallable(const Model::KillExecutionJobInstanceRequest& request) const;
			CreateClusterWithTemplateOutcome createClusterWithTemplate(const Model::CreateClusterWithTemplateRequest &request)const;
			void createClusterWithTemplateAsync(const Model::CreateClusterWithTemplateRequest& request, const CreateClusterWithTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterWithTemplateOutcomeCallable createClusterWithTemplateCallable(const Model::CreateClusterWithTemplateRequest& request) const;
			ListFlowClusterAllOutcome listFlowClusterAll(const Model::ListFlowClusterAllRequest &request)const;
			void listFlowClusterAllAsync(const Model::ListFlowClusterAllRequest& request, const ListFlowClusterAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterAllOutcomeCallable listFlowClusterAllCallable(const Model::ListFlowClusterAllRequest& request) const;
			ModifyExecutionPlanOutcome modifyExecutionPlan(const Model::ModifyExecutionPlanRequest &request)const;
			void modifyExecutionPlanAsync(const Model::ModifyExecutionPlanRequest& request, const ModifyExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExecutionPlanOutcomeCallable modifyExecutionPlanCallable(const Model::ModifyExecutionPlanRequest& request) const;
			ListUserStatisticsOutcome listUserStatistics(const Model::ListUserStatisticsRequest &request)const;
			void listUserStatisticsAsync(const Model::ListUserStatisticsRequest& request, const ListUserStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserStatisticsOutcomeCallable listUserStatisticsCallable(const Model::ListUserStatisticsRequest& request) const;
			AddClusterServiceOutcome addClusterService(const Model::AddClusterServiceRequest &request)const;
			void addClusterServiceAsync(const Model::AddClusterServiceRequest& request, const AddClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddClusterServiceOutcomeCallable addClusterServiceCallable(const Model::AddClusterServiceRequest& request) const;
			ModifyFlowCategoryOutcome modifyFlowCategory(const Model::ModifyFlowCategoryRequest &request)const;
			void modifyFlowCategoryAsync(const Model::ModifyFlowCategoryRequest& request, const ModifyFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowCategoryOutcomeCallable modifyFlowCategoryCallable(const Model::ModifyFlowCategoryRequest& request) const;
			QueryAlarmRulesOutcome queryAlarmRules(const Model::QueryAlarmRulesRequest &request)const;
			void queryAlarmRulesAsync(const Model::QueryAlarmRulesRequest& request, const QueryAlarmRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAlarmRulesOutcomeCallable queryAlarmRulesCallable(const Model::QueryAlarmRulesRequest& request) const;
			ModifyClusterServiceConfigOutcome modifyClusterServiceConfig(const Model::ModifyClusterServiceConfigRequest &request)const;
			void modifyClusterServiceConfigAsync(const Model::ModifyClusterServiceConfigRequest& request, const ModifyClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterServiceConfigOutcomeCallable modifyClusterServiceConfigCallable(const Model::ModifyClusterServiceConfigRequest& request) const;
			ListNotesOutcome listNotes(const Model::ListNotesRequest &request)const;
			void listNotesAsync(const Model::ListNotesRequest& request, const ListNotesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNotesOutcomeCallable listNotesCallable(const Model::ListNotesRequest& request) const;
			MetastoreListDataResourcesOutcome metastoreListDataResources(const Model::MetastoreListDataResourcesRequest &request)const;
			void metastoreListDataResourcesAsync(const Model::MetastoreListDataResourcesRequest& request, const MetastoreListDataResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreListDataResourcesOutcomeCallable metastoreListDataResourcesCallable(const Model::MetastoreListDataResourcesRequest& request) const;
			UpdateETLJobOutcome updateETLJob(const Model::UpdateETLJobRequest &request)const;
			void updateETLJobAsync(const Model::UpdateETLJobRequest& request, const UpdateETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateETLJobOutcomeCallable updateETLJobCallable(const Model::UpdateETLJobRequest& request) const;
			DescribeScalingTaskGroupOutcome describeScalingTaskGroup(const Model::DescribeScalingTaskGroupRequest &request)const;
			void describeScalingTaskGroupAsync(const Model::DescribeScalingTaskGroupRequest& request, const DescribeScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingTaskGroupOutcomeCallable describeScalingTaskGroupCallable(const Model::DescribeScalingTaskGroupRequest& request) const;
			MetastoreDescribeDataSourceOutcome metastoreDescribeDataSource(const Model::MetastoreDescribeDataSourceRequest &request)const;
			void metastoreDescribeDataSourceAsync(const Model::MetastoreDescribeDataSourceRequest& request, const MetastoreDescribeDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDescribeDataSourceOutcomeCallable metastoreDescribeDataSourceCallable(const Model::MetastoreDescribeDataSourceRequest& request) const;
			ListExecutionPlanInstanceTrendOutcome listExecutionPlanInstanceTrend(const Model::ListExecutionPlanInstanceTrendRequest &request)const;
			void listExecutionPlanInstanceTrendAsync(const Model::ListExecutionPlanInstanceTrendRequest& request, const ListExecutionPlanInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionPlanInstanceTrendOutcomeCallable listExecutionPlanInstanceTrendCallable(const Model::ListExecutionPlanInstanceTrendRequest& request) const;
			ResolveETLJobSqlSchemaOutcome resolveETLJobSqlSchema(const Model::ResolveETLJobSqlSchemaRequest &request)const;
			void resolveETLJobSqlSchemaAsync(const Model::ResolveETLJobSqlSchemaRequest& request, const ResolveETLJobSqlSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResolveETLJobSqlSchemaOutcomeCallable resolveETLJobSqlSchemaCallable(const Model::ResolveETLJobSqlSchemaRequest& request) const;
			UpdateETLJobStageOutcome updateETLJobStage(const Model::UpdateETLJobStageRequest &request)const;
			void updateETLJobStageAsync(const Model::UpdateETLJobStageRequest& request, const UpdateETLJobStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateETLJobStageOutcomeCallable updateETLJobStageCallable(const Model::UpdateETLJobStageRequest& request) const;
			SearchLogOutcome searchLog(const Model::SearchLogRequest &request)const;
			void searchLogAsync(const Model::SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchLogOutcomeCallable searchLogCallable(const Model::SearchLogRequest& request) const;
			RenderResourcePoolXmlOutcome renderResourcePoolXml(const Model::RenderResourcePoolXmlRequest &request)const;
			void renderResourcePoolXmlAsync(const Model::RenderResourcePoolXmlRequest& request, const RenderResourcePoolXmlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenderResourcePoolXmlOutcomeCallable renderResourcePoolXmlCallable(const Model::RenderResourcePoolXmlRequest& request) const;
			UpdateDataSourceOutcome updateDataSource(const Model::UpdateDataSourceRequest &request)const;
			void updateDataSourceAsync(const Model::UpdateDataSourceRequest& request, const UpdateDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDataSourceOutcomeCallable updateDataSourceCallable(const Model::UpdateDataSourceRequest& request) const;
			ModifyScalingTaskGroupOutcome modifyScalingTaskGroup(const Model::ModifyScalingTaskGroupRequest &request)const;
			void modifyScalingTaskGroupAsync(const Model::ModifyScalingTaskGroupRequest& request, const ModifyScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingTaskGroupOutcomeCallable modifyScalingTaskGroupCallable(const Model::ModifyScalingTaskGroupRequest& request) const;
			ListDataSourceSchemaDatabaseOutcome listDataSourceSchemaDatabase(const Model::ListDataSourceSchemaDatabaseRequest &request)const;
			void listDataSourceSchemaDatabaseAsync(const Model::ListDataSourceSchemaDatabaseRequest& request, const ListDataSourceSchemaDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceSchemaDatabaseOutcomeCallable listDataSourceSchemaDatabaseCallable(const Model::ListDataSourceSchemaDatabaseRequest& request) const;
			DescribeFlowProjectOutcome describeFlowProject(const Model::DescribeFlowProjectRequest &request)const;
			void describeFlowProjectAsync(const Model::DescribeFlowProjectRequest& request, const DescribeFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowProjectOutcomeCallable describeFlowProjectCallable(const Model::DescribeFlowProjectRequest& request) const;
			CreateUsersOutcome createUsers(const Model::CreateUsersRequest &request)const;
			void createUsersAsync(const Model::CreateUsersRequest& request, const CreateUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUsersOutcomeCallable createUsersCallable(const Model::CreateUsersRequest& request) const;
			CheckDataSourceOutcome checkDataSource(const Model::CheckDataSourceRequest &request)const;
			void checkDataSourceAsync(const Model::CheckDataSourceRequest& request, const CheckDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDataSourceOutcomeCallable checkDataSourceCallable(const Model::CheckDataSourceRequest& request) const;
			ListScalingActivityOutcome listScalingActivity(const Model::ListScalingActivityRequest &request)const;
			void listScalingActivityAsync(const Model::ListScalingActivityRequest& request, const ListScalingActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingActivityOutcomeCallable listScalingActivityCallable(const Model::ListScalingActivityRequest& request) const;
			CreateNoteOutcome createNote(const Model::CreateNoteRequest &request)const;
			void createNoteAsync(const Model::CreateNoteRequest& request, const CreateNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNoteOutcomeCallable createNoteCallable(const Model::CreateNoteRequest& request) const;
			DeleteResourcePoolOutcome deleteResourcePool(const Model::DeleteResourcePoolRequest &request)const;
			void deleteResourcePoolAsync(const Model::DeleteResourcePoolRequest& request, const DeleteResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourcePoolOutcomeCallable deleteResourcePoolCallable(const Model::DeleteResourcePoolRequest& request) const;
			ListFlowJobOutcome listFlowJob(const Model::ListFlowJobRequest &request)const;
			void listFlowJobAsync(const Model::ListFlowJobRequest& request, const ListFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowJobOutcomeCallable listFlowJobCallable(const Model::ListFlowJobRequest& request) const;
			RetryExecutionPlanOutcome retryExecutionPlan(const Model::RetryExecutionPlanRequest &request)const;
			void retryExecutionPlanAsync(const Model::RetryExecutionPlanRequest& request, const RetryExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryExecutionPlanOutcomeCallable retryExecutionPlanCallable(const Model::RetryExecutionPlanRequest& request) const;
			DescribeAvailableInstanceTypeOutcome describeAvailableInstanceType(const Model::DescribeAvailableInstanceTypeRequest &request)const;
			void describeAvailableInstanceTypeAsync(const Model::DescribeAvailableInstanceTypeRequest& request, const DescribeAvailableInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAvailableInstanceTypeOutcomeCallable describeAvailableInstanceTypeCallable(const Model::DescribeAvailableInstanceTypeRequest& request) const;
			MetastoreUpdateKafkaTopicBatchOutcome metastoreUpdateKafkaTopicBatch(const Model::MetastoreUpdateKafkaTopicBatchRequest &request)const;
			void metastoreUpdateKafkaTopicBatchAsync(const Model::MetastoreUpdateKafkaTopicBatchRequest& request, const MetastoreUpdateKafkaTopicBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreUpdateKafkaTopicBatchOutcomeCallable metastoreUpdateKafkaTopicBatchCallable(const Model::MetastoreUpdateKafkaTopicBatchRequest& request) const;
			ListNavSubTreeOutcome listNavSubTree(const Model::ListNavSubTreeRequest &request)const;
			void listNavSubTreeAsync(const Model::ListNavSubTreeRequest& request, const ListNavSubTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNavSubTreeOutcomeCallable listNavSubTreeCallable(const Model::ListNavSubTreeRequest& request) const;
			ListFlowNodeInstanceContainerStatusOutcome listFlowNodeInstanceContainerStatus(const Model::ListFlowNodeInstanceContainerStatusRequest &request)const;
			void listFlowNodeInstanceContainerStatusAsync(const Model::ListFlowNodeInstanceContainerStatusRequest& request, const ListFlowNodeInstanceContainerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowNodeInstanceContainerStatusOutcomeCallable listFlowNodeInstanceContainerStatusCallable(const Model::ListFlowNodeInstanceContainerStatusRequest& request) const;
			CreateFlowProjectOutcome createFlowProject(const Model::CreateFlowProjectRequest &request)const;
			void createFlowProjectAsync(const Model::CreateFlowProjectRequest& request, const CreateFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowProjectOutcomeCallable createFlowProjectCallable(const Model::CreateFlowProjectRequest& request) const;
			MetastoreListDataSourceOutcome metastoreListDataSource(const Model::MetastoreListDataSourceRequest &request)const;
			void metastoreListDataSourceAsync(const Model::MetastoreListDataSourceRequest& request, const MetastoreListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreListDataSourceOutcomeCallable metastoreListDataSourceCallable(const Model::MetastoreListDataSourceRequest& request) const;
			GetSupportedOpsCommandOutcome getSupportedOpsCommand(const Model::GetSupportedOpsCommandRequest &request)const;
			void getSupportedOpsCommandAsync(const Model::GetSupportedOpsCommandRequest& request, const GetSupportedOpsCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSupportedOpsCommandOutcomeCallable getSupportedOpsCommandCallable(const Model::GetSupportedOpsCommandRequest& request) const;
			DescribeETLJobSqlSchemaOutcome describeETLJobSqlSchema(const Model::DescribeETLJobSqlSchemaRequest &request)const;
			void describeETLJobSqlSchemaAsync(const Model::DescribeETLJobSqlSchemaRequest& request, const DescribeETLJobSqlSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeETLJobSqlSchemaOutcomeCallable describeETLJobSqlSchemaCallable(const Model::DescribeETLJobSqlSchemaRequest& request) const;
			CreateVerificationCodeOutcome createVerificationCode(const Model::CreateVerificationCodeRequest &request)const;
			void createVerificationCodeAsync(const Model::CreateVerificationCodeRequest& request, const CreateVerificationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVerificationCodeOutcomeCallable createVerificationCodeCallable(const Model::CreateVerificationCodeRequest& request) const;
			ListExecutionPlanInstancesOutcome listExecutionPlanInstances(const Model::ListExecutionPlanInstancesRequest &request)const;
			void listExecutionPlanInstancesAsync(const Model::ListExecutionPlanInstancesRequest& request, const ListExecutionPlanInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionPlanInstancesOutcomeCallable listExecutionPlanInstancesCallable(const Model::ListExecutionPlanInstancesRequest& request) const;
			DetachClusterForNoteOutcome detachClusterForNote(const Model::DetachClusterForNoteRequest &request)const;
			void detachClusterForNoteAsync(const Model::DetachClusterForNoteRequest& request, const DetachClusterForNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachClusterForNoteOutcomeCallable detachClusterForNoteCallable(const Model::DetachClusterForNoteRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			MetastoreDescribeKafkaConsumerGroupOutcome metastoreDescribeKafkaConsumerGroup(const Model::MetastoreDescribeKafkaConsumerGroupRequest &request)const;
			void metastoreDescribeKafkaConsumerGroupAsync(const Model::MetastoreDescribeKafkaConsumerGroupRequest& request, const MetastoreDescribeKafkaConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDescribeKafkaConsumerGroupOutcomeCallable metastoreDescribeKafkaConsumerGroupCallable(const Model::MetastoreDescribeKafkaConsumerGroupRequest& request) const;
			MetastoreListTaskOutcome metastoreListTask(const Model::MetastoreListTaskRequest &request)const;
			void metastoreListTaskAsync(const Model::MetastoreListTaskRequest& request, const MetastoreListTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreListTaskOutcomeCallable metastoreListTaskCallable(const Model::MetastoreListTaskRequest& request) const;
			DescribeClusterOpLogOutcome describeClusterOpLog(const Model::DescribeClusterOpLogRequest &request)const;
			void describeClusterOpLogAsync(const Model::DescribeClusterOpLogRequest& request, const DescribeClusterOpLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOpLogOutcomeCallable describeClusterOpLogCallable(const Model::DescribeClusterOpLogRequest& request) const;
			DescribeFlowNodeInstanceOutcome describeFlowNodeInstance(const Model::DescribeFlowNodeInstanceRequest &request)const;
			void describeFlowNodeInstanceAsync(const Model::DescribeFlowNodeInstanceRequest& request, const DescribeFlowNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowNodeInstanceOutcomeCallable describeFlowNodeInstanceCallable(const Model::DescribeFlowNodeInstanceRequest& request) const;
			MetastoreDescribeKafkaTopicOutcome metastoreDescribeKafkaTopic(const Model::MetastoreDescribeKafkaTopicRequest &request)const;
			void metastoreDescribeKafkaTopicAsync(const Model::MetastoreDescribeKafkaTopicRequest& request, const MetastoreDescribeKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDescribeKafkaTopicOutcomeCallable metastoreDescribeKafkaTopicCallable(const Model::MetastoreDescribeKafkaTopicRequest& request) const;
			ListScalingTaskGroupOutcome listScalingTaskGroup(const Model::ListScalingTaskGroupRequest &request)const;
			void listScalingTaskGroupAsync(const Model::ListScalingTaskGroupRequest& request, const ListScalingTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScalingTaskGroupOutcomeCallable listScalingTaskGroupCallable(const Model::ListScalingTaskGroupRequest& request) const;
			GetQueueSubmissionStatisticInfoOutcome getQueueSubmissionStatisticInfo(const Model::GetQueueSubmissionStatisticInfoRequest &request)const;
			void getQueueSubmissionStatisticInfoAsync(const Model::GetQueueSubmissionStatisticInfoRequest& request, const GetQueueSubmissionStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQueueSubmissionStatisticInfoOutcomeCallable getQueueSubmissionStatisticInfoCallable(const Model::GetQueueSubmissionStatisticInfoRequest& request) const;
			ListDataSourceOutcome listDataSource(const Model::ListDataSourceRequest &request)const;
			void listDataSourceAsync(const Model::ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceOutcomeCallable listDataSourceCallable(const Model::ListDataSourceRequest& request) const;
			ModifyUserStatisticsOutcome modifyUserStatistics(const Model::ModifyUserStatisticsRequest &request)const;
			void modifyUserStatisticsAsync(const Model::ModifyUserStatisticsRequest& request, const ModifyUserStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserStatisticsOutcomeCallable modifyUserStatisticsCallable(const Model::ModifyUserStatisticsRequest& request) const;
			MetastoreCreateKafkaTopicOutcome metastoreCreateKafkaTopic(const Model::MetastoreCreateKafkaTopicRequest &request)const;
			void metastoreCreateKafkaTopicAsync(const Model::MetastoreCreateKafkaTopicRequest& request, const MetastoreCreateKafkaTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreCreateKafkaTopicOutcomeCallable metastoreCreateKafkaTopicCallable(const Model::MetastoreCreateKafkaTopicRequest& request) const;
			ListETLJobInstanceOutcome listETLJobInstance(const Model::ListETLJobInstanceRequest &request)const;
			void listETLJobInstanceAsync(const Model::ListETLJobInstanceRequest& request, const ListETLJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListETLJobInstanceOutcomeCallable listETLJobInstanceCallable(const Model::ListETLJobInstanceRequest& request) const;
			ModifyFlowVariableCollectionOutcome modifyFlowVariableCollection(const Model::ModifyFlowVariableCollectionRequest &request)const;
			void modifyFlowVariableCollectionAsync(const Model::ModifyFlowVariableCollectionRequest& request, const ModifyFlowVariableCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowVariableCollectionOutcomeCallable modifyFlowVariableCollectionCallable(const Model::ModifyFlowVariableCollectionRequest& request) const;
			DescribeETLJobInstanceOutcome describeETLJobInstance(const Model::DescribeETLJobInstanceRequest &request)const;
			void describeETLJobInstanceAsync(const Model::DescribeETLJobInstanceRequest& request, const DescribeETLJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeETLJobInstanceOutcomeCallable describeETLJobInstanceCallable(const Model::DescribeETLJobInstanceRequest& request) const;
			ModifyExecutionPlanBasicInfoOutcome modifyExecutionPlanBasicInfo(const Model::ModifyExecutionPlanBasicInfoRequest &request)const;
			void modifyExecutionPlanBasicInfoAsync(const Model::ModifyExecutionPlanBasicInfoRequest& request, const ModifyExecutionPlanBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExecutionPlanBasicInfoOutcomeCallable modifyExecutionPlanBasicInfoCallable(const Model::ModifyExecutionPlanBasicInfoRequest& request) const;
			SubmitFlowJobOutcome submitFlowJob(const Model::SubmitFlowJobRequest &request)const;
			void submitFlowJobAsync(const Model::SubmitFlowJobRequest& request, const SubmitFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFlowJobOutcomeCallable submitFlowJobCallable(const Model::SubmitFlowJobRequest& request) const;
			CreateUserPasswordOutcome createUserPassword(const Model::CreateUserPasswordRequest &request)const;
			void createUserPasswordAsync(const Model::CreateUserPasswordRequest& request, const CreateUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserPasswordOutcomeCallable createUserPasswordCallable(const Model::CreateUserPasswordRequest& request) const;
			DescribeETLJobOutcome describeETLJob(const Model::DescribeETLJobRequest &request)const;
			void describeETLJobAsync(const Model::DescribeETLJobRequest& request, const DescribeETLJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeETLJobOutcomeCallable describeETLJobCallable(const Model::DescribeETLJobRequest& request) const;
			ListClusterHostComponentOutcome listClusterHostComponent(const Model::ListClusterHostComponentRequest &request)const;
			void listClusterHostComponentAsync(const Model::ListClusterHostComponentRequest& request, const ListClusterHostComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHostComponentOutcomeCallable listClusterHostComponentCallable(const Model::ListClusterHostComponentRequest& request) const;
			ListAlertDingDingGroupOutcome listAlertDingDingGroup(const Model::ListAlertDingDingGroupRequest &request)const;
			void listAlertDingDingGroupAsync(const Model::ListAlertDingDingGroupRequest& request, const ListAlertDingDingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlertDingDingGroupOutcomeCallable listAlertDingDingGroupCallable(const Model::ListAlertDingDingGroupRequest& request) const;
			CloneDataSourceOutcome cloneDataSource(const Model::CloneDataSourceRequest &request)const;
			void cloneDataSourceAsync(const Model::CloneDataSourceRequest& request, const CloneDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneDataSourceOutcomeCallable cloneDataSourceCallable(const Model::CloneDataSourceRequest& request) const;
			GetJobRunningTimeStatisticInfoOutcome getJobRunningTimeStatisticInfo(const Model::GetJobRunningTimeStatisticInfoRequest &request)const;
			void getJobRunningTimeStatisticInfoAsync(const Model::GetJobRunningTimeStatisticInfoRequest& request, const GetJobRunningTimeStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobRunningTimeStatisticInfoOutcomeCallable getJobRunningTimeStatisticInfoCallable(const Model::GetJobRunningTimeStatisticInfoRequest& request) const;
			ListFlowProjectClusterSettingOutcome listFlowProjectClusterSetting(const Model::ListFlowProjectClusterSettingRequest &request)const;
			void listFlowProjectClusterSettingAsync(const Model::ListFlowProjectClusterSettingRequest& request, const ListFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowProjectClusterSettingOutcomeCallable listFlowProjectClusterSettingCallable(const Model::ListFlowProjectClusterSettingRequest& request) const;
			DescribeFlowProjectClusterSettingOutcome describeFlowProjectClusterSetting(const Model::DescribeFlowProjectClusterSettingRequest &request)const;
			void describeFlowProjectClusterSettingAsync(const Model::DescribeFlowProjectClusterSettingRequest& request, const DescribeFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowProjectClusterSettingOutcomeCallable describeFlowProjectClusterSettingCallable(const Model::DescribeFlowProjectClusterSettingRequest& request) const;
			SyncDataSourceSchemaTableOutcome syncDataSourceSchemaTable(const Model::SyncDataSourceSchemaTableRequest &request)const;
			void syncDataSourceSchemaTableAsync(const Model::SyncDataSourceSchemaTableRequest& request, const SyncDataSourceSchemaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncDataSourceSchemaTableOutcomeCallable syncDataSourceSchemaTableCallable(const Model::SyncDataSourceSchemaTableRequest& request) const;
			ListJobExecutionInstancesOutcome listJobExecutionInstances(const Model::ListJobExecutionInstancesRequest &request)const;
			void listJobExecutionInstancesAsync(const Model::ListJobExecutionInstancesRequest& request, const ListJobExecutionInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobExecutionInstancesOutcomeCallable listJobExecutionInstancesCallable(const Model::ListJobExecutionInstancesRequest& request) const;
			TerminateClusterOperationOutcome terminateClusterOperation(const Model::TerminateClusterOperationRequest &request)const;
			void terminateClusterOperationAsync(const Model::TerminateClusterOperationRequest& request, const TerminateClusterOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TerminateClusterOperationOutcomeCallable terminateClusterOperationCallable(const Model::TerminateClusterOperationRequest& request) const;
			ListSlsLogstoreInfoOutcome listSlsLogstoreInfo(const Model::ListSlsLogstoreInfoRequest &request)const;
			void listSlsLogstoreInfoAsync(const Model::ListSlsLogstoreInfoRequest& request, const ListSlsLogstoreInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSlsLogstoreInfoOutcomeCallable listSlsLogstoreInfoCallable(const Model::ListSlsLogstoreInfoRequest& request) const;
			MetastoreDropTableOutcome metastoreDropTable(const Model::MetastoreDropTableRequest &request)const;
			void metastoreDropTableAsync(const Model::MetastoreDropTableRequest& request, const MetastoreDropTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDropTableOutcomeCallable metastoreDropTableCallable(const Model::MetastoreDropTableRequest& request) const;
			GetOpsCommandDetailOutcome getOpsCommandDetail(const Model::GetOpsCommandDetailRequest &request)const;
			void getOpsCommandDetailAsync(const Model::GetOpsCommandDetailRequest& request, const GetOpsCommandDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpsCommandDetailOutcomeCallable getOpsCommandDetailCallable(const Model::GetOpsCommandDetailRequest& request) const;
			ListClusterServiceOutcome listClusterService(const Model::ListClusterServiceRequest &request)const;
			void listClusterServiceAsync(const Model::ListClusterServiceRequest& request, const ListClusterServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceOutcomeCallable listClusterServiceCallable(const Model::ListClusterServiceRequest& request) const;
			CreateScalingRuleOutcome createScalingRule(const Model::CreateScalingRuleRequest &request)const;
			void createScalingRuleAsync(const Model::CreateScalingRuleRequest& request, const CreateScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScalingRuleOutcomeCallable createScalingRuleCallable(const Model::CreateScalingRuleRequest& request) const;
			CreateNavNodeOutcome createNavNode(const Model::CreateNavNodeRequest &request)const;
			void createNavNodeAsync(const Model::CreateNavNodeRequest& request, const CreateNavNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNavNodeOutcomeCallable createNavNodeCallable(const Model::CreateNavNodeRequest& request) const;
			DeleteFlowProjectOutcome deleteFlowProject(const Model::DeleteFlowProjectRequest &request)const;
			void deleteFlowProjectAsync(const Model::DeleteFlowProjectRequest& request, const DeleteFlowProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectOutcomeCallable deleteFlowProjectCallable(const Model::DeleteFlowProjectRequest& request) const;
			ReleaseClusterOutcome releaseCluster(const Model::ReleaseClusterRequest &request)const;
			void releaseClusterAsync(const Model::ReleaseClusterRequest& request, const ReleaseClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseClusterOutcomeCallable releaseClusterCallable(const Model::ReleaseClusterRequest& request) const;
			RetryCreateUserPasswordOutcome retryCreateUserPassword(const Model::RetryCreateUserPasswordRequest &request)const;
			void retryCreateUserPasswordAsync(const Model::RetryCreateUserPasswordRequest& request, const RetryCreateUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryCreateUserPasswordOutcomeCallable retryCreateUserPasswordCallable(const Model::RetryCreateUserPasswordRequest& request) const;
			ListSupportedServiceNameOutcome listSupportedServiceName(const Model::ListSupportedServiceNameRequest &request)const;
			void listSupportedServiceNameAsync(const Model::ListSupportedServiceNameRequest& request, const ListSupportedServiceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSupportedServiceNameOutcomeCallable listSupportedServiceNameCallable(const Model::ListSupportedServiceNameRequest& request) const;
			ListJobInstanceWorkersOutcome listJobInstanceWorkers(const Model::ListJobInstanceWorkersRequest &request)const;
			void listJobInstanceWorkersAsync(const Model::ListJobInstanceWorkersRequest& request, const ListJobInstanceWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobInstanceWorkersOutcomeCallable listJobInstanceWorkersCallable(const Model::ListJobInstanceWorkersRequest& request) const;
			DeleteNoteOutcome deleteNote(const Model::DeleteNoteRequest &request)const;
			void deleteNoteAsync(const Model::DeleteNoteRequest& request, const DeleteNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNoteOutcomeCallable deleteNoteCallable(const Model::DeleteNoteRequest& request) const;
			ListFlowClusterAllHostsOutcome listFlowClusterAllHosts(const Model::ListFlowClusterAllHostsRequest &request)const;
			void listFlowClusterAllHostsAsync(const Model::ListFlowClusterAllHostsRequest& request, const ListFlowClusterAllHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterAllHostsOutcomeCallable listFlowClusterAllHostsCallable(const Model::ListFlowClusterAllHostsRequest& request) const;
			MigrateClusterHostGroupHostOutcome migrateClusterHostGroupHost(const Model::MigrateClusterHostGroupHostRequest &request)const;
			void migrateClusterHostGroupHostAsync(const Model::MigrateClusterHostGroupHostRequest& request, const MigrateClusterHostGroupHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateClusterHostGroupHostOutcomeCallable migrateClusterHostGroupHostCallable(const Model::MigrateClusterHostGroupHostRequest& request) const;
			GetLogHistogramOutcome getLogHistogram(const Model::GetLogHistogramRequest &request)const;
			void getLogHistogramAsync(const Model::GetLogHistogramRequest& request, const GetLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLogHistogramOutcomeCallable getLogHistogramCallable(const Model::GetLogHistogramRequest& request) const;
			MetastoreDeleteDataResourceOutcome metastoreDeleteDataResource(const Model::MetastoreDeleteDataResourceRequest &request)const;
			void metastoreDeleteDataResourceAsync(const Model::MetastoreDeleteDataResourceRequest& request, const MetastoreDeleteDataResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDeleteDataResourceOutcomeCallable metastoreDeleteDataResourceCallable(const Model::MetastoreDeleteDataResourceRequest& request) const;
			DeleteResourceQueueOutcome deleteResourceQueue(const Model::DeleteResourceQueueRequest &request)const;
			void deleteResourceQueueAsync(const Model::DeleteResourceQueueRequest& request, const DeleteResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteResourceQueueOutcomeCallable deleteResourceQueueCallable(const Model::DeleteResourceQueueRequest& request) const;
			DescribeClusterResourcePoolSchedulerTypeOutcome describeClusterResourcePoolSchedulerType(const Model::DescribeClusterResourcePoolSchedulerTypeRequest &request)const;
			void describeClusterResourcePoolSchedulerTypeAsync(const Model::DescribeClusterResourcePoolSchedulerTypeRequest& request, const DescribeClusterResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterResourcePoolSchedulerTypeOutcomeCallable describeClusterResourcePoolSchedulerTypeCallable(const Model::DescribeClusterResourcePoolSchedulerTypeRequest& request) const;
			DescribeFlowCategoryTreeOutcome describeFlowCategoryTree(const Model::DescribeFlowCategoryTreeRequest &request)const;
			void describeFlowCategoryTreeAsync(const Model::DescribeFlowCategoryTreeRequest& request, const DescribeFlowCategoryTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowCategoryTreeOutcomeCallable describeFlowCategoryTreeCallable(const Model::DescribeFlowCategoryTreeRequest& request) const;
			ListServiceLogOutcome listServiceLog(const Model::ListServiceLogRequest &request)const;
			void listServiceLogAsync(const Model::ListServiceLogRequest& request, const ListServiceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceLogOutcomeCallable listServiceLogCallable(const Model::ListServiceLogRequest& request) const;
			ListFlowNodeSqlResultOutcome listFlowNodeSqlResult(const Model::ListFlowNodeSqlResultRequest &request)const;
			void listFlowNodeSqlResultAsync(const Model::ListFlowNodeSqlResultRequest& request, const ListFlowNodeSqlResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowNodeSqlResultOutcomeCallable listFlowNodeSqlResultCallable(const Model::ListFlowNodeSqlResultRequest& request) const;
			ModifyFlowForWebOutcome modifyFlowForWeb(const Model::ModifyFlowForWebRequest &request)const;
			void modifyFlowForWebAsync(const Model::ModifyFlowForWebRequest& request, const ModifyFlowForWebAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowForWebOutcomeCallable modifyFlowForWebCallable(const Model::ModifyFlowForWebRequest& request) const;
			RunNoteParagraphsOutcome runNoteParagraphs(const Model::RunNoteParagraphsRequest &request)const;
			void runNoteParagraphsAsync(const Model::RunNoteParagraphsRequest& request, const RunNoteParagraphsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunNoteParagraphsOutcomeCallable runNoteParagraphsCallable(const Model::RunNoteParagraphsRequest& request) const;
			ListJobExecutionPlanParamsOutcome listJobExecutionPlanParams(const Model::ListJobExecutionPlanParamsRequest &request)const;
			void listJobExecutionPlanParamsAsync(const Model::ListJobExecutionPlanParamsRequest& request, const ListJobExecutionPlanParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobExecutionPlanParamsOutcomeCallable listJobExecutionPlanParamsCallable(const Model::ListJobExecutionPlanParamsRequest& request) const;
			DescribeFlowNodeInstanceContainerLogOutcome describeFlowNodeInstanceContainerLog(const Model::DescribeFlowNodeInstanceContainerLogRequest &request)const;
			void describeFlowNodeInstanceContainerLogAsync(const Model::DescribeFlowNodeInstanceContainerLogRequest& request, const DescribeFlowNodeInstanceContainerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowNodeInstanceContainerLogOutcomeCallable describeFlowNodeInstanceContainerLogCallable(const Model::DescribeFlowNodeInstanceContainerLogRequest& request) const;
			CancelETLJobReleaseOutcome cancelETLJobRelease(const Model::CancelETLJobReleaseRequest &request)const;
			void cancelETLJobReleaseAsync(const Model::CancelETLJobReleaseRequest& request, const CancelETLJobReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelETLJobReleaseOutcomeCallable cancelETLJobReleaseCallable(const Model::CancelETLJobReleaseRequest& request) const;
			ListClusterTagOutcome listClusterTag(const Model::ListClusterTagRequest &request)const;
			void listClusterTagAsync(const Model::ListClusterTagRequest& request, const ListClusterTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterTagOutcomeCallable listClusterTagCallable(const Model::ListClusterTagRequest& request) const;
			GetUserOutputStatisticInfoOutcome getUserOutputStatisticInfo(const Model::GetUserOutputStatisticInfoRequest &request)const;
			void getUserOutputStatisticInfoAsync(const Model::GetUserOutputStatisticInfoRequest& request, const GetUserOutputStatisticInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutputStatisticInfoOutcomeCallable getUserOutputStatisticInfoCallable(const Model::GetUserOutputStatisticInfoRequest& request) const;
			ModifyJobExecutionPlanFolderOutcome modifyJobExecutionPlanFolder(const Model::ModifyJobExecutionPlanFolderRequest &request)const;
			void modifyJobExecutionPlanFolderAsync(const Model::ModifyJobExecutionPlanFolderRequest& request, const ModifyJobExecutionPlanFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyJobExecutionPlanFolderOutcomeCallable modifyJobExecutionPlanFolderCallable(const Model::ModifyJobExecutionPlanFolderRequest& request) const;
			DescribeClusterBasicInfoOutcome describeClusterBasicInfo(const Model::DescribeClusterBasicInfoRequest &request)const;
			void describeClusterBasicInfoAsync(const Model::DescribeClusterBasicInfoRequest& request, const DescribeClusterBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterBasicInfoOutcomeCallable describeClusterBasicInfoCallable(const Model::DescribeClusterBasicInfoRequest& request) const;
			GetOpsCommandResultOutcome getOpsCommandResult(const Model::GetOpsCommandResultRequest &request)const;
			void getOpsCommandResultAsync(const Model::GetOpsCommandResultRequest& request, const GetOpsCommandResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpsCommandResultOutcomeCallable getOpsCommandResultCallable(const Model::GetOpsCommandResultRequest& request) const;
			ListEmrAvailableConfigOutcome listEmrAvailableConfig(const Model::ListEmrAvailableConfigRequest &request)const;
			void listEmrAvailableConfigAsync(const Model::ListEmrAvailableConfigRequest& request, const ListEmrAvailableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrAvailableConfigOutcomeCallable listEmrAvailableConfigCallable(const Model::ListEmrAvailableConfigRequest& request) const;
			ModifyAlertUserGroupOutcome modifyAlertUserGroup(const Model::ModifyAlertUserGroupRequest &request)const;
			void modifyAlertUserGroupAsync(const Model::ModifyAlertUserGroupRequest& request, const ModifyAlertUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAlertUserGroupOutcomeCallable modifyAlertUserGroupCallable(const Model::ModifyAlertUserGroupRequest& request) const;
			MetastoreListDatabasesOutcome metastoreListDatabases(const Model::MetastoreListDatabasesRequest &request)const;
			void metastoreListDatabasesAsync(const Model::MetastoreListDatabasesRequest& request, const MetastoreListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreListDatabasesOutcomeCallable metastoreListDatabasesCallable(const Model::MetastoreListDatabasesRequest& request) const;
			ListAlertUserGroupOutcome listAlertUserGroup(const Model::ListAlertUserGroupRequest &request)const;
			void listAlertUserGroupAsync(const Model::ListAlertUserGroupRequest& request, const ListAlertUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlertUserGroupOutcomeCallable listAlertUserGroupCallable(const Model::ListAlertUserGroupRequest& request) const;
			ModifyResourceQueueOutcome modifyResourceQueue(const Model::ModifyResourceQueueRequest &request)const;
			void modifyResourceQueueAsync(const Model::ModifyResourceQueueRequest& request, const ModifyResourceQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourceQueueOutcomeCallable modifyResourceQueueCallable(const Model::ModifyResourceQueueRequest& request) const;
			MetastoreSearchTablesOutcome metastoreSearchTables(const Model::MetastoreSearchTablesRequest &request)const;
			void metastoreSearchTablesAsync(const Model::MetastoreSearchTablesRequest& request, const MetastoreSearchTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreSearchTablesOutcomeCallable metastoreSearchTablesCallable(const Model::MetastoreSearchTablesRequest& request) const;
			ListFlowClusterOutcome listFlowCluster(const Model::ListFlowClusterRequest &request)const;
			void listFlowClusterAsync(const Model::ListFlowClusterRequest& request, const ListFlowClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowClusterOutcomeCallable listFlowClusterCallable(const Model::ListFlowClusterRequest& request) const;
			DescribeSecurityGroupAttributeOutcome describeSecurityGroupAttribute(const Model::DescribeSecurityGroupAttributeRequest &request)const;
			void describeSecurityGroupAttributeAsync(const Model::DescribeSecurityGroupAttributeRequest& request, const DescribeSecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecurityGroupAttributeOutcomeCallable describeSecurityGroupAttributeCallable(const Model::DescribeSecurityGroupAttributeRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			ListFlowCategoryOutcome listFlowCategory(const Model::ListFlowCategoryRequest &request)const;
			void listFlowCategoryAsync(const Model::ListFlowCategoryRequest& request, const ListFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowCategoryOutcomeCallable listFlowCategoryCallable(const Model::ListFlowCategoryRequest& request) const;
			ModifyJobExecutionPlanParamOutcome modifyJobExecutionPlanParam(const Model::ModifyJobExecutionPlanParamRequest &request)const;
			void modifyJobExecutionPlanParamAsync(const Model::ModifyJobExecutionPlanParamRequest& request, const ModifyJobExecutionPlanParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyJobExecutionPlanParamOutcomeCallable modifyJobExecutionPlanParamCallable(const Model::ModifyJobExecutionPlanParamRequest& request) const;
			ResizeClusterV2Outcome resizeClusterV2(const Model::ResizeClusterV2Request &request)const;
			void resizeClusterV2Async(const Model::ResizeClusterV2Request& request, const ResizeClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResizeClusterV2OutcomeCallable resizeClusterV2Callable(const Model::ResizeClusterV2Request& request) const;
			DescribeExecutionPlanOutcome describeExecutionPlan(const Model::DescribeExecutionPlanRequest &request)const;
			void describeExecutionPlanAsync(const Model::DescribeExecutionPlanRequest& request, const DescribeExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExecutionPlanOutcomeCallable describeExecutionPlanCallable(const Model::DescribeExecutionPlanRequest& request) const;
			CreateFlowProjectUserOutcome createFlowProjectUser(const Model::CreateFlowProjectUserRequest &request)const;
			void createFlowProjectUserAsync(const Model::CreateFlowProjectUserRequest& request, const CreateFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowProjectUserOutcomeCallable createFlowProjectUserCallable(const Model::CreateFlowProjectUserRequest& request) const;
			CreateFlowCategoryOutcome createFlowCategory(const Model::CreateFlowCategoryRequest &request)const;
			void createFlowCategoryAsync(const Model::CreateFlowCategoryRequest& request, const CreateFlowCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowCategoryOutcomeCallable createFlowCategoryCallable(const Model::CreateFlowCategoryRequest& request) const;
			DeleteFlowProjectClusterSettingOutcome deleteFlowProjectClusterSetting(const Model::DeleteFlowProjectClusterSettingRequest &request)const;
			void deleteFlowProjectClusterSettingAsync(const Model::DeleteFlowProjectClusterSettingRequest& request, const DeleteFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowProjectClusterSettingOutcomeCallable deleteFlowProjectClusterSettingCallable(const Model::DeleteFlowProjectClusterSettingRequest& request) const;
			DeleteExecutionPlanOutcome deleteExecutionPlan(const Model::DeleteExecutionPlanRequest &request)const;
			void deleteExecutionPlanAsync(const Model::DeleteExecutionPlanRequest& request, const DeleteExecutionPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExecutionPlanOutcomeCallable deleteExecutionPlanCallable(const Model::DeleteExecutionPlanRequest& request) const;
			ListClusterServiceCustomActionSupportConfigOutcome listClusterServiceCustomActionSupportConfig(const Model::ListClusterServiceCustomActionSupportConfigRequest &request)const;
			void listClusterServiceCustomActionSupportConfigAsync(const Model::ListClusterServiceCustomActionSupportConfigRequest& request, const ListClusterServiceCustomActionSupportConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterServiceCustomActionSupportConfigOutcomeCallable listClusterServiceCustomActionSupportConfigCallable(const Model::ListClusterServiceCustomActionSupportConfigRequest& request) const;
			MetastoreDescribeTableOutcome metastoreDescribeTable(const Model::MetastoreDescribeTableRequest &request)const;
			void metastoreDescribeTableAsync(const Model::MetastoreDescribeTableRequest& request, const MetastoreDescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreDescribeTableOutcomeCallable metastoreDescribeTableCallable(const Model::MetastoreDescribeTableRequest& request) const;
			GetLogDownloadUrlOutcome getLogDownloadUrl(const Model::GetLogDownloadUrlRequest &request)const;
			void getLogDownloadUrlAsync(const Model::GetLogDownloadUrlRequest& request, const GetLogDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLogDownloadUrlOutcomeCallable getLogDownloadUrlCallable(const Model::GetLogDownloadUrlRequest& request) const;
			ModifyFlowOutcome modifyFlow(const Model::ModifyFlowRequest &request)const;
			void modifyFlowAsync(const Model::ModifyFlowRequest& request, const ModifyFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowOutcomeCallable modifyFlowCallable(const Model::ModifyFlowRequest& request) const;
			DescribeScalingRuleOutcome describeScalingRule(const Model::DescribeScalingRuleRequest &request)const;
			void describeScalingRuleAsync(const Model::DescribeScalingRuleRequest& request, const DescribeScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScalingRuleOutcomeCallable describeScalingRuleCallable(const Model::DescribeScalingRuleRequest& request) const;
			RunParagraphOutcome runParagraph(const Model::RunParagraphRequest &request)const;
			void runParagraphAsync(const Model::RunParagraphRequest& request, const RunParagraphAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunParagraphOutcomeCallable runParagraphCallable(const Model::RunParagraphRequest& request) const;
			SyncDataSourceSchemaDatabaseOutcome syncDataSourceSchemaDatabase(const Model::SyncDataSourceSchemaDatabaseRequest &request)const;
			void syncDataSourceSchemaDatabaseAsync(const Model::SyncDataSourceSchemaDatabaseRequest& request, const SyncDataSourceSchemaDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncDataSourceSchemaDatabaseOutcomeCallable syncDataSourceSchemaDatabaseCallable(const Model::SyncDataSourceSchemaDatabaseRequest& request) const;
			CreateUserStatisticsOutcome createUserStatistics(const Model::CreateUserStatisticsRequest &request)const;
			void createUserStatisticsAsync(const Model::CreateUserStatisticsRequest& request, const CreateUserStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserStatisticsOutcomeCallable createUserStatisticsCallable(const Model::CreateUserStatisticsRequest& request) const;
			DescribeClusterServiceConfigOutcome describeClusterServiceConfig(const Model::DescribeClusterServiceConfigRequest &request)const;
			void describeClusterServiceConfigAsync(const Model::DescribeClusterServiceConfigRequest& request, const DescribeClusterServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterServiceConfigOutcomeCallable describeClusterServiceConfigCallable(const Model::DescribeClusterServiceConfigRequest& request) const;
			ModifyFlowProjectClusterSettingOutcome modifyFlowProjectClusterSetting(const Model::ModifyFlowProjectClusterSettingRequest &request)const;
			void modifyFlowProjectClusterSettingAsync(const Model::ModifyFlowProjectClusterSettingRequest& request, const ModifyFlowProjectClusterSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowProjectClusterSettingOutcomeCallable modifyFlowProjectClusterSettingCallable(const Model::ModifyFlowProjectClusterSettingRequest& request) const;
			DeleteJobOutcome deleteJob(const Model::DeleteJobRequest &request)const;
			void deleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobOutcomeCallable deleteJobCallable(const Model::DeleteJobRequest& request) const;
			ModifyExecutionPlanClusterInfoOutcome modifyExecutionPlanClusterInfo(const Model::ModifyExecutionPlanClusterInfoRequest &request)const;
			void modifyExecutionPlanClusterInfoAsync(const Model::ModifyExecutionPlanClusterInfoRequest& request, const ModifyExecutionPlanClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyExecutionPlanClusterInfoOutcomeCallable modifyExecutionPlanClusterInfoCallable(const Model::ModifyExecutionPlanClusterInfoRequest& request) const;
			ModifyClusterNameOutcome modifyClusterName(const Model::ModifyClusterNameRequest &request)const;
			void modifyClusterNameAsync(const Model::ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterNameOutcomeCallable modifyClusterNameCallable(const Model::ModifyClusterNameRequest& request) const;
			MetastoreListTablesOutcome metastoreListTables(const Model::MetastoreListTablesRequest &request)const;
			void metastoreListTablesAsync(const Model::MetastoreListTablesRequest& request, const MetastoreListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MetastoreListTablesOutcomeCallable metastoreListTablesCallable(const Model::MetastoreListTablesRequest& request) const;
			ListClusterOperationHostTaskOutcome listClusterOperationHostTask(const Model::ListClusterOperationHostTaskRequest &request)const;
			void listClusterOperationHostTaskAsync(const Model::ListClusterOperationHostTaskRequest& request, const ListClusterOperationHostTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOperationHostTaskOutcomeCallable listClusterOperationHostTaskCallable(const Model::ListClusterOperationHostTaskRequest& request) const;
			ModifyResourcePoolOutcome modifyResourcePool(const Model::ModifyResourcePoolRequest &request)const;
			void modifyResourcePoolAsync(const Model::ModifyResourcePoolRequest& request, const ModifyResourcePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourcePoolOutcomeCallable modifyResourcePoolCallable(const Model::ModifyResourcePoolRequest& request) const;
			DescribeClusterScriptOutcome describeClusterScript(const Model::DescribeClusterScriptRequest &request)const;
			void describeClusterScriptAsync(const Model::DescribeClusterScriptRequest& request, const DescribeClusterScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterScriptOutcomeCallable describeClusterScriptCallable(const Model::DescribeClusterScriptRequest& request) const;
			ListRequiredServiceOutcome listRequiredService(const Model::ListRequiredServiceRequest &request)const;
			void listRequiredServiceAsync(const Model::ListRequiredServiceRequest& request, const ListRequiredServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRequiredServiceOutcomeCallable listRequiredServiceCallable(const Model::ListRequiredServiceRequest& request) const;
			ListFlowProjectUserOutcome listFlowProjectUser(const Model::ListFlowProjectUserRequest &request)const;
			void listFlowProjectUserAsync(const Model::ListFlowProjectUserRequest& request, const ListFlowProjectUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowProjectUserOutcomeCallable listFlowProjectUserCallable(const Model::ListFlowProjectUserRequest& request) const;
			SuspendExecutionPlanSchedulerOutcome suspendExecutionPlanScheduler(const Model::SuspendExecutionPlanSchedulerRequest &request)const;
			void suspendExecutionPlanSchedulerAsync(const Model::SuspendExecutionPlanSchedulerRequest& request, const SuspendExecutionPlanSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendExecutionPlanSchedulerOutcomeCallable suspendExecutionPlanSchedulerCallable(const Model::SuspendExecutionPlanSchedulerRequest& request) const;
			ModifyResourcePoolSchedulerTypeOutcome modifyResourcePoolSchedulerType(const Model::ModifyResourcePoolSchedulerTypeRequest &request)const;
			void modifyResourcePoolSchedulerTypeAsync(const Model::ModifyResourcePoolSchedulerTypeRequest& request, const ModifyResourcePoolSchedulerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyResourcePoolSchedulerTypeOutcomeCallable modifyResourcePoolSchedulerTypeCallable(const Model::ModifyResourcePoolSchedulerTypeRequest& request) const;
			ListOpsOperationTaskOutcome listOpsOperationTask(const Model::ListOpsOperationTaskRequest &request)const;
			void listOpsOperationTaskAsync(const Model::ListOpsOperationTaskRequest& request, const ListOpsOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOpsOperationTaskOutcomeCallable listOpsOperationTaskCallable(const Model::ListOpsOperationTaskRequest& request) const;
			DeleteClusterHostGroupOutcome deleteClusterHostGroup(const Model::DeleteClusterHostGroupRequest &request)const;
			void deleteClusterHostGroupAsync(const Model::DeleteClusterHostGroupRequest& request, const DeleteClusterHostGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterHostGroupOutcomeCallable deleteClusterHostGroupCallable(const Model::DeleteClusterHostGroupRequest& request) const;
			DeleteNavNodeOutcome deleteNavNode(const Model::DeleteNavNodeRequest &request)const;
			void deleteNavNodeAsync(const Model::DeleteNavNodeRequest& request, const DeleteNavNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNavNodeOutcomeCallable deleteNavNodeCallable(const Model::DeleteNavNodeRequest& request) const;
			DescribeDataSourceSchemaTableOutcome describeDataSourceSchemaTable(const Model::DescribeDataSourceSchemaTableRequest &request)const;
			void describeDataSourceSchemaTableAsync(const Model::DescribeDataSourceSchemaTableRequest& request, const DescribeDataSourceSchemaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataSourceSchemaTableOutcomeCallable describeDataSourceSchemaTableCallable(const Model::DescribeDataSourceSchemaTableRequest& request) const;
			UpdateProjectSettingOutcome updateProjectSetting(const Model::UpdateProjectSettingRequest &request)const;
			void updateProjectSettingAsync(const Model::UpdateProjectSettingRequest& request, const UpdateProjectSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectSettingOutcomeCallable updateProjectSettingCallable(const Model::UpdateProjectSettingRequest& request) const;
			OperateExistsNodeClusterOutcome operateExistsNodeCluster(const Model::OperateExistsNodeClusterRequest &request)const;
			void operateExistsNodeClusterAsync(const Model::OperateExistsNodeClusterRequest& request, const OperateExistsNodeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateExistsNodeClusterOutcomeCallable operateExistsNodeClusterCallable(const Model::OperateExistsNodeClusterRequest& request) const;
			DescribeNoteOutcome describeNote(const Model::DescribeNoteRequest &request)const;
			void describeNoteAsync(const Model::DescribeNoteRequest& request, const DescribeNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNoteOutcomeCallable describeNoteCallable(const Model::DescribeNoteRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EMR_EMRCLIENT_H_
