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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_EXPANDGROUPREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_EXPANDGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ExpandGroup请求参数结构体
                */
                class ExpandGroupRequest : public AbstractModel
                {
                public:
                    ExpandGroupRequest();
                    ~ExpandGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署组ID
                     * @return GroupId 部署组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param GroupId 部署组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取扩容的机器实例ID列表
                     * @return InstanceIdList 扩容的机器实例ID列表
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置扩容的机器实例ID列表
                     * @param InstanceIdList 扩容的机器实例ID列表
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     */
                    bool InstanceIdListHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 扩容的机器实例ID列表
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_EXPANDGROUPREQUEST_H_