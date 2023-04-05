/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TRRO_V20220325_TRROCLIENT_H_
#define TENCENTCLOUD_TRRO_V20220325_TRROCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trro/v20220325/model/BatchDeleteDevicesRequest.h>
#include <tencentcloud/trro/v20220325/model/BatchDeleteDevicesResponse.h>
#include <tencentcloud/trro/v20220325/model/BatchDeletePolicyRequest.h>
#include <tencentcloud/trro/v20220325/model/BatchDeletePolicyResponse.h>
#include <tencentcloud/trro/v20220325/model/BoundLicensesRequest.h>
#include <tencentcloud/trro/v20220325/model/BoundLicensesResponse.h>
#include <tencentcloud/trro/v20220325/model/CreateDeviceRequest.h>
#include <tencentcloud/trro/v20220325/model/CreateDeviceResponse.h>
#include <tencentcloud/trro/v20220325/model/CreateProjectRequest.h>
#include <tencentcloud/trro/v20220325/model/CreateProjectResponse.h>
#include <tencentcloud/trro/v20220325/model/DeleteProjectRequest.h>
#include <tencentcloud/trro/v20220325/model/DeleteProjectResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribeDeviceInfoRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribeDeviceInfoResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribeDeviceListRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribeDeviceListResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribeDeviceSessionDetailsRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribeDeviceSessionDetailsResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribeDeviceSessionListRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribeDeviceSessionListResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribePolicyRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribePolicyResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribeProjectInfoRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribeProjectInfoResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribeProjectListRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribeProjectListResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribeRecentSessionListRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribeRecentSessionListResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribeSessionStatisticsRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribeSessionStatisticsResponse.h>
#include <tencentcloud/trro/v20220325/model/DescribeSessionStatisticsByIntervalRequest.h>
#include <tencentcloud/trro/v20220325/model/DescribeSessionStatisticsByIntervalResponse.h>
#include <tencentcloud/trro/v20220325/model/GetDeviceLicenseRequest.h>
#include <tencentcloud/trro/v20220325/model/GetDeviceLicenseResponse.h>
#include <tencentcloud/trro/v20220325/model/GetDevicesRequest.h>
#include <tencentcloud/trro/v20220325/model/GetDevicesResponse.h>
#include <tencentcloud/trro/v20220325/model/GetLicenseStatRequest.h>
#include <tencentcloud/trro/v20220325/model/GetLicenseStatResponse.h>
#include <tencentcloud/trro/v20220325/model/GetLicensesRequest.h>
#include <tencentcloud/trro/v20220325/model/GetLicensesResponse.h>
#include <tencentcloud/trro/v20220325/model/ModifyDeviceRequest.h>
#include <tencentcloud/trro/v20220325/model/ModifyDeviceResponse.h>
#include <tencentcloud/trro/v20220325/model/ModifyPolicyRequest.h>
#include <tencentcloud/trro/v20220325/model/ModifyPolicyResponse.h>
#include <tencentcloud/trro/v20220325/model/ModifyProjectRequest.h>
#include <tencentcloud/trro/v20220325/model/ModifyProjectResponse.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            class TrroClient : public AbstractClient
            {
            public:
                TrroClient(const Credential &credential, const std::string &region);
                TrroClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchDeleteDevicesResponse> BatchDeleteDevicesOutcome;
                typedef std::future<BatchDeleteDevicesOutcome> BatchDeleteDevicesOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::BatchDeleteDevicesRequest&, BatchDeleteDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeletePolicyResponse> BatchDeletePolicyOutcome;
                typedef std::future<BatchDeletePolicyOutcome> BatchDeletePolicyOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::BatchDeletePolicyRequest&, BatchDeletePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeletePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::BoundLicensesResponse> BoundLicensesOutcome;
                typedef std::future<BoundLicensesOutcome> BoundLicensesOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::BoundLicensesRequest&, BoundLicensesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BoundLicensesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceResponse> CreateDeviceOutcome;
                typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::CreateDeviceRequest&, CreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceInfoResponse> DescribeDeviceInfoOutcome;
                typedef std::future<DescribeDeviceInfoOutcome> DescribeDeviceInfoOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribeDeviceInfoRequest&, DescribeDeviceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceListResponse> DescribeDeviceListOutcome;
                typedef std::future<DescribeDeviceListOutcome> DescribeDeviceListOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribeDeviceListRequest&, DescribeDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceSessionDetailsResponse> DescribeDeviceSessionDetailsOutcome;
                typedef std::future<DescribeDeviceSessionDetailsOutcome> DescribeDeviceSessionDetailsOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribeDeviceSessionDetailsRequest&, DescribeDeviceSessionDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceSessionDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceSessionListResponse> DescribeDeviceSessionListOutcome;
                typedef std::future<DescribeDeviceSessionListOutcome> DescribeDeviceSessionListOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribeDeviceSessionListRequest&, DescribeDeviceSessionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceSessionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyResponse> DescribePolicyOutcome;
                typedef std::future<DescribePolicyOutcome> DescribePolicyOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribePolicyRequest&, DescribePolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectInfoResponse> DescribeProjectInfoOutcome;
                typedef std::future<DescribeProjectInfoOutcome> DescribeProjectInfoOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribeProjectInfoRequest&, DescribeProjectInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectListResponse> DescribeProjectListOutcome;
                typedef std::future<DescribeProjectListOutcome> DescribeProjectListOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribeProjectListRequest&, DescribeProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecentSessionListResponse> DescribeRecentSessionListOutcome;
                typedef std::future<DescribeRecentSessionListOutcome> DescribeRecentSessionListOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribeRecentSessionListRequest&, DescribeRecentSessionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecentSessionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSessionStatisticsResponse> DescribeSessionStatisticsOutcome;
                typedef std::future<DescribeSessionStatisticsOutcome> DescribeSessionStatisticsOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribeSessionStatisticsRequest&, DescribeSessionStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSessionStatisticsByIntervalResponse> DescribeSessionStatisticsByIntervalOutcome;
                typedef std::future<DescribeSessionStatisticsByIntervalOutcome> DescribeSessionStatisticsByIntervalOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::DescribeSessionStatisticsByIntervalRequest&, DescribeSessionStatisticsByIntervalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionStatisticsByIntervalAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceLicenseResponse> GetDeviceLicenseOutcome;
                typedef std::future<GetDeviceLicenseOutcome> GetDeviceLicenseOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::GetDeviceLicenseRequest&, GetDeviceLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDevicesResponse> GetDevicesOutcome;
                typedef std::future<GetDevicesOutcome> GetDevicesOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::GetDevicesRequest&, GetDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLicenseStatResponse> GetLicenseStatOutcome;
                typedef std::future<GetLicenseStatOutcome> GetLicenseStatOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::GetLicenseStatRequest&, GetLicenseStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLicenseStatAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLicensesResponse> GetLicensesOutcome;
                typedef std::future<GetLicensesOutcome> GetLicensesOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::GetLicensesRequest&, GetLicensesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLicensesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDeviceResponse> ModifyDeviceOutcome;
                typedef std::future<ModifyDeviceOutcome> ModifyDeviceOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::ModifyDeviceRequest&, ModifyDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPolicyResponse> ModifyPolicyOutcome;
                typedef std::future<ModifyPolicyOutcome> ModifyPolicyOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::ModifyPolicyRequest&, ModifyPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const TrroClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;



                /**
                 *用于批量删除设备
                 * @param req BatchDeleteDevicesRequest
                 * @return BatchDeleteDevicesOutcome
                 */
                BatchDeleteDevicesOutcome BatchDeleteDevices(const Model::BatchDeleteDevicesRequest &request);
                void BatchDeleteDevicesAsync(const Model::BatchDeleteDevicesRequest& request, const BatchDeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeleteDevicesOutcomeCallable BatchDeleteDevicesCallable(const Model::BatchDeleteDevicesRequest& request);

                /**
                 *用于批量删除修改权限配置
                 * @param req BatchDeletePolicyRequest
                 * @return BatchDeletePolicyOutcome
                 */
                BatchDeletePolicyOutcome BatchDeletePolicy(const Model::BatchDeletePolicyRequest &request);
                void BatchDeletePolicyAsync(const Model::BatchDeletePolicyRequest& request, const BatchDeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeletePolicyOutcomeCallable BatchDeletePolicyCallable(const Model::BatchDeletePolicyRequest& request);

                /**
                 *为推流设备绑定license，优先绑定到期时间最近的，到期时间相同优先绑定月包
                 * @param req BoundLicensesRequest
                 * @return BoundLicensesOutcome
                 */
                BoundLicensesOutcome BoundLicenses(const Model::BoundLicensesRequest &request);
                void BoundLicensesAsync(const Model::BoundLicensesRequest& request, const BoundLicensesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BoundLicensesOutcomeCallable BoundLicensesCallable(const Model::BoundLicensesRequest& request);

                /**
                 *用于创建设备
                 * @param req CreateDeviceRequest
                 * @return CreateDeviceOutcome
                 */
                CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest &request);
                void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request);

                /**
                 *用于创建项目
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *用于删除项目
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *用于获取指定设备信息
                 * @param req DescribeDeviceInfoRequest
                 * @return DescribeDeviceInfoOutcome
                 */
                DescribeDeviceInfoOutcome DescribeDeviceInfo(const Model::DescribeDeviceInfoRequest &request);
                void DescribeDeviceInfoAsync(const Model::DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceInfoOutcomeCallable DescribeDeviceInfoCallable(const Model::DescribeDeviceInfoRequest& request);

                /**
                 *用于获取设备信息列表
                 * @param req DescribeDeviceListRequest
                 * @return DescribeDeviceListOutcome
                 */
                DescribeDeviceListOutcome DescribeDeviceList(const Model::DescribeDeviceListRequest &request);
                void DescribeDeviceListAsync(const Model::DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceListOutcomeCallable DescribeDeviceListCallable(const Model::DescribeDeviceListRequest& request);

                /**
                 *获取设备会话数据详单
                 * @param req DescribeDeviceSessionDetailsRequest
                 * @return DescribeDeviceSessionDetailsOutcome
                 */
                DescribeDeviceSessionDetailsOutcome DescribeDeviceSessionDetails(const Model::DescribeDeviceSessionDetailsRequest &request);
                void DescribeDeviceSessionDetailsAsync(const Model::DescribeDeviceSessionDetailsRequest& request, const DescribeDeviceSessionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceSessionDetailsOutcomeCallable DescribeDeviceSessionDetailsCallable(const Model::DescribeDeviceSessionDetailsRequest& request);

                /**
                 *获取设备会话列表
                 * @param req DescribeDeviceSessionListRequest
                 * @return DescribeDeviceSessionListOutcome
                 */
                DescribeDeviceSessionListOutcome DescribeDeviceSessionList(const Model::DescribeDeviceSessionListRequest &request);
                void DescribeDeviceSessionListAsync(const Model::DescribeDeviceSessionListRequest& request, const DescribeDeviceSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceSessionListOutcomeCallable DescribeDeviceSessionListCallable(const Model::DescribeDeviceSessionListRequest& request);

                /**
                 *用于查看权限配置
                 * @param req DescribePolicyRequest
                 * @return DescribePolicyOutcome
                 */
                DescribePolicyOutcome DescribePolicy(const Model::DescribePolicyRequest &request);
                void DescribePolicyAsync(const Model::DescribePolicyRequest& request, const DescribePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyOutcomeCallable DescribePolicyCallable(const Model::DescribePolicyRequest& request);

                /**
                 *用于获取项目信息
                 * @param req DescribeProjectInfoRequest
                 * @return DescribeProjectInfoOutcome
                 */
                DescribeProjectInfoOutcome DescribeProjectInfo(const Model::DescribeProjectInfoRequest &request);
                void DescribeProjectInfoAsync(const Model::DescribeProjectInfoRequest& request, const DescribeProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectInfoOutcomeCallable DescribeProjectInfoCallable(const Model::DescribeProjectInfoRequest& request);

                /**
                 *用于获取项目列表
                 * @param req DescribeProjectListRequest
                 * @return DescribeProjectListOutcome
                 */
                DescribeProjectListOutcome DescribeProjectList(const Model::DescribeProjectListRequest &request);
                void DescribeProjectListAsync(const Model::DescribeProjectListRequest& request, const DescribeProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectListOutcomeCallable DescribeProjectListCallable(const Model::DescribeProjectListRequest& request);

                /**
                 *获取最新设备会话列表
                 * @param req DescribeRecentSessionListRequest
                 * @return DescribeRecentSessionListOutcome
                 */
                DescribeRecentSessionListOutcome DescribeRecentSessionList(const Model::DescribeRecentSessionListRequest &request);
                void DescribeRecentSessionListAsync(const Model::DescribeRecentSessionListRequest& request, const DescribeRecentSessionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecentSessionListOutcomeCallable DescribeRecentSessionListCallable(const Model::DescribeRecentSessionListRequest& request);

                /**
                 *获取会话统计值
                 * @param req DescribeSessionStatisticsRequest
                 * @return DescribeSessionStatisticsOutcome
                 */
                DescribeSessionStatisticsOutcome DescribeSessionStatistics(const Model::DescribeSessionStatisticsRequest &request);
                void DescribeSessionStatisticsAsync(const Model::DescribeSessionStatisticsRequest& request, const DescribeSessionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSessionStatisticsOutcomeCallable DescribeSessionStatisticsCallable(const Model::DescribeSessionStatisticsRequest& request);

                /**
                 *获取各时间段的会话统计值
                 * @param req DescribeSessionStatisticsByIntervalRequest
                 * @return DescribeSessionStatisticsByIntervalOutcome
                 */
                DescribeSessionStatisticsByIntervalOutcome DescribeSessionStatisticsByInterval(const Model::DescribeSessionStatisticsByIntervalRequest &request);
                void DescribeSessionStatisticsByIntervalAsync(const Model::DescribeSessionStatisticsByIntervalRequest& request, const DescribeSessionStatisticsByIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSessionStatisticsByIntervalOutcomeCallable DescribeSessionStatisticsByIntervalCallable(const Model::DescribeSessionStatisticsByIntervalRequest& request);

                /**
                 *获取设备已经绑定的可用授权数量
                 * @param req GetDeviceLicenseRequest
                 * @return GetDeviceLicenseOutcome
                 */
                GetDeviceLicenseOutcome GetDeviceLicense(const Model::GetDeviceLicenseRequest &request);
                void GetDeviceLicenseAsync(const Model::GetDeviceLicenseRequest& request, const GetDeviceLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceLicenseOutcomeCallable GetDeviceLicenseCallable(const Model::GetDeviceLicenseRequest& request);

                /**
                 *查询用户设备的授权绑定情况
                 * @param req GetDevicesRequest
                 * @return GetDevicesOutcome
                 */
                GetDevicesOutcome GetDevices(const Model::GetDevicesRequest &request);
                void GetDevicesAsync(const Model::GetDevicesRequest& request, const GetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDevicesOutcomeCallable GetDevicesCallable(const Model::GetDevicesRequest& request);

                /**
                 *统计license类型数量
                 * @param req GetLicenseStatRequest
                 * @return GetLicenseStatOutcome
                 */
                GetLicenseStatOutcome GetLicenseStat(const Model::GetLicenseStatRequest &request);
                void GetLicenseStatAsync(const Model::GetLicenseStatRequest& request, const GetLicenseStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLicenseStatOutcomeCallable GetLicenseStatCallable(const Model::GetLicenseStatRequest& request);

                /**
                 *按授权查看license列表
                 * @param req GetLicensesRequest
                 * @return GetLicensesOutcome
                 */
                GetLicensesOutcome GetLicenses(const Model::GetLicensesRequest &request);
                void GetLicensesAsync(const Model::GetLicensesRequest& request, const GetLicensesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLicensesOutcomeCallable GetLicensesCallable(const Model::GetLicensesRequest& request);

                /**
                 *用于修改设备信息
                 * @param req ModifyDeviceRequest
                 * @return ModifyDeviceOutcome
                 */
                ModifyDeviceOutcome ModifyDevice(const Model::ModifyDeviceRequest &request);
                void ModifyDeviceAsync(const Model::ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceOutcomeCallable ModifyDeviceCallable(const Model::ModifyDeviceRequest& request);

                /**
                 *用于修改权限配置
                 * @param req ModifyPolicyRequest
                 * @return ModifyPolicyOutcome
                 */
                ModifyPolicyOutcome ModifyPolicy(const Model::ModifyPolicyRequest &request);
                void ModifyPolicyAsync(const Model::ModifyPolicyRequest& request, const ModifyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPolicyOutcomeCallable ModifyPolicyCallable(const Model::ModifyPolicyRequest& request);

                /**
                 *用于修改项目信息
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_TRROCLIENT_H_
