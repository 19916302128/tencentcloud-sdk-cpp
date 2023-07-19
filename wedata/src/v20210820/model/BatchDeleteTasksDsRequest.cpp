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

#include <tencentcloud/wedata/v20210820/model/BatchDeleteTasksDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchDeleteTasksDsRequest::BatchDeleteTasksDsRequest() :
    m_taskIdListHasBeenSet(false),
    m_deleteModeHasBeenSet(false),
    m_operateInformHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_deleteScriptHasBeenSet(false)
{
}

string BatchDeleteTasksDsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIdList.begin(); itr != m_taskIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteMode, allocator);
    }

    if (m_operateInformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateInform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operateInform, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteScript, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchDeleteTasksDsRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void BatchDeleteTasksDsRequest::SetTaskIdList(const vector<string>& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool BatchDeleteTasksDsRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

bool BatchDeleteTasksDsRequest::GetDeleteMode() const
{
    return m_deleteMode;
}

void BatchDeleteTasksDsRequest::SetDeleteMode(const bool& _deleteMode)
{
    m_deleteMode = _deleteMode;
    m_deleteModeHasBeenSet = true;
}

bool BatchDeleteTasksDsRequest::DeleteModeHasBeenSet() const
{
    return m_deleteModeHasBeenSet;
}

bool BatchDeleteTasksDsRequest::GetOperateInform() const
{
    return m_operateInform;
}

void BatchDeleteTasksDsRequest::SetOperateInform(const bool& _operateInform)
{
    m_operateInform = _operateInform;
    m_operateInformHasBeenSet = true;
}

bool BatchDeleteTasksDsRequest::OperateInformHasBeenSet() const
{
    return m_operateInformHasBeenSet;
}

string BatchDeleteTasksDsRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchDeleteTasksDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchDeleteTasksDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool BatchDeleteTasksDsRequest::GetDeleteScript() const
{
    return m_deleteScript;
}

void BatchDeleteTasksDsRequest::SetDeleteScript(const bool& _deleteScript)
{
    m_deleteScript = _deleteScript;
    m_deleteScriptHasBeenSet = true;
}

bool BatchDeleteTasksDsRequest::DeleteScriptHasBeenSet() const
{
    return m_deleteScriptHasBeenSet;
}


