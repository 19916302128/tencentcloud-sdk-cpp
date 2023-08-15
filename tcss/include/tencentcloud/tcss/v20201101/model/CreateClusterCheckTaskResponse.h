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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECLUSTERCHECKTASKRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECLUSTERCHECKTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateClusterCheckTask返回参数结构体
                */
                class CreateClusterCheckTaskResponse : public AbstractModel
                {
                public:
                    CreateClusterCheckTaskResponse();
                    ~CreateClusterCheckTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回创建的集群检查任务的ID，为0表示创建失败。
                     * @return TaskId 返回创建的集群检查任务的ID，为0表示创建失败。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取创建检查任务的结果，"Succ"为成功，其他的为失败原因
                     * @return CreateResult 创建检查任务的结果，"Succ"为成功，其他的为失败原因
                     * 
                     */
                    std::string GetCreateResult() const;

                    /**
                     * 判断参数 CreateResult 是否已赋值
                     * @return CreateResult 是否已赋值
                     * 
                     */
                    bool CreateResultHasBeenSet() const;

                    /**
                     * 获取返回创建的集群新任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewTaskID 返回创建的集群新任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNewTaskID() const;

                    /**
                     * 判断参数 NewTaskID 是否已赋值
                     * @return NewTaskID 是否已赋值
                     * 
                     */
                    bool NewTaskIDHasBeenSet() const;

                private:

                    /**
                     * 返回创建的集群检查任务的ID，为0表示创建失败。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 创建检查任务的结果，"Succ"为成功，其他的为失败原因
                     */
                    std::string m_createResult;
                    bool m_createResultHasBeenSet;

                    /**
                     * 返回创建的集群新任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newTaskID;
                    bool m_newTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECLUSTERCHECKTASKRESPONSE_H_
