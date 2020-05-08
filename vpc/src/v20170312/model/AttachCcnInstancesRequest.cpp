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

#include <tencentcloud/vpc/v20170312/model/AttachCcnInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

AttachCcnInstancesRequest::AttachCcnInstancesRequest() :
    m_ccnIdHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_ccnUinHasBeenSet(false)
{
}

string AttachCcnInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_instancesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ccnUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ccnUin.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AttachCcnInstancesRequest::GetCcnId() const
{
    return m_ccnId;
}

void AttachCcnInstancesRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool AttachCcnInstancesRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

vector<CcnInstance> AttachCcnInstancesRequest::GetInstances() const
{
    return m_instances;
}

void AttachCcnInstancesRequest::SetInstances(const vector<CcnInstance>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool AttachCcnInstancesRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

string AttachCcnInstancesRequest::GetCcnUin() const
{
    return m_ccnUin;
}

void AttachCcnInstancesRequest::SetCcnUin(const string& _ccnUin)
{
    m_ccnUin = _ccnUin;
    m_ccnUinHasBeenSet = true;
}

bool AttachCcnInstancesRequest::CcnUinHasBeenSet() const
{
    return m_ccnUinHasBeenSet;
}

