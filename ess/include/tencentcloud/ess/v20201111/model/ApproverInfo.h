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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Component.h>
#include <tencentcloud/ess/v20201111/model/ApproverOption.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 参与者信息
                */
                class ApproverInfo : public AbstractModel
                {
                public:
                    ApproverInfo();
                    ~ApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。
                     * @return ApproverType 在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。
                     * 
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。
                     * @param _approverType 在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。
                     * 
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取签署方经办人的姓名。
经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。
                     * @return ApproverName 签署方经办人的姓名。
经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置签署方经办人的姓名。
经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。
                     * @param _approverName 签署方经办人的姓名。
经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取本企业的签署方经办人的员工UserId

可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。

注: 若传该字段，则签署方经办人的其他信息（如签署方经办人的姓名、证件号码、手机号码等）将被忽略。
                     * @return ApproverMobile 本企业的签署方经办人的员工UserId

可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。

注: 若传该字段，则签署方经办人的其他信息（如签署方经办人的姓名、证件号码、手机号码等）将被忽略。
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置本企业的签署方经办人的员工UserId

可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。

注: 若传该字段，则签署方经办人的其他信息（如签署方经办人的姓名、证件号码、手机号码等）将被忽略。
                     * @param _approverMobile 本企业的签署方经办人的员工UserId

可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。

注: 若传该字段，则签署方经办人的其他信息（如签署方经办人的姓名、证件号码、手机号码等）将被忽略。
                     * 
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     * 
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取组织机构名称。
如果签署方是企业签署方(approverType = 1 或者 approverType = 3)， 则企业名称必填。

注: 请确认该名称与企业营业执照中注册的名称一致 ; 如果名称中包含英文括号()，请使用中文括号（）代替。
                     * @return OrganizationName 组织机构名称。
如果签署方是企业签署方(approverType = 1 或者 approverType = 3)， 则企业名称必填。

注: 请确认该名称与企业营业执照中注册的名称一致 ; 如果名称中包含英文括号()，请使用中文括号（）代替。
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置组织机构名称。
如果签署方是企业签署方(approverType = 1 或者 approverType = 3)， 则企业名称必填。

注: 请确认该名称与企业营业执照中注册的名称一致 ; 如果名称中包含英文括号()，请使用中文括号（）代替。
                     * @param _organizationName 组织机构名称。
如果签署方是企业签署方(approverType = 1 或者 approverType = 3)， 则企业名称必填。

注: 请确认该名称与企业营业执照中注册的名称一致 ; 如果名称中包含英文括号()，请使用中文括号（）代替。
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体
- 个人签名/印章
- 企业印章
- 骑缝章等签署控件
                     * @return SignComponents 合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体
- 个人签名/印章
- 企业印章
- 骑缝章等签署控件
                     * 
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体
- 个人签名/印章
- 企业印章
- 骑缝章等签署控件
                     * @param _signComponents 合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体
- 个人签名/印章
- 企业印章
- 骑缝章等签署控件
                     * 
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     * 
                     */
                    bool SignComponentsHasBeenSet() const;

                    /**
                     * 获取签署方经办人的证件类型，支持以下类型
- ID_CARD 居民身份证  (默认值)
- HONGKONG_AND_MACAO 港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
- OTHER_CARD_TYPE 其他证件

注: 其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。
                     * @return ApproverIdCardType 签署方经办人的证件类型，支持以下类型
- ID_CARD 居民身份证  (默认值)
- HONGKONG_AND_MACAO 港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
- OTHER_CARD_TYPE 其他证件

注: 其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。
                     * 
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置签署方经办人的证件类型，支持以下类型
- ID_CARD 居民身份证  (默认值)
- HONGKONG_AND_MACAO 港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
- OTHER_CARD_TYPE 其他证件

注: 其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。
                     * @param _approverIdCardType 签署方经办人的证件类型，支持以下类型
- ID_CARD 居民身份证  (默认值)
- HONGKONG_AND_MACAO 港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
- OTHER_CARD_TYPE 其他证件

注: 其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。
                     * 
                     */
                    void SetApproverIdCardType(const std::string& _approverIdCardType);

                    /**
                     * 判断参数 ApproverIdCardType 是否已赋值
                     * @return ApproverIdCardType 是否已赋值
                     * 
                     */
                    bool ApproverIdCardTypeHasBeenSet() const;

                    /**
                     * 获取签署方经办人的证件号码，应符合以下规则
- 居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。
- 港澳居民来往内地通行证号码应为9位字符串，第1位为“C”，第2位为英文字母（但“I”、“O”除外），后7位为阿拉伯数字。
- 港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。
                     * @return ApproverIdCardNumber 签署方经办人的证件号码，应符合以下规则
- 居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。
- 港澳居民来往内地通行证号码应为9位字符串，第1位为“C”，第2位为英文字母（但“I”、“O”除外），后7位为阿拉伯数字。
- 港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。
                     * 
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置签署方经办人的证件号码，应符合以下规则
- 居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。
- 港澳居民来往内地通行证号码应为9位字符串，第1位为“C”，第2位为英文字母（但“I”、“O”除外），后7位为阿拉伯数字。
- 港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。
                     * @param _approverIdCardNumber 签署方经办人的证件号码，应符合以下规则
- 居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。
- 港澳居民来往内地通行证号码应为9位字符串，第1位为“C”，第2位为英文字母（但“I”、“O”除外），后7位为阿拉伯数字。
- 港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。
                     * 
                     */
                    void SetApproverIdCardNumber(const std::string& _approverIdCardNumber);

                    /**
                     * 判断参数 ApproverIdCardNumber 是否已赋值
                     * @return ApproverIdCardNumber 是否已赋值
                     * 
                     */
                    bool ApproverIdCardNumberHasBeenSet() const;

                    /**
                     * 获取通知签署方经办人的方式,  有以下途径:

- sms:  (默认)短信 
- none: 不通知
                     * @return NotifyType 通知签署方经办人的方式,  有以下途径:

- sms:  (默认)短信 
- none: 不通知
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置通知签署方经办人的方式,  有以下途径:

- sms:  (默认)短信 
- none: 不通知
                     * @param _notifyType 通知签署方经办人的方式,  有以下途径:

- sms:  (默认)短信 
- none: 不通知
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取收据场景设置签署人角色类型, 可以设置如下类型:
- 1:收款人
- 2:开具人
- 3:见证人

注: 收据场景为白名单功能，使用前请联系对接的客户经理沟通。
                     * @return ApproverRole 收据场景设置签署人角色类型, 可以设置如下类型:
- 1:收款人
- 2:开具人
- 3:见证人

注: 收据场景为白名单功能，使用前请联系对接的客户经理沟通。
                     * 
                     */
                    int64_t GetApproverRole() const;

                    /**
                     * 设置收据场景设置签署人角色类型, 可以设置如下类型:
- 1:收款人
- 2:开具人
- 3:见证人

注: 收据场景为白名单功能，使用前请联系对接的客户经理沟通。
                     * @param _approverRole 收据场景设置签署人角色类型, 可以设置如下类型:
- 1:收款人
- 2:开具人
- 3:见证人

注: 收据场景为白名单功能，使用前请联系对接的客户经理沟通。
                     * 
                     */
                    void SetApproverRole(const int64_t& _approverRole);

                    /**
                     * 判断参数 ApproverRole 是否已赋值
                     * @return ApproverRole 是否已赋值
                     * 
                     */
                    bool ApproverRoleHasBeenSet() const;

                    /**
                     * 获取签署意愿确认渠道，默认为WEIXINAPP:人脸识别

注: 将要废弃, 用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置
                     * @return VerifyChannel 签署意愿确认渠道，默认为WEIXINAPP:人脸识别

注: 将要废弃, 用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置
                     * 
                     */
                    std::vector<std::string> GetVerifyChannel() const;

                    /**
                     * 设置签署意愿确认渠道，默认为WEIXINAPP:人脸识别

注: 将要废弃, 用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置
                     * @param _verifyChannel 签署意愿确认渠道，默认为WEIXINAPP:人脸识别

注: 将要废弃, 用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置
                     * 
                     */
                    void SetVerifyChannel(const std::vector<std::string>& _verifyChannel);

                    /**
                     * 判断参数 VerifyChannel 是否已赋值
                     * @return VerifyChannel 是否已赋值
                     * 
                     */
                    bool VerifyChannelHasBeenSet() const;

                    /**
                     * 获取签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。

若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：

- 合同页数少于等于2页，阅读时间为3秒；
- 合同页数为3到5页，阅读时间为5秒；
- 合同页数大于等于6页，阅读时间为10秒。
                     * @return PreReadTime 签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。

若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：

- 合同页数少于等于2页，阅读时间为3秒；
- 合同页数为3到5页，阅读时间为5秒；
- 合同页数大于等于6页，阅读时间为10秒。
                     * 
                     */
                    int64_t GetPreReadTime() const;

                    /**
                     * 设置签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。

若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：

- 合同页数少于等于2页，阅读时间为3秒；
- 合同页数为3到5页，阅读时间为5秒；
- 合同页数大于等于6页，阅读时间为10秒。
                     * @param _preReadTime 签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。

若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：

- 合同页数少于等于2页，阅读时间为3秒；
- 合同页数为3到5页，阅读时间为5秒；
- 合同页数大于等于6页，阅读时间为10秒。
                     * 
                     */
                    void SetPreReadTime(const int64_t& _preReadTime);

                    /**
                     * 判断参数 PreReadTime 是否已赋值
                     * @return PreReadTime 是否已赋值
                     * 
                     */
                    bool PreReadTimeHasBeenSet() const;

                    /**
                     * 获取签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     * @return UserId 签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     * @param _userId 签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取在企微场景下使用，需设置参数为WEWORKAPP，以表明合同来源于企微。
                     * @return ApproverSource 在企微场景下使用，需设置参数为WEWORKAPP，以表明合同来源于企微。
                     * 
                     */
                    std::string GetApproverSource() const;

                    /**
                     * 设置在企微场景下使用，需设置参数为WEWORKAPP，以表明合同来源于企微。
                     * @param _approverSource 在企微场景下使用，需设置参数为WEWORKAPP，以表明合同来源于企微。
                     * 
                     */
                    void SetApproverSource(const std::string& _approverSource);

                    /**
                     * 判断参数 ApproverSource 是否已赋值
                     * @return ApproverSource 是否已赋值
                     * 
                     */
                    bool ApproverSourceHasBeenSet() const;

                    /**
                     * 获取在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。
所有参与或签的人员均需具备该标识。
注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。
如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。
                     * @return CustomApproverTag 在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。
所有参与或签的人员均需具备该标识。
注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。
如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。
                     * 
                     */
                    std::string GetCustomApproverTag() const;

                    /**
                     * 设置在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。
所有参与或签的人员均需具备该标识。
注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。
如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。
                     * @param _customApproverTag 在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。
所有参与或签的人员均需具备该标识。
注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。
如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。
                     * 
                     */
                    void SetCustomApproverTag(const std::string& _customApproverTag);

                    /**
                     * 判断参数 CustomApproverTag 是否已赋值
                     * @return CustomApproverTag 是否已赋值
                     * 
                     */
                    bool CustomApproverTagHasBeenSet() const;

                    /**
                     * 获取可以控制签署方在签署合同时能否进行某些操作，例如拒签、转交他人等。
详细操作可以参考开发者中心的ApproverOption结构体。
                     * @return ApproverOption 可以控制签署方在签署合同时能否进行某些操作，例如拒签、转交他人等。
详细操作可以参考开发者中心的ApproverOption结构体。
                     * 
                     */
                    ApproverOption GetApproverOption() const;

                    /**
                     * 设置可以控制签署方在签署合同时能否进行某些操作，例如拒签、转交他人等。
详细操作可以参考开发者中心的ApproverOption结构体。
                     * @param _approverOption 可以控制签署方在签署合同时能否进行某些操作，例如拒签、转交他人等。
详细操作可以参考开发者中心的ApproverOption结构体。
                     * 
                     */
                    void SetApproverOption(const ApproverOption& _approverOption);

                    /**
                     * 判断参数 ApproverOption 是否已赋值
                     * @return ApproverOption 是否已赋值
                     * 
                     */
                    bool ApproverOptionHasBeenSet() const;

                    /**
                     * 获取指定个人签署方查看合同的校验方式,可以传值如下:

- 1 : （默认）人脸识别,人脸识别后才能合同内容
- 2 : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容

注: 

- 如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式
- 此字段不可传多个校验方式
                     * @return ApproverVerifyTypes 指定个人签署方查看合同的校验方式,可以传值如下:

- 1 : （默认）人脸识别,人脸识别后才能合同内容
- 2 : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容

注: 

- 如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式
- 此字段不可传多个校验方式
                     * 
                     */
                    std::vector<int64_t> GetApproverVerifyTypes() const;

                    /**
                     * 设置指定个人签署方查看合同的校验方式,可以传值如下:

- 1 : （默认）人脸识别,人脸识别后才能合同内容
- 2 : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容

注: 

- 如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式
- 此字段不可传多个校验方式
                     * @param _approverVerifyTypes 指定个人签署方查看合同的校验方式,可以传值如下:

- 1 : （默认）人脸识别,人脸识别后才能合同内容
- 2 : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容

注: 

- 如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式
- 此字段不可传多个校验方式
                     * 
                     */
                    void SetApproverVerifyTypes(const std::vector<int64_t>& _approverVerifyTypes);

                    /**
                     * 判断参数 ApproverVerifyTypes 是否已赋值
                     * @return ApproverVerifyTypes 是否已赋值
                     * 
                     */
                    bool ApproverVerifyTypesHasBeenSet() const;

                    /**
                     * 获取您可以指定签署方签署合同的认证校验方式，可传递以下值：

- 1：人脸认证，需进行人脸识别成功后才能签署合同；
- 2：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；
- 3：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。

注：

- 默认情况下，认证校验方式为人脸认证和签署密码两种形式；
- 您可以传递多种值，表示可用多种认证校验方式。

                     * @return ApproverSignTypes 您可以指定签署方签署合同的认证校验方式，可传递以下值：

- 1：人脸认证，需进行人脸识别成功后才能签署合同；
- 2：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；
- 3：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。

注：

- 默认情况下，认证校验方式为人脸认证和签署密码两种形式；
- 您可以传递多种值，表示可用多种认证校验方式。

                     * 
                     */
                    std::vector<int64_t> GetApproverSignTypes() const;

                    /**
                     * 设置您可以指定签署方签署合同的认证校验方式，可传递以下值：

- 1：人脸认证，需进行人脸识别成功后才能签署合同；
- 2：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；
- 3：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。

注：

- 默认情况下，认证校验方式为人脸认证和签署密码两种形式；
- 您可以传递多种值，表示可用多种认证校验方式。

                     * @param _approverSignTypes 您可以指定签署方签署合同的认证校验方式，可传递以下值：

- 1：人脸认证，需进行人脸识别成功后才能签署合同；
- 2：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；
- 3：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。

注：

- 默认情况下，认证校验方式为人脸认证和签署密码两种形式；
- 您可以传递多种值，表示可用多种认证校验方式。

                     * 
                     */
                    void SetApproverSignTypes(const std::vector<int64_t>& _approverSignTypes);

                    /**
                     * 判断参数 ApproverSignTypes 是否已赋值
                     * @return ApproverSignTypes 是否已赋值
                     * 
                     */
                    bool ApproverSignTypesHasBeenSet() const;

                    /**
                     * 获取
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     * @return ApproverNeedSignReview 
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     * 
                     */
                    bool GetApproverNeedSignReview() const;

                    /**
                     * 设置
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     * @param _approverNeedSignReview 
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     * 
                     */
                    void SetApproverNeedSignReview(const bool& _approverNeedSignReview);

                    /**
                     * 判断参数 ApproverNeedSignReview 是否已赋值
                     * @return ApproverNeedSignReview 是否已赋值
                     * 
                     */
                    bool ApproverNeedSignReviewHasBeenSet() const;

                private:

                    /**
                     * 在指定签署方时，可选择企业B端或个人C端等不同的参与者类型，可选类型如下:
0：企业
1：个人
3：企业静默签署
注：类型为3（企业静默签署）时，此接口会默认完成该签署方的签署。静默签署仅进行盖章操作，不能自动签名。
7: 个人自动签署，适用于个人自动签场景。
注: 个人自动签场景为白名单功能，使用前请联系对接的客户经理沟通。
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 签署方经办人的姓名。
经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 本企业的签署方经办人的员工UserId

可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。

注: 若传该字段，则签署方经办人的其他信息（如签署方经办人的姓名、证件号码、手机号码等）将被忽略。
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * 组织机构名称。
如果签署方是企业签署方(approverType = 1 或者 approverType = 3)， 则企业名称必填。

注: 请确认该名称与企业营业执照中注册的名称一致 ; 如果名称中包含英文括号()，请使用中文括号（）代替。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 合同中的签署控件列表，列表中可支持下列多种签署控件,控件的详细定义参考开发者中心的Component结构体
- 个人签名/印章
- 企业印章
- 骑缝章等签署控件
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 签署方经办人的证件类型，支持以下类型
- ID_CARD 居民身份证  (默认值)
- HONGKONG_AND_MACAO 港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)
- OTHER_CARD_TYPE 其他证件

注: 其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * 签署方经办人的证件号码，应符合以下规则
- 居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。
- 港澳居民来往内地通行证号码应为9位字符串，第1位为“C”，第2位为英文字母（但“I”、“O”除外），后7位为阿拉伯数字。
- 港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * 通知签署方经办人的方式,  有以下途径:

- sms:  (默认)短信 
- none: 不通知
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 收据场景设置签署人角色类型, 可以设置如下类型:
- 1:收款人
- 2:开具人
- 3:见证人

注: 收据场景为白名单功能，使用前请联系对接的客户经理沟通。
                     */
                    int64_t m_approverRole;
                    bool m_approverRoleHasBeenSet;

                    /**
                     * 签署意愿确认渠道，默认为WEIXINAPP:人脸识别

注: 将要废弃, 用ApproverSignTypes签署人签署合同时的认证方式代替, 新客户可请用ApproverSignTypes来设置
                     */
                    std::vector<std::string> m_verifyChannel;
                    bool m_verifyChannelHasBeenSet;

                    /**
                     * 签署方在签署合同之前，需要强制阅读合同的时长，可指定为3秒至300秒之间的任意值。

若未指定阅读时间，则会按照合同页数大小计算阅读时间，计算规则如下：

- 合同页数少于等于2页，阅读时间为3秒；
- 合同页数为3到5页，阅读时间为5秒；
- 合同页数大于等于6页，阅读时间为10秒。
                     */
                    int64_t m_preReadTime;
                    bool m_preReadTimeHasBeenSet;

                    /**
                     * 签署人userId，仅支持本企业的员工userid， 可在控制台组织管理处获得

若传此字段 则以userid的信息为主，会覆盖传递过来的签署人基本信息， 包括姓名，手机号，证件类型等信息
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 在企微场景下使用，需设置参数为WEWORKAPP，以表明合同来源于企微。
                     */
                    std::string m_approverSource;
                    bool m_approverSourceHasBeenSet;

                    /**
                     * 在企业微信场景下，表明该合同流程为或签，其最大长度为64位字符串。
所有参与或签的人员均需具备该标识。
注意，在合同中，不同的或签参与人必须保证其CustomApproverTag唯一。
如果或签签署人为本方企业微信参与人，则需要指定ApproverSource参数为WEWORKAPP。
                     */
                    std::string m_customApproverTag;
                    bool m_customApproverTagHasBeenSet;

                    /**
                     * 可以控制签署方在签署合同时能否进行某些操作，例如拒签、转交他人等。
详细操作可以参考开发者中心的ApproverOption结构体。
                     */
                    ApproverOption m_approverOption;
                    bool m_approverOptionHasBeenSet;

                    /**
                     * 指定个人签署方查看合同的校验方式,可以传值如下:

- 1 : （默认）人脸识别,人脸识别后才能合同内容
- 2 : 手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容

注: 

- 如果合同流程设置ApproverVerifyType查看合同的校验方式,    则忽略此签署人的查看合同的校验方式
- 此字段不可传多个校验方式
                     */
                    std::vector<int64_t> m_approverVerifyTypes;
                    bool m_approverVerifyTypesHasBeenSet;

                    /**
                     * 您可以指定签署方签署合同的认证校验方式，可传递以下值：

- 1：人脸认证，需进行人脸识别成功后才能签署合同；
- 2：签署密码，需输入与用户在腾讯电子签设置的密码一致才能校验成功进行合同签署；
- 3：运营商三要素，需到运营商处比对手机号实名信息（名字、手机号、证件号）校验一致才能成功进行合同签署。

注：

- 默认情况下，认证校验方式为人脸认证和签署密码两种形式；
- 您可以传递多种值，表示可用多种认证校验方式。

                     */
                    std::vector<int64_t> m_approverSignTypes;
                    bool m_approverSignTypesHasBeenSet;

                    /**
                     * 
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     */
                    bool m_approverNeedSignReview;
                    bool m_approverNeedSignReviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_APPROVERINFO_H_
