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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEROOMREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEROOMREQUEST_H_

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
                * CreateRoom请求参数结构体
                */
                class CreateRoomRequest : public AbstractModel
                {
                public:
                    CreateRoomRequest();
                    ~CreateRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取房间名称。
                     * @return Name 房间名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置房间名称。
                     * @param _name 房间名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取预定的房间开始时间，unix时间戳（秒）。
                     * @return StartTime 预定的房间开始时间，unix时间戳（秒）。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置预定的房间开始时间，unix时间戳（秒）。
                     * @param _startTime 预定的房间开始时间，unix时间戳（秒）。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取预定的房间结束时间，unix时间戳（秒）。
                     * @return EndTime 预定的房间结束时间，unix时间戳（秒）。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置预定的房间结束时间，unix时间戳（秒）。
                     * @param _endTime 预定的房间结束时间，unix时间戳（秒）。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取低代码互动课堂的SdkAppId。
                     * @return SdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码互动课堂的SdkAppId。
                     * @param _sdkAppId 低代码互动课堂的SdkAppId。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     * @return Resolution 分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     * 
                     */
                    uint64_t GetResolution() const;

                    /**
                     * 设置分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     * @param _resolution 分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     * 
                     */
                    void SetResolution(const uint64_t& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取最大连麦人数（不包括老师）。取值范围[0, 16]
                     * @return MaxMicNumber 最大连麦人数（不包括老师）。取值范围[0, 16]
                     * 
                     */
                    uint64_t GetMaxMicNumber() const;

                    /**
                     * 设置最大连麦人数（不包括老师）。取值范围[0, 16]
                     * @param _maxMicNumber 最大连麦人数（不包括老师）。取值范围[0, 16]
                     * 
                     */
                    void SetMaxMicNumber(const uint64_t& _maxMicNumber);

                    /**
                     * 判断参数 MaxMicNumber 是否已赋值
                     * @return MaxMicNumber 是否已赋值
                     * 
                     */
                    bool MaxMicNumberHasBeenSet() const;

                    /**
                     * 获取房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     * @return SubType 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     * @param _subType 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     * @return TeacherId 老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     * @param _teacherId 老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
1 自动连麦
                     * @return AutoMic 进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
1 自动连麦
                     * 
                     */
                    uint64_t GetAutoMic() const;

                    /**
                     * 设置进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
1 自动连麦
                     * @param _autoMic 进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
1 自动连麦
                     * 
                     */
                    void SetAutoMic(const uint64_t& _autoMic);

                    /**
                     * 判断参数 AutoMic 是否已赋值
                     * @return AutoMic 是否已赋值
                     * 
                     */
                    bool AutoMicHasBeenSet() const;

                    /**
                     * 获取释放音视频权限后是否自动取消连麦。可以有以下取值：
0 自动取消连麦（默认值）
1 保持连麦状态
                     * @return TurnOffMic 释放音视频权限后是否自动取消连麦。可以有以下取值：
0 自动取消连麦（默认值）
1 保持连麦状态
                     * 
                     */
                    uint64_t GetTurnOffMic() const;

                    /**
                     * 设置释放音视频权限后是否自动取消连麦。可以有以下取值：
0 自动取消连麦（默认值）
1 保持连麦状态
                     * @param _turnOffMic 释放音视频权限后是否自动取消连麦。可以有以下取值：
0 自动取消连麦（默认值）
1 保持连麦状态
                     * 
                     */
                    void SetTurnOffMic(const uint64_t& _turnOffMic);

                    /**
                     * 判断参数 TurnOffMic 是否已赋值
                     * @return TurnOffMic 是否已赋值
                     * 
                     */
                    bool TurnOffMicHasBeenSet() const;

                    /**
                     * 获取声音音质。可以有以下取值：
0：流畅模式（默认值），占用更小的带宽、拥有更好的降噪效果，适用于1对1、小班教学、多人音视频会议等场景。
1：高音质模式，适合需要高保真传输音乐的场景，但降噪效果会被削弱，适用于音乐教学场景。
                     * @return AudioQuality 声音音质。可以有以下取值：
0：流畅模式（默认值），占用更小的带宽、拥有更好的降噪效果，适用于1对1、小班教学、多人音视频会议等场景。
1：高音质模式，适合需要高保真传输音乐的场景，但降噪效果会被削弱，适用于音乐教学场景。
                     * 
                     */
                    uint64_t GetAudioQuality() const;

                    /**
                     * 设置声音音质。可以有以下取值：
0：流畅模式（默认值），占用更小的带宽、拥有更好的降噪效果，适用于1对1、小班教学、多人音视频会议等场景。
1：高音质模式，适合需要高保真传输音乐的场景，但降噪效果会被削弱，适用于音乐教学场景。
                     * @param _audioQuality 声音音质。可以有以下取值：
0：流畅模式（默认值），占用更小的带宽、拥有更好的降噪效果，适用于1对1、小班教学、多人音视频会议等场景。
1：高音质模式，适合需要高保真传输音乐的场景，但降噪效果会被削弱，适用于音乐教学场景。
                     * 
                     */
                    void SetAudioQuality(const uint64_t& _audioQuality);

                    /**
                     * 判断参数 AudioQuality 是否已赋值
                     * @return AudioQuality 是否已赋值
                     * 
                     */
                    bool AudioQualityHasBeenSet() const;

                    /**
                     * 获取上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     * @return DisableRecord 上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     * 
                     */
                    uint64_t GetDisableRecord() const;

                    /**
                     * 设置上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     * @param _disableRecord 上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     * 
                     */
                    void SetDisableRecord(const uint64_t& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     * 
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     * @return Assistants 助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     * 
                     */
                    std::vector<std::string> GetAssistants() const;

                    /**
                     * 设置助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     * @param _assistants 助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     * 
                     */
                    void SetAssistants(const std::vector<std::string>& _assistants);

                    /**
                     * 判断参数 Assistants 是否已赋值
                     * @return Assistants 是否已赋值
                     * 
                     */
                    bool AssistantsHasBeenSet() const;

                    /**
                     * 获取rtc人数。
                     * @return RTCAudienceNumber rtc人数。
                     * 
                     */
                    uint64_t GetRTCAudienceNumber() const;

                    /**
                     * 设置rtc人数。
                     * @param _rTCAudienceNumber rtc人数。
                     * 
                     */
                    void SetRTCAudienceNumber(const uint64_t& _rTCAudienceNumber);

                    /**
                     * 判断参数 RTCAudienceNumber 是否已赋值
                     * @return RTCAudienceNumber 是否已赋值
                     * 
                     */
                    bool RTCAudienceNumberHasBeenSet() const;

                    /**
                     * 获取观看类型。互动观看 （默认）
                     * @return AudienceType 观看类型。互动观看 （默认）
                     * 
                     */
                    uint64_t GetAudienceType() const;

                    /**
                     * 设置观看类型。互动观看 （默认）
                     * @param _audienceType 观看类型。互动观看 （默认）
                     * 
                     */
                    void SetAudienceType(const uint64_t& _audienceType);

                    /**
                     * 判断参数 AudienceType 是否已赋值
                     * @return AudienceType 是否已赋值
                     * 
                     */
                    bool AudienceTypeHasBeenSet() const;

                    /**
                     * 获取录制模板。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744
                     * @return RecordLayout 录制模板。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744
                     * 
                     */
                    uint64_t GetRecordLayout() const;

                    /**
                     * 设置录制模板。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744
                     * @param _recordLayout 录制模板。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744
                     * 
                     */
                    void SetRecordLayout(const uint64_t& _recordLayout);

                    /**
                     * 判断参数 RecordLayout 是否已赋值
                     * @return RecordLayout 是否已赋值
                     * 
                     */
                    bool RecordLayoutHasBeenSet() const;

                    /**
                     * 获取房间绑定的群组ID,非空时限制组成员进入
                     * @return GroupId 房间绑定的群组ID,非空时限制组成员进入
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置房间绑定的群组ID,非空时限制组成员进入
                     * @param _groupId 房间绑定的群组ID,非空时限制组成员进入
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取是否允许老师/助教直接控制学生的摄像头/麦克风。可以有以下取值：
0 不允许直接控制（需同意，默认值）
1 允许直接控制（无需同意）
                     * @return EnableDirectControl 是否允许老师/助教直接控制学生的摄像头/麦克风。可以有以下取值：
0 不允许直接控制（需同意，默认值）
1 允许直接控制（无需同意）
                     * 
                     */
                    uint64_t GetEnableDirectControl() const;

                    /**
                     * 设置是否允许老师/助教直接控制学生的摄像头/麦克风。可以有以下取值：
0 不允许直接控制（需同意，默认值）
1 允许直接控制（无需同意）
                     * @param _enableDirectControl 是否允许老师/助教直接控制学生的摄像头/麦克风。可以有以下取值：
0 不允许直接控制（需同意，默认值）
1 允许直接控制（无需同意）
                     * 
                     */
                    void SetEnableDirectControl(const uint64_t& _enableDirectControl);

                    /**
                     * 判断参数 EnableDirectControl 是否已赋值
                     * @return EnableDirectControl 是否已赋值
                     * 
                     */
                    bool EnableDirectControlHasBeenSet() const;

                    /**
                     * 获取开启专注模式。
0 收看全部角色音视频(默认)
1 只看老师和助教
                     * @return InteractionMode 开启专注模式。
0 收看全部角色音视频(默认)
1 只看老师和助教
                     * 
                     */
                    int64_t GetInteractionMode() const;

                    /**
                     * 设置开启专注模式。
0 收看全部角色音视频(默认)
1 只看老师和助教
                     * @param _interactionMode 开启专注模式。
0 收看全部角色音视频(默认)
1 只看老师和助教
                     * 
                     */
                    void SetInteractionMode(const int64_t& _interactionMode);

                    /**
                     * 判断参数 InteractionMode 是否已赋值
                     * @return InteractionMode 是否已赋值
                     * 
                     */
                    bool InteractionModeHasBeenSet() const;

                    /**
                     * 获取横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     * @return VideoOrientation 横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     * 
                     */
                    uint64_t GetVideoOrientation() const;

                    /**
                     * 设置横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     * @param _videoOrientation 横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     * 
                     */
                    void SetVideoOrientation(const uint64_t& _videoOrientation);

                    /**
                     * 判断参数 VideoOrientation 是否已赋值
                     * @return VideoOrientation 是否已赋值
                     * 
                     */
                    bool VideoOrientationHasBeenSet() const;

                    /**
                     * 获取开启课后评分。 0：不开启(默认)  1：开启
                     * @return IsGradingRequiredPostClass 开启课后评分。 0：不开启(默认)  1：开启
                     * 
                     */
                    int64_t GetIsGradingRequiredPostClass() const;

                    /**
                     * 设置开启课后评分。 0：不开启(默认)  1：开启
                     * @param _isGradingRequiredPostClass 开启课后评分。 0：不开启(默认)  1：开启
                     * 
                     */
                    void SetIsGradingRequiredPostClass(const int64_t& _isGradingRequiredPostClass);

                    /**
                     * 判断参数 IsGradingRequiredPostClass 是否已赋值
                     * @return IsGradingRequiredPostClass 是否已赋值
                     * 
                     */
                    bool IsGradingRequiredPostClassHasBeenSet() const;

                    /**
                     * 获取房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 (后续扩展)
                     * @return RoomType 房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 (后续扩展)
                     * 
                     */
                    int64_t GetRoomType() const;

                    /**
                     * 设置房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 (后续扩展)
                     * @param _roomType 房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 (后续扩展)
                     * 
                     */
                    void SetRoomType(const int64_t& _roomType);

                    /**
                     * 判断参数 RoomType 是否已赋值
                     * @return RoomType 是否已赋值
                     * 
                     */
                    bool RoomTypeHasBeenSet() const;

                private:

                    /**
                     * 房间名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 预定的房间开始时间，unix时间戳（秒）。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 预定的房间结束时间，unix时间戳（秒）。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 低代码互动课堂的SdkAppId。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分辨率。可以有如下取值：
1 标清
2 高清
3 全高清
                     */
                    uint64_t m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 最大连麦人数（不包括老师）。取值范围[0, 16]
                     */
                    uint64_t m_maxMicNumber;
                    bool m_maxMicNumberHasBeenSet;

                    /**
                     * 房间子类型，可以有以下取值：
videodoc 文档+视频
video 纯视频
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 老师ID。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有老师权限。
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * 进入课堂时是否自动连麦。可以有以下取值：
0 不自动连麦（需要手动申请上麦，默认值）
1 自动连麦
                     */
                    uint64_t m_autoMic;
                    bool m_autoMicHasBeenSet;

                    /**
                     * 释放音视频权限后是否自动取消连麦。可以有以下取值：
0 自动取消连麦（默认值）
1 保持连麦状态
                     */
                    uint64_t m_turnOffMic;
                    bool m_turnOffMicHasBeenSet;

                    /**
                     * 声音音质。可以有以下取值：
0：流畅模式（默认值），占用更小的带宽、拥有更好的降噪效果，适用于1对1、小班教学、多人音视频会议等场景。
1：高音质模式，适合需要高保真传输音乐的场景，但降噪效果会被削弱，适用于音乐教学场景。
                     */
                    uint64_t m_audioQuality;
                    bool m_audioQualityHasBeenSet;

                    /**
                     * 上课后是否禁止自动录制。可以有以下取值：
0 不禁止录制（自动开启录制，默认值）
1 禁止录制
注：如果该配置取值为0，录制将从上课后开始，课堂结束后停止。
                     */
                    uint64_t m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * 助教Id列表。通过[注册用户]接口获取的UserId。指定后该用户在房间内拥有助教权限。
                     */
                    std::vector<std::string> m_assistants;
                    bool m_assistantsHasBeenSet;

                    /**
                     * rtc人数。
                     */
                    uint64_t m_rTCAudienceNumber;
                    bool m_rTCAudienceNumberHasBeenSet;

                    /**
                     * 观看类型。互动观看 （默认）
                     */
                    uint64_t m_audienceType;
                    bool m_audienceTypeHasBeenSet;

                    /**
                     * 录制模板。录制模板枚举值参考：https://cloud.tencent.com/document/product/1639/89744
                     */
                    uint64_t m_recordLayout;
                    bool m_recordLayoutHasBeenSet;

                    /**
                     * 房间绑定的群组ID,非空时限制组成员进入
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 是否允许老师/助教直接控制学生的摄像头/麦克风。可以有以下取值：
0 不允许直接控制（需同意，默认值）
1 允许直接控制（无需同意）
                     */
                    uint64_t m_enableDirectControl;
                    bool m_enableDirectControlHasBeenSet;

                    /**
                     * 开启专注模式。
0 收看全部角色音视频(默认)
1 只看老师和助教
                     */
                    int64_t m_interactionMode;
                    bool m_interactionModeHasBeenSet;

                    /**
                     * 横竖屏。0：横屏开播（默认值）; 1：竖屏开播，当前仅支持移动端的纯视频类型
                     */
                    uint64_t m_videoOrientation;
                    bool m_videoOrientationHasBeenSet;

                    /**
                     * 开启课后评分。 0：不开启(默认)  1：开启
                     */
                    int64_t m_isGradingRequiredPostClass;
                    bool m_isGradingRequiredPostClassHasBeenSet;

                    /**
                     * 房间类型: 0 小班课（默认值）; 1 大班课; 2 1V1 (后续扩展)
                     */
                    int64_t m_roomType;
                    bool m_roomTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_CREATEROOMREQUEST_H_
