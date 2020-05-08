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

#include <tencentcloud/tsf/v20180326/model/DescribeImageTagsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DescribeImageTagsRequest::DescribeImageTagsRequest() :
    m_applicationIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_queryImageIdFlagHasBeenSet(false),
    m_searchWordHasBeenSet(false)
{
}

string DescribeImageTagsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_queryImageIdFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryImageIdFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryImageIdFlag, allocator);
    }

    if (m_searchWordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SearchWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_searchWord.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeImageTagsRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeImageTagsRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeImageTagsRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeImageTagsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeImageTagsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeImageTagsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeImageTagsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeImageTagsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeImageTagsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeImageTagsRequest::GetQueryImageIdFlag() const
{
    return m_queryImageIdFlag;
}

void DescribeImageTagsRequest::SetQueryImageIdFlag(const int64_t& _queryImageIdFlag)
{
    m_queryImageIdFlag = _queryImageIdFlag;
    m_queryImageIdFlagHasBeenSet = true;
}

bool DescribeImageTagsRequest::QueryImageIdFlagHasBeenSet() const
{
    return m_queryImageIdFlagHasBeenSet;
}

string DescribeImageTagsRequest::GetSearchWord() const
{
    return m_searchWord;
}

void DescribeImageTagsRequest::SetSearchWord(const string& _searchWord)
{
    m_searchWord = _searchWord;
    m_searchWordHasBeenSet = true;
}

bool DescribeImageTagsRequest::SearchWordHasBeenSet() const
{
    return m_searchWordHasBeenSet;
}

