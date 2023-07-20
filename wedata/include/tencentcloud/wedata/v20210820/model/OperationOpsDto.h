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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OPERATIONOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OPERATIONOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 操作返回结果
                */
                class OperationOpsDto : public AbstractModel
                {
                public:
                    OperationOpsDto();
                    ~OperationOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取操作结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultMsg 操作结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultMsg() const;

                    /**
                     * 设置操作结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultMsg 操作结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultMsg(const std::string& _resultMsg);

                    /**
                     * 判断参数 ResultMsg 是否已赋值
                     * @return ResultMsg 是否已赋值
                     * 
                     */
                    bool ResultMsgHasBeenSet() const;

                    /**
                     * 获取操作失败类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorId 操作失败类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorId() const;

                    /**
                     * 设置操作失败类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorId 操作失败类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorId(const std::string& _errorId);

                    /**
                     * 判断参数 ErrorId 是否已赋值
                     * @return ErrorId 是否已赋值
                     * 
                     */
                    bool ErrorIdHasBeenSet() const;

                    /**
                     * 获取操作失败描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorDesc 操作失败描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorDesc() const;

                    /**
                     * 设置操作失败描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorDesc 操作失败描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorDesc(const std::string& _errorDesc);

                    /**
                     * 判断参数 ErrorDesc 是否已赋值
                     * @return ErrorDesc 是否已赋值
                     * 
                     */
                    bool ErrorDescHasBeenSet() const;

                private:

                    /**
                     * 操作是否成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 操作结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultMsg;
                    bool m_resultMsgHasBeenSet;

                    /**
                     * 操作失败类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorId;
                    bool m_errorIdHasBeenSet;

                    /**
                     * 操作失败描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorDesc;
                    bool m_errorDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OPERATIONOPSDTO_H_
