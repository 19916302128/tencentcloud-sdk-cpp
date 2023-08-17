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

#include <tencentcloud/faceid/v20180301/model/RuleIdConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

RuleIdConfig::RuleIdConfig() :
    m_intentionRecognitionHasBeenSet(false),
    m_intentionTypeHasBeenSet(false)
{
}

CoreInternalOutcome RuleIdConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntentionRecognition") && !value["IntentionRecognition"].IsNull())
    {
        if (!value["IntentionRecognition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuleIdConfig.IntentionRecognition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_intentionRecognition = value["IntentionRecognition"].GetBool();
        m_intentionRecognitionHasBeenSet = true;
    }

    if (value.HasMember("IntentionType") && !value["IntentionType"].IsNull())
    {
        if (!value["IntentionType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleIdConfig.IntentionType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intentionType = value["IntentionType"].GetInt64();
        m_intentionTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleIdConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intentionRecognitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionRecognition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intentionRecognition, allocator);
    }

    if (m_intentionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intentionType, allocator);
    }

}


bool RuleIdConfig::GetIntentionRecognition() const
{
    return m_intentionRecognition;
}

void RuleIdConfig::SetIntentionRecognition(const bool& _intentionRecognition)
{
    m_intentionRecognition = _intentionRecognition;
    m_intentionRecognitionHasBeenSet = true;
}

bool RuleIdConfig::IntentionRecognitionHasBeenSet() const
{
    return m_intentionRecognitionHasBeenSet;
}

int64_t RuleIdConfig::GetIntentionType() const
{
    return m_intentionType;
}

void RuleIdConfig::SetIntentionType(const int64_t& _intentionType)
{
    m_intentionType = _intentionType;
    m_intentionTypeHasBeenSet = true;
}

bool RuleIdConfig::IntentionTypeHasBeenSet() const
{
    return m_intentionTypeHasBeenSet;
}

