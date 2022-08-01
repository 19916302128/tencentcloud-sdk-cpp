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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMENVIRONMENTSTARTINGSTATUS_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMENVIRONMENTSTARTINGSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 环境启动进程（只统计由环境启动操作触发的应用数量）
                */
                class TemEnvironmentStartingStatus : public AbstractModel
                {
                public:
                    TemEnvironmentStartingStatus();
                    ~TemEnvironmentStartingStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationNumNeedToStart 需要启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetApplicationNumNeedToStart() const;

                    /**
                     * 设置需要启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationNumNeedToStart 需要启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationNumNeedToStart(const int64_t& _applicationNumNeedToStart);

                    /**
                     * 判断参数 ApplicationNumNeedToStart 是否已赋值
                     * @return ApplicationNumNeedToStart 是否已赋值
                     */
                    bool ApplicationNumNeedToStartHasBeenSet() const;

                    /**
                     * 获取已经启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartedApplicationNum 已经启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStartedApplicationNum() const;

                    /**
                     * 设置已经启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartedApplicationNum 已经启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartedApplicationNum(const int64_t& _startedApplicationNum);

                    /**
                     * 判断参数 StartedApplicationNum 是否已赋值
                     * @return StartedApplicationNum 是否已赋值
                     */
                    bool StartedApplicationNumHasBeenSet() const;

                private:

                    /**
                     * 需要启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_applicationNumNeedToStart;
                    bool m_applicationNumNeedToStartHasBeenSet;

                    /**
                     * 已经启动的应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startedApplicationNum;
                    bool m_startedApplicationNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMENVIRONMENTSTARTINGSTATUS_H_
