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

#include <tencentcloud/sqlserver/v20180328/model/StartMigrationCheckRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

StartMigrationCheckRequest::StartMigrationCheckRequest() :
    m_migrateIdHasBeenSet(false)
{
}

string StartMigrationCheckRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_migrateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MigrateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_migrateId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t StartMigrationCheckRequest::GetMigrateId() const
{
    return m_migrateId;
}

void StartMigrationCheckRequest::SetMigrateId(const int64_t& _migrateId)
{
    m_migrateId = _migrateId;
    m_migrateIdHasBeenSet = true;
}

bool StartMigrationCheckRequest::MigrateIdHasBeenSet() const
{
    return m_migrateIdHasBeenSet;
}

