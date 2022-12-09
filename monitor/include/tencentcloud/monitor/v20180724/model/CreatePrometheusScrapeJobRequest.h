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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSSCRAPEJOBREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSSCRAPEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * CreatePrometheusScrapeJob请求参数结构体
                */
                class CreatePrometheusScrapeJobRequest : public AbstractModel
                {
                public:
                    CreatePrometheusScrapeJobRequest();
                    ~CreatePrometheusScrapeJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus 实例 ID，例如：prom-abcd1234
                     * @return InstanceId Prometheus 实例 ID，例如：prom-abcd1234
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID，例如：prom-abcd1234
                     * @param InstanceId Prometheus 实例 ID，例如：prom-abcd1234
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Agent ID，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     * @return AgentId Agent ID，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent ID，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     * @param AgentId Agent ID，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取抓取任务配置，格式：job_name:xx
                     * @return Config 抓取任务配置，格式：job_name:xx
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置抓取任务配置，格式：job_name:xx
                     * @param Config 抓取任务配置，格式：job_name:xx
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * Prometheus 实例 ID，例如：prom-abcd1234
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Agent ID，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 抓取任务配置，格式：job_name:xx
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEPROMETHEUSSCRAPEJOBREQUEST_H_
