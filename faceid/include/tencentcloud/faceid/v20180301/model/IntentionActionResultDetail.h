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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONACTIONRESULTDETAIL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONACTIONRESULTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 意愿核身点头确认模式结果详细数据
                */
                class IntentionActionResultDetail : public AbstractModel
                {
                public:
                    IntentionActionResultDetail();
                    ~IntentionActionResultDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频base64编码（其中包含全程提示文本和点头音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Video 视频base64编码（其中包含全程提示文本和点头音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVideo() const;

                    /**
                     * 设置视频base64编码（其中包含全程提示文本和点头音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _video 视频base64编码（其中包含全程提示文本和点头音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideo(const std::string& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取屏幕截图base64编码列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScreenShot 屏幕截图base64编码列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetScreenShot() const;

                    /**
                     * 设置屏幕截图base64编码列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _screenShot 屏幕截图base64编码列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScreenShot(const std::vector<std::string>& _screenShot);

                    /**
                     * 判断参数 ScreenShot 是否已赋值
                     * @return ScreenShot 是否已赋值
                     * 
                     */
                    bool ScreenShotHasBeenSet() const;

                private:

                    /**
                     * 视频base64编码（其中包含全程提示文本和点头音频，mp4格式）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * 屏幕截图base64编码列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_screenShot;
                    bool m_screenShotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONACTIONRESULTDETAIL_H_
