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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TEXTTOCLASSREQUEST_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TEXTTOCLASSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * TextToClass请求参数结构体
                */
                class TextToClassRequest : public AbstractModel
                {
                public:
                    TextToClassRequest();
                    ~TextToClassRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取报告文本
                     * @return Text 报告文本
                     */
                    std::string GetText() const;

                    /**
                     * 设置报告文本
                     * @param Text 报告文本
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取用户类型，新客户传1，老客户可不传
                     * @return UserType 用户类型，新客户传1，老客户可不传
                     */
                    uint64_t GetUserType() const;

                    /**
                     * 设置用户类型，新客户传1，老客户可不传
                     * @param UserType 用户类型，新客户传1，老客户可不传
                     */
                    void SetUserType(const uint64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * 报告文本
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 用户类型，新客户传1，老客户可不传
                     */
                    uint64_t m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TEXTTOCLASSREQUEST_H_
