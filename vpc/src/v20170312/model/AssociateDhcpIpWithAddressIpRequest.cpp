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

#include <tencentcloud/vpc/v20170312/model/AssociateDhcpIpWithAddressIpRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

AssociateDhcpIpWithAddressIpRequest::AssociateDhcpIpWithAddressIpRequest() :
    m_dhcpIpIdHasBeenSet(false),
    m_addressIpHasBeenSet(false)
{
}

string AssociateDhcpIpWithAddressIpRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dhcpIpIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DhcpIpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dhcpIpId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddressIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_addressIp.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssociateDhcpIpWithAddressIpRequest::GetDhcpIpId() const
{
    return m_dhcpIpId;
}

void AssociateDhcpIpWithAddressIpRequest::SetDhcpIpId(const string& _dhcpIpId)
{
    m_dhcpIpId = _dhcpIpId;
    m_dhcpIpIdHasBeenSet = true;
}

bool AssociateDhcpIpWithAddressIpRequest::DhcpIpIdHasBeenSet() const
{
    return m_dhcpIpIdHasBeenSet;
}

string AssociateDhcpIpWithAddressIpRequest::GetAddressIp() const
{
    return m_addressIp;
}

void AssociateDhcpIpWithAddressIpRequest::SetAddressIp(const string& _addressIp)
{
    m_addressIp = _addressIp;
    m_addressIpHasBeenSet = true;
}

bool AssociateDhcpIpWithAddressIpRequest::AddressIpHasBeenSet() const
{
    return m_addressIpHasBeenSet;
}


