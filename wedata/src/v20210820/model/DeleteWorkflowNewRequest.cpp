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

#include <tencentcloud/wedata/v20210820/model/DeleteWorkflowNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteWorkflowNewRequest::DeleteWorkflowNewRequest() :
    m_workFlowIdHasBeenSet(false),
    m_deleteModeHasBeenSet(false),
    m_enableNotifyHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string DeleteWorkflowNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteMode, allocator);
    }

    if (m_enableNotifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableNotify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableNotify, allocator);
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


string DeleteWorkflowNewRequest::GetWorkFlowId() const
{
    return m_workFlowId;
}

void DeleteWorkflowNewRequest::SetWorkFlowId(const string& _workFlowId)
{
    m_workFlowId = _workFlowId;
    m_workFlowIdHasBeenSet = true;
}

bool DeleteWorkflowNewRequest::WorkFlowIdHasBeenSet() const
{
    return m_workFlowIdHasBeenSet;
}

bool DeleteWorkflowNewRequest::GetDeleteMode() const
{
    return m_deleteMode;
}

void DeleteWorkflowNewRequest::SetDeleteMode(const bool& _deleteMode)
{
    m_deleteMode = _deleteMode;
    m_deleteModeHasBeenSet = true;
}

bool DeleteWorkflowNewRequest::DeleteModeHasBeenSet() const
{
    return m_deleteModeHasBeenSet;
}

bool DeleteWorkflowNewRequest::GetEnableNotify() const
{
    return m_enableNotify;
}

void DeleteWorkflowNewRequest::SetEnableNotify(const bool& _enableNotify)
{
    m_enableNotify = _enableNotify;
    m_enableNotifyHasBeenSet = true;
}

bool DeleteWorkflowNewRequest::EnableNotifyHasBeenSet() const
{
    return m_enableNotifyHasBeenSet;
}

string DeleteWorkflowNewRequest::GetProjectId() const
{
    return m_projectId;
}

void DeleteWorkflowNewRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteWorkflowNewRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


