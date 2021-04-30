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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ClearLaunchConfigurationAttributes请求参数结构体
                */
                class ClearLaunchConfigurationAttributesRequest : public AbstractModel
                {
                public:
                    ClearLaunchConfigurationAttributesRequest();
                    ~ClearLaunchConfigurationAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取启动配置ID。
                     * @return LaunchConfigurationId 启动配置ID。
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置启动配置ID。
                     * @param LaunchConfigurationId 启动配置ID。
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     * @return ClearDataDisks 是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     */
                    bool GetClearDataDisks() const;

                    /**
                     * 设置是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     * @param ClearDataDisks 是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     */
                    void SetClearDataDisks(const bool& _clearDataDisks);

                    /**
                     * 判断参数 ClearDataDisks 是否已赋值
                     * @return ClearDataDisks 是否已赋值
                     */
                    bool ClearDataDisksHasBeenSet() const;

                private:

                    /**
                     * 启动配置ID。
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * 是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     */
                    bool m_clearDataDisks;
                    bool m_clearDataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_