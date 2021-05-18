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

#include <tencentcloud/tem/v20201221/model/IngressTls.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20201221::Model;
using namespace rapidjson;
using namespace std;

IngressTls::IngressTls() :
    m_hostsHasBeenSet(false),
    m_secretNameHasBeenSet(false)
{
}

CoreInternalOutcome IngressTls::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Hosts") && !value["Hosts"].IsNull())
    {
        if (!value["Hosts"].IsArray())
            return CoreInternalOutcome(Error("response `IngressTls.Hosts` is not array type"));

        const Value &tmpValue = value["Hosts"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hosts.push_back((*itr).GetString());
        }
        m_hostsHasBeenSet = true;
    }

    if (value.HasMember("SecretName") && !value["SecretName"].IsNull())
    {
        if (!value["SecretName"].IsString())
        {
            return CoreInternalOutcome(Error("response `IngressTls.SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(value["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IngressTls::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_hostsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_secretNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

}


vector<string> IngressTls::GetHosts() const
{
    return m_hosts;
}

void IngressTls::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool IngressTls::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

string IngressTls::GetSecretName() const
{
    return m_secretName;
}

void IngressTls::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool IngressTls::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}
