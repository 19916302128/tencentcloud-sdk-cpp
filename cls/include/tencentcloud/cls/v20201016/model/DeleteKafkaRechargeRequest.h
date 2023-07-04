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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETEKAFKARECHARGEREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETEKAFKARECHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteKafkaRecharge请求参数结构体
                */
                class DeleteKafkaRechargeRequest : public AbstractModel
                {
                public:
                    DeleteKafkaRechargeRequest();
                    ~DeleteKafkaRechargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Kafka导入配置ID
                     * @return Id Kafka导入配置ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Kafka导入配置ID
                     * @param _id Kafka导入配置ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取导入CLS目标topic ID
                     * @return TopicId 导入CLS目标topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置导入CLS目标topic ID
                     * @param _topicId 导入CLS目标topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * Kafka导入配置ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 导入CLS目标topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETEKAFKARECHARGEREQUEST_H_
