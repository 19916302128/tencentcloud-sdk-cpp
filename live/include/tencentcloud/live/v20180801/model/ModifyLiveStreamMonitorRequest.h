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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVESTREAMMONITORREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVESTREAMMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/LiveStreamMonitorOutputInfo.h>
#include <tencentcloud/live/v20180801/model/LiveStreamMonitorInputInfo.h>
#include <tencentcloud/live/v20180801/model/LiveStreamMonitorNotifyPolicy.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLiveStreamMonitor请求参数结构体
                */
                class ModifyLiveStreamMonitorRequest : public AbstractModel
                {
                public:
                    ModifyLiveStreamMonitorRequest();
                    ~ModifyLiveStreamMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取监播任务ID。
                     * @return MonitorId 监播任务ID。
                     * 
                     */
                    std::string GetMonitorId() const;

                    /**
                     * 设置监播任务ID。
                     * @param _monitorId 监播任务ID。
                     * 
                     */
                    void SetMonitorId(const std::string& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                    /**
                     * 获取监播任务的名称。长度128字节以内（一个汉字两个字节）。
                     * @return MonitorName 监播任务的名称。长度128字节以内（一个汉字两个字节）。
                     * 
                     */
                    std::string GetMonitorName() const;

                    /**
                     * 设置监播任务的名称。长度128字节以内（一个汉字两个字节）。
                     * @param _monitorName 监播任务的名称。长度128字节以内（一个汉字两个字节）。
                     * 
                     */
                    void SetMonitorName(const std::string& _monitorName);

                    /**
                     * 判断参数 MonitorName 是否已赋值
                     * @return MonitorName 是否已赋值
                     * 
                     */
                    bool MonitorNameHasBeenSet() const;

                    /**
                     * 获取监播任务输出信息。
                     * @return OutputInfo 监播任务输出信息。
                     * 
                     */
                    LiveStreamMonitorOutputInfo GetOutputInfo() const;

                    /**
                     * 设置监播任务输出信息。
                     * @param _outputInfo 监播任务输出信息。
                     * 
                     */
                    void SetOutputInfo(const LiveStreamMonitorOutputInfo& _outputInfo);

                    /**
                     * 判断参数 OutputInfo 是否已赋值
                     * @return OutputInfo 是否已赋值
                     * 
                     */
                    bool OutputInfoHasBeenSet() const;

                    /**
                     * 获取待监播的输入流信息。
                     * @return InputList 待监播的输入流信息。
                     * 
                     */
                    std::vector<LiveStreamMonitorInputInfo> GetInputList() const;

                    /**
                     * 设置待监播的输入流信息。
                     * @param _inputList 待监播的输入流信息。
                     * 
                     */
                    void SetInputList(const std::vector<LiveStreamMonitorInputInfo>& _inputList);

                    /**
                     * 判断参数 InputList 是否已赋值
                     * @return InputList 是否已赋值
                     * 
                     */
                    bool InputListHasBeenSet() const;

                    /**
                     * 获取监播事件通知策略。
                     * @return NotifyPolicy 监播事件通知策略。
                     * 
                     */
                    LiveStreamMonitorNotifyPolicy GetNotifyPolicy() const;

                    /**
                     * 设置监播事件通知策略。
                     * @param _notifyPolicy 监播事件通知策略。
                     * 
                     */
                    void SetNotifyPolicy(const LiveStreamMonitorNotifyPolicy& _notifyPolicy);

                    /**
                     * 判断参数 NotifyPolicy 是否已赋值
                     * @return NotifyPolicy 是否已赋值
                     * 
                     */
                    bool NotifyPolicyHasBeenSet() const;

                    /**
                     * 获取智能语音识别语种：
0 关闭 1 中文 2 英文 3 日文 4 韩文。
                     * @return AsrLanguage 智能语音识别语种：
0 关闭 1 中文 2 英文 3 日文 4 韩文。
                     * 
                     */
                    uint64_t GetAsrLanguage() const;

                    /**
                     * 设置智能语音识别语种：
0 关闭 1 中文 2 英文 3 日文 4 韩文。
                     * @param _asrLanguage 智能语音识别语种：
0 关闭 1 中文 2 英文 3 日文 4 韩文。
                     * 
                     */
                    void SetAsrLanguage(const uint64_t& _asrLanguage);

                    /**
                     * 判断参数 AsrLanguage 是否已赋值
                     * @return AsrLanguage 是否已赋值
                     * 
                     */
                    bool AsrLanguageHasBeenSet() const;

                    /**
                     * 获取智能文字识别语种：
0 关闭 1 中、英文。
                     * @return OcrLanguage 智能文字识别语种：
0 关闭 1 中、英文。
                     * 
                     */
                    uint64_t GetOcrLanguage() const;

                    /**
                     * 设置智能文字识别语种：
0 关闭 1 中、英文。
                     * @param _ocrLanguage 智能文字识别语种：
0 关闭 1 中、英文。
                     * 
                     */
                    void SetOcrLanguage(const uint64_t& _ocrLanguage);

                    /**
                     * 判断参数 OcrLanguage 是否已赋值
                     * @return OcrLanguage 是否已赋值
                     * 
                     */
                    bool OcrLanguageHasBeenSet() const;

                    /**
                     * 获取语音识别输入流列表，1代表第一条输入流。
                     * @return AiAsrInputIndexList 语音识别输入流列表，1代表第一条输入流。
                     * 
                     */
                    std::vector<uint64_t> GetAiAsrInputIndexList() const;

                    /**
                     * 设置语音识别输入流列表，1代表第一条输入流。
                     * @param _aiAsrInputIndexList 语音识别输入流列表，1代表第一条输入流。
                     * 
                     */
                    void SetAiAsrInputIndexList(const std::vector<uint64_t>& _aiAsrInputIndexList);

                    /**
                     * 判断参数 AiAsrInputIndexList 是否已赋值
                     * @return AiAsrInputIndexList 是否已赋值
                     * 
                     */
                    bool AiAsrInputIndexListHasBeenSet() const;

                    /**
                     * 获取文字识别输入流列表，1代表第一条输入流。
                     * @return AiOcrInputIndexList 文字识别输入流列表，1代表第一条输入流。
                     * 
                     */
                    std::vector<uint64_t> GetAiOcrInputIndexList() const;

                    /**
                     * 设置文字识别输入流列表，1代表第一条输入流。
                     * @param _aiOcrInputIndexList 文字识别输入流列表，1代表第一条输入流。
                     * 
                     */
                    void SetAiOcrInputIndexList(const std::vector<uint64_t>& _aiOcrInputIndexList);

                    /**
                     * 判断参数 AiOcrInputIndexList 是否已赋值
                     * @return AiOcrInputIndexList 是否已赋值
                     * 
                     */
                    bool AiOcrInputIndexListHasBeenSet() const;

                    /**
                     * 获取是否开启断流检测。
                     * @return CheckStreamBroken 是否开启断流检测。
                     * 
                     */
                    uint64_t GetCheckStreamBroken() const;

                    /**
                     * 设置是否开启断流检测。
                     * @param _checkStreamBroken 是否开启断流检测。
                     * 
                     */
                    void SetCheckStreamBroken(const uint64_t& _checkStreamBroken);

                    /**
                     * 判断参数 CheckStreamBroken 是否已赋值
                     * @return CheckStreamBroken 是否已赋值
                     * 
                     */
                    bool CheckStreamBrokenHasBeenSet() const;

                    /**
                     * 获取是否开启低帧率检测。
                     * @return CheckStreamLowFrameRate 是否开启低帧率检测。
                     * 
                     */
                    uint64_t GetCheckStreamLowFrameRate() const;

                    /**
                     * 设置是否开启低帧率检测。
                     * @param _checkStreamLowFrameRate 是否开启低帧率检测。
                     * 
                     */
                    void SetCheckStreamLowFrameRate(const uint64_t& _checkStreamLowFrameRate);

                    /**
                     * 判断参数 CheckStreamLowFrameRate 是否已赋值
                     * @return CheckStreamLowFrameRate 是否已赋值
                     * 
                     */
                    bool CheckStreamLowFrameRateHasBeenSet() const;

                    /**
                     * 获取是否存储监播事件到监播报告，以及是否允许查询监播报告。
                     * @return AllowMonitorReport 是否存储监播事件到监播报告，以及是否允许查询监播报告。
                     * 
                     */
                    uint64_t GetAllowMonitorReport() const;

                    /**
                     * 设置是否存储监播事件到监播报告，以及是否允许查询监播报告。
                     * @param _allowMonitorReport 是否存储监播事件到监播报告，以及是否允许查询监播报告。
                     * 
                     */
                    void SetAllowMonitorReport(const uint64_t& _allowMonitorReport);

                    /**
                     * 判断参数 AllowMonitorReport 是否已赋值
                     * @return AllowMonitorReport 是否已赋值
                     * 
                     */
                    bool AllowMonitorReportHasBeenSet() const;

                private:

                    /**
                     * 监播任务ID。
                     */
                    std::string m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * 监播任务的名称。长度128字节以内（一个汉字两个字节）。
                     */
                    std::string m_monitorName;
                    bool m_monitorNameHasBeenSet;

                    /**
                     * 监播任务输出信息。
                     */
                    LiveStreamMonitorOutputInfo m_outputInfo;
                    bool m_outputInfoHasBeenSet;

                    /**
                     * 待监播的输入流信息。
                     */
                    std::vector<LiveStreamMonitorInputInfo> m_inputList;
                    bool m_inputListHasBeenSet;

                    /**
                     * 监播事件通知策略。
                     */
                    LiveStreamMonitorNotifyPolicy m_notifyPolicy;
                    bool m_notifyPolicyHasBeenSet;

                    /**
                     * 智能语音识别语种：
0 关闭 1 中文 2 英文 3 日文 4 韩文。
                     */
                    uint64_t m_asrLanguage;
                    bool m_asrLanguageHasBeenSet;

                    /**
                     * 智能文字识别语种：
0 关闭 1 中、英文。
                     */
                    uint64_t m_ocrLanguage;
                    bool m_ocrLanguageHasBeenSet;

                    /**
                     * 语音识别输入流列表，1代表第一条输入流。
                     */
                    std::vector<uint64_t> m_aiAsrInputIndexList;
                    bool m_aiAsrInputIndexListHasBeenSet;

                    /**
                     * 文字识别输入流列表，1代表第一条输入流。
                     */
                    std::vector<uint64_t> m_aiOcrInputIndexList;
                    bool m_aiOcrInputIndexListHasBeenSet;

                    /**
                     * 是否开启断流检测。
                     */
                    uint64_t m_checkStreamBroken;
                    bool m_checkStreamBrokenHasBeenSet;

                    /**
                     * 是否开启低帧率检测。
                     */
                    uint64_t m_checkStreamLowFrameRate;
                    bool m_checkStreamLowFrameRateHasBeenSet;

                    /**
                     * 是否存储监播事件到监播报告，以及是否允许查询监播报告。
                     */
                    uint64_t m_allowMonitorReport;
                    bool m_allowMonitorReportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVESTREAMMONITORREQUEST_H_
