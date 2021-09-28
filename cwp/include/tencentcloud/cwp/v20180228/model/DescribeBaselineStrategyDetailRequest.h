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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYDETAILREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineStrategyDetail请求参数结构体
                */
                class DescribeBaselineStrategyDetailRequest : public AbstractModel
                {
                public:
                    DescribeBaselineStrategyDetailRequest();
                    ~DescribeBaselineStrategyDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户基线策略id
                     * @return StrategyId 用户基线策略id
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置用户基线策略id
                     * @param StrategyId 用户基线策略id
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * 用户基线策略id
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYDETAILREQUEST_H_