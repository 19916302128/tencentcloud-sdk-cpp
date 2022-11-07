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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEINTEGRATIONNODEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEINTEGRATIONNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateIntegrationNode请求参数结构体
                */
                class CreateIntegrationNodeRequest : public AbstractModel
                {
                public:
                    CreateIntegrationNodeRequest();
                    ~CreateIntegrationNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集成节点信息
                     * @return NodeInfo 集成节点信息
                     */
                    IntegrationNodeInfo GetNodeInfo() const;

                    /**
                     * 设置集成节点信息
                     * @param NodeInfo 集成节点信息
                     */
                    void SetNodeInfo(const IntegrationNodeInfo& _nodeInfo);

                    /**
                     * 判断参数 NodeInfo 是否已赋值
                     * @return NodeInfo 是否已赋值
                     */
                    bool NodeInfoHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param ProjectId 项目id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param TaskType 任务类型
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 集成节点信息
                     */
                    IntegrationNodeInfo m_nodeInfo;
                    bool m_nodeInfoHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务类型
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEINTEGRATIONNODEREQUEST_H_
