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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESAFETYEVENTLISTREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESAFETYEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeSafetyEventList请求参数结构体
                */
                class DescribeSafetyEventListRequest : public AbstractModel
                {
                public:
                    DescribeSafetyEventListRequest();
                    ~DescribeSafetyEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索过滤查询参数
                     * @return Filter 搜索过滤查询参数
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置搜索过滤查询参数
                     * @param _filter 搜索过滤查询参数
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取页偏移
                     * @return Offset 页偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页偏移
                     * @param _offset 页偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取排序列名
                     * @return Order 排序列名
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序列名
                     * @param _order 排序列名
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序升降：desc-降序 asc-升序
                     * @return By 排序升降：desc-降序 asc-升序
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序升降：desc-降序 asc-升序
                     * @param _by 排序升降：desc-降序 asc-升序
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取开始查询时间
                     * @return StartTime 开始查询时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始查询时间
                     * @param _startTime 开始查询时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束查询时间
                     * @return EndTime 结束查询时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束查询时间
                     * @param _endTime 结束查询时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取是否过滤响应时间
                     * @return IsFilterResponseTime 是否过滤响应时间
                     * 
                     */
                    bool GetIsFilterResponseTime() const;

                    /**
                     * 设置是否过滤响应时间
                     * @param _isFilterResponseTime 是否过滤响应时间
                     * 
                     */
                    void SetIsFilterResponseTime(const bool& _isFilterResponseTime);

                    /**
                     * 判断参数 IsFilterResponseTime 是否已赋值
                     * @return IsFilterResponseTime 是否已赋值
                     * 
                     */
                    bool IsFilterResponseTimeHasBeenSet() const;

                private:

                    /**
                     * 搜索过滤查询参数
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序列名
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序升降：desc-降序 asc-升序
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 开始查询时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束查询时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否过滤响应时间
                     */
                    bool m_isFilterResponseTime;
                    bool m_isFilterResponseTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBESAFETYEVENTLISTREQUEST_H_
