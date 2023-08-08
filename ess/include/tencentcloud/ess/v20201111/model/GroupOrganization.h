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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_GROUPORGANIZATION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_GROUPORGANIZATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Admin.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 成员企业信息
                */
                class GroupOrganization : public AbstractModel
                {
                public:
                    GroupOrganization();
                    ~GroupOrganization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成员企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 成员企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置成员企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 成员企业名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取成员企业别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 成员企业别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置成员企业别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 成员企业别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取成员企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationId 成员企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置成员企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationId 成员企业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取更新时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否为集团主企业
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMainOrganization 是否为集团主企业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsMainOrganization() const;

                    /**
                     * 设置是否为集团主企业
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isMainOrganization 是否为集团主企业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsMainOrganization(const bool& _isMainOrganization);

                    /**
                     * 判断参数 IsMainOrganization 是否已赋值
                     * @return IsMainOrganization 是否已赋值
                     * 
                     */
                    bool IsMainOrganizationHasBeenSet() const;

                    /**
                     * 获取企业社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCardNumber 企业社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置企业社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idCardNumber 企业社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取企业超管信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdminInfo 企业超管信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Admin GetAdminInfo() const;

                    /**
                     * 设置企业超管信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adminInfo 企业超管信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdminInfo(const Admin& _adminInfo);

                    /**
                     * 判断参数 AdminInfo 是否已赋值
                     * @return AdminInfo 是否已赋值
                     * 
                     */
                    bool AdminInfoHasBeenSet() const;

                    /**
                     * 获取企业许可证
注意：此字段可能返回 null，表示取不到有效值。
                     * @return License 企业许可证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置企业许可证
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _license 企业许可证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取企业许可证过期时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseExpireTime 企业许可证过期时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLicenseExpireTime() const;

                    /**
                     * 设置企业许可证过期时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licenseExpireTime 企业许可证过期时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicenseExpireTime(const uint64_t& _licenseExpireTime);

                    /**
                     * 判断参数 LicenseExpireTime 是否已赋值
                     * @return LicenseExpireTime 是否已赋值
                     * 
                     */
                    bool LicenseExpireTimeHasBeenSet() const;

                    /**
                     * 获取成员企业加入集团时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JoinTime 成员企业加入集团时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetJoinTime() const;

                    /**
                     * 设置成员企业加入集团时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _joinTime 成员企业加入集团时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJoinTime(const uint64_t& _joinTime);

                    /**
                     * 判断参数 JoinTime 是否已赋值
                     * @return JoinTime 是否已赋值
                     * 
                     */
                    bool JoinTimeHasBeenSet() const;

                    /**
                     * 获取是否使用自建审批流引擎（即不是企微审批流引擎），true-是，false-否
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowEngineEnable 是否使用自建审批流引擎（即不是企微审批流引擎），true-是，false-否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetFlowEngineEnable() const;

                    /**
                     * 设置是否使用自建审批流引擎（即不是企微审批流引擎），true-是，false-否
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowEngineEnable 是否使用自建审批流引擎（即不是企微审批流引擎），true-是，false-否
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowEngineEnable(const bool& _flowEngineEnable);

                    /**
                     * 判断参数 FlowEngineEnable 是否已赋值
                     * @return FlowEngineEnable 是否已赋值
                     * 
                     */
                    bool FlowEngineEnableHasBeenSet() const;

                private:

                    /**
                     * 成员企业名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 成员企业别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 成员企业id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 更新时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否为集团主企业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isMainOrganization;
                    bool m_isMainOrganizationHasBeenSet;

                    /**
                     * 企业社会信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 企业超管信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Admin m_adminInfo;
                    bool m_adminInfoHasBeenSet;

                    /**
                     * 企业许可证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 企业许可证过期时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_licenseExpireTime;
                    bool m_licenseExpireTimeHasBeenSet;

                    /**
                     * 成员企业加入集团时间，时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_joinTime;
                    bool m_joinTimeHasBeenSet;

                    /**
                     * 是否使用自建审批流引擎（即不是企微审批流引擎），true-是，false-否
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_flowEngineEnable;
                    bool m_flowEngineEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_GROUPORGANIZATION_H_
