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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQUSERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQUSERREQUEST_H_

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
                * CreateRabbitMQUser请求参数结构体
                */
                class CreateRabbitMQUserRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQUserRequest();
                    ~CreateRabbitMQUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例Id
                     * @return InstanceId 集群实例Id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例Id
                     * @param InstanceId 集群实例Id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户名，登录时使用
                     * @return User 用户名，登录时使用
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名，登录时使用
                     * @param User 用户名，登录时使用
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取密码，登录时使用
                     * @return Password 密码，登录时使用
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码，登录时使用
                     * @param Password 密码，登录时使用
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param Description 描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取用户标签，用于决定改用户访问RabbitMQ Management的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     * @return Tags 用户标签，用于决定改用户访问RabbitMQ Management的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置用户标签，用于决定改用户访问RabbitMQ Management的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     * @param Tags 用户标签，用于决定改用户访问RabbitMQ Management的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取该用户的最大连接数，不填写则不限制
                     * @return MaxConnections 该用户的最大连接数，不填写则不限制
                     */
                    int64_t GetMaxConnections() const;

                    /**
                     * 设置该用户的最大连接数，不填写则不限制
                     * @param MaxConnections 该用户的最大连接数，不填写则不限制
                     */
                    void SetMaxConnections(const int64_t& _maxConnections);

                    /**
                     * 判断参数 MaxConnections 是否已赋值
                     * @return MaxConnections 是否已赋值
                     */
                    bool MaxConnectionsHasBeenSet() const;

                    /**
                     * 获取该用户的最大channel数，不填写则不限制
                     * @return MaxChannels 该用户的最大channel数，不填写则不限制
                     */
                    int64_t GetMaxChannels() const;

                    /**
                     * 设置该用户的最大channel数，不填写则不限制
                     * @param MaxChannels 该用户的最大channel数，不填写则不限制
                     */
                    void SetMaxChannels(const int64_t& _maxChannels);

                    /**
                     * 判断参数 MaxChannels 是否已赋值
                     * @return MaxChannels 是否已赋值
                     */
                    bool MaxChannelsHasBeenSet() const;

                private:

                    /**
                     * 集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名，登录时使用
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码，登录时使用
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户标签，用于决定改用户访问RabbitMQ Management的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 该用户的最大连接数，不填写则不限制
                     */
                    int64_t m_maxConnections;
                    bool m_maxConnectionsHasBeenSet;

                    /**
                     * 该用户的最大channel数，不填写则不限制
                     */
                    int64_t m_maxChannels;
                    bool m_maxChannelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQUSERREQUEST_H_
