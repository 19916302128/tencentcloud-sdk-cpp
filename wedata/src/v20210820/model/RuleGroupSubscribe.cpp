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

#include <tencentcloud/wedata/v20210820/model/RuleGroupSubscribe.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleGroupSubscribe::RuleGroupSubscribe() :
    m_ruleGroupIdHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_subscribeTypeHasBeenSet(false)
{
}

CoreInternalOutcome RuleGroupSubscribe::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleGroupId") && !value["RuleGroupId"].IsNull())
    {
        if (!value["RuleGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.RuleGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleGroupId = value["RuleGroupId"].GetUint64();
        m_ruleGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Receivers") && !value["Receivers"].IsNull())
    {
        if (!value["Receivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.Receivers` is not array type"));

        const rapidjson::Value &tmpValue = value["Receivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubscribeReceiver item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receivers.push_back(item);
        }
        m_receiversHasBeenSet = true;
    }

    if (value.HasMember("SubscribeType") && !value["SubscribeType"].IsNull())
    {
        if (!value["SubscribeType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupSubscribe.SubscribeType` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscribeType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subscribeType.push_back((*itr).GetUint64());
        }
        m_subscribeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleGroupSubscribe::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleGroupId, allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subscribeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subscribeType.begin(); itr != m_subscribeType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


uint64_t RuleGroupSubscribe::GetRuleGroupId() const
{
    return m_ruleGroupId;
}

void RuleGroupSubscribe::SetRuleGroupId(const uint64_t& _ruleGroupId)
{
    m_ruleGroupId = _ruleGroupId;
    m_ruleGroupIdHasBeenSet = true;
}

bool RuleGroupSubscribe::RuleGroupIdHasBeenSet() const
{
    return m_ruleGroupIdHasBeenSet;
}

vector<SubscribeReceiver> RuleGroupSubscribe::GetReceivers() const
{
    return m_receivers;
}

void RuleGroupSubscribe::SetReceivers(const vector<SubscribeReceiver>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool RuleGroupSubscribe::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

vector<uint64_t> RuleGroupSubscribe::GetSubscribeType() const
{
    return m_subscribeType;
}

void RuleGroupSubscribe::SetSubscribeType(const vector<uint64_t>& _subscribeType)
{
    m_subscribeType = _subscribeType;
    m_subscribeTypeHasBeenSet = true;
}

bool RuleGroupSubscribe::SubscribeTypeHasBeenSet() const
{
    return m_subscribeTypeHasBeenSet;
}

