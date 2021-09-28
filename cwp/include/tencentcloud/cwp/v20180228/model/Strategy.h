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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_STRATEGY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_STRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 基线安全用户策略信息
                */
                class Strategy : public AbstractModel
                {
                public:
                    Strategy();
                    ~Strategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyName 策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StrategyName 策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StrategyId 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取基线检测项总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleCount 基线检测项总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置基线检测项总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleCount 基线检测项总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostCount 主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostCount 主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取扫描周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanCycle 扫描周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetScanCycle() const;

                    /**
                     * 设置扫描周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScanCycle 扫描周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScanCycle(const uint64_t& _scanCycle);

                    /**
                     * 判断参数 ScanCycle 是否已赋值
                     * @return ScanCycle 是否已赋值
                     */
                    bool ScanCycleHasBeenSet() const;

                    /**
                     * 获取扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanAt 扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScanAt() const;

                    /**
                     * 设置扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScanAt 扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScanAt(const std::string& _scanAt);

                    /**
                     * 判断参数 ScanAt 是否已赋值
                     * @return ScanAt 是否已赋值
                     */
                    bool ScanAtHasBeenSet() const;

                    /**
                     * 获取是否可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否可用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置是否可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Enabled 是否可用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取通过率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassRate 通过率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetPassRate() const;

                    /**
                     * 设置通过率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PassRate 通过率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPassRate(const uint64_t& _passRate);

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryIds 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCategoryIds() const;

                    /**
                     * 设置基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CategoryIds 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCategoryIds(const std::string& _categoryIds);

                    /**
                     * 判断参数 CategoryIds 是否已赋值
                     * @return CategoryIds 是否已赋值
                     */
                    bool CategoryIdsHasBeenSet() const;

                    /**
                     * 获取是否默认策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDefault 是否默认策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsDefault() const;

                    /**
                     * 设置是否默认策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsDefault 是否默认策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsDefault(const uint64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * 策略名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 策略id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 基线检测项总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * 主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 扫描周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scanCycle;
                    bool m_scanCycleHasBeenSet;

                    /**
                     * 扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scanAt;
                    bool m_scanAtHasBeenSet;

                    /**
                     * 是否可用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 通过率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_categoryIds;
                    bool m_categoryIdsHasBeenSet;

                    /**
                     * 是否默认策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_STRATEGY_H_