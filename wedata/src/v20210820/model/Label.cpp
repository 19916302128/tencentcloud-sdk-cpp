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

#include <tencentcloud/wedata/v20210820/model/Label.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

Label::Label() :
    m_valueHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

CoreInternalOutcome Label::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Label::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

}


string Label::GetValue() const
{
    return m_value;
}

void Label::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool Label::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string Label::GetText() const
{
    return m_text;
}

void Label::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Label::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

