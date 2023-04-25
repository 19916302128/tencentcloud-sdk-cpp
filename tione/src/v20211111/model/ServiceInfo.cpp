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

#include <tencentcloud/tione/v20211111/model/ServiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ServiceInfo::ServiceInfo() :
    m_replicasHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_envHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_modelInfoHasBeenSet(false),
    m_logEnableHasBeenSet(false),
    m_logConfigHasBeenSet(false),
    m_authorizationEnableHasBeenSet(false),
    m_horizontalPodAutoscalerHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_podListHasBeenSet(false),
    m_resourceTotalHasBeenSet(false),
    m_oldReplicasHasBeenSet(false),
    m_hybridBillingPrepaidReplicasHasBeenSet(false),
    m_oldHybridBillingPrepaidReplicasHasBeenSet(false),
    m_modelHotUpdateEnableHasBeenSet(false),
    m_podsHasBeenSet(false),
    m_podInfosHasBeenSet(false),
    m_scaleStrategyHasBeenSet(false),
    m_cronScaleJobsHasBeenSet(false),
    m_scaleModeHasBeenSet(false),
    m_serviceLimitHasBeenSet(false),
    m_scheduledActionHasBeenSet(false)
{
}

CoreInternalOutcome ServiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Env` is not array type"));

        const rapidjson::Value &tmpValue = value["Env"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvVar item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_env.push_back(item);
        }
        m_envHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Resources` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resources.Deserialize(value["Resources"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("ModelInfo") && !value["ModelInfo"].IsNull())
    {
        if (!value["ModelInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ModelInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelInfo.Deserialize(value["ModelInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelInfoHasBeenSet = true;
    }

    if (value.HasMember("LogEnable") && !value["LogEnable"].IsNull())
    {
        if (!value["LogEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.LogEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_logEnable = value["LogEnable"].GetBool();
        m_logEnableHasBeenSet = true;
    }

    if (value.HasMember("LogConfig") && !value["LogConfig"].IsNull())
    {
        if (!value["LogConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.LogConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_logConfig.Deserialize(value["LogConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_logConfigHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationEnable") && !value["AuthorizationEnable"].IsNull())
    {
        if (!value["AuthorizationEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.AuthorizationEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationEnable = value["AuthorizationEnable"].GetBool();
        m_authorizationEnableHasBeenSet = true;
    }

    if (value.HasMember("HorizontalPodAutoscaler") && !value["HorizontalPodAutoscaler"].IsNull())
    {
        if (!value["HorizontalPodAutoscaler"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.HorizontalPodAutoscaler` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_horizontalPodAutoscaler.Deserialize(value["HorizontalPodAutoscaler"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_horizontalPodAutoscalerHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("PodList") && !value["PodList"].IsNull())
    {
        if (!value["PodList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.PodList` is not array type"));

        const rapidjson::Value &tmpValue = value["PodList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_podList.push_back((*itr).GetString());
        }
        m_podListHasBeenSet = true;
    }

    if (value.HasMember("ResourceTotal") && !value["ResourceTotal"].IsNull())
    {
        if (!value["ResourceTotal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ResourceTotal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceTotal.Deserialize(value["ResourceTotal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceTotalHasBeenSet = true;
    }

    if (value.HasMember("OldReplicas") && !value["OldReplicas"].IsNull())
    {
        if (!value["OldReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.OldReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldReplicas = value["OldReplicas"].GetInt64();
        m_oldReplicasHasBeenSet = true;
    }

    if (value.HasMember("HybridBillingPrepaidReplicas") && !value["HybridBillingPrepaidReplicas"].IsNull())
    {
        if (!value["HybridBillingPrepaidReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.HybridBillingPrepaidReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hybridBillingPrepaidReplicas = value["HybridBillingPrepaidReplicas"].GetInt64();
        m_hybridBillingPrepaidReplicasHasBeenSet = true;
    }

    if (value.HasMember("OldHybridBillingPrepaidReplicas") && !value["OldHybridBillingPrepaidReplicas"].IsNull())
    {
        if (!value["OldHybridBillingPrepaidReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.OldHybridBillingPrepaidReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldHybridBillingPrepaidReplicas = value["OldHybridBillingPrepaidReplicas"].GetInt64();
        m_oldHybridBillingPrepaidReplicasHasBeenSet = true;
    }

    if (value.HasMember("ModelHotUpdateEnable") && !value["ModelHotUpdateEnable"].IsNull())
    {
        if (!value["ModelHotUpdateEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ModelHotUpdateEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_modelHotUpdateEnable = value["ModelHotUpdateEnable"].GetBool();
        m_modelHotUpdateEnableHasBeenSet = true;
    }

    if (value.HasMember("Pods") && !value["Pods"].IsNull())
    {
        if (!value["Pods"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.Pods` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pods.Deserialize(value["Pods"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_podsHasBeenSet = true;
    }

    if (value.HasMember("PodInfos") && !value["PodInfos"].IsNull())
    {
        if (!value["PodInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.PodInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["PodInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Pod item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_podInfos.push_back(item);
        }
        m_podInfosHasBeenSet = true;
    }

    if (value.HasMember("ScaleStrategy") && !value["ScaleStrategy"].IsNull())
    {
        if (!value["ScaleStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ScaleStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleStrategy = string(value["ScaleStrategy"].GetString());
        m_scaleStrategyHasBeenSet = true;
    }

    if (value.HasMember("CronScaleJobs") && !value["CronScaleJobs"].IsNull())
    {
        if (!value["CronScaleJobs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.CronScaleJobs` is not array type"));

        const rapidjson::Value &tmpValue = value["CronScaleJobs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CronScaleJob item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cronScaleJobs.push_back(item);
        }
        m_cronScaleJobsHasBeenSet = true;
    }

    if (value.HasMember("ScaleMode") && !value["ScaleMode"].IsNull())
    {
        if (!value["ScaleMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ScaleMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleMode = string(value["ScaleMode"].GetString());
        m_scaleModeHasBeenSet = true;
    }

    if (value.HasMember("ServiceLimit") && !value["ServiceLimit"].IsNull())
    {
        if (!value["ServiceLimit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ServiceLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serviceLimit.Deserialize(value["ServiceLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serviceLimitHasBeenSet = true;
    }

    if (value.HasMember("ScheduledAction") && !value["ScheduledAction"].IsNull())
    {
        if (!value["ScheduledAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceInfo.ScheduledAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduledAction = string(value["ScheduledAction"].GetString());
        m_scheduledActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_env.begin(); itr != m_env.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resources.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logEnable, allocator);
    }

    if (m_logConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authorizationEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationEnable, allocator);
    }

    if (m_horizontalPodAutoscalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalPodAutoscaler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_horizontalPodAutoscaler.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_podListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_podList.begin(); itr != m_podList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceTotal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oldReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldReplicas, allocator);
    }

    if (m_hybridBillingPrepaidReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HybridBillingPrepaidReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hybridBillingPrepaidReplicas, allocator);
    }

    if (m_oldHybridBillingPrepaidReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldHybridBillingPrepaidReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldHybridBillingPrepaidReplicas, allocator);
    }

    if (m_modelHotUpdateEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelHotUpdateEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelHotUpdateEnable, allocator);
    }

    if (m_podsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pods.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_podInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podInfos.begin(); itr != m_podInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scaleStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_cronScaleJobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronScaleJobs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cronScaleJobs.begin(); itr != m_cronScaleJobs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scaleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceLimit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scheduledActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduledAction.c_str(), allocator).Move(), allocator);
    }

}


int64_t ServiceInfo::GetReplicas() const
{
    return m_replicas;
}

void ServiceInfo::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool ServiceInfo::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

ImageInfo ServiceInfo::GetImageInfo() const
{
    return m_imageInfo;
}

void ServiceInfo::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool ServiceInfo::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

vector<EnvVar> ServiceInfo::GetEnv() const
{
    return m_env;
}

void ServiceInfo::SetEnv(const vector<EnvVar>& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool ServiceInfo::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

ResourceInfo ServiceInfo::GetResources() const
{
    return m_resources;
}

void ServiceInfo::SetResources(const ResourceInfo& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool ServiceInfo::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string ServiceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void ServiceInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ServiceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

ModelInfo ServiceInfo::GetModelInfo() const
{
    return m_modelInfo;
}

void ServiceInfo::SetModelInfo(const ModelInfo& _modelInfo)
{
    m_modelInfo = _modelInfo;
    m_modelInfoHasBeenSet = true;
}

bool ServiceInfo::ModelInfoHasBeenSet() const
{
    return m_modelInfoHasBeenSet;
}

bool ServiceInfo::GetLogEnable() const
{
    return m_logEnable;
}

void ServiceInfo::SetLogEnable(const bool& _logEnable)
{
    m_logEnable = _logEnable;
    m_logEnableHasBeenSet = true;
}

bool ServiceInfo::LogEnableHasBeenSet() const
{
    return m_logEnableHasBeenSet;
}

LogConfig ServiceInfo::GetLogConfig() const
{
    return m_logConfig;
}

void ServiceInfo::SetLogConfig(const LogConfig& _logConfig)
{
    m_logConfig = _logConfig;
    m_logConfigHasBeenSet = true;
}

bool ServiceInfo::LogConfigHasBeenSet() const
{
    return m_logConfigHasBeenSet;
}

bool ServiceInfo::GetAuthorizationEnable() const
{
    return m_authorizationEnable;
}

void ServiceInfo::SetAuthorizationEnable(const bool& _authorizationEnable)
{
    m_authorizationEnable = _authorizationEnable;
    m_authorizationEnableHasBeenSet = true;
}

bool ServiceInfo::AuthorizationEnableHasBeenSet() const
{
    return m_authorizationEnableHasBeenSet;
}

HorizontalPodAutoscaler ServiceInfo::GetHorizontalPodAutoscaler() const
{
    return m_horizontalPodAutoscaler;
}

void ServiceInfo::SetHorizontalPodAutoscaler(const HorizontalPodAutoscaler& _horizontalPodAutoscaler)
{
    m_horizontalPodAutoscaler = _horizontalPodAutoscaler;
    m_horizontalPodAutoscalerHasBeenSet = true;
}

bool ServiceInfo::HorizontalPodAutoscalerHasBeenSet() const
{
    return m_horizontalPodAutoscalerHasBeenSet;
}

WorkloadStatus ServiceInfo::GetStatus() const
{
    return m_status;
}

void ServiceInfo::SetStatus(const WorkloadStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServiceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ServiceInfo::GetWeight() const
{
    return m_weight;
}

void ServiceInfo::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ServiceInfo::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

vector<string> ServiceInfo::GetPodList() const
{
    return m_podList;
}

void ServiceInfo::SetPodList(const vector<string>& _podList)
{
    m_podList = _podList;
    m_podListHasBeenSet = true;
}

bool ServiceInfo::PodListHasBeenSet() const
{
    return m_podListHasBeenSet;
}

ResourceInfo ServiceInfo::GetResourceTotal() const
{
    return m_resourceTotal;
}

void ServiceInfo::SetResourceTotal(const ResourceInfo& _resourceTotal)
{
    m_resourceTotal = _resourceTotal;
    m_resourceTotalHasBeenSet = true;
}

bool ServiceInfo::ResourceTotalHasBeenSet() const
{
    return m_resourceTotalHasBeenSet;
}

int64_t ServiceInfo::GetOldReplicas() const
{
    return m_oldReplicas;
}

void ServiceInfo::SetOldReplicas(const int64_t& _oldReplicas)
{
    m_oldReplicas = _oldReplicas;
    m_oldReplicasHasBeenSet = true;
}

bool ServiceInfo::OldReplicasHasBeenSet() const
{
    return m_oldReplicasHasBeenSet;
}

int64_t ServiceInfo::GetHybridBillingPrepaidReplicas() const
{
    return m_hybridBillingPrepaidReplicas;
}

void ServiceInfo::SetHybridBillingPrepaidReplicas(const int64_t& _hybridBillingPrepaidReplicas)
{
    m_hybridBillingPrepaidReplicas = _hybridBillingPrepaidReplicas;
    m_hybridBillingPrepaidReplicasHasBeenSet = true;
}

bool ServiceInfo::HybridBillingPrepaidReplicasHasBeenSet() const
{
    return m_hybridBillingPrepaidReplicasHasBeenSet;
}

int64_t ServiceInfo::GetOldHybridBillingPrepaidReplicas() const
{
    return m_oldHybridBillingPrepaidReplicas;
}

void ServiceInfo::SetOldHybridBillingPrepaidReplicas(const int64_t& _oldHybridBillingPrepaidReplicas)
{
    m_oldHybridBillingPrepaidReplicas = _oldHybridBillingPrepaidReplicas;
    m_oldHybridBillingPrepaidReplicasHasBeenSet = true;
}

bool ServiceInfo::OldHybridBillingPrepaidReplicasHasBeenSet() const
{
    return m_oldHybridBillingPrepaidReplicasHasBeenSet;
}

bool ServiceInfo::GetModelHotUpdateEnable() const
{
    return m_modelHotUpdateEnable;
}

void ServiceInfo::SetModelHotUpdateEnable(const bool& _modelHotUpdateEnable)
{
    m_modelHotUpdateEnable = _modelHotUpdateEnable;
    m_modelHotUpdateEnableHasBeenSet = true;
}

bool ServiceInfo::ModelHotUpdateEnableHasBeenSet() const
{
    return m_modelHotUpdateEnableHasBeenSet;
}

Pod ServiceInfo::GetPods() const
{
    return m_pods;
}

void ServiceInfo::SetPods(const Pod& _pods)
{
    m_pods = _pods;
    m_podsHasBeenSet = true;
}

bool ServiceInfo::PodsHasBeenSet() const
{
    return m_podsHasBeenSet;
}

vector<Pod> ServiceInfo::GetPodInfos() const
{
    return m_podInfos;
}

void ServiceInfo::SetPodInfos(const vector<Pod>& _podInfos)
{
    m_podInfos = _podInfos;
    m_podInfosHasBeenSet = true;
}

bool ServiceInfo::PodInfosHasBeenSet() const
{
    return m_podInfosHasBeenSet;
}

string ServiceInfo::GetScaleStrategy() const
{
    return m_scaleStrategy;
}

void ServiceInfo::SetScaleStrategy(const string& _scaleStrategy)
{
    m_scaleStrategy = _scaleStrategy;
    m_scaleStrategyHasBeenSet = true;
}

bool ServiceInfo::ScaleStrategyHasBeenSet() const
{
    return m_scaleStrategyHasBeenSet;
}

vector<CronScaleJob> ServiceInfo::GetCronScaleJobs() const
{
    return m_cronScaleJobs;
}

void ServiceInfo::SetCronScaleJobs(const vector<CronScaleJob>& _cronScaleJobs)
{
    m_cronScaleJobs = _cronScaleJobs;
    m_cronScaleJobsHasBeenSet = true;
}

bool ServiceInfo::CronScaleJobsHasBeenSet() const
{
    return m_cronScaleJobsHasBeenSet;
}

string ServiceInfo::GetScaleMode() const
{
    return m_scaleMode;
}

void ServiceInfo::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool ServiceInfo::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}

ServiceLimit ServiceInfo::GetServiceLimit() const
{
    return m_serviceLimit;
}

void ServiceInfo::SetServiceLimit(const ServiceLimit& _serviceLimit)
{
    m_serviceLimit = _serviceLimit;
    m_serviceLimitHasBeenSet = true;
}

bool ServiceInfo::ServiceLimitHasBeenSet() const
{
    return m_serviceLimitHasBeenSet;
}

string ServiceInfo::GetScheduledAction() const
{
    return m_scheduledAction;
}

void ServiceInfo::SetScheduledAction(const string& _scheduledAction)
{
    m_scheduledAction = _scheduledAction;
    m_scheduledActionHasBeenSet = true;
}

bool ServiceInfo::ScheduledActionHasBeenSet() const
{
    return m_scheduledActionHasBeenSet;
}

