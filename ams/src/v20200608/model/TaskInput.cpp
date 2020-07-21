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

#include <tencentcloud/ams/v20200608/model/TaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace rapidjson;
using namespace std;

TaskInput::TaskInput() :
    m_dataIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

CoreInternalOutcome TaskInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DataId") && !value["DataId"].IsNull())
    {
        if (!value["DataId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskInput.DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(value["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskInput.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TaskInput.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_dataIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TaskInput::GetDataId() const
{
    return m_dataId;
}

void TaskInput::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool TaskInput::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string TaskInput::GetName() const
{
    return m_name;
}

void TaskInput::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TaskInput::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

StorageInfo TaskInput::GetInput() const
{
    return m_input;
}

void TaskInput::SetInput(const StorageInfo& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool TaskInput::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

