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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEBACKUPSTORAGELOCATIONSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEBACKUPSTORAGELOCATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeBackupStorageLocations请求参数结构体
                */
                class DescribeBackupStorageLocationsRequest : public AbstractModel
                {
                public:
                    DescribeBackupStorageLocationsRequest();
                    ~DescribeBackupStorageLocationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取多个备份仓库名称，如果不填写，默认返回当前地域所有存储仓库名称
                     * @return Names 多个备份仓库名称，如果不填写，默认返回当前地域所有存储仓库名称
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置多个备份仓库名称，如果不填写，默认返回当前地域所有存储仓库名称
                     * @param Names 多个备份仓库名称，如果不填写，默认返回当前地域所有存储仓库名称
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     */
                    bool NamesHasBeenSet() const;

                private:

                    /**
                     * 多个备份仓库名称，如果不填写，默认返回当前地域所有存储仓库名称
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEBACKUPSTORAGELOCATIONSREQUEST_H_
