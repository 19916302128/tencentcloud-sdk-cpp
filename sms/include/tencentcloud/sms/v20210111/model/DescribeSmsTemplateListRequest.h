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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSTEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSTEMPLATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DescribeSmsTemplateList请求参数结构体
                */
                class DescribeSmsTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeSmsTemplateListRequest();
                    ~DescribeSmsTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板 ID 数组。
注：默认数组长度最大100。
                     * @return TemplateIdSet 模板 ID 数组。
注：默认数组长度最大100。
                     */
                    std::vector<uint64_t> GetTemplateIdSet() const;

                    /**
                     * 设置模板 ID 数组。
注：默认数组长度最大100。
                     * @param TemplateIdSet 模板 ID 数组。
注：默认数组长度最大100。
                     */
                    void SetTemplateIdSet(const std::vector<uint64_t>& _templateIdSet);

                    /**
                     * 判断参数 TemplateIdSet 是否已赋值
                     * @return TemplateIdSet 是否已赋值
                     */
                    bool TemplateIdSetHasBeenSet() const;

                    /**
                     * 获取是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @return International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @param International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     */
                    bool InternationalHasBeenSet() const;

                private:

                    /**
                     * 模板 ID 数组。
注：默认数组长度最大100。
                     */
                    std::vector<uint64_t> m_templateIdSet;
                    bool m_templateIdSetHasBeenSet;

                    /**
                     * 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSTEMPLATELISTREQUEST_H_
