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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SERVICESTATUS_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SERVICESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/StatusInfo.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 服务开关状态
                */
                class ServiceStatus : public AbstractModel
                {
                public:
                    ServiceStatus();
                    ~ServiceStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实时语音服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealTimeSpeech 实时语音服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo GetRealTimeSpeech() const;

                    /**
                     * 设置实时语音服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealTimeSpeech 实时语音服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealTimeSpeech(const StatusInfo& _realTimeSpeech);

                    /**
                     * 判断参数 RealTimeSpeech 是否已赋值
                     * @return RealTimeSpeech 是否已赋值
                     */
                    bool RealTimeSpeechHasBeenSet() const;

                    /**
                     * 获取语音消息服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoiceMessage 语音消息服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo GetVoiceMessage() const;

                    /**
                     * 设置语音消息服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VoiceMessage 语音消息服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVoiceMessage(const StatusInfo& _voiceMessage);

                    /**
                     * 判断参数 VoiceMessage 是否已赋值
                     * @return VoiceMessage 是否已赋值
                     */
                    bool VoiceMessageHasBeenSet() const;

                    /**
                     * 获取语音内容安全服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Porn 语音内容安全服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo GetPorn() const;

                    /**
                     * 设置语音内容安全服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Porn 语音内容安全服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPorn(const StatusInfo& _porn);

                    /**
                     * 判断参数 Porn 是否已赋值
                     * @return Porn 是否已赋值
                     */
                    bool PornHasBeenSet() const;

                    /**
                     * 获取语音录制服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Live 语音录制服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo GetLive() const;

                    /**
                     * 设置语音录制服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Live 语音录制服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLive(const StatusInfo& _live);

                    /**
                     * 判断参数 Live 是否已赋值
                     * @return Live 是否已赋值
                     */
                    bool LiveHasBeenSet() const;

                    /**
                     * 获取语音转文本服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealTimeAsr 语音转文本服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo GetRealTimeAsr() const;

                    /**
                     * 设置语音转文本服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RealTimeAsr 语音转文本服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRealTimeAsr(const StatusInfo& _realTimeAsr);

                    /**
                     * 判断参数 RealTimeAsr 是否已赋值
                     * @return RealTimeAsr 是否已赋值
                     */
                    bool RealTimeAsrHasBeenSet() const;

                private:

                    /**
                     * 实时语音服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo m_realTimeSpeech;
                    bool m_realTimeSpeechHasBeenSet;

                    /**
                     * 语音消息服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo m_voiceMessage;
                    bool m_voiceMessageHasBeenSet;

                    /**
                     * 语音内容安全服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo m_porn;
                    bool m_pornHasBeenSet;

                    /**
                     * 语音录制服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo m_live;
                    bool m_liveHasBeenSet;

                    /**
                     * 语音转文本服务开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StatusInfo m_realTimeAsr;
                    bool m_realTimeAsrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SERVICESTATUS_H_
