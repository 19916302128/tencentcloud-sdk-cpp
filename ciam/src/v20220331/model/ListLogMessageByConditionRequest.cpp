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

#include <tencentcloud/ciam/v20220331/model/ListLogMessageByConditionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

ListLogMessageByConditionRequest::ListLogMessageByConditionRequest() :
    m_userStoreIdHasBeenSet(false),
    m_pageableHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ListLogMessageByConditionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pageable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageable.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListLogMessageByConditionRequest::GetUserStoreId() const
{
    return m_userStoreId;
}

void ListLogMessageByConditionRequest::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool ListLogMessageByConditionRequest::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

Pageable ListLogMessageByConditionRequest::GetPageable() const
{
    return m_pageable;
}

void ListLogMessageByConditionRequest::SetPageable(const Pageable& _pageable)
{
    m_pageable = _pageable;
    m_pageableHasBeenSet = true;
}

bool ListLogMessageByConditionRequest::PageableHasBeenSet() const
{
    return m_pageableHasBeenSet;
}

int64_t ListLogMessageByConditionRequest::GetStartTime() const
{
    return m_startTime;
}

void ListLogMessageByConditionRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ListLogMessageByConditionRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<Filter> ListLogMessageByConditionRequest::GetFilters() const
{
    return m_filters;
}

void ListLogMessageByConditionRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ListLogMessageByConditionRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


