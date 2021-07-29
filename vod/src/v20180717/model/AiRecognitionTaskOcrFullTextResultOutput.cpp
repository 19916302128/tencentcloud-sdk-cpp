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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrFullTextResultOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskOcrFullTextResultOutput::AiRecognitionTaskOcrFullTextResultOutput() :
    m_segmentSetHasBeenSet(false),
    m_segmentSetFileUrlHasBeenSet(false),
    m_segmentSetFileUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskOcrFullTextResultOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrFullTextResultOutput.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskOcrFullTextSegmentItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentSet.push_back(item);
        }
        m_segmentSetHasBeenSet = true;
    }

    if (value.HasMember("SegmentSetFileUrl") && !value["SegmentSetFileUrl"].IsNull())
    {
        if (!value["SegmentSetFileUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrFullTextResultOutput.SegmentSetFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentSetFileUrl = string(value["SegmentSetFileUrl"].GetString());
        m_segmentSetFileUrlHasBeenSet = true;
    }

    if (value.HasMember("SegmentSetFileUrlExpireTime") && !value["SegmentSetFileUrlExpireTime"].IsNull())
    {
        if (!value["SegmentSetFileUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrFullTextResultOutput.SegmentSetFileUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentSetFileUrlExpireTime = string(value["SegmentSetFileUrlExpireTime"].GetString());
        m_segmentSetFileUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskOcrFullTextResultOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_segmentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentSet.begin(); itr != m_segmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_segmentSetFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSetFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentSetFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentSetFileUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSetFileUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentSetFileUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

}


vector<AiRecognitionTaskOcrFullTextSegmentItem> AiRecognitionTaskOcrFullTextResultOutput::GetSegmentSet() const
{
    return m_segmentSet;
}

void AiRecognitionTaskOcrFullTextResultOutput::SetSegmentSet(const vector<AiRecognitionTaskOcrFullTextSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool AiRecognitionTaskOcrFullTextResultOutput::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

string AiRecognitionTaskOcrFullTextResultOutput::GetSegmentSetFileUrl() const
{
    return m_segmentSetFileUrl;
}

void AiRecognitionTaskOcrFullTextResultOutput::SetSegmentSetFileUrl(const string& _segmentSetFileUrl)
{
    m_segmentSetFileUrl = _segmentSetFileUrl;
    m_segmentSetFileUrlHasBeenSet = true;
}

bool AiRecognitionTaskOcrFullTextResultOutput::SegmentSetFileUrlHasBeenSet() const
{
    return m_segmentSetFileUrlHasBeenSet;
}

string AiRecognitionTaskOcrFullTextResultOutput::GetSegmentSetFileUrlExpireTime() const
{
    return m_segmentSetFileUrlExpireTime;
}

void AiRecognitionTaskOcrFullTextResultOutput::SetSegmentSetFileUrlExpireTime(const string& _segmentSetFileUrlExpireTime)
{
    m_segmentSetFileUrlExpireTime = _segmentSetFileUrlExpireTime;
    m_segmentSetFileUrlExpireTimeHasBeenSet = true;
}

bool AiRecognitionTaskOcrFullTextResultOutput::SegmentSetFileUrlExpireTimeHasBeenSet() const
{
    return m_segmentSetFileUrlExpireTimeHasBeenSet;
}

