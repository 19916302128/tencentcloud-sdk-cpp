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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSUBSCRIBE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSUBSCRIBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SubscribeReceiver.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据质量规则组订阅信息
                */
                class RuleGroupSubscribe : public AbstractModel
                {
                public:
                    RuleGroupSubscribe();
                    ~RuleGroupSubscribe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleGroupId 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取订阅接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Receivers 订阅接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubscribeReceiver> GetReceivers() const;

                    /**
                     * 设置订阅接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Receivers 订阅接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReceivers(const std::vector<SubscribeReceiver>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取订阅方式 1.邮件email  2.短信sms
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubscribeType 订阅方式 1.邮件email  2.短信sms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> GetSubscribeType() const;

                    /**
                     * 设置订阅方式 1.邮件email  2.短信sms
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubscribeType 订阅方式 1.邮件email  2.短信sms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubscribeType(const std::vector<uint64_t>& _subscribeType);

                    /**
                     * 判断参数 SubscribeType 是否已赋值
                     * @return SubscribeType 是否已赋值
                     */
                    bool SubscribeTypeHasBeenSet() const;

                private:

                    /**
                     * 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 订阅接收人列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubscribeReceiver> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 订阅方式 1.邮件email  2.短信sms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_subscribeType;
                    bool m_subscribeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPSUBSCRIBE_H_
