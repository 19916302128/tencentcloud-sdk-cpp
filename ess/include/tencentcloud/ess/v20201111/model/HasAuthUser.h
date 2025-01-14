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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_HASAUTHUSER_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_HASAUTHUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 被授权用户信息
                */
                class HasAuthUser : public AbstractModel
                {
                public:
                    HasAuthUser();
                    ~HasAuthUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 用户id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户归属
MainOrg：主企业
CurrentOrg：当前企业
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BelongTo 用户归属
MainOrg：主企业
CurrentOrg：当前企业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBelongTo() const;

                    /**
                     * 设置用户归属
MainOrg：主企业
CurrentOrg：当前企业
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _belongTo 用户归属
MainOrg：主企业
CurrentOrg：当前企业
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBelongTo(const std::string& _belongTo);

                    /**
                     * 判断参数 BelongTo 是否已赋值
                     * @return BelongTo 是否已赋值
                     * 
                     */
                    bool BelongToHasBeenSet() const;

                private:

                    /**
                     * 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户归属
MainOrg：主企业
CurrentOrg：当前企业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_belongTo;
                    bool m_belongToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_HASAUTHUSER_H_
