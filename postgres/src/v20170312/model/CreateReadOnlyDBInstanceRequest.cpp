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

#include <tencentcloud/postgres/v20170312/model/CreateReadOnlyDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

CreateReadOnlyDBInstanceRequest::CreateReadOnlyDBInstanceRequest() :
    m_specCodeHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_masterDBInstanceIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_needSupportIpv6HasBeenSet(false),
    m_readOnlyGroupIdHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string CreateReadOnlyDBInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_specCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_periodHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_masterDBInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterDBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_masterDBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_activityId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_needSupportIpv6HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedSupportIpv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSupportIpv6, allocator);
    }

    if (m_readOnlyGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_tagList.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateReadOnlyDBInstanceRequest::GetSpecCode() const
{
    return m_specCode;
}

void CreateReadOnlyDBInstanceRequest::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

string CreateReadOnlyDBInstanceRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void CreateReadOnlyDBInstanceRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

uint64_t CreateReadOnlyDBInstanceRequest::GetStorage() const
{
    return m_storage;
}

void CreateReadOnlyDBInstanceRequest::SetStorage(const uint64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

uint64_t CreateReadOnlyDBInstanceRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void CreateReadOnlyDBInstanceRequest::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

uint64_t CreateReadOnlyDBInstanceRequest::GetPeriod() const
{
    return m_period;
}

void CreateReadOnlyDBInstanceRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateReadOnlyDBInstanceRequest::GetMasterDBInstanceId() const
{
    return m_masterDBInstanceId;
}

void CreateReadOnlyDBInstanceRequest::SetMasterDBInstanceId(const string& _masterDBInstanceId)
{
    m_masterDBInstanceId = _masterDBInstanceId;
    m_masterDBInstanceIdHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::MasterDBInstanceIdHasBeenSet() const
{
    return m_masterDBInstanceIdHasBeenSet;
}

string CreateReadOnlyDBInstanceRequest::GetZone() const
{
    return m_zone;
}

void CreateReadOnlyDBInstanceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t CreateReadOnlyDBInstanceRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateReadOnlyDBInstanceRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateReadOnlyDBInstanceRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CreateReadOnlyDBInstanceRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

uint64_t CreateReadOnlyDBInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void CreateReadOnlyDBInstanceRequest::SetAutoVoucher(const uint64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> CreateReadOnlyDBInstanceRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void CreateReadOnlyDBInstanceRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

int64_t CreateReadOnlyDBInstanceRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateReadOnlyDBInstanceRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CreateReadOnlyDBInstanceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateReadOnlyDBInstanceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateReadOnlyDBInstanceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateReadOnlyDBInstanceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t CreateReadOnlyDBInstanceRequest::GetActivityId() const
{
    return m_activityId;
}

void CreateReadOnlyDBInstanceRequest::SetActivityId(const int64_t& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string CreateReadOnlyDBInstanceRequest::GetName() const
{
    return m_name;
}

void CreateReadOnlyDBInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateReadOnlyDBInstanceRequest::GetNeedSupportIpv6() const
{
    return m_needSupportIpv6;
}

void CreateReadOnlyDBInstanceRequest::SetNeedSupportIpv6(const uint64_t& _needSupportIpv6)
{
    m_needSupportIpv6 = _needSupportIpv6;
    m_needSupportIpv6HasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::NeedSupportIpv6HasBeenSet() const
{
    return m_needSupportIpv6HasBeenSet;
}

string CreateReadOnlyDBInstanceRequest::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

void CreateReadOnlyDBInstanceRequest::SetReadOnlyGroupId(const string& _readOnlyGroupId)
{
    m_readOnlyGroupId = _readOnlyGroupId;
    m_readOnlyGroupIdHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}

Tag CreateReadOnlyDBInstanceRequest::GetTagList() const
{
    return m_tagList;
}

void CreateReadOnlyDBInstanceRequest::SetTagList(const Tag& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateReadOnlyDBInstanceRequest::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

