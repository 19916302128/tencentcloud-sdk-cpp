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

#include <tencentcloud/tse/v20201207/model/EnvInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

EnvInfo::EnvInfo() :
    m_envNameHasBeenSet(false),
    m_vpcInfosHasBeenSet(false),
    m_storageCapacityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_adminServiceIpHasBeenSet(false),
    m_configServiceIpHasBeenSet(false)
{
}

CoreInternalOutcome EnvInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvName") && !value["EnvName"].IsNull())
    {
        if (!value["EnvName"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(value["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (value.HasMember("VpcInfos") && !value["VpcInfos"].IsNull())
    {
        if (!value["VpcInfos"].IsArray())
            return CoreInternalOutcome(Error("response `EnvInfo.VpcInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcInfos.push_back(item);
        }
        m_vpcInfosHasBeenSet = true;
    }

    if (value.HasMember("StorageCapacity") && !value["StorageCapacity"].IsNull())
    {
        if (!value["StorageCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.StorageCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageCapacity = value["StorageCapacity"].GetInt64();
        m_storageCapacityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AdminServiceIp") && !value["AdminServiceIp"].IsNull())
    {
        if (!value["AdminServiceIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.AdminServiceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminServiceIp = string(value["AdminServiceIp"].GetString());
        m_adminServiceIpHasBeenSet = true;
    }

    if (value.HasMember("ConfigServiceIp") && !value["ConfigServiceIp"].IsNull())
    {
        if (!value["ConfigServiceIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `EnvInfo.ConfigServiceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configServiceIp = string(value["ConfigServiceIp"].GetString());
        m_configServiceIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfos.begin(); itr != m_vpcInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageCapacity, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_adminServiceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminServiceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminServiceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_configServiceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigServiceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configServiceIp.c_str(), allocator).Move(), allocator);
    }

}


string EnvInfo::GetEnvName() const
{
    return m_envName;
}

void EnvInfo::SetEnvName(const string& _envName)
{
    m_envName = _envName;
    m_envNameHasBeenSet = true;
}

bool EnvInfo::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

vector<VpcInfo> EnvInfo::GetVpcInfos() const
{
    return m_vpcInfos;
}

void EnvInfo::SetVpcInfos(const vector<VpcInfo>& _vpcInfos)
{
    m_vpcInfos = _vpcInfos;
    m_vpcInfosHasBeenSet = true;
}

bool EnvInfo::VpcInfosHasBeenSet() const
{
    return m_vpcInfosHasBeenSet;
}

int64_t EnvInfo::GetStorageCapacity() const
{
    return m_storageCapacity;
}

void EnvInfo::SetStorageCapacity(const int64_t& _storageCapacity)
{
    m_storageCapacity = _storageCapacity;
    m_storageCapacityHasBeenSet = true;
}

bool EnvInfo::StorageCapacityHasBeenSet() const
{
    return m_storageCapacityHasBeenSet;
}

string EnvInfo::GetStatus() const
{
    return m_status;
}

void EnvInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EnvInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EnvInfo::GetAdminServiceIp() const
{
    return m_adminServiceIp;
}

void EnvInfo::SetAdminServiceIp(const string& _adminServiceIp)
{
    m_adminServiceIp = _adminServiceIp;
    m_adminServiceIpHasBeenSet = true;
}

bool EnvInfo::AdminServiceIpHasBeenSet() const
{
    return m_adminServiceIpHasBeenSet;
}

string EnvInfo::GetConfigServiceIp() const
{
    return m_configServiceIp;
}

void EnvInfo::SetConfigServiceIp(const string& _configServiceIp)
{
    m_configServiceIp = _configServiceIp;
    m_configServiceIpHasBeenSet = true;
}

bool EnvInfo::ConfigServiceIpHasBeenSet() const
{
    return m_configServiceIpHasBeenSet;
}
