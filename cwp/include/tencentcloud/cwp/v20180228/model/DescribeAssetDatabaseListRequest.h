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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETDATABASELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETDATABASELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetDatabaseList请求参数结构体
                */
                class DescribeAssetDatabaseListRequest : public AbstractModel
                {
                public:
                    DescribeAssetDatabaseListRequest();
                    ~DescribeAssetDatabaseListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要返回的数量，默认为10，最大值为100
                     * @return Limit 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100
                     * @param Limit 需要返回的数量，默认为10，最大值为100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param Offset 偏移量，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
                     * @return Filters 过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
                     * @param Filters 过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取查询指定Quuid主机的信息
                     * @return Quuid 查询指定Quuid主机的信息
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置查询指定Quuid主机的信息
                     * @param Quuid 查询指定Quuid主机的信息
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。
<li>IpOrAlias - String - 是否必填：否 - 主机ip或别名筛选</li>
<li>User- string - 是否必填：否 - 运行用户</li>
<li>Ip - String - 是否必填：否 - 绑定IP</li>
<li>Port - Int - 是否必填：否 - 端口</li>
<li>Name - Int - 是否必填：否 - 数据库名称
0:全部
1:MySQL
2:Redis
3:Oracle
4:MongoDB
5:MemCache
6:PostgreSQL
7:HBase
8:DB2
9:Sybase
10:TiDB</li>
<li>Proto - String - 是否必填：否 - 协议：1:TCP, 2:UDP, 3:未知</li>
<li>OsType - String - 是否必填：否 - 操作系统: linux/windows</li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询指定Quuid主机的信息
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETDATABASELISTREQUEST_H_