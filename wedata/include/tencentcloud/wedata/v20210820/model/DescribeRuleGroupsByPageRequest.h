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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEGROUPSBYPAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEGROUPSBYPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>
#include <tencentcloud/wedata/v20210820/model/OrderField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRuleGroupsByPage请求参数结构体
                */
                class DescribeRuleGroupsByPageRequest : public AbstractModel
                {
                public:
                    DescribeRuleGroupsByPageRequest();
                    ~DescribeRuleGroupsByPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页序号
                     * @return PageNumber 分页序号
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页序号
                     * @param PageNumber 分页序号
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param PageSize 分页大小
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5
                     * @return Filters 过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5
                     * @param Filters 过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return OrderFields 排序方式
                     */
                    std::vector<OrderField> GetOrderFields() const;

                    /**
                     * 设置排序方式
                     * @param OrderFields 排序方式
                     */
                    void SetOrderFields(const std::vector<OrderField>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param ProjectId 项目Id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 分页序号
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 过滤条件,每次请求的Filters的上限为10，Filter.Values的上限为5
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::vector<OrderField> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEGROUPSBYPAGEREQUEST_H_
