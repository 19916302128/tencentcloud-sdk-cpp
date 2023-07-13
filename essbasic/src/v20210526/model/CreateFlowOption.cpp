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

#include <tencentcloud/essbasic/v20210526/model/CreateFlowOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateFlowOption::CreateFlowOption() :
    m_canEditFlowHasBeenSet(false),
    m_hideShowFlowNameHasBeenSet(false),
    m_hideShowFlowTypeHasBeenSet(false),
    m_hideShowDeadlineHasBeenSet(false),
    m_canSkipAddApproverHasBeenSet(false),
    m_customCreateFlowDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome CreateFlowOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanEditFlow") && !value["CanEditFlow"].IsNull())
    {
        if (!value["CanEditFlow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.CanEditFlow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEditFlow = value["CanEditFlow"].GetBool();
        m_canEditFlowHasBeenSet = true;
    }

    if (value.HasMember("HideShowFlowName") && !value["HideShowFlowName"].IsNull())
    {
        if (!value["HideShowFlowName"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.HideShowFlowName` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideShowFlowName = value["HideShowFlowName"].GetBool();
        m_hideShowFlowNameHasBeenSet = true;
    }

    if (value.HasMember("HideShowFlowType") && !value["HideShowFlowType"].IsNull())
    {
        if (!value["HideShowFlowType"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.HideShowFlowType` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideShowFlowType = value["HideShowFlowType"].GetBool();
        m_hideShowFlowTypeHasBeenSet = true;
    }

    if (value.HasMember("HideShowDeadline") && !value["HideShowDeadline"].IsNull())
    {
        if (!value["HideShowDeadline"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.HideShowDeadline` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideShowDeadline = value["HideShowDeadline"].GetBool();
        m_hideShowDeadlineHasBeenSet = true;
    }

    if (value.HasMember("CanSkipAddApprover") && !value["CanSkipAddApprover"].IsNull())
    {
        if (!value["CanSkipAddApprover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.CanSkipAddApprover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canSkipAddApprover = value["CanSkipAddApprover"].GetBool();
        m_canSkipAddApproverHasBeenSet = true;
    }

    if (value.HasMember("CustomCreateFlowDescription") && !value["CustomCreateFlowDescription"].IsNull())
    {
        if (!value["CustomCreateFlowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateFlowOption.CustomCreateFlowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customCreateFlowDescription = string(value["CustomCreateFlowDescription"].GetString());
        m_customCreateFlowDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateFlowOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canEditFlowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEditFlow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEditFlow, allocator);
    }

    if (m_hideShowFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideShowFlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideShowFlowName, allocator);
    }

    if (m_hideShowFlowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideShowFlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideShowFlowType, allocator);
    }

    if (m_hideShowDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideShowDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideShowDeadline, allocator);
    }

    if (m_canSkipAddApproverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanSkipAddApprover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canSkipAddApprover, allocator);
    }

    if (m_customCreateFlowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomCreateFlowDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customCreateFlowDescription.c_str(), allocator).Move(), allocator);
    }

}


bool CreateFlowOption::GetCanEditFlow() const
{
    return m_canEditFlow;
}

void CreateFlowOption::SetCanEditFlow(const bool& _canEditFlow)
{
    m_canEditFlow = _canEditFlow;
    m_canEditFlowHasBeenSet = true;
}

bool CreateFlowOption::CanEditFlowHasBeenSet() const
{
    return m_canEditFlowHasBeenSet;
}

bool CreateFlowOption::GetHideShowFlowName() const
{
    return m_hideShowFlowName;
}

void CreateFlowOption::SetHideShowFlowName(const bool& _hideShowFlowName)
{
    m_hideShowFlowName = _hideShowFlowName;
    m_hideShowFlowNameHasBeenSet = true;
}

bool CreateFlowOption::HideShowFlowNameHasBeenSet() const
{
    return m_hideShowFlowNameHasBeenSet;
}

bool CreateFlowOption::GetHideShowFlowType() const
{
    return m_hideShowFlowType;
}

void CreateFlowOption::SetHideShowFlowType(const bool& _hideShowFlowType)
{
    m_hideShowFlowType = _hideShowFlowType;
    m_hideShowFlowTypeHasBeenSet = true;
}

bool CreateFlowOption::HideShowFlowTypeHasBeenSet() const
{
    return m_hideShowFlowTypeHasBeenSet;
}

bool CreateFlowOption::GetHideShowDeadline() const
{
    return m_hideShowDeadline;
}

void CreateFlowOption::SetHideShowDeadline(const bool& _hideShowDeadline)
{
    m_hideShowDeadline = _hideShowDeadline;
    m_hideShowDeadlineHasBeenSet = true;
}

bool CreateFlowOption::HideShowDeadlineHasBeenSet() const
{
    return m_hideShowDeadlineHasBeenSet;
}

bool CreateFlowOption::GetCanSkipAddApprover() const
{
    return m_canSkipAddApprover;
}

void CreateFlowOption::SetCanSkipAddApprover(const bool& _canSkipAddApprover)
{
    m_canSkipAddApprover = _canSkipAddApprover;
    m_canSkipAddApproverHasBeenSet = true;
}

bool CreateFlowOption::CanSkipAddApproverHasBeenSet() const
{
    return m_canSkipAddApproverHasBeenSet;
}

string CreateFlowOption::GetCustomCreateFlowDescription() const
{
    return m_customCreateFlowDescription;
}

void CreateFlowOption::SetCustomCreateFlowDescription(const string& _customCreateFlowDescription)
{
    m_customCreateFlowDescription = _customCreateFlowDescription;
    m_customCreateFlowDescriptionHasBeenSet = true;
}

bool CreateFlowOption::CustomCreateFlowDescriptionHasBeenSet() const
{
    return m_customCreateFlowDescriptionHasBeenSet;
}

