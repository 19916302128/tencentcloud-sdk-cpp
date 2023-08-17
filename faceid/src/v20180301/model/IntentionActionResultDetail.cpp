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

#include <tencentcloud/faceid/v20180301/model/IntentionActionResultDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

IntentionActionResultDetail::IntentionActionResultDetail() :
    m_videoHasBeenSet(false),
    m_screenShotHasBeenSet(false)
{
}

CoreInternalOutcome IntentionActionResultDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntentionActionResultDetail.Video` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_video = string(value["Video"].GetString());
        m_videoHasBeenSet = true;
    }

    if (value.HasMember("ScreenShot") && !value["ScreenShot"].IsNull())
    {
        if (!value["ScreenShot"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IntentionActionResultDetail.ScreenShot` is not array type"));

        const rapidjson::Value &tmpValue = value["ScreenShot"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_screenShot.push_back((*itr).GetString());
        }
        m_screenShotHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntentionActionResultDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_video.c_str(), allocator).Move(), allocator);
    }

    if (m_screenShotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenShot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_screenShot.begin(); itr != m_screenShot.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string IntentionActionResultDetail::GetVideo() const
{
    return m_video;
}

void IntentionActionResultDetail::SetVideo(const string& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool IntentionActionResultDetail::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

vector<string> IntentionActionResultDetail::GetScreenShot() const
{
    return m_screenShot;
}

void IntentionActionResultDetail::SetScreenShot(const vector<string>& _screenShot)
{
    m_screenShot = _screenShot;
    m_screenShotHasBeenSet = true;
}

bool IntentionActionResultDetail::ScreenShotHasBeenSet() const
{
    return m_screenShotHasBeenSet;
}

