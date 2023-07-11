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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateFlowGroupByTemplatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateFlowGroupByTemplatesRequest::ChannelCreateFlowGroupByTemplatesRequest() :
    m_agentHasBeenSet(false),
    m_flowInfosHasBeenSet(false),
    m_flowGroupNameHasBeenSet(false)
{
}

string ChannelCreateFlowGroupByTemplatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_flowInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_flowInfos.begin(); itr != m_flowInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_flowGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateFlowGroupByTemplatesRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateFlowGroupByTemplatesRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateFlowGroupByTemplatesRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

vector<FlowInfo> ChannelCreateFlowGroupByTemplatesRequest::GetFlowInfos() const
{
    return m_flowInfos;
}

void ChannelCreateFlowGroupByTemplatesRequest::SetFlowInfos(const vector<FlowInfo>& _flowInfos)
{
    m_flowInfos = _flowInfos;
    m_flowInfosHasBeenSet = true;
}

bool ChannelCreateFlowGroupByTemplatesRequest::FlowInfosHasBeenSet() const
{
    return m_flowInfosHasBeenSet;
}

string ChannelCreateFlowGroupByTemplatesRequest::GetFlowGroupName() const
{
    return m_flowGroupName;
}

void ChannelCreateFlowGroupByTemplatesRequest::SetFlowGroupName(const string& _flowGroupName)
{
    m_flowGroupName = _flowGroupName;
    m_flowGroupNameHasBeenSet = true;
}

bool ChannelCreateFlowGroupByTemplatesRequest::FlowGroupNameHasBeenSet() const
{
    return m_flowGroupNameHasBeenSet;
}


