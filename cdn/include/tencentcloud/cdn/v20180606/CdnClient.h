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

#ifndef TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_
#define TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cdn/v20180606/model/AddCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/AddCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/CreateClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/CreateClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/DeleteCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/DeleteCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/DeleteClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/DeleteClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeBillingDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeBillingDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDomainLogsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnDomainLogsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnIpRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCdnIpResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCertDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeCertDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeDomainsConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeImageConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeImageConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpStatusRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpStatusResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpVisitRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeIpVisitResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeMapInfoRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeMapInfoResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeOriginDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePayTypeRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePayTypeResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeQuotaRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeQuotaResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushQuotaRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushQuotaResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushTasksRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribePushTasksResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeReportDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeReportDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeTrafficPackagesRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeTrafficPackagesResponse.h>
#include <tencentcloud/cdn/v20180606/model/DescribeUrlViolationsRequest.h>
#include <tencentcloud/cdn/v20180606/model/DescribeUrlViolationsResponse.h>
#include <tencentcloud/cdn/v20180606/model/DisableCachesRequest.h>
#include <tencentcloud/cdn/v20180606/model/DisableCachesResponse.h>
#include <tencentcloud/cdn/v20180606/model/DisableClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/DisableClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/EnableCachesRequest.h>
#include <tencentcloud/cdn/v20180606/model/EnableCachesResponse.h>
#include <tencentcloud/cdn/v20180606/model/EnableClsLogTopicRequest.h>
#include <tencentcloud/cdn/v20180606/model/EnableClsLogTopicResponse.h>
#include <tencentcloud/cdn/v20180606/model/GetDisableRecordsRequest.h>
#include <tencentcloud/cdn/v20180606/model/GetDisableRecordsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListClsLogTopicsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListClsLogTopicsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListClsTopicDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListClsTopicDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDataRequest.h>
#include <tencentcloud/cdn/v20180606/model/ListTopDataResponse.h>
#include <tencentcloud/cdn/v20180606/model/ManageClsTopicDomainsRequest.h>
#include <tencentcloud/cdn/v20180606/model/ManageClsTopicDomainsResponse.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PurgePathCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/PurgeUrlsCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PurgeUrlsCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheRequest.h>
#include <tencentcloud/cdn/v20180606/model/PushUrlsCacheResponse.h>
#include <tencentcloud/cdn/v20180606/model/SearchClsLogRequest.h>
#include <tencentcloud/cdn/v20180606/model/SearchClsLogResponse.h>
#include <tencentcloud/cdn/v20180606/model/StartCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/StartCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/StopCdnDomainRequest.h>
#include <tencentcloud/cdn/v20180606/model/StopCdnDomainResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdateDomainConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdateDomainConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdateImageConfigRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdateImageConfigResponse.h>
#include <tencentcloud/cdn/v20180606/model/UpdatePayTypeRequest.h>
#include <tencentcloud/cdn/v20180606/model/UpdatePayTypeResponse.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            class CdnClient : public AbstractClient
            {
            public:
                CdnClient(const Credential &credential, const std::string &region);
                CdnClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::AddCdnDomainResponse> AddCdnDomainOutcome;
                typedef std::future<AddCdnDomainOutcome> AddCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::AddCdnDomainRequest&, AddCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCdnDomainAsyncHandler;
                typedef Outcome<Error, Model::CreateClsLogTopicResponse> CreateClsLogTopicOutcome;
                typedef std::future<CreateClsLogTopicOutcome> CreateClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::CreateClsLogTopicRequest&, CreateClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClsLogTopicAsyncHandler;
                typedef Outcome<Error, Model::DeleteCdnDomainResponse> DeleteCdnDomainOutcome;
                typedef std::future<DeleteCdnDomainOutcome> DeleteCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DeleteCdnDomainRequest&, DeleteCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCdnDomainAsyncHandler;
                typedef Outcome<Error, Model::DeleteClsLogTopicResponse> DeleteClsLogTopicOutcome;
                typedef std::future<DeleteClsLogTopicOutcome> DeleteClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DeleteClsLogTopicRequest&, DeleteClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClsLogTopicAsyncHandler;
                typedef Outcome<Error, Model::DescribeBillingDataResponse> DescribeBillingDataOutcome;
                typedef std::future<DescribeBillingDataOutcome> DescribeBillingDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeBillingDataRequest&, DescribeBillingDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeCdnDataResponse> DescribeCdnDataOutcome;
                typedef std::future<DescribeCdnDataOutcome> DescribeCdnDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnDataRequest&, DescribeCdnDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeCdnDomainLogsResponse> DescribeCdnDomainLogsOutcome;
                typedef std::future<DescribeCdnDomainLogsOutcome> DescribeCdnDomainLogsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnDomainLogsRequest&, DescribeCdnDomainLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnDomainLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCdnIpResponse> DescribeCdnIpOutcome;
                typedef std::future<DescribeCdnIpOutcome> DescribeCdnIpOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCdnIpRequest&, DescribeCdnIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCdnIpAsyncHandler;
                typedef Outcome<Error, Model::DescribeCertDomainsResponse> DescribeCertDomainsOutcome;
                typedef std::future<DescribeCertDomainsOutcome> DescribeCertDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeCertDomainsRequest&, DescribeCertDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertDomainsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Error, Model::DescribeDomainsConfigResponse> DescribeDomainsConfigOutcome;
                typedef std::future<DescribeDomainsConfigOutcome> DescribeDomainsConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeDomainsConfigRequest&, DescribeDomainsConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeImageConfigResponse> DescribeImageConfigOutcome;
                typedef std::future<DescribeImageConfigOutcome> DescribeImageConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeImageConfigRequest&, DescribeImageConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageConfigAsyncHandler;
                typedef Outcome<Error, Model::DescribeIpStatusResponse> DescribeIpStatusOutcome;
                typedef std::future<DescribeIpStatusOutcome> DescribeIpStatusOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeIpStatusRequest&, DescribeIpStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeIpVisitResponse> DescribeIpVisitOutcome;
                typedef std::future<DescribeIpVisitOutcome> DescribeIpVisitOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeIpVisitRequest&, DescribeIpVisitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpVisitAsyncHandler;
                typedef Outcome<Error, Model::DescribeMapInfoResponse> DescribeMapInfoOutcome;
                typedef std::future<DescribeMapInfoOutcome> DescribeMapInfoOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeMapInfoRequest&, DescribeMapInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMapInfoAsyncHandler;
                typedef Outcome<Error, Model::DescribeOriginDataResponse> DescribeOriginDataOutcome;
                typedef std::future<DescribeOriginDataOutcome> DescribeOriginDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeOriginDataRequest&, DescribeOriginDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginDataAsyncHandler;
                typedef Outcome<Error, Model::DescribePayTypeResponse> DescribePayTypeOutcome;
                typedef std::future<DescribePayTypeOutcome> DescribePayTypeOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePayTypeRequest&, DescribePayTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePayTypeAsyncHandler;
                typedef Outcome<Error, Model::DescribePurgeQuotaResponse> DescribePurgeQuotaOutcome;
                typedef std::future<DescribePurgeQuotaOutcome> DescribePurgeQuotaOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePurgeQuotaRequest&, DescribePurgeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribePushQuotaResponse> DescribePushQuotaOutcome;
                typedef std::future<DescribePushQuotaOutcome> DescribePushQuotaOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePushQuotaRequest&, DescribePushQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribePushTasksResponse> DescribePushTasksOutcome;
                typedef std::future<DescribePushTasksOutcome> DescribePushTasksOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribePushTasksRequest&, DescribePushTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePushTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeReportDataResponse> DescribeReportDataOutcome;
                typedef std::future<DescribeReportDataOutcome> DescribeReportDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeReportDataRequest&, DescribeReportDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReportDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeTrafficPackagesResponse> DescribeTrafficPackagesOutcome;
                typedef std::future<DescribeTrafficPackagesOutcome> DescribeTrafficPackagesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeTrafficPackagesRequest&, DescribeTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficPackagesAsyncHandler;
                typedef Outcome<Error, Model::DescribeUrlViolationsResponse> DescribeUrlViolationsOutcome;
                typedef std::future<DescribeUrlViolationsOutcome> DescribeUrlViolationsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DescribeUrlViolationsRequest&, DescribeUrlViolationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUrlViolationsAsyncHandler;
                typedef Outcome<Error, Model::DisableCachesResponse> DisableCachesOutcome;
                typedef std::future<DisableCachesOutcome> DisableCachesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DisableCachesRequest&, DisableCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCachesAsyncHandler;
                typedef Outcome<Error, Model::DisableClsLogTopicResponse> DisableClsLogTopicOutcome;
                typedef std::future<DisableClsLogTopicOutcome> DisableClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::DisableClsLogTopicRequest&, DisableClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableClsLogTopicAsyncHandler;
                typedef Outcome<Error, Model::EnableCachesResponse> EnableCachesOutcome;
                typedef std::future<EnableCachesOutcome> EnableCachesOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::EnableCachesRequest&, EnableCachesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableCachesAsyncHandler;
                typedef Outcome<Error, Model::EnableClsLogTopicResponse> EnableClsLogTopicOutcome;
                typedef std::future<EnableClsLogTopicOutcome> EnableClsLogTopicOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::EnableClsLogTopicRequest&, EnableClsLogTopicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableClsLogTopicAsyncHandler;
                typedef Outcome<Error, Model::GetDisableRecordsResponse> GetDisableRecordsOutcome;
                typedef std::future<GetDisableRecordsOutcome> GetDisableRecordsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::GetDisableRecordsRequest&, GetDisableRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDisableRecordsAsyncHandler;
                typedef Outcome<Error, Model::ListClsLogTopicsResponse> ListClsLogTopicsOutcome;
                typedef std::future<ListClsLogTopicsOutcome> ListClsLogTopicsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListClsLogTopicsRequest&, ListClsLogTopicsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListClsLogTopicsAsyncHandler;
                typedef Outcome<Error, Model::ListClsTopicDomainsResponse> ListClsTopicDomainsOutcome;
                typedef std::future<ListClsTopicDomainsOutcome> ListClsTopicDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListClsTopicDomainsRequest&, ListClsTopicDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListClsTopicDomainsAsyncHandler;
                typedef Outcome<Error, Model::ListTopDataResponse> ListTopDataOutcome;
                typedef std::future<ListTopDataOutcome> ListTopDataOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ListTopDataRequest&, ListTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopDataAsyncHandler;
                typedef Outcome<Error, Model::ManageClsTopicDomainsResponse> ManageClsTopicDomainsOutcome;
                typedef std::future<ManageClsTopicDomainsOutcome> ManageClsTopicDomainsOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::ManageClsTopicDomainsRequest&, ManageClsTopicDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ManageClsTopicDomainsAsyncHandler;
                typedef Outcome<Error, Model::PurgePathCacheResponse> PurgePathCacheOutcome;
                typedef std::future<PurgePathCacheOutcome> PurgePathCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PurgePathCacheRequest&, PurgePathCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgePathCacheAsyncHandler;
                typedef Outcome<Error, Model::PurgeUrlsCacheResponse> PurgeUrlsCacheOutcome;
                typedef std::future<PurgeUrlsCacheOutcome> PurgeUrlsCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PurgeUrlsCacheRequest&, PurgeUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PurgeUrlsCacheAsyncHandler;
                typedef Outcome<Error, Model::PushUrlsCacheResponse> PushUrlsCacheOutcome;
                typedef std::future<PushUrlsCacheOutcome> PushUrlsCacheOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::PushUrlsCacheRequest&, PushUrlsCacheOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PushUrlsCacheAsyncHandler;
                typedef Outcome<Error, Model::SearchClsLogResponse> SearchClsLogOutcome;
                typedef std::future<SearchClsLogOutcome> SearchClsLogOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::SearchClsLogRequest&, SearchClsLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchClsLogAsyncHandler;
                typedef Outcome<Error, Model::StartCdnDomainResponse> StartCdnDomainOutcome;
                typedef std::future<StartCdnDomainOutcome> StartCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::StartCdnDomainRequest&, StartCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartCdnDomainAsyncHandler;
                typedef Outcome<Error, Model::StopCdnDomainResponse> StopCdnDomainOutcome;
                typedef std::future<StopCdnDomainOutcome> StopCdnDomainOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::StopCdnDomainRequest&, StopCdnDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopCdnDomainAsyncHandler;
                typedef Outcome<Error, Model::UpdateDomainConfigResponse> UpdateDomainConfigOutcome;
                typedef std::future<UpdateDomainConfigOutcome> UpdateDomainConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdateDomainConfigRequest&, UpdateDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDomainConfigAsyncHandler;
                typedef Outcome<Error, Model::UpdateImageConfigResponse> UpdateImageConfigOutcome;
                typedef std::future<UpdateImageConfigOutcome> UpdateImageConfigOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdateImageConfigRequest&, UpdateImageConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageConfigAsyncHandler;
                typedef Outcome<Error, Model::UpdatePayTypeResponse> UpdatePayTypeOutcome;
                typedef std::future<UpdatePayTypeOutcome> UpdatePayTypeOutcomeCallable;
                typedef std::function<void(const CdnClient*, const Model::UpdatePayTypeRequest&, UpdatePayTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePayTypeAsyncHandler;



                /**
                 *AddCdnDomain 用于新增内容分发网络加速域名。
                 * @param req AddCdnDomainRequest
                 * @return AddCdnDomainOutcome
                 */
                AddCdnDomainOutcome AddCdnDomain(const Model::AddCdnDomainRequest &request);
                void AddCdnDomainAsync(const Model::AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCdnDomainOutcomeCallable AddCdnDomainCallable(const Model::AddCdnDomainRequest& request);

                /**
                 *CreatClsLogTopic 用于创建日志主题。注意：一个日志集下至多可创建10个日志主题。
                 * @param req CreateClsLogTopicRequest
                 * @return CreateClsLogTopicOutcome
                 */
                CreateClsLogTopicOutcome CreateClsLogTopic(const Model::CreateClsLogTopicRequest &request);
                void CreateClsLogTopicAsync(const Model::CreateClsLogTopicRequest& request, const CreateClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClsLogTopicOutcomeCallable CreateClsLogTopicCallable(const Model::CreateClsLogTopicRequest& request);

                /**
                 *DeleteCdnDomain 用于删除指定加速域名
                 * @param req DeleteCdnDomainRequest
                 * @return DeleteCdnDomainOutcome
                 */
                DeleteCdnDomainOutcome DeleteCdnDomain(const Model::DeleteCdnDomainRequest &request);
                void DeleteCdnDomainAsync(const Model::DeleteCdnDomainRequest& request, const DeleteCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCdnDomainOutcomeCallable DeleteCdnDomainCallable(const Model::DeleteCdnDomainRequest& request);

                /**
                 *DeleteClsLogTopic 用于删除日志主题。注意：删除后，所有该日志主题下绑定域名的日志将不再继续投递至该主题，已经投递的日志将会被全部清空。生效时间约为 5~15 分钟。
                 * @param req DeleteClsLogTopicRequest
                 * @return DeleteClsLogTopicOutcome
                 */
                DeleteClsLogTopicOutcome DeleteClsLogTopic(const Model::DeleteClsLogTopicRequest &request);
                void DeleteClsLogTopicAsync(const Model::DeleteClsLogTopicRequest& request, const DeleteClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClsLogTopicOutcomeCallable DeleteClsLogTopicCallable(const Model::DeleteClsLogTopicRequest& request);

                /**
                 *DescribeBillingData 用于查询实际计费数据明细。
                 * @param req DescribeBillingDataRequest
                 * @return DescribeBillingDataOutcome
                 */
                DescribeBillingDataOutcome DescribeBillingData(const Model::DescribeBillingDataRequest &request);
                void DescribeBillingDataAsync(const Model::DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingDataOutcomeCallable DescribeBillingDataCallable(const Model::DescribeBillingDataRequest& request);

                /**
                 *DescribeCdnData 用于查询 CDN 实时访问监控数据，支持以下指标查询：

+ 流量（单位为 byte）
+ 带宽（单位为 bps）
+ 请求数（单位为 次）
+ 流量命中率（单位为 %，小数点后保留两位）
+ 状态码 2xx 汇总及各 2 开头状态码明细（单位为 个）
+ 状态码 3xx 汇总及各 3 开头状态码明细（单位为 个）
+ 状态码 4xx 汇总及各 4 开头状态码明细（单位为 个）
+ 状态码 5xx 汇总及各 5 开头状态码明细（单位为 个）
                 * @param req DescribeCdnDataRequest
                 * @return DescribeCdnDataOutcome
                 */
                DescribeCdnDataOutcome DescribeCdnData(const Model::DescribeCdnDataRequest &request);
                void DescribeCdnDataAsync(const Model::DescribeCdnDataRequest& request, const DescribeCdnDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnDataOutcomeCallable DescribeCdnDataCallable(const Model::DescribeCdnDataRequest& request);

                /**
                 *DescribeCdnDomainLogs 用于查询访问日志下载地址，仅支持 30 天以内的境内、境外访问日志下载链接查询。
                 * @param req DescribeCdnDomainLogsRequest
                 * @return DescribeCdnDomainLogsOutcome
                 */
                DescribeCdnDomainLogsOutcome DescribeCdnDomainLogs(const Model::DescribeCdnDomainLogsRequest &request);
                void DescribeCdnDomainLogsAsync(const Model::DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnDomainLogsOutcomeCallable DescribeCdnDomainLogsCallable(const Model::DescribeCdnDomainLogsRequest& request);

                /**
                 *DescribeCdnIp 用于查询 CDN IP 归属。
                 * @param req DescribeCdnIpRequest
                 * @return DescribeCdnIpOutcome
                 */
                DescribeCdnIpOutcome DescribeCdnIp(const Model::DescribeCdnIpRequest &request);
                void DescribeCdnIpAsync(const Model::DescribeCdnIpRequest& request, const DescribeCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCdnIpOutcomeCallable DescribeCdnIpCallable(const Model::DescribeCdnIpRequest& request);

                /**
                 *校验证书并提取SSL证书中包含的域名，返回CDN已接入的域名列表，及已配置证书的域名列表
                 * @param req DescribeCertDomainsRequest
                 * @return DescribeCertDomainsOutcome
                 */
                DescribeCertDomainsOutcome DescribeCertDomains(const Model::DescribeCertDomainsRequest &request);
                void DescribeCertDomainsAsync(const Model::DescribeCertDomainsRequest& request, const DescribeCertDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertDomainsOutcomeCallable DescribeCertDomainsCallable(const Model::DescribeCertDomainsRequest& request);

                /**
                 *DescribeDomains 用于查询内容分发网络加速域名（含境内、境外）基本配置信息，包括项目ID、服务状态，业务类型、创建时间、更新时间等信息。
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *DescribeDomainsConfig 用于查询内容分发网络加速域名（含境内、境外）的所有配置信息。
                 * @param req DescribeDomainsConfigRequest
                 * @return DescribeDomainsConfigOutcome
                 */
                DescribeDomainsConfigOutcome DescribeDomainsConfig(const Model::DescribeDomainsConfigRequest &request);
                void DescribeDomainsConfigAsync(const Model::DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsConfigOutcomeCallable DescribeDomainsConfigCallable(const Model::DescribeDomainsConfigRequest& request);

                /**
                 *获取域名图片优化的当前配置，支持Webp、TPG、Guetzli 
                 * @param req DescribeImageConfigRequest
                 * @return DescribeImageConfigOutcome
                 */
                DescribeImageConfigOutcome DescribeImageConfig(const Model::DescribeImageConfigRequest &request);
                void DescribeImageConfigAsync(const Model::DescribeImageConfigRequest& request, const DescribeImageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageConfigOutcomeCallable DescribeImageConfigCallable(const Model::DescribeImageConfigRequest& request);

                /**
                 *DescribeIpStatus 用于查询域名所在加速平台的边缘节点、回源节点明细
注意事项：接口尚未全量开放，未在内测名单中的账号不支持调用
                 * @param req DescribeIpStatusRequest
                 * @return DescribeIpStatusOutcome
                 */
                DescribeIpStatusOutcome DescribeIpStatus(const Model::DescribeIpStatusRequest &request);
                void DescribeIpStatusAsync(const Model::DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpStatusOutcomeCallable DescribeIpStatusCallable(const Model::DescribeIpStatusRequest& request);

                /**
                 *DescribeIpVisit 用于查询 5 分钟活跃用户数，及日活跃用户数明细

+ 5 分钟活跃用户数：根据日志中客户端 IP，5 分钟粒度去重统计
+ 日活跃用户数：根据日志中客户端 IP，按天粒度去重统计
                 * @param req DescribeIpVisitRequest
                 * @return DescribeIpVisitOutcome
                 */
                DescribeIpVisitOutcome DescribeIpVisit(const Model::DescribeIpVisitRequest &request);
                void DescribeIpVisitAsync(const Model::DescribeIpVisitRequest& request, const DescribeIpVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpVisitOutcomeCallable DescribeIpVisitCallable(const Model::DescribeIpVisitRequest& request);

                /**
                 *DescribeMapInfo 用于查询省份对应的 ID，运营商对应的 ID 信息。
                 * @param req DescribeMapInfoRequest
                 * @return DescribeMapInfoOutcome
                 */
                DescribeMapInfoOutcome DescribeMapInfo(const Model::DescribeMapInfoRequest &request);
                void DescribeMapInfoAsync(const Model::DescribeMapInfoRequest& request, const DescribeMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMapInfoOutcomeCallable DescribeMapInfoCallable(const Model::DescribeMapInfoRequest& request);

                /**
                 *DescribeOriginData 用于查询 CDN 实时回源监控数据，支持以下指标查询：

+ 回源流量（单位为 byte）
+ 回源带宽（单位为 bps）
+ 回源请求数（单位为 次）
+ 回源失败请求数（单位为 次）
+ 回源失败率（单位为 %，小数点后保留两位）
+ 回源状态码 2xx 汇总及各 2 开头回源状态码明细（单位为 个）
+ 回源状态码 3xx 汇总及各 3 开头回源状态码明细（单位为 个）
+ 回源状态码 4xx 汇总及各 4 开头回源状态码明细（单位为 个）
+ 回源状态码 5xx 汇总及各 5 开头回源状态码明细（单位为 个）
                 * @param req DescribeOriginDataRequest
                 * @return DescribeOriginDataOutcome
                 */
                DescribeOriginDataOutcome DescribeOriginData(const Model::DescribeOriginDataRequest &request);
                void DescribeOriginDataAsync(const Model::DescribeOriginDataRequest& request, const DescribeOriginDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginDataOutcomeCallable DescribeOriginDataCallable(const Model::DescribeOriginDataRequest& request);

                /**
                 *DescribePayType 用于查询用户的计费类型，计费周期等信息。
                 * @param req DescribePayTypeRequest
                 * @return DescribePayTypeOutcome
                 */
                DescribePayTypeOutcome DescribePayType(const Model::DescribePayTypeRequest &request);
                void DescribePayTypeAsync(const Model::DescribePayTypeRequest& request, const DescribePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePayTypeOutcomeCallable DescribePayTypeCallable(const Model::DescribePayTypeRequest& request);

                /**
                 *DescribePurgeQuota 用于查询账户刷新配额和每日可用量。
                 * @param req DescribePurgeQuotaRequest
                 * @return DescribePurgeQuotaOutcome
                 */
                DescribePurgeQuotaOutcome DescribePurgeQuota(const Model::DescribePurgeQuotaRequest &request);
                void DescribePurgeQuotaAsync(const Model::DescribePurgeQuotaRequest& request, const DescribePurgeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeQuotaOutcomeCallable DescribePurgeQuotaCallable(const Model::DescribePurgeQuotaRequest& request);

                /**
                 *DescribePurgeTasks 用于查询提交的 URL 刷新、目录刷新记录及执行进度，通过 PurgePathCache 与 PurgeUrlsCache 接口提交的任务均可通过此接口进行查询。
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *DescribePushQuota  用于查询预热配额和每日可用量。
                 * @param req DescribePushQuotaRequest
                 * @return DescribePushQuotaOutcome
                 */
                DescribePushQuotaOutcome DescribePushQuota(const Model::DescribePushQuotaRequest &request);
                void DescribePushQuotaAsync(const Model::DescribePushQuotaRequest& request, const DescribePushQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePushQuotaOutcomeCallable DescribePushQuotaCallable(const Model::DescribePushQuotaRequest& request);

                /**
                 *DescribePushTasks  用于查询预热任务提交历史记录及执行进度。
接口灰度中，暂未全量开放，敬请期待。
                 * @param req DescribePushTasksRequest
                 * @return DescribePushTasksOutcome
                 */
                DescribePushTasksOutcome DescribePushTasks(const Model::DescribePushTasksRequest &request);
                void DescribePushTasksAsync(const Model::DescribePushTasksRequest& request, const DescribePushTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePushTasksOutcomeCallable DescribePushTasksCallable(const Model::DescribePushTasksRequest& request);

                /**
                 *DescribeReportData 用于查询域名/项目维度的日/周/月报表数据。
                 * @param req DescribeReportDataRequest
                 * @return DescribeReportDataOutcome
                 */
                DescribeReportDataOutcome DescribeReportData(const Model::DescribeReportDataRequest &request);
                void DescribeReportDataAsync(const Model::DescribeReportDataRequest& request, const DescribeReportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReportDataOutcomeCallable DescribeReportDataCallable(const Model::DescribeReportDataRequest& request);

                /**
                 *DescribeTrafficPackages 用于查询境内 CDN 流量包详情。
                 * @param req DescribeTrafficPackagesRequest
                 * @return DescribeTrafficPackagesOutcome
                 */
                DescribeTrafficPackagesOutcome DescribeTrafficPackages(const Model::DescribeTrafficPackagesRequest &request);
                void DescribeTrafficPackagesAsync(const Model::DescribeTrafficPackagesRequest& request, const DescribeTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficPackagesOutcomeCallable DescribeTrafficPackagesCallable(const Model::DescribeTrafficPackagesRequest& request);

                /**
                 *DescribeUrlViolations 用于查询被 CDN 系统扫描到的域名违规 URL 列表及当前状态。
对应内容分发网络控制台【图片鉴黄】页面。
                 * @param req DescribeUrlViolationsRequest
                 * @return DescribeUrlViolationsOutcome
                 */
                DescribeUrlViolationsOutcome DescribeUrlViolations(const Model::DescribeUrlViolationsRequest &request);
                void DescribeUrlViolationsAsync(const Model::DescribeUrlViolationsRequest& request, const DescribeUrlViolationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUrlViolationsOutcomeCallable DescribeUrlViolationsCallable(const Model::DescribeUrlViolationsRequest& request);

                /**
                 *DisableCaches 用于禁用 CDN 上指定 URL 的访问，禁用完成后，全网访问会直接返回 403。（接口尚在内测中，暂未全量开放使用）
                 * @param req DisableCachesRequest
                 * @return DisableCachesOutcome
                 */
                DisableCachesOutcome DisableCaches(const Model::DisableCachesRequest &request);
                void DisableCachesAsync(const Model::DisableCachesRequest& request, const DisableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCachesOutcomeCallable DisableCachesCallable(const Model::DisableCachesRequest& request);

                /**
                 *DisableClsLogTopic 用于停止日志主题投递。注意：停止后，所有绑定该日志主题域名的日志将不再继续投递至该主题，已经投递的日志将会继续保留。生效时间约为 5~15 分钟。

                 * @param req DisableClsLogTopicRequest
                 * @return DisableClsLogTopicOutcome
                 */
                DisableClsLogTopicOutcome DisableClsLogTopic(const Model::DisableClsLogTopicRequest &request);
                void DisableClsLogTopicAsync(const Model::DisableClsLogTopicRequest& request, const DisableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableClsLogTopicOutcomeCallable DisableClsLogTopicCallable(const Model::DisableClsLogTopicRequest& request);

                /**
                 *EnableCaches 用于解禁手工封禁的 URL，解禁成功后，全网生效时间约 5~10 分钟。（接口尚在内测中，暂未全量开放使用）
                 * @param req EnableCachesRequest
                 * @return EnableCachesOutcome
                 */
                EnableCachesOutcome EnableCaches(const Model::EnableCachesRequest &request);
                void EnableCachesAsync(const Model::EnableCachesRequest& request, const EnableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableCachesOutcomeCallable EnableCachesCallable(const Model::EnableCachesRequest& request);

                /**
                 *EnableClsLogTopic 用于启动日志主题投递。注意：启动后，所有绑定该日志主题域名的日志将继续投递至该主题。生效时间约为 5~15 分钟。
                 * @param req EnableClsLogTopicRequest
                 * @return EnableClsLogTopicOutcome
                 */
                EnableClsLogTopicOutcome EnableClsLogTopic(const Model::EnableClsLogTopicRequest &request);
                void EnableClsLogTopicAsync(const Model::EnableClsLogTopicRequest& request, const EnableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableClsLogTopicOutcomeCallable EnableClsLogTopicCallable(const Model::EnableClsLogTopicRequest& request);

                /**
                 *GetDisableRecords 用于查询资源禁用历史，及 URL 当前状态。（接口尚在内测中，暂未全量开放使用）
                 * @param req GetDisableRecordsRequest
                 * @return GetDisableRecordsOutcome
                 */
                GetDisableRecordsOutcome GetDisableRecords(const Model::GetDisableRecordsRequest &request);
                void GetDisableRecordsAsync(const Model::GetDisableRecordsRequest& request, const GetDisableRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDisableRecordsOutcomeCallable GetDisableRecordsCallable(const Model::GetDisableRecordsRequest& request);

                /**
                 *ListClsLogTopics 用于显示日志主题列表。注意：一个日志集下至多含10个日志主题。
                 * @param req ListClsLogTopicsRequest
                 * @return ListClsLogTopicsOutcome
                 */
                ListClsLogTopicsOutcome ListClsLogTopics(const Model::ListClsLogTopicsRequest &request);
                void ListClsLogTopicsAsync(const Model::ListClsLogTopicsRequest& request, const ListClsLogTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListClsLogTopicsOutcomeCallable ListClsLogTopicsCallable(const Model::ListClsLogTopicsRequest& request);

                /**
                 *ListClsTopicDomains 用于获取某日志主题下绑定的域名列表。
                 * @param req ListClsTopicDomainsRequest
                 * @return ListClsTopicDomainsOutcome
                 */
                ListClsTopicDomainsOutcome ListClsTopicDomains(const Model::ListClsTopicDomainsRequest &request);
                void ListClsTopicDomainsAsync(const Model::ListClsTopicDomainsRequest& request, const ListClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListClsTopicDomainsOutcomeCallable ListClsTopicDomainsCallable(const Model::ListClsTopicDomainsRequest& request);

                /**
                 *ListTopData 通过入参 Metric 和 Filter 组合不同，可以查询以下排序数据：

+ 依据总流量、总请求数对访问 URL 排序，从大至小返回 TOP 1000 URL
+ 依据总流量、总请求数对客户端省份排序，从大至小返回省份列表
+ 依据总流量、总请求数对客户端运营商排序，从大至小返回运营商列表
+ 依据总流量、峰值带宽、总请求数、平均命中率、2XX/3XX/4XX/5XX 状态码对域名排序，从大至小返回域名列表
+ 依据总回源流量、回源峰值带宽、总回源请求数、平均回源失败率、2XX/3XX/4XX/5XX 回源状态码对域名排序，从大至小返回域名列表

注意：仅支持 90 天内数据查询
                 * @param req ListTopDataRequest
                 * @return ListTopDataOutcome
                 */
                ListTopDataOutcome ListTopData(const Model::ListTopDataRequest &request);
                void ListTopDataAsync(const Model::ListTopDataRequest& request, const ListTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopDataOutcomeCallable ListTopDataCallable(const Model::ListTopDataRequest& request);

                /**
                 *ManageClsTopicDomains 用于管理某日志主题下绑定的域名列表。
                 * @param req ManageClsTopicDomainsRequest
                 * @return ManageClsTopicDomainsOutcome
                 */
                ManageClsTopicDomainsOutcome ManageClsTopicDomains(const Model::ManageClsTopicDomainsRequest &request);
                void ManageClsTopicDomainsAsync(const Model::ManageClsTopicDomainsRequest& request, const ManageClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ManageClsTopicDomainsOutcomeCallable ManageClsTopicDomainsCallable(const Model::ManageClsTopicDomainsRequest& request);

                /**
                 *PurgePathCache 用于批量提交目录刷新，根据域名的加速区域进行对应区域的刷新。
默认情况下境内、境外加速区域每日目录刷新额度为各 100 条，每次最多可提交 20 条。
                 * @param req PurgePathCacheRequest
                 * @return PurgePathCacheOutcome
                 */
                PurgePathCacheOutcome PurgePathCache(const Model::PurgePathCacheRequest &request);
                void PurgePathCacheAsync(const Model::PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgePathCacheOutcomeCallable PurgePathCacheCallable(const Model::PurgePathCacheRequest& request);

                /**
                 *PurgeUrlsCache 用于批量提交 URL 进行刷新，根据 URL 中域名的当前加速区域进行对应区域的刷新。
默认情况下境内、境外加速区域每日 URL 刷新额度各为 10000 条，每次最多可提交 1000 条。
                 * @param req PurgeUrlsCacheRequest
                 * @return PurgeUrlsCacheOutcome
                 */
                PurgeUrlsCacheOutcome PurgeUrlsCache(const Model::PurgeUrlsCacheRequest &request);
                void PurgeUrlsCacheAsync(const Model::PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PurgeUrlsCacheOutcomeCallable PurgeUrlsCacheCallable(const Model::PurgeUrlsCacheRequest& request);

                /**
                 *PushUrlsCache 用于将指定 URL 资源列表加载至 CDN 节点，支持指定加速区域预热。
默认情况下境内、境外每日预热 URL 限额为各 1000 条，每次最多可提交 20 条。
接口灰度中，暂未全量开放，敬请期待。
                 * @param req PushUrlsCacheRequest
                 * @return PushUrlsCacheOutcome
                 */
                PushUrlsCacheOutcome PushUrlsCache(const Model::PushUrlsCacheRequest &request);
                void PushUrlsCacheAsync(const Model::PushUrlsCacheRequest& request, const PushUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PushUrlsCacheOutcomeCallable PushUrlsCacheCallable(const Model::PushUrlsCacheRequest& request);

                /**
                 *SearchClsLog 用于 CLS 日志检索。支持检索今天，24小时（可选近7中的某一天），近7天的日志数据。
                 * @param req SearchClsLogRequest
                 * @return SearchClsLogOutcome
                 */
                SearchClsLogOutcome SearchClsLog(const Model::SearchClsLogRequest &request);
                void SearchClsLogAsync(const Model::SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchClsLogOutcomeCallable SearchClsLogCallable(const Model::SearchClsLogRequest& request);

                /**
                 *StartCdnDomain 用于启用已停用域名的加速服务
                 * @param req StartCdnDomainRequest
                 * @return StartCdnDomainOutcome
                 */
                StartCdnDomainOutcome StartCdnDomain(const Model::StartCdnDomainRequest &request);
                void StartCdnDomainAsync(const Model::StartCdnDomainRequest& request, const StartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartCdnDomainOutcomeCallable StartCdnDomainCallable(const Model::StartCdnDomainRequest& request);

                /**
                 *StopCdnDomain 用于停止域名的加速服务。
注意：停止加速服务后，访问至加速节点的请求将会直接返回 404。为避免对您的业务造成影响，请在停止加速服务前将解析切走。
                 * @param req StopCdnDomainRequest
                 * @return StopCdnDomainOutcome
                 */
                StopCdnDomainOutcome StopCdnDomain(const Model::StopCdnDomainRequest &request);
                void StopCdnDomainAsync(const Model::StopCdnDomainRequest& request, const StopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopCdnDomainOutcomeCallable StopCdnDomainCallable(const Model::StopCdnDomainRequest& request);

                /**
                 *UpdateDomainConfig 用于修改内容分发网络加速域名配置信息
注意：如果需要更新复杂类型的配置项，必须传递整个对象的所有属性，未传递的属性将使用默认值，建议通过查询接口获取配置属性后，直接修改后传递给本接口。Https配置由于证书的特殊性，更新时不用传递证书和密钥字段。
                 * @param req UpdateDomainConfigRequest
                 * @return UpdateDomainConfigOutcome
                 */
                UpdateDomainConfigOutcome UpdateDomainConfig(const Model::UpdateDomainConfigRequest &request);
                void UpdateDomainConfigAsync(const Model::UpdateDomainConfigRequest& request, const UpdateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDomainConfigOutcomeCallable UpdateDomainConfigCallable(const Model::UpdateDomainConfigRequest& request);

                /**
                 *更新控制台图片优化的相关配置，支持Webp、TPG、Guetzli 
                 * @param req UpdateImageConfigRequest
                 * @return UpdateImageConfigOutcome
                 */
                UpdateImageConfigOutcome UpdateImageConfig(const Model::UpdateImageConfigRequest &request);
                void UpdateImageConfigAsync(const Model::UpdateImageConfigRequest& request, const UpdateImageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateImageConfigOutcomeCallable UpdateImageConfigCallable(const Model::UpdateImageConfigRequest& request);

                /**
                 *本接口(UpdatePayType)用于修改账号计费类型，暂不支持月结用户或子账号修改。
                 * @param req UpdatePayTypeRequest
                 * @return UpdatePayTypeOutcome
                 */
                UpdatePayTypeOutcome UpdatePayType(const Model::UpdatePayTypeRequest &request);
                void UpdatePayTypeAsync(const Model::UpdatePayTypeRequest& request, const UpdatePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePayTypeOutcomeCallable UpdatePayTypeCallable(const Model::UpdatePayTypeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_CDNCLIENT_H_
