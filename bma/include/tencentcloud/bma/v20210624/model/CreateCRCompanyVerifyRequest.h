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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRCOMPANYVERIFYREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRCOMPANYVERIFYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateCRCompanyVerify请求参数结构体
                */
                class CreateCRCompanyVerifyRequest : public AbstractModel
                {
                public:
                    CreateCRCompanyVerifyRequest();
                    ~CreateCRCompanyVerifyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业名称
                     * @return CompanyName 企业名称
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置企业名称
                     * @param CompanyName 企业名称
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取企业证件号码
                     * @return CompanyID 企业证件号码
                     */
                    std::string GetCompanyID() const;

                    /**
                     * 设置企业证件号码
                     * @param CompanyID 企业证件号码
                     */
                    void SetCompanyID(const std::string& _companyID);

                    /**
                     * 判断参数 CompanyID 是否已赋值
                     * @return CompanyID 是否已赋值
                     */
                    bool CompanyIDHasBeenSet() const;

                    /**
                     * 获取企业法人姓名
                     * @return CompanyLegalName 企业法人姓名
                     */
                    std::string GetCompanyLegalName() const;

                    /**
                     * 设置企业法人姓名
                     * @param CompanyLegalName 企业法人姓名
                     */
                    void SetCompanyLegalName(const std::string& _companyLegalName);

                    /**
                     * 判断参数 CompanyLegalName 是否已赋值
                     * @return CompanyLegalName 是否已赋值
                     */
                    bool CompanyLegalNameHasBeenSet() const;

                    /**
                     * 获取管理员名称
                     * @return ManagerName 管理员名称
                     */
                    std::string GetManagerName() const;

                    /**
                     * 设置管理员名称
                     * @param ManagerName 管理员名称
                     */
                    void SetManagerName(const std::string& _managerName);

                    /**
                     * 判断参数 ManagerName 是否已赋值
                     * @return ManagerName 是否已赋值
                     */
                    bool ManagerNameHasBeenSet() const;

                    /**
                     * 获取管理员手机号
                     * @return ManagerPhone 管理员手机号
                     */
                    std::string GetManagerPhone() const;

                    /**
                     * 设置管理员手机号
                     * @param ManagerPhone 管理员手机号
                     */
                    void SetManagerPhone(const std::string& _managerPhone);

                    /**
                     * 判断参数 ManagerPhone 是否已赋值
                     * @return ManagerPhone 是否已赋值
                     */
                    bool ManagerPhoneHasBeenSet() const;

                    /**
                     * 获取手机验证码
                     * @return VerificationCode 手机验证码
                     */
                    std::string GetVerificationCode() const;

                    /**
                     * 设置手机验证码
                     * @param VerificationCode 手机验证码
                     */
                    void SetVerificationCode(const std::string& _verificationCode);

                    /**
                     * 判断参数 VerificationCode 是否已赋值
                     * @return VerificationCode 是否已赋值
                     */
                    bool VerificationCodeHasBeenSet() const;

                    /**
                     * 获取企业认证号码类型 1：社会信用代码 2：组织机构代码 3：企业工商注册码 4：其他 默认为1
                     * @return CompanyIDType 企业认证号码类型 1：社会信用代码 2：组织机构代码 3：企业工商注册码 4：其他 默认为1
                     */
                    std::string GetCompanyIDType() const;

                    /**
                     * 设置企业认证号码类型 1：社会信用代码 2：组织机构代码 3：企业工商注册码 4：其他 默认为1
                     * @param CompanyIDType 企业认证号码类型 1：社会信用代码 2：组织机构代码 3：企业工商注册码 4：其他 默认为1
                     */
                    void SetCompanyIDType(const std::string& _companyIDType);

                    /**
                     * 判断参数 CompanyIDType 是否已赋值
                     * @return CompanyIDType 是否已赋值
                     */
                    bool CompanyIDTypeHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return Type xxx
                     */
                    std::string GetType() const;

                    /**
                     * 设置xxx
                     * @param Type xxx
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 企业名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 企业证件号码
                     */
                    std::string m_companyID;
                    bool m_companyIDHasBeenSet;

                    /**
                     * 企业法人姓名
                     */
                    std::string m_companyLegalName;
                    bool m_companyLegalNameHasBeenSet;

                    /**
                     * 管理员名称
                     */
                    std::string m_managerName;
                    bool m_managerNameHasBeenSet;

                    /**
                     * 管理员手机号
                     */
                    std::string m_managerPhone;
                    bool m_managerPhoneHasBeenSet;

                    /**
                     * 手机验证码
                     */
                    std::string m_verificationCode;
                    bool m_verificationCodeHasBeenSet;

                    /**
                     * 企业认证号码类型 1：社会信用代码 2：组织机构代码 3：企业工商注册码 4：其他 默认为1
                     */
                    std::string m_companyIDType;
                    bool m_companyIDTypeHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRCOMPANYVERIFYREQUEST_H_
