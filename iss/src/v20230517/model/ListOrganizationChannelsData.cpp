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

#include <tencentcloud/iss/v20230517/model/ListOrganizationChannelsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListOrganizationChannelsData::ListOrganizationChannelsData() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_listHasBeenSet(false)
{
}

CoreInternalOutcome ListOrganizationChannelsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListOrganizationChannelsData.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("PageSize") && !value["PageSize"].IsNull())
    {
        if (!value["PageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListOrganizationChannelsData.PageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageSize = value["PageSize"].GetInt64();
        m_pageSizeHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ListOrganizationChannelsData.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListOrganizationChannelsData.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OrganizationChannelInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListOrganizationChannelsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ListOrganizationChannelsData::GetPageNumber() const
{
    return m_pageNumber;
}

void ListOrganizationChannelsData::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListOrganizationChannelsData::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListOrganizationChannelsData::GetPageSize() const
{
    return m_pageSize;
}

void ListOrganizationChannelsData::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListOrganizationChannelsData::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t ListOrganizationChannelsData::GetTotalCount() const
{
    return m_totalCount;
}

void ListOrganizationChannelsData::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ListOrganizationChannelsData::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<OrganizationChannelInfo> ListOrganizationChannelsData::GetList() const
{
    return m_list;
}

void ListOrganizationChannelsData::SetList(const vector<OrganizationChannelInfo>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool ListOrganizationChannelsData::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

