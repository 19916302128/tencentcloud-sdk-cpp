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

#include <tencentcloud/redis/v20180412/model/ChangeMasterInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

ChangeMasterInstanceRequest::ChangeMasterInstanceRequest() :
    m_groupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_forceSwitchHasBeenSet(false)
{
}

string ChangeMasterInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_forceSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceSwitch, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChangeMasterInstanceRequest::GetGroupId() const
{
    return m_groupId;
}

void ChangeMasterInstanceRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ChangeMasterInstanceRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ChangeMasterInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ChangeMasterInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ChangeMasterInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool ChangeMasterInstanceRequest::GetForceSwitch() const
{
    return m_forceSwitch;
}

void ChangeMasterInstanceRequest::SetForceSwitch(const bool& _forceSwitch)
{
    m_forceSwitch = _forceSwitch;
    m_forceSwitchHasBeenSet = true;
}

bool ChangeMasterInstanceRequest::ForceSwitchHasBeenSet() const
{
    return m_forceSwitchHasBeenSet;
}


