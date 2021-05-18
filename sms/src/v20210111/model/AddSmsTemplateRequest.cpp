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

#include <tencentcloud/sms/v20210111/model/AddSmsTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20210111::Model;
using namespace rapidjson;
using namespace std;

AddSmsTemplateRequest::AddSmsTemplateRequest() :
    m_templateNameHasBeenSet(false),
    m_templateContentHasBeenSet(false),
    m_smsTypeHasBeenSet(false),
    m_internationalHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string AddSmsTemplateRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateContentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_templateContent.c_str(), allocator).Move(), allocator);
    }

    if (m_smsTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SmsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_smsType, allocator);
    }

    if (m_internationalHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "International";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_international, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddSmsTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void AddSmsTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool AddSmsTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string AddSmsTemplateRequest::GetTemplateContent() const
{
    return m_templateContent;
}

void AddSmsTemplateRequest::SetTemplateContent(const string& _templateContent)
{
    m_templateContent = _templateContent;
    m_templateContentHasBeenSet = true;
}

bool AddSmsTemplateRequest::TemplateContentHasBeenSet() const
{
    return m_templateContentHasBeenSet;
}

uint64_t AddSmsTemplateRequest::GetSmsType() const
{
    return m_smsType;
}

void AddSmsTemplateRequest::SetSmsType(const uint64_t& _smsType)
{
    m_smsType = _smsType;
    m_smsTypeHasBeenSet = true;
}

bool AddSmsTemplateRequest::SmsTypeHasBeenSet() const
{
    return m_smsTypeHasBeenSet;
}

uint64_t AddSmsTemplateRequest::GetInternational() const
{
    return m_international;
}

void AddSmsTemplateRequest::SetInternational(const uint64_t& _international)
{
    m_international = _international;
    m_internationalHasBeenSet = true;
}

bool AddSmsTemplateRequest::InternationalHasBeenSet() const
{
    return m_internationalHasBeenSet;
}

string AddSmsTemplateRequest::GetRemark() const
{
    return m_remark;
}

void AddSmsTemplateRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddSmsTemplateRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


