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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * ModifyRoom请求参数结构体
                */
                class ModifyRoomRequest : public AbstractModel
                {
                public:
                    ModifyRoomRequest();
                    ~ModifyRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取房间ID。
                     * @return RoomId 房间ID。
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置房间ID。
                     * @param RoomId 房间ID。
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取低代码互动课堂的SdkAppId
                     * @return SdkAppId 低代码互动课堂的SdkAppId
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId
                     * @param SdkAppId 低代码互动课堂的SdkAppId
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取预定的房间开始时间，unix时间戳。直播开始后不允许修改。
                     * @return StartTime 预定的房间开始时间，unix时间戳。直播开始后不允许修改。
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置预定的房间开始时间，unix时间戳。直播开始后不允许修改。
                     * @param StartTime 预定的房间开始时间，unix时间戳。直播开始后不允许修改。
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取预定的房间结束时间，unix时间戳。直播开始后不允许修改。
                     * @return EndTime 预定的房间结束时间，unix时间戳。直播开始后不允许修改。
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置预定的房间结束时间，unix时间戳。直播开始后不允许修改。
                     * @param EndTime 预定的房间结束时间，unix时间戳。直播开始后不允许修改。
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取老师ID。直播开始后不允许修改。
                     * @return TeacherId 老师ID。直播开始后不允许修改。
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置老师ID。直播开始后不允许修改。
                     * @param TeacherId 老师ID。直播开始后不允许修改。
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取房间名称。
                     * @return Name 房间名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置房间名称。
                     * @param Name 房间名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
直播开始后不允许修改。
                     * @return Resolution 分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
直播开始后不允许修改。
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
直播开始后不允许修改。
                     * @param Resolution 分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
直播开始后不允许修改。
                     */
                    void SetResolution(const uint64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取最大连麦人数（不包括老师）。取值范围[0, 17)
直播开始后不允许修改。
                     * @return MaxMicNumber 最大连麦人数（不包括老师）。取值范围[0, 17)
直播开始后不允许修改。
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 设置最大连麦人数（不包括老师）。取值范围[0, 17)
直播开始后不允许修改。
                     * @param MaxMicNumber 最大连麦人数（不包括老师）。取值范围[0, 17)
直播开始后不允许修改。
                     */
                    void SetMaxMicNumber(const uint64_t& _maxMicNumber);

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取进入房间时是否自动连麦。可以有以下取值：
0 不自动连麦（默认值）
1 自动连麦
直播开始后不允许修改。
                     * @return AutoMic 进入房间时是否自动连麦。可以有以下取值：
0 不自动连麦（默认值）
1 自动连麦
直播开始后不允许修改。
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 设置进入房间时是否自动连麦。可以有以下取值：
0 不自动连麦（默认值）
1 自动连麦
直播开始后不允许修改。
                     * @param AutoMic 进入房间时是否自动连麦。可以有以下取值：
0 不自动连麦（默认值）
1 自动连麦
直播开始后不允许修改。
                     */
                    void SetAutoMic(const uint64_t& _autoMic);

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
直播开始后不允许修改。
                     * @return AudioQuality 高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
直播开始后不允许修改。
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 设置高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
直播开始后不允许修改。
                     * @param AudioQuality 高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
直播开始后不允许修改。
                     */
                    void SetAudioQuality(const uint64_t& _audioQuality);

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
coteaching 双师
直播开始后不允许修改。
                     * @return SubType 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
coteaching 双师
直播开始后不允许修改。
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
coteaching 双师
直播开始后不允许修改。
                     * @param SubType 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
coteaching 双师
直播开始后不允许修改。
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取禁止录制。可以有以下取值：
0 不禁止录制（默认值）
1 禁止录制
直播开始后不允许修改。
                     * @return DisableRecord 禁止录制。可以有以下取值：
0 不禁止录制（默认值）
1 禁止录制
直播开始后不允许修改。
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 设置禁止录制。可以有以下取值：
0 不禁止录制（默认值）
1 禁止录制
直播开始后不允许修改。
                     * @param DisableRecord 禁止录制。可以有以下取值：
0 不禁止录制（默认值）
1 禁止录制
直播开始后不允许修改。
                     */
                    void SetDisableRecord(const uint64_t& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取助教Id列表。直播开始后不允许修改。
                     * @return Assistants 助教Id列表。直播开始后不允许修改。
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 设置助教Id列表。直播开始后不允许修改。
                     * @param Assistants 助教Id列表。直播开始后不允许修改。
                     */
                    void SetAssistants(const std::vector<std::string>& _assistants);

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     */
                    bool AssistantsHasBeenSet() const;

                private:

                    /**
                     * 房间ID。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 低代码互动课堂的SdkAppId
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 预定的房间开始时间，unix时间戳。直播开始后不允许修改。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 预定的房间结束时间，unix时间戳。直播开始后不允许修改。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 老师ID。直播开始后不允许修改。
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * 房间名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
直播开始后不允许修改。
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 最大连麦人数（不包括老师）。取值范围[0, 17)
直播开始后不允许修改。
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * 进入房间时是否自动连麦。可以有以下取值：
0 不自动连麦（默认值）
1 自动连麦
直播开始后不允许修改。
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * 高音质模式。可以有以下取值：
0 不开启高音质（默认值）
1 开启高音质
直播开始后不允许修改。
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
coteaching 双师
直播开始后不允许修改。
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 禁止录制。可以有以下取值：
0 不禁止录制（默认值）
1 禁止录制
直播开始后不允许修改。
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * 助教Id列表。直播开始后不允许修改。
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYROOMREQUEST_H_
