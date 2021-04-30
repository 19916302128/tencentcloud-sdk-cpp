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

#include <tencentcloud/ame/v20190916/model/ModifyMusicOnShelvesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace rapidjson;
using namespace std;

ModifyMusicOnShelvesRequest::ModifyMusicOnShelvesRequest() :
    m_musicDetailInfosHasBeenSet(false),
    m_ameKeyHasBeenSet(false)
{
}

string ModifyMusicOnShelvesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_musicDetailInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MusicDetailInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_musicDetailInfos.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ameKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AmeKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ameKey.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


MusicDetailInfo ModifyMusicOnShelvesRequest::GetMusicDetailInfos() const
{
    return m_musicDetailInfos;
}

void ModifyMusicOnShelvesRequest::SetMusicDetailInfos(const MusicDetailInfo& _musicDetailInfos)
{
    m_musicDetailInfos = _musicDetailInfos;
    m_musicDetailInfosHasBeenSet = true;
}

bool ModifyMusicOnShelvesRequest::MusicDetailInfosHasBeenSet() const
{
    return m_musicDetailInfosHasBeenSet;
}

string ModifyMusicOnShelvesRequest::GetAmeKey() const
{
    return m_ameKey;
}

void ModifyMusicOnShelvesRequest::SetAmeKey(const string& _ameKey)
{
    m_ameKey = _ameKey;
    m_ameKeyHasBeenSet = true;
}

bool ModifyMusicOnShelvesRequest::AmeKeyHasBeenSet() const
{
    return m_ameKeyHasBeenSet;
}

