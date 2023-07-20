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

#include <tencentcloud/wedata/v20210820/model/DescribeDrInstanceScriptContentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDrInstanceScriptContentRequest::DescribeDrInstanceScriptContentRequest() :
    m_projectIdHasBeenSet(false),
    m_taskSourceHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_sonRecordIdHasBeenSet(false)
{
}

string DescribeDrInstanceScriptContentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskSource.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordId, allocator);
    }

    if (m_sonRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SonRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sonRecordId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDrInstanceScriptContentRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeDrInstanceScriptContentRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeDrInstanceScriptContentRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeDrInstanceScriptContentRequest::GetTaskSource() const
{
    return m_taskSource;
}

void DescribeDrInstanceScriptContentRequest::SetTaskSource(const string& _taskSource)
{
    m_taskSource = _taskSource;
    m_taskSourceHasBeenSet = true;
}

bool DescribeDrInstanceScriptContentRequest::TaskSourceHasBeenSet() const
{
    return m_taskSourceHasBeenSet;
}

uint64_t DescribeDrInstanceScriptContentRequest::GetRecordId() const
{
    return m_recordId;
}

void DescribeDrInstanceScriptContentRequest::SetRecordId(const uint64_t& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool DescribeDrInstanceScriptContentRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

uint64_t DescribeDrInstanceScriptContentRequest::GetSonRecordId() const
{
    return m_sonRecordId;
}

void DescribeDrInstanceScriptContentRequest::SetSonRecordId(const uint64_t& _sonRecordId)
{
    m_sonRecordId = _sonRecordId;
    m_sonRecordIdHasBeenSet = true;
}

bool DescribeDrInstanceScriptContentRequest::SonRecordIdHasBeenSet() const
{
    return m_sonRecordIdHasBeenSet;
}


