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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEUSERQUOTAREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEUSERQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeUserQuota请求参数结构体
                */
                class DescribeUserQuotaRequest : public AbstractModel
                {
                public:
                    DescribeUserQuotaRequest();
                    ~DescribeUserQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统 ID
                     * @return FileSystemId 文件系统 ID
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID
                     * @param FileSystemId 文件系统 ID
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<br><li>UserType - Array of String - 是否必填：否 -（过滤条件）按配额类型过滤。(Uid| Gid )
<br><li>UserId - Array of String - 是否必填：否 -（过滤条件）按UID/GID过滤。
                     * @return Filters 过滤条件。
<br><li>UserType - Array of String - 是否必填：否 -（过滤条件）按配额类型过滤。(Uid| Gid )
<br><li>UserId - Array of String - 是否必填：否 -（过滤条件）按UID/GID过滤。
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<br><li>UserType - Array of String - 是否必填：否 -（过滤条件）按配额类型过滤。(Uid| Gid )
<br><li>UserId - Array of String - 是否必填：否 -（过滤条件）按UID/GID过滤。
                     * @param Filters 过滤条件。
<br><li>UserType - Array of String - 是否必填：否 -（过滤条件）按配额类型过滤。(Uid| Gid )
<br><li>UserId - Array of String - 是否必填：否 -（过滤条件）按UID/GID过滤。
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset 分页码
                     * @return Offset Offset 分页码
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset 分页码
                     * @param Offset Offset 分页码
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit 页面大小
                     * @return Limit Limit 页面大小
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit 页面大小
                     * @param Limit Limit 页面大小
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 文件系统 ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 过滤条件。
<br><li>UserType - Array of String - 是否必填：否 -（过滤条件）按配额类型过滤。(Uid| Gid )
<br><li>UserId - Array of String - 是否必填：否 -（过滤条件）按UID/GID过滤。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset 分页码
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit 页面大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEUSERQUOTAREQUEST_H_
