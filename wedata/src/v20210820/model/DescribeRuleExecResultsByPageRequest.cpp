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

#include <tencentcloud/wedata/v20210820/model/DescribeRuleExecResultsByPageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeRuleExecResultsByPageRequest::DescribeRuleExecResultsByPageRequest() :
    m_ruleGroupExecIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeRuleExecResultsByPageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleGroupExecIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleGroupExecId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleGroupExecId, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeRuleExecResultsByPageRequest::GetRuleGroupExecId() const
{
    return m_ruleGroupExecId;
}

void DescribeRuleExecResultsByPageRequest::SetRuleGroupExecId(const int64_t& _ruleGroupExecId)
{
    m_ruleGroupExecId = _ruleGroupExecId;
    m_ruleGroupExecIdHasBeenSet = true;
}

bool DescribeRuleExecResultsByPageRequest::RuleGroupExecIdHasBeenSet() const
{
    return m_ruleGroupExecIdHasBeenSet;
}

int64_t DescribeRuleExecResultsByPageRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeRuleExecResultsByPageRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeRuleExecResultsByPageRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeRuleExecResultsByPageRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeRuleExecResultsByPageRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeRuleExecResultsByPageRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


