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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBEREMAILBINDREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBEREMAILBINDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * UpdateOrganizationMemberEmailBind请求参数结构体
                */
                class UpdateOrganizationMemberEmailBindRequest : public AbstractModel
                {
                public:
                    UpdateOrganizationMemberEmailBindRequest();
                    ~UpdateOrganizationMemberEmailBindRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取成员Uin
                     * @return MemberUin 成员Uin
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin
                     * @param MemberUin 成员Uin
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取绑定ID
                     * @return BindId 绑定ID
                     */
                    int64_t GetBindId() const;

                    /**
                     * 设置绑定ID
                     * @param BindId 绑定ID
                     */
                    void SetBindId(const int64_t& _bindId);

                    /**
                     * 判断参数 BindId 是否已赋值
                     * @return BindId 是否已赋值
                     */
                    bool BindIdHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Email 邮箱
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param Email 邮箱
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取国际区号
                     * @return CountryCode 国际区号
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置国际区号
                     * @param CountryCode 国际区号
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return Phone 手机号
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号
                     * @param Phone 手机号
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                private:

                    /**
                     * 成员Uin
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 绑定ID
                     */
                    int64_t m_bindId;
                    bool m_bindIdHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 国际区号
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONMEMBEREMAILBINDREQUEST_H_
