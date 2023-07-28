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

#include <tencentcloud/tcss/v20201101/model/ModifyAssetImageRegistryScanStopOneKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyAssetImageRegistryScanStopOneKeyRequest::ModifyAssetImageRegistryScanStopOneKeyRequest() :
    m_allHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_idHasBeenSet(false),
    m_taskIDHasBeenSet(false)
{
}

string ModifyAssetImageRegistryScanStopOneKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_all, allocator);
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_id.begin(); itr != m_id.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyAssetImageRegistryScanStopOneKeyRequest::GetAll() const
{
    return m_all;
}

void ModifyAssetImageRegistryScanStopOneKeyRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool ModifyAssetImageRegistryScanStopOneKeyRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<ImageInfo> ModifyAssetImageRegistryScanStopOneKeyRequest::GetImages() const
{
    return m_images;
}

void ModifyAssetImageRegistryScanStopOneKeyRequest::SetImages(const vector<ImageInfo>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool ModifyAssetImageRegistryScanStopOneKeyRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

vector<uint64_t> ModifyAssetImageRegistryScanStopOneKeyRequest::GetId() const
{
    return m_id;
}

void ModifyAssetImageRegistryScanStopOneKeyRequest::SetId(const vector<uint64_t>& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyAssetImageRegistryScanStopOneKeyRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ModifyAssetImageRegistryScanStopOneKeyRequest::GetTaskID() const
{
    return m_taskID;
}

void ModifyAssetImageRegistryScanStopOneKeyRequest::SetTaskID(const uint64_t& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool ModifyAssetImageRegistryScanStopOneKeyRequest::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}


