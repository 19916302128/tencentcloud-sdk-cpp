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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYAMQPCLUSTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYAMQPCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyAMQPCluster请求参数结构体
                */
                class ModifyAMQPClusterRequest : public AbstractModel
                {
                public:
                    ModifyAMQPClusterRequest();
                    ~ModifyAMQPClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取3-64个字符，只能包含字母、数字、“-”及“_”
                     * @return ClusterName 3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置3-64个字符，只能包含字母、数字、“-”及“_”
                     * @param ClusterName 3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取说明信息，不超过128个字符
                     * @return Remark 说明信息，不超过128个字符
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明信息，不超过128个字符
                     * @param Remark 说明信息，不超过128个字符
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 说明信息，不超过128个字符
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYAMQPCLUSTERREQUEST_H_
