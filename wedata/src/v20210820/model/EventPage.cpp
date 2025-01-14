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

#include <tencentcloud/wedata/v20210820/model/EventPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventPage::EventPage() :
    m_eventsResponseHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome EventPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventsResponse") && !value["EventsResponse"].IsNull())
    {
        if (!value["EventsResponse"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventPage.EventsResponse` is not array type"));

        const rapidjson::Value &tmpValue = value["EventsResponse"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventsResponse.push_back(item);
        }
        m_eventsResponseHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventPage.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventsResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventsResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventsResponse.begin(); itr != m_eventsResponse.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


vector<EventDto> EventPage::GetEventsResponse() const
{
    return m_eventsResponse;
}

void EventPage::SetEventsResponse(const vector<EventDto>& _eventsResponse)
{
    m_eventsResponse = _eventsResponse;
    m_eventsResponseHasBeenSet = true;
}

bool EventPage::EventsResponseHasBeenSet() const
{
    return m_eventsResponseHasBeenSet;
}

uint64_t EventPage::GetTotalCount() const
{
    return m_totalCount;
}

void EventPage::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool EventPage::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

