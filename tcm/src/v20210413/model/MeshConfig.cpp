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

#include <tencentcloud/tcm/v20210413/model/MeshConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

MeshConfig::MeshConfig() :
    m_istioHasBeenSet(false),
    m_accessLogHasBeenSet(false),
    m_prometheusHasBeenSet(false)
{
}

CoreInternalOutcome MeshConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Istio") && !value["Istio"].IsNull())
    {
        if (!value["Istio"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MeshConfig.Istio` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_istio.Deserialize(value["Istio"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_istioHasBeenSet = true;
    }

    if (value.HasMember("AccessLog") && !value["AccessLog"].IsNull())
    {
        if (!value["AccessLog"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MeshConfig.AccessLog` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessLog.Deserialize(value["AccessLog"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessLogHasBeenSet = true;
    }

    if (value.HasMember("Prometheus") && !value["Prometheus"].IsNull())
    {
        if (!value["Prometheus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MeshConfig.Prometheus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prometheus.Deserialize(value["Prometheus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prometheusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MeshConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_istioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Istio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_istio.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessLog.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prometheusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prometheus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prometheus.ToJsonObject(value[key.c_str()], allocator);
    }

}


IstioConfig MeshConfig::GetIstio() const
{
    return m_istio;
}

void MeshConfig::SetIstio(const IstioConfig& _istio)
{
    m_istio = _istio;
    m_istioHasBeenSet = true;
}

bool MeshConfig::IstioHasBeenSet() const
{
    return m_istioHasBeenSet;
}

AccessLogConfig MeshConfig::GetAccessLog() const
{
    return m_accessLog;
}

void MeshConfig::SetAccessLog(const AccessLogConfig& _accessLog)
{
    m_accessLog = _accessLog;
    m_accessLogHasBeenSet = true;
}

bool MeshConfig::AccessLogHasBeenSet() const
{
    return m_accessLogHasBeenSet;
}

PrometheusConfig MeshConfig::GetPrometheus() const
{
    return m_prometheus;
}

void MeshConfig::SetPrometheus(const PrometheusConfig& _prometheus)
{
    m_prometheus = _prometheus;
    m_prometheusHasBeenSet = true;
}

bool MeshConfig::PrometheusHasBeenSet() const
{
    return m_prometheusHasBeenSet;
}

