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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYVUL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYVUL_H_

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
                * 应急漏洞信息
                */
                class EmergencyVul : public AbstractModel
                {
                public:
                    EmergencyVul();
                    ~EmergencyVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param VulId 漏洞id
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取漏洞级别
                     * @return Level 漏洞级别
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置漏洞级别
                     * @param Level 漏洞级别
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param VulName 漏洞名称
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取发布日期
                     * @return PublishDate 发布日期
                     */
                    std::string GetPublishDate() const;

                    /**
                     * 设置发布日期
                     * @param PublishDate 发布日期
                     */
                    void SetPublishDate(const std::string& _publishDate);

                    /**
                     * 判断参数 PublishDate 是否已赋值
                     * @return PublishDate 是否已赋值
                     */
                    bool PublishDateHasBeenSet() const;

                    /**
                     * 获取漏洞分类
                     * @return Category 漏洞分类
                     */
                    uint64_t GetCategory() const;

                    /**
                     * 设置漏洞分类
                     * @param Category 漏洞分类
                     */
                    void SetCategory(const uint64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     * @return Status 漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     * @param Status 漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最后扫描时间
                     * @return LastScanTime 最后扫描时间
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后扫描时间
                     * @param LastScanTime 最后扫描时间
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取扫描进度
                     * @return Progress 扫描进度
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置扫描进度
                     * @param Progress 扫描进度
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CveId cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CveId cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvssScore CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetCvssScore() const;

                    /**
                     * 设置CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CvssScore CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCvssScore(const double& _cvssScore);

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取漏洞标签 多个逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 漏洞标签 多个逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLabels() const;

                    /**
                     * 设置漏洞标签 多个逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Labels 漏洞标签 多个逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLabels(const std::string& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取影响机器数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostCount 影响机器数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置影响机器数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostCount 影响机器数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取是否支持防御， 0:不支持 1:支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportDefense 是否支持防御， 0:不支持 1:支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsSupportDefense() const;

                    /**
                     * 设置是否支持防御， 0:不支持 1:支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsSupportDefense 是否支持防御， 0:不支持 1:支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsSupportDefense(const uint64_t& _isSupportDefense);

                    /**
                     * 判断参数 IsSupportDefense 是否已赋值
                     * @return IsSupportDefense 是否已赋值
                     */
                    bool IsSupportDefenseHasBeenSet() const;

                    /**
                     * 获取已防御的攻击次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefenseAttackCount 已防御的攻击次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDefenseAttackCount() const;

                    /**
                     * 设置已防御的攻击次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DefenseAttackCount 已防御的攻击次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDefenseAttackCount(const uint64_t& _defenseAttackCount);

                    /**
                     * 判断参数 DefenseAttackCount 是否已赋值
                     * @return DefenseAttackCount 是否已赋值
                     */
                    bool DefenseAttackCountHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞级别
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 发布日期
                     */
                    std::string m_publishDate;
                    bool m_publishDateHasBeenSet;

                    /**
                     * 漏洞分类
                     */
                    uint64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 漏洞状态 0未检测 1有风险 ，2无风险 ，3 检查中展示progress
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最后扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 扫描进度
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * cve编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * CVSS评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * 漏洞标签 多个逗号分割
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 影响机器数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 是否支持防御， 0:不支持 1:支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isSupportDefense;
                    bool m_isSupportDefenseHasBeenSet;

                    /**
                     * 已防御的攻击次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_defenseAttackCount;
                    bool m_defenseAttackCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYVUL_H_
