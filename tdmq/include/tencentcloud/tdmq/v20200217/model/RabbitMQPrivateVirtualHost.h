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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATEVIRTUALHOST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATEVIRTUALHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * RabbitMQ专享版云服务器
                */
                class RabbitMQPrivateVirtualHost : public AbstractModel
                {
                public:
                    RabbitMQPrivateVirtualHost();
                    ~RabbitMQPrivateVirtualHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取虚拟主机的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirtualHostName 虚拟主机的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirtualHostName() const;

                    /**
                     * 设置虚拟主机的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virtualHostName 虚拟主机的名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirtualHostName(const std::string& _virtualHostName);

                    /**
                     * 判断参数 VirtualHostName 是否已赋值
                     * @return VirtualHostName 是否已赋值
                     * 
                     */
                    bool VirtualHostNameHasBeenSet() const;

                    /**
                     * 获取虚拟主机的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 虚拟主机的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置虚拟主机的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 虚拟主机的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 虚拟主机的名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virtualHostName;
                    bool m_virtualHostNameHasBeenSet;

                    /**
                     * 虚拟主机的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQPRIVATEVIRTUALHOST_H_
