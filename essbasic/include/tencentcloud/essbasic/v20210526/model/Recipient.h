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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 流程中参与方的信息结构
                */
                class Recipient : public AbstractModel
                {
                public:
                    Recipient();
                    ~Recipient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署人唯一标识，在通过模板发起合同的时候对应签署方ID
                     * @return RecipientId 签署人唯一标识，在通过模板发起合同的时候对应签署方ID
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署人唯一标识，在通过模板发起合同的时候对应签署方ID
                     * @param _recipientId 签署人唯一标识，在通过模板发起合同的时候对应签署方ID
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取参与者类型，默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
                     * @return RecipientType 参与者类型，默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
                     * 
                     */
                    std::string GetRecipientType() const;

                    /**
                     * 设置参与者类型，默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
                     * @param _recipientType 参与者类型，默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
                     * 
                     */
                    void SetRecipientType(const std::string& _recipientType);

                    /**
                     * 判断参数 RecipientType 是否已赋值
                     * @return RecipientType 是否已赋值
                     * 
                     */
                    bool RecipientTypeHasBeenSet() const;

                    /**
                     * 获取描述信息	
                     * @return Description 描述信息	
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息	
                     * @param _description 描述信息	
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取角色名称	
                     * @return RoleName 角色名称	
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称	
                     * @param _roleName 角色名称	
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取是否需要校验，
true-是，
false-否
                     * @return RequireValidation 是否需要校验，
true-是，
false-否
                     * 
                     */
                    bool GetRequireValidation() const;

                    /**
                     * 设置是否需要校验，
true-是，
false-否
                     * @param _requireValidation 是否需要校验，
true-是，
false-否
                     * 
                     */
                    void SetRequireValidation(const bool& _requireValidation);

                    /**
                     * 判断参数 RequireValidation 是否已赋值
                     * @return RequireValidation 是否已赋值
                     * 
                     */
                    bool RequireValidationHasBeenSet() const;

                    /**
                     * 获取是否必须填写，
true-是，
false-否
                     * @return RequireSign 是否必须填写，
true-是，
false-否
                     * 
                     */
                    bool GetRequireSign() const;

                    /**
                     * 设置是否必须填写，
true-是，
false-否
                     * @param _requireSign 是否必须填写，
true-是，
false-否
                     * 
                     */
                    void SetRequireSign(const bool& _requireSign);

                    /**
                     * 判断参数 RequireSign 是否已赋值
                     * @return RequireSign 是否已赋值
                     * 
                     */
                    bool RequireSignHasBeenSet() const;

                    /**
                     * 获取内部字段，签署类型
                     * @return SignType 内部字段，签署类型
                     * 
                     */
                    int64_t GetSignType() const;

                    /**
                     * 设置内部字段，签署类型
                     * @param _signType 内部字段，签署类型
                     * 
                     */
                    void SetSignType(const int64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     * 
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取签署顺序：数字越小优先级越高
                     * @return RoutingOrder 签署顺序：数字越小优先级越高
                     * 
                     */
                    int64_t GetRoutingOrder() const;

                    /**
                     * 设置签署顺序：数字越小优先级越高
                     * @param _routingOrder 签署顺序：数字越小优先级越高
                     * 
                     */
                    void SetRoutingOrder(const int64_t& _routingOrder);

                    /**
                     * 判断参数 RoutingOrder 是否已赋值
                     * @return RoutingOrder 是否已赋值
                     * 
                     */
                    bool RoutingOrderHasBeenSet() const;

                    /**
                     * 获取是否是发起方，
true-是 
false-否
                     * @return IsPromoter 是否是发起方，
true-是 
false-否
                     * 
                     */
                    bool GetIsPromoter() const;

                    /**
                     * 设置是否是发起方，
true-是 
false-否
                     * @param _isPromoter 是否是发起方，
true-是 
false-否
                     * 
                     */
                    void SetIsPromoter(const bool& _isPromoter);

                    /**
                     * 判断参数 IsPromoter 是否已赋值
                     * @return IsPromoter 是否已赋值
                     * 
                     */
                    bool IsPromoterHasBeenSet() const;

                private:

                    /**
                     * 签署人唯一标识，在通过模板发起合同的时候对应签署方ID
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 参与者类型，默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
                     */
                    std::string m_recipientType;
                    bool m_recipientTypeHasBeenSet;

                    /**
                     * 描述信息	
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 角色名称	
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 是否需要校验，
true-是，
false-否
                     */
                    bool m_requireValidation;
                    bool m_requireValidationHasBeenSet;

                    /**
                     * 是否必须填写，
true-是，
false-否
                     */
                    bool m_requireSign;
                    bool m_requireSignHasBeenSet;

                    /**
                     * 内部字段，签署类型
                     */
                    int64_t m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * 签署顺序：数字越小优先级越高
                     */
                    int64_t m_routingOrder;
                    bool m_routingOrderHasBeenSet;

                    /**
                     * 是否是发起方，
true-是 
false-否
                     */
                    bool m_isPromoter;
                    bool m_isPromoterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENT_H_
