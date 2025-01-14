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

#include <tencentcloud/tse/v20201207/TseClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tse::V20201207;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-07";
    const string ENDPOINT = "tse.tencentcloudapi.com";
}

TseClient::TseClient(const Credential &credential, const string &region) :
    TseClient(credential, region, ClientProfile())
{
}

TseClient::TseClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TseClient::CreateCloudNativeAPIGatewayCanaryRuleOutcome TseClient::CreateCloudNativeAPIGatewayCanaryRule(const CreateCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayCanaryRuleResponse rsp = CreateCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayCanaryRuleAsync(const CreateCloudNativeAPIGatewayCanaryRuleRequest& request, const CreateCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayCanaryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::CreateCloudNativeAPIGatewayCanaryRuleCallable(const CreateCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayCanaryRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayCanaryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayRouteOutcome TseClient::CreateCloudNativeAPIGatewayRoute(const CreateCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayRouteResponse rsp = CreateCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayRouteAsync(const CreateCloudNativeAPIGatewayRouteRequest& request, const CreateCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayRouteOutcomeCallable TseClient::CreateCloudNativeAPIGatewayRouteCallable(const CreateCloudNativeAPIGatewayRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayRouteOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::CreateCloudNativeAPIGatewayRouteRateLimit(const CreateCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayRouteRateLimitResponse rsp = CreateCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayRouteRateLimitAsync(const CreateCloudNativeAPIGatewayRouteRateLimitRequest& request, const CreateCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayRouteRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::CreateCloudNativeAPIGatewayRouteRateLimitCallable(const CreateCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayRouteRateLimitOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayRouteRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayServiceOutcome TseClient::CreateCloudNativeAPIGatewayService(const CreateCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayServiceResponse rsp = CreateCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayServiceAsync(const CreateCloudNativeAPIGatewayServiceRequest& request, const CreateCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayServiceOutcomeCallable TseClient::CreateCloudNativeAPIGatewayServiceCallable(const CreateCloudNativeAPIGatewayServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::CreateCloudNativeAPIGatewayServiceRateLimit(const CreateCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudNativeAPIGatewayServiceRateLimitResponse rsp = CreateCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return CreateCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::CreateCloudNativeAPIGatewayServiceRateLimitAsync(const CreateCloudNativeAPIGatewayServiceRateLimitRequest& request, const CreateCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudNativeAPIGatewayServiceRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::CreateCloudNativeAPIGatewayServiceRateLimitCallable(const CreateCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudNativeAPIGatewayServiceRateLimitOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudNativeAPIGatewayServiceRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::CreateEngineOutcome TseClient::CreateEngine(const CreateEngineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEngineResponse rsp = CreateEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEngineOutcome(rsp);
        else
            return CreateEngineOutcome(o.GetError());
    }
    else
    {
        return CreateEngineOutcome(outcome.GetError());
    }
}

void TseClient::CreateEngineAsync(const CreateEngineRequest& request, const CreateEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::CreateEngineOutcomeCallable TseClient::CreateEngineCallable(const CreateEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEngineOutcome()>>(
        [this, request]()
        {
            return this->CreateEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayCanaryRuleOutcome TseClient::DeleteCloudNativeAPIGatewayCanaryRule(const DeleteCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayCanaryRuleResponse rsp = DeleteCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayCanaryRuleAsync(const DeleteCloudNativeAPIGatewayCanaryRuleRequest& request, const DeleteCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayCanaryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayCanaryRuleCallable(const DeleteCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayCanaryRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayCanaryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayRouteOutcome TseClient::DeleteCloudNativeAPIGatewayRoute(const DeleteCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayRouteResponse rsp = DeleteCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayRouteAsync(const DeleteCloudNativeAPIGatewayRouteRequest& request, const DeleteCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayRouteOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayRouteCallable(const DeleteCloudNativeAPIGatewayRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayRouteOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::DeleteCloudNativeAPIGatewayRouteRateLimit(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayRouteRateLimitResponse rsp = DeleteCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitAsync(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest& request, const DeleteCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayRouteRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayRouteRateLimitCallable(const DeleteCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayRouteRateLimitOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayRouteRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayServiceOutcome TseClient::DeleteCloudNativeAPIGatewayService(const DeleteCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayServiceResponse rsp = DeleteCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayServiceAsync(const DeleteCloudNativeAPIGatewayServiceRequest& request, const DeleteCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayServiceOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayServiceCallable(const DeleteCloudNativeAPIGatewayServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayServiceOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::DeleteCloudNativeAPIGatewayServiceRateLimit(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudNativeAPIGatewayServiceRateLimitResponse rsp = DeleteCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitAsync(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest& request, const DeleteCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudNativeAPIGatewayServiceRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::DeleteCloudNativeAPIGatewayServiceRateLimitCallable(const DeleteCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudNativeAPIGatewayServiceRateLimitOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudNativeAPIGatewayServiceRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DeleteEngineOutcome TseClient::DeleteEngine(const DeleteEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEngineResponse rsp = DeleteEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEngineOutcome(rsp);
        else
            return DeleteEngineOutcome(o.GetError());
    }
    else
    {
        return DeleteEngineOutcome(outcome.GetError());
    }
}

void TseClient::DeleteEngineAsync(const DeleteEngineRequest& request, const DeleteEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DeleteEngineOutcomeCallable TseClient::DeleteEngineCallable(const DeleteEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEngineOutcome()>>(
        [this, request]()
        {
            return this->DeleteEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayCanaryRulesOutcome TseClient::DescribeCloudNativeAPIGatewayCanaryRules(const DescribeCloudNativeAPIGatewayCanaryRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayCanaryRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayCanaryRulesResponse rsp = DescribeCloudNativeAPIGatewayCanaryRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayCanaryRulesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayCanaryRulesAsync(const DescribeCloudNativeAPIGatewayCanaryRulesRequest& request, const DescribeCloudNativeAPIGatewayCanaryRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayCanaryRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayCanaryRulesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayCanaryRulesCallable(const DescribeCloudNativeAPIGatewayCanaryRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayCanaryRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayCanaryRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcome TseClient::DescribeCloudNativeAPIGatewayNodes(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayNodesResponse rsp = DescribeCloudNativeAPIGatewayNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayNodesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayNodesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayNodesAsync(const DescribeCloudNativeAPIGatewayNodesRequest& request, const DescribeCloudNativeAPIGatewayNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayNodesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayNodesCallable(const DescribeCloudNativeAPIGatewayNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayPortsOutcome TseClient::DescribeCloudNativeAPIGatewayPorts(const DescribeCloudNativeAPIGatewayPortsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayPorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayPortsResponse rsp = DescribeCloudNativeAPIGatewayPortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayPortsOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayPortsOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayPortsOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayPortsAsync(const DescribeCloudNativeAPIGatewayPortsRequest& request, const DescribeCloudNativeAPIGatewayPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayPorts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayPortsOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayPortsCallable(const DescribeCloudNativeAPIGatewayPortsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayPortsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayPorts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::DescribeCloudNativeAPIGatewayRouteRateLimit(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayRouteRateLimitResponse rsp = DescribeCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitAsync(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest& request, const DescribeCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayRouteRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayRouteRateLimitCallable(const DescribeCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayRouteRateLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayRouteRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayRoutesOutcome TseClient::DescribeCloudNativeAPIGatewayRoutes(const DescribeCloudNativeAPIGatewayRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayRoutesResponse rsp = DescribeCloudNativeAPIGatewayRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayRoutesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayRoutesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayRoutesAsync(const DescribeCloudNativeAPIGatewayRoutesRequest& request, const DescribeCloudNativeAPIGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayRoutesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayRoutesCallable(const DescribeCloudNativeAPIGatewayRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayRoutesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::DescribeCloudNativeAPIGatewayServiceRateLimit(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServiceRateLimitResponse rsp = DescribeCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitAsync(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest& request, const DescribeCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayServiceRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServiceRateLimitCallable(const DescribeCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayServiceRateLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayServiceRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeCloudNativeAPIGatewayServicesOutcome TseClient::DescribeCloudNativeAPIGatewayServices(const DescribeCloudNativeAPIGatewayServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudNativeAPIGatewayServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudNativeAPIGatewayServicesResponse rsp = DescribeCloudNativeAPIGatewayServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudNativeAPIGatewayServicesOutcome(rsp);
        else
            return DescribeCloudNativeAPIGatewayServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudNativeAPIGatewayServicesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeCloudNativeAPIGatewayServicesAsync(const DescribeCloudNativeAPIGatewayServicesRequest& request, const DescribeCloudNativeAPIGatewayServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudNativeAPIGatewayServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeCloudNativeAPIGatewayServicesOutcomeCallable TseClient::DescribeCloudNativeAPIGatewayServicesCallable(const DescribeCloudNativeAPIGatewayServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudNativeAPIGatewayServicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudNativeAPIGatewayServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeNacosReplicasOutcome TseClient::DescribeNacosReplicas(const DescribeNacosReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNacosReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNacosReplicasResponse rsp = DescribeNacosReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNacosReplicasOutcome(rsp);
        else
            return DescribeNacosReplicasOutcome(o.GetError());
    }
    else
    {
        return DescribeNacosReplicasOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNacosReplicasAsync(const DescribeNacosReplicasRequest& request, const DescribeNacosReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNacosReplicas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeNacosReplicasOutcomeCallable TseClient::DescribeNacosReplicasCallable(const DescribeNacosReplicasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNacosReplicasOutcome()>>(
        [this, request]()
        {
            return this->DescribeNacosReplicas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeNacosServerInterfacesOutcome TseClient::DescribeNacosServerInterfaces(const DescribeNacosServerInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNacosServerInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNacosServerInterfacesResponse rsp = DescribeNacosServerInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNacosServerInterfacesOutcome(rsp);
        else
            return DescribeNacosServerInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeNacosServerInterfacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeNacosServerInterfacesAsync(const DescribeNacosServerInterfacesRequest& request, const DescribeNacosServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNacosServerInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeNacosServerInterfacesOutcomeCallable TseClient::DescribeNacosServerInterfacesCallable(const DescribeNacosServerInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNacosServerInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNacosServerInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeOneCloudNativeAPIGatewayServiceOutcome TseClient::DescribeOneCloudNativeAPIGatewayService(const DescribeOneCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOneCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOneCloudNativeAPIGatewayServiceResponse rsp = DescribeOneCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOneCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return DescribeOneCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeOneCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::DescribeOneCloudNativeAPIGatewayServiceAsync(const DescribeOneCloudNativeAPIGatewayServiceRequest& request, const DescribeOneCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOneCloudNativeAPIGatewayService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeOneCloudNativeAPIGatewayServiceOutcomeCallable TseClient::DescribeOneCloudNativeAPIGatewayServiceCallable(const DescribeOneCloudNativeAPIGatewayServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOneCloudNativeAPIGatewayServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribeOneCloudNativeAPIGatewayService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeSREInstanceAccessAddressOutcome TseClient::DescribeSREInstanceAccessAddress(const DescribeSREInstanceAccessAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstanceAccessAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstanceAccessAddressResponse rsp = DescribeSREInstanceAccessAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstanceAccessAddressOutcome(rsp);
        else
            return DescribeSREInstanceAccessAddressOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstanceAccessAddressOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstanceAccessAddressAsync(const DescribeSREInstanceAccessAddressRequest& request, const DescribeSREInstanceAccessAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSREInstanceAccessAddress(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeSREInstanceAccessAddressOutcomeCallable TseClient::DescribeSREInstanceAccessAddressCallable(const DescribeSREInstanceAccessAddressRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSREInstanceAccessAddressOutcome()>>(
        [this, request]()
        {
            return this->DescribeSREInstanceAccessAddress(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeSREInstancesOutcome TseClient::DescribeSREInstances(const DescribeSREInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSREInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSREInstancesResponse rsp = DescribeSREInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSREInstancesOutcome(rsp);
        else
            return DescribeSREInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSREInstancesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeSREInstancesAsync(const DescribeSREInstancesRequest& request, const DescribeSREInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSREInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeSREInstancesOutcomeCallable TseClient::DescribeSREInstancesCallable(const DescribeSREInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSREInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSREInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeZookeeperReplicasOutcome TseClient::DescribeZookeeperReplicas(const DescribeZookeeperReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZookeeperReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZookeeperReplicasResponse rsp = DescribeZookeeperReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZookeeperReplicasOutcome(rsp);
        else
            return DescribeZookeeperReplicasOutcome(o.GetError());
    }
    else
    {
        return DescribeZookeeperReplicasOutcome(outcome.GetError());
    }
}

void TseClient::DescribeZookeeperReplicasAsync(const DescribeZookeeperReplicasRequest& request, const DescribeZookeeperReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZookeeperReplicas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeZookeeperReplicasOutcomeCallable TseClient::DescribeZookeeperReplicasCallable(const DescribeZookeeperReplicasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZookeeperReplicasOutcome()>>(
        [this, request]()
        {
            return this->DescribeZookeeperReplicas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::DescribeZookeeperServerInterfacesOutcome TseClient::DescribeZookeeperServerInterfaces(const DescribeZookeeperServerInterfacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZookeeperServerInterfaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZookeeperServerInterfacesResponse rsp = DescribeZookeeperServerInterfacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZookeeperServerInterfacesOutcome(rsp);
        else
            return DescribeZookeeperServerInterfacesOutcome(o.GetError());
    }
    else
    {
        return DescribeZookeeperServerInterfacesOutcome(outcome.GetError());
    }
}

void TseClient::DescribeZookeeperServerInterfacesAsync(const DescribeZookeeperServerInterfacesRequest& request, const DescribeZookeeperServerInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZookeeperServerInterfaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::DescribeZookeeperServerInterfacesOutcomeCallable TseClient::DescribeZookeeperServerInterfacesCallable(const DescribeZookeeperServerInterfacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZookeeperServerInterfacesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZookeeperServerInterfaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayCanaryRuleOutcome TseClient::ModifyCloudNativeAPIGatewayCanaryRule(const ModifyCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayCanaryRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayCanaryRuleResponse rsp = ModifyCloudNativeAPIGatewayCanaryRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayCanaryRuleOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayCanaryRuleAsync(const ModifyCloudNativeAPIGatewayCanaryRuleRequest& request, const ModifyCloudNativeAPIGatewayCanaryRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayCanaryRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayCanaryRuleOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayCanaryRuleCallable(const ModifyCloudNativeAPIGatewayCanaryRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayCanaryRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayCanaryRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayRouteOutcome TseClient::ModifyCloudNativeAPIGatewayRoute(const ModifyCloudNativeAPIGatewayRouteRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayRouteResponse rsp = ModifyCloudNativeAPIGatewayRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayRouteOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayRouteOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayRouteOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayRouteAsync(const ModifyCloudNativeAPIGatewayRouteRequest& request, const ModifyCloudNativeAPIGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayRouteOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayRouteCallable(const ModifyCloudNativeAPIGatewayRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayRouteOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitOutcome TseClient::ModifyCloudNativeAPIGatewayRouteRateLimit(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayRouteRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayRouteRateLimitResponse rsp = ModifyCloudNativeAPIGatewayRouteRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayRouteRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitAsync(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest& request, const ModifyCloudNativeAPIGatewayRouteRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayRouteRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayRouteRateLimitCallable(const ModifyCloudNativeAPIGatewayRouteRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayRouteRateLimitOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayRouteRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayServiceOutcome TseClient::ModifyCloudNativeAPIGatewayService(const ModifyCloudNativeAPIGatewayServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayServiceResponse rsp = ModifyCloudNativeAPIGatewayServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayServiceOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayServiceOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayServiceAsync(const ModifyCloudNativeAPIGatewayServiceRequest& request, const ModifyCloudNativeAPIGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayServiceOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayServiceCallable(const ModifyCloudNativeAPIGatewayServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitOutcome TseClient::ModifyCloudNativeAPIGatewayServiceRateLimit(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudNativeAPIGatewayServiceRateLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudNativeAPIGatewayServiceRateLimitResponse rsp = ModifyCloudNativeAPIGatewayServiceRateLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(rsp);
        else
            return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudNativeAPIGatewayServiceRateLimitOutcome(outcome.GetError());
    }
}

void TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitAsync(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest& request, const ModifyCloudNativeAPIGatewayServiceRateLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudNativeAPIGatewayServiceRateLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitOutcomeCallable TseClient::ModifyCloudNativeAPIGatewayServiceRateLimitCallable(const ModifyCloudNativeAPIGatewayServiceRateLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudNativeAPIGatewayServiceRateLimitOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudNativeAPIGatewayServiceRateLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TseClient::UpdateEngineInternetAccessOutcome TseClient::UpdateEngineInternetAccess(const UpdateEngineInternetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateEngineInternetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateEngineInternetAccessResponse rsp = UpdateEngineInternetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateEngineInternetAccessOutcome(rsp);
        else
            return UpdateEngineInternetAccessOutcome(o.GetError());
    }
    else
    {
        return UpdateEngineInternetAccessOutcome(outcome.GetError());
    }
}

void TseClient::UpdateEngineInternetAccessAsync(const UpdateEngineInternetAccessRequest& request, const UpdateEngineInternetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateEngineInternetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TseClient::UpdateEngineInternetAccessOutcomeCallable TseClient::UpdateEngineInternetAccessCallable(const UpdateEngineInternetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateEngineInternetAccessOutcome()>>(
        [this, request]()
        {
            return this->UpdateEngineInternetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

