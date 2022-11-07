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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEINLONGAGENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEINLONGAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteInLongAgent请求参数结构体
                */
                class DeleteInLongAgentRequest : public AbstractModel
                {
                public:
                    DeleteInLongAgentRequest();
                    ~DeleteInLongAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取采集器ID
                     * @return AgentId 采集器ID
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置采集器ID
                     * @param AgentId 采集器ID
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取WeData项目ID
                     * @return ProjectId WeData项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置WeData项目ID
                     * @param ProjectId WeData项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 采集器ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * WeData项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEINLONGAGENTREQUEST_H_
