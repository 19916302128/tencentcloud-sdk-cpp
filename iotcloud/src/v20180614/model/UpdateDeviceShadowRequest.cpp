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

#include <tencentcloud/iotcloud/v20180614/model/UpdateDeviceShadowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace rapidjson;
using namespace std;

UpdateDeviceShadowRequest::UpdateDeviceShadowRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_shadowVersionHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

string UpdateDeviceShadowRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_shadowVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShadowVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shadowVersion, allocator);
    }

    if (m_prefixHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_prefix.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDeviceShadowRequest::GetProductId() const
{
    return m_productId;
}

void UpdateDeviceShadowRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UpdateDeviceShadowRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string UpdateDeviceShadowRequest::GetDeviceName() const
{
    return m_deviceName;
}

void UpdateDeviceShadowRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool UpdateDeviceShadowRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string UpdateDeviceShadowRequest::GetState() const
{
    return m_state;
}

void UpdateDeviceShadowRequest::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool UpdateDeviceShadowRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t UpdateDeviceShadowRequest::GetShadowVersion() const
{
    return m_shadowVersion;
}

void UpdateDeviceShadowRequest::SetShadowVersion(const uint64_t& _shadowVersion)
{
    m_shadowVersion = _shadowVersion;
    m_shadowVersionHasBeenSet = true;
}

bool UpdateDeviceShadowRequest::ShadowVersionHasBeenSet() const
{
    return m_shadowVersionHasBeenSet;
}

string UpdateDeviceShadowRequest::GetPrefix() const
{
    return m_prefix;
}

void UpdateDeviceShadowRequest::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool UpdateDeviceShadowRequest::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

