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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFOOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFOOPSDTO_H_

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
                * 实例日志信息详情
                */
                class InstanceLogInfoOpsDto : public AbstractModel
                {
                public:
                    InstanceLogInfoOpsDto();
                    ~InstanceLogInfoOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogInfo 实例运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogInfo() const;

                    /**
                     * 设置实例运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logInfo 实例运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogInfo(const std::string& _logInfo);

                    /**
                     * 判断参数 LogInfo 是否已赋值
                     * @return LogInfo 是否已赋值
                     * 
                     */
                    bool LogInfoHasBeenSet() const;

                    /**
                     * 获取实例运行提交的yarn日志地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnLogInfo 实例运行提交的yarn日志地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetYarnLogInfo() const;

                    /**
                     * 设置实例运行提交的yarn日志地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarnLogInfo 实例运行提交的yarn日志地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYarnLogInfo(const std::vector<std::string>& _yarnLogInfo);

                    /**
                     * 判断参数 YarnLogInfo 是否已赋值
                     * @return YarnLogInfo 是否已赋值
                     * 
                     */
                    bool YarnLogInfoHasBeenSet() const;

                    /**
                     * 获取实例运行产生的datax日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataLogInfo 实例运行产生的datax日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataLogInfo() const;

                    /**
                     * 设置实例运行产生的datax日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataLogInfo 实例运行产生的datax日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataLogInfo(const std::string& _dataLogInfo);

                    /**
                     * 判断参数 DataLogInfo 是否已赋值
                     * @return DataLogInfo 是否已赋值
                     * 
                     */
                    bool DataLogInfoHasBeenSet() const;

                    /**
                     * 获取第三方任务运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdTaskRunLogInfo 第三方任务运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThirdTaskRunLogInfo() const;

                    /**
                     * 设置第三方任务运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thirdTaskRunLogInfo 第三方任务运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThirdTaskRunLogInfo(const std::string& _thirdTaskRunLogInfo);

                    /**
                     * 判断参数 ThirdTaskRunLogInfo 是否已赋值
                     * @return ThirdTaskRunLogInfo 是否已赋值
                     * 
                     */
                    bool ThirdTaskRunLogInfoHasBeenSet() const;

                    /**
                     * 获取第三方任务日志链接描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdTaskLogUrlDesc 第三方任务日志链接描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThirdTaskLogUrlDesc() const;

                    /**
                     * 设置第三方任务日志链接描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thirdTaskLogUrlDesc 第三方任务日志链接描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThirdTaskLogUrlDesc(const std::string& _thirdTaskLogUrlDesc);

                    /**
                     * 判断参数 ThirdTaskLogUrlDesc 是否已赋值
                     * @return ThirdTaskLogUrlDesc 是否已赋值
                     * 
                     */
                    bool ThirdTaskLogUrlDescHasBeenSet() const;

                private:

                    /**
                     * 实例运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logInfo;
                    bool m_logInfoHasBeenSet;

                    /**
                     * 实例运行提交的yarn日志地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_yarnLogInfo;
                    bool m_yarnLogInfoHasBeenSet;

                    /**
                     * 实例运行产生的datax日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataLogInfo;
                    bool m_dataLogInfoHasBeenSet;

                    /**
                     * 第三方任务运行日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_thirdTaskRunLogInfo;
                    bool m_thirdTaskRunLogInfoHasBeenSet;

                    /**
                     * 第三方任务日志链接描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_thirdTaskLogUrlDesc;
                    bool m_thirdTaskLogUrlDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFOOPSDTO_H_
