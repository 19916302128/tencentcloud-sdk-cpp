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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERSIONSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERSIONSTATISTICSRESPONSE_H_

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
                * DescribeVersionStatistics返回参数结构体
                */
                class DescribeVersionStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeVersionStatisticsResponse();
                    ~DescribeVersionStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取基础版数量
                     * @return BasicVersionNum 基础版数量
                     */
                    uint64_t GetBasicVersionNum() const;

                    /**
                     * 判断参数 BasicVersionNum 是否已赋值
                     * @return BasicVersionNum 是否已赋值
                     */
                    bool BasicVersionNumHasBeenSet() const;

                    /**
                     * 获取专业版数量
                     * @return ProVersionNum 专业版数量
                     */
                    uint64_t GetProVersionNum() const;

                    /**
                     * 判断参数 ProVersionNum 是否已赋值
                     * @return ProVersionNum 是否已赋值
                     */
                    bool ProVersionNumHasBeenSet() const;

                    /**
                     * 获取旗舰版数量
                     * @return UltimateVersionNum 旗舰版数量
                     */
                    uint64_t GetUltimateVersionNum() const;

                    /**
                     * 判断参数 UltimateVersionNum 是否已赋值
                     * @return UltimateVersionNum 是否已赋值
                     */
                    bool UltimateVersionNumHasBeenSet() const;

                private:

                    /**
                     * 基础版数量
                     */
                    uint64_t m_basicVersionNum;
                    bool m_basicVersionNumHasBeenSet;

                    /**
                     * 专业版数量
                     */
                    uint64_t m_proVersionNum;
                    bool m_proVersionNumHasBeenSet;

                    /**
                     * 旗舰版数量
                     */
                    uint64_t m_ultimateVersionNum;
                    bool m_ultimateVersionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERSIONSTATISTICSRESPONSE_H_
