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

#include <tencentcloud/gme/v20180711/model/DescribeRoomInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace rapidjson;
using namespace std;

DescribeRoomInfoRequest::DescribeRoomInfoRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdsHasBeenSet(false)
{
}

string DescribeRoomInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoomIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_roomIds.begin(); itr != m_roomIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRoomInfoRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeRoomInfoRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeRoomInfoRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<uint64_t> DescribeRoomInfoRequest::GetRoomIds() const
{
    return m_roomIds;
}

void DescribeRoomInfoRequest::SetRoomIds(const vector<uint64_t>& _roomIds)
{
    m_roomIds = _roomIds;
    m_roomIdsHasBeenSet = true;
}

bool DescribeRoomInfoRequest::RoomIdsHasBeenSet() const
{
    return m_roomIdsHasBeenSet;
}

