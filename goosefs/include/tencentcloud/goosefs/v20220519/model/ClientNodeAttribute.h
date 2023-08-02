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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTNODEATTRIBUTE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTNODEATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 客户端节点属性
                */
                class ClientNodeAttribute : public AbstractModel
                {
                public:
                    ClientNodeAttribute();
                    ~ClientNodeAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端节点IP
                     * @return ClientNodeIp 客户端节点IP
                     * 
                     */
                    std::string GetClientNodeIp() const;

                    /**
                     * 设置客户端节点IP
                     * @param _clientNodeIp 客户端节点IP
                     * 
                     */
                    void SetClientNodeIp(const std::string& _clientNodeIp);

                    /**
                     * 判断参数 ClientNodeIp 是否已赋值
                     * @return ClientNodeIp 是否已赋值
                     * 
                     */
                    bool ClientNodeIpHasBeenSet() const;

                    /**
                     * 获取客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)
                     * @return Status 客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)
                     * @param _status 客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取客户端节点类型，extend(扩展节点)，manager(管理节点)
                     * @return ClientType 客户端节点类型，extend(扩展节点)，manager(管理节点)
                     * 
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置客户端节点类型，extend(扩展节点)，manager(管理节点)
                     * @param _clientType 客户端节点类型，extend(扩展节点)，manager(管理节点)
                     * 
                     */
                    void SetClientType(const std::string& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                private:

                    /**
                     * 客户端节点IP
                     */
                    std::string m_clientNodeIp;
                    bool m_clientNodeIpHasBeenSet;

                    /**
                     * 客户端节点服务状态, Active(运行中), Adding(添加中), Destroying(销毁中), Down(已停止)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 客户端节点类型，extend(扩展节点)，manager(管理节点)
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLIENTNODEATTRIBUTE_H_
