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

#include <tencentcloud/csip/v20221121/CsipClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Csip::V20221121;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-21";
    const string ENDPOINT = "csip.tencentcloudapi.com";
}

CsipClient::CsipClient(const Credential &credential, const string &region) :
    CsipClient(credential, region, ClientProfile())
{
}

CsipClient::CsipClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CsipClient::AddNewBindRoleUserOutcome CsipClient::AddNewBindRoleUser(const AddNewBindRoleUserRequest &request)
{
    auto outcome = MakeRequest(request, "AddNewBindRoleUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNewBindRoleUserResponse rsp = AddNewBindRoleUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNewBindRoleUserOutcome(rsp);
        else
            return AddNewBindRoleUserOutcome(o.GetError());
    }
    else
    {
        return AddNewBindRoleUserOutcome(outcome.GetError());
    }
}

void CsipClient::AddNewBindRoleUserAsync(const AddNewBindRoleUserRequest& request, const AddNewBindRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNewBindRoleUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::AddNewBindRoleUserOutcomeCallable CsipClient::AddNewBindRoleUserCallable(const AddNewBindRoleUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNewBindRoleUserOutcome()>>(
        [this, request]()
        {
            return this->AddNewBindRoleUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::CreateDomainAndIpOutcome CsipClient::CreateDomainAndIp(const CreateDomainAndIpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainAndIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainAndIpResponse rsp = CreateDomainAndIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainAndIpOutcome(rsp);
        else
            return CreateDomainAndIpOutcome(o.GetError());
    }
    else
    {
        return CreateDomainAndIpOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDomainAndIpAsync(const CreateDomainAndIpRequest& request, const CreateDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainAndIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::CreateDomainAndIpOutcomeCallable CsipClient::CreateDomainAndIpCallable(const CreateDomainAndIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainAndIpOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainAndIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::CreateRiskCenterScanTaskOutcome CsipClient::CreateRiskCenterScanTask(const CreateRiskCenterScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRiskCenterScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRiskCenterScanTaskResponse rsp = CreateRiskCenterScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRiskCenterScanTaskOutcome(rsp);
        else
            return CreateRiskCenterScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRiskCenterScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateRiskCenterScanTaskAsync(const CreateRiskCenterScanTaskRequest& request, const CreateRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRiskCenterScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::CreateRiskCenterScanTaskOutcomeCallable CsipClient::CreateRiskCenterScanTaskCallable(const CreateRiskCenterScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRiskCenterScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRiskCenterScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCVMAssetInfoOutcome CsipClient::DescribeCVMAssetInfo(const DescribeCVMAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCVMAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCVMAssetInfoResponse rsp = DescribeCVMAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCVMAssetInfoOutcome(rsp);
        else
            return DescribeCVMAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCVMAssetInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCVMAssetInfoAsync(const DescribeCVMAssetInfoRequest& request, const DescribeCVMAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCVMAssetInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCVMAssetInfoOutcomeCallable CsipClient::DescribeCVMAssetInfoCallable(const DescribeCVMAssetInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCVMAssetInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCVMAssetInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeCVMAssetsOutcome CsipClient::DescribeCVMAssets(const DescribeCVMAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCVMAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCVMAssetsResponse rsp = DescribeCVMAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCVMAssetsOutcome(rsp);
        else
            return DescribeCVMAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeCVMAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCVMAssetsAsync(const DescribeCVMAssetsRequest& request, const DescribeCVMAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCVMAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeCVMAssetsOutcomeCallable CsipClient::DescribeCVMAssetsCallable(const DescribeCVMAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCVMAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCVMAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeClusterPodAssetsOutcome CsipClient::DescribeClusterPodAssets(const DescribeClusterPodAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterPodAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterPodAssetsResponse rsp = DescribeClusterPodAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterPodAssetsOutcome(rsp);
        else
            return DescribeClusterPodAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterPodAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeClusterPodAssetsAsync(const DescribeClusterPodAssetsRequest& request, const DescribeClusterPodAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterPodAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeClusterPodAssetsOutcomeCallable CsipClient::DescribeClusterPodAssetsCallable(const DescribeClusterPodAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterPodAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterPodAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeDbAssetInfoOutcome CsipClient::DescribeDbAssetInfo(const DescribeDbAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbAssetInfoResponse rsp = DescribeDbAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbAssetInfoOutcome(rsp);
        else
            return DescribeDbAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDbAssetInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDbAssetInfoAsync(const DescribeDbAssetInfoRequest& request, const DescribeDbAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDbAssetInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeDbAssetInfoOutcomeCallable CsipClient::DescribeDbAssetInfoCallable(const DescribeDbAssetInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDbAssetInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDbAssetInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeDbAssetsOutcome CsipClient::DescribeDbAssets(const DescribeDbAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbAssetsResponse rsp = DescribeDbAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbAssetsOutcome(rsp);
        else
            return DescribeDbAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDbAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDbAssetsAsync(const DescribeDbAssetsRequest& request, const DescribeDbAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDbAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeDbAssetsOutcomeCallable CsipClient::DescribeDbAssetsCallable(const DescribeDbAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDbAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDbAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeDomainAssetsOutcome CsipClient::DescribeDomainAssets(const DescribeDomainAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAssetsResponse rsp = DescribeDomainAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAssetsOutcome(rsp);
        else
            return DescribeDomainAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDomainAssetsAsync(const DescribeDomainAssetsRequest& request, const DescribeDomainAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeDomainAssetsOutcomeCallable CsipClient::DescribeDomainAssetsCallable(const DescribeDomainAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeListenerListOutcome CsipClient::DescribeListenerList(const DescribeListenerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListenerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenerListResponse rsp = DescribeListenerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenerListOutcome(rsp);
        else
            return DescribeListenerListOutcome(o.GetError());
    }
    else
    {
        return DescribeListenerListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeListenerListAsync(const DescribeListenerListRequest& request, const DescribeListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListenerList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeListenerListOutcomeCallable CsipClient::DescribeListenerListCallable(const DescribeListenerListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListenerListOutcome()>>(
        [this, request]()
        {
            return this->DescribeListenerList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribePublicIpAssetsOutcome CsipClient::DescribePublicIpAssets(const DescribePublicIpAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicIpAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicIpAssetsResponse rsp = DescribePublicIpAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicIpAssetsOutcome(rsp);
        else
            return DescribePublicIpAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribePublicIpAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribePublicIpAssetsAsync(const DescribePublicIpAssetsRequest& request, const DescribePublicIpAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicIpAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribePublicIpAssetsOutcomeCallable CsipClient::DescribePublicIpAssetsCallable(const DescribePublicIpAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicIpAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicIpAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewPortRiskListOutcome CsipClient::DescribeRiskCenterAssetViewPortRiskList(const DescribeRiskCenterAssetViewPortRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewPortRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewPortRiskListResponse rsp = DescribeRiskCenterAssetViewPortRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewPortRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewPortRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewPortRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewPortRiskListAsync(const DescribeRiskCenterAssetViewPortRiskListRequest& request, const DescribeRiskCenterAssetViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewPortRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewPortRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewPortRiskListCallable(const DescribeRiskCenterAssetViewPortRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewPortRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewPortRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeRiskCenterAssetViewVULRiskListOutcome CsipClient::DescribeRiskCenterAssetViewVULRiskList(const DescribeRiskCenterAssetViewVULRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewVULRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewVULRiskListResponse rsp = DescribeRiskCenterAssetViewVULRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewVULRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewVULRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewVULRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewVULRiskListAsync(const DescribeRiskCenterAssetViewVULRiskListRequest& request, const DescribeRiskCenterAssetViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskCenterAssetViewVULRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeRiskCenterAssetViewVULRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewVULRiskListCallable(const DescribeRiskCenterAssetViewVULRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskCenterAssetViewVULRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskCenterAssetViewVULRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeScanReportListOutcome CsipClient::DescribeScanReportList(const DescribeScanReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanReportListResponse rsp = DescribeScanReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanReportListOutcome(rsp);
        else
            return DescribeScanReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanReportListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeScanReportListAsync(const DescribeScanReportListRequest& request, const DescribeScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanReportList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeScanReportListOutcomeCallable CsipClient::DescribeScanReportListCallable(const DescribeScanReportListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanReportListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanReportList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeSubnetAssetsOutcome CsipClient::DescribeSubnetAssets(const DescribeSubnetAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetAssetsResponse rsp = DescribeSubnetAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetAssetsOutcome(rsp);
        else
            return DescribeSubnetAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSubnetAssetsAsync(const DescribeSubnetAssetsRequest& request, const DescribeSubnetAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubnetAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeSubnetAssetsOutcomeCallable CsipClient::DescribeSubnetAssetsCallable(const DescribeSubnetAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubnetAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubnetAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsipClient::DescribeVpcAssetsOutcome CsipClient::DescribeVpcAssets(const DescribeVpcAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcAssetsResponse rsp = DescribeVpcAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcAssetsOutcome(rsp);
        else
            return DescribeVpcAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVpcAssetsAsync(const DescribeVpcAssetsRequest& request, const DescribeVpcAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVpcAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsipClient::DescribeVpcAssetsOutcomeCallable CsipClient::DescribeVpcAssetsCallable(const DescribeVpcAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVpcAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVpcAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

