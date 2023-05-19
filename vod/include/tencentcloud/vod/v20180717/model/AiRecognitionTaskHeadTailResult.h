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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKHEADTAILRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKHEADTAILRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskHeadTailResultInput.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskHeadTailResultOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频片头片尾识别结果。
                */
                class AiRecognitionTaskHeadTailResult : public AbstractModel
                {
                public:
                    AiRecognitionTaskHeadTailResult();
                    ~AiRecognitionTaskHeadTailResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @return Status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     * @param Status 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * @return ErrCodeExt 错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     * @param ErrCodeExt 错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取错误码，0 表示成功，其他值表示失败（该字段已不推荐使用，建议使用新的错误码字段 ErrCodeExt）。
                     * @return ErrCode 错误码，0 表示成功，其他值表示失败（该字段已不推荐使用，建议使用新的错误码字段 ErrCodeExt）。
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码，0 表示成功，其他值表示失败（该字段已不推荐使用，建议使用新的错误码字段 ErrCodeExt）。
                     * @param ErrCode 错误码，0 表示成功，其他值表示失败（该字段已不推荐使用，建议使用新的错误码字段 ErrCodeExt）。
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误信息。
                     * @return Message 错误信息。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。
                     * @param Message 错误信息。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取视频片头片尾识别任务输入信息。
                     * @return Input 视频片头片尾识别任务输入信息。
                     */
                    AiRecognitionTaskHeadTailResultInput GetInput() const;

                    /**
                     * 设置视频片头片尾识别任务输入信息。
                     * @param Input 视频片头片尾识别任务输入信息。
                     */
                    void SetInput(const AiRecognitionTaskHeadTailResultInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取视频片头片尾识别任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 视频片头片尾识别任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiRecognitionTaskHeadTailResultOutput GetOutput() const;

                    /**
                     * 设置视频片头片尾识别任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Output 视频片头片尾识别任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutput(const AiRecognitionTaskHeadTailResultOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取视频片头片尾识别任务进度，取值范围 [0-100] 。
                     * @return Progress 视频片头片尾识别任务进度，取值范围 [0-100] 。
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置视频片头片尾识别任务进度，取值范围 [0-100] 。
                     * @param Progress 视频片头片尾识别任务进度，取值范围 [0-100] 。
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取视频片头片尾识别任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return BeginProcessTime 视频片头片尾识别任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置视频片头片尾识别任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param BeginProcessTime 视频片头片尾识别任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取视频片头片尾识别任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return FinishTime 视频片头片尾识别任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置视频片头片尾识别任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param FinishTime 视频片头片尾识别任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * 任务状态，有 PROCESSING，SUCCESS 和 FAIL 三种。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码，空字符串表示成功，其他值表示失败，取值请参考 [视频处理类错误码](https://cloud.tencent.com/document/product/266/50368#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81) 列表。
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * 错误码，0 表示成功，其他值表示失败（该字段已不推荐使用，建议使用新的错误码字段 ErrCodeExt）。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 视频片头片尾识别任务输入信息。
                     */
                    AiRecognitionTaskHeadTailResultInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 视频片头片尾识别任务输出信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AiRecognitionTaskHeadTailResultOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 视频片头片尾识别任务进度，取值范围 [0-100] 。
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 视频片头片尾识别任务开始执行的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * 视频片头片尾识别任务执行完毕的时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKHEADTAILRESULT_H_
