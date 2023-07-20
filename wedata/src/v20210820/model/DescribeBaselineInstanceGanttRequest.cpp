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

#include <tencentcloud/wedata/v20210820/model/DescribeBaselineInstanceGanttRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeBaselineInstanceGanttRequest::DescribeBaselineInstanceGanttRequest() :
    m_baselineInstanceIdHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string DescribeBaselineInstanceGanttRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_baselineInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_baselineInstanceId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeBaselineInstanceGanttRequest::GetBaselineInstanceId() const
{
    return m_baselineInstanceId;
}

void DescribeBaselineInstanceGanttRequest::SetBaselineInstanceId(const int64_t& _baselineInstanceId)
{
    m_baselineInstanceId = _baselineInstanceId;
    m_baselineInstanceIdHasBeenSet = true;
}

bool DescribeBaselineInstanceGanttRequest::BaselineInstanceIdHasBeenSet() const
{
    return m_baselineInstanceIdHasBeenSet;
}

string DescribeBaselineInstanceGanttRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeBaselineInstanceGanttRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeBaselineInstanceGanttRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


