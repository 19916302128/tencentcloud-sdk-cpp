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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 扫描任务详情
                */
                class ScanTaskInfo : public AbstractModel
                {
                public:
                    ScanTaskInfo();
                    ~ScanTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务日志Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务日志Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务日志Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskId 任务日志Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务日志名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务日志名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务日志名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskName 任务日志名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务状态码：1等待开始  2正在扫描  3扫描出错 4扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态码：1等待开始  2正在扫描  3扫描出错 4扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态码：1等待开始  2正在扫描  3扫描出错 4扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 任务状态码：1等待开始  2正在扫描  3扫描出错 4扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Progress 任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Progress 任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取对应的展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskTime 对应的展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskTime() const;

                    /**
                     * 设置对应的展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskTime 对应的展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskTime(const std::string& _taskTime);

                    /**
                     * 判断参数 TaskTime 是否已赋值
                     * @return TaskTime 是否已赋值
                     */
                    bool TaskTimeHasBeenSet() const;

                    /**
                     * 获取报表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportId 报表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置报表id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReportId 报表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReportId(const std::string& _reportId);

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     */
                    bool ReportIdHasBeenSet() const;

                    /**
                     * 获取报表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportName 报表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReportName() const;

                    /**
                     * 设置报表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReportName 报表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReportName(const std::string& _reportName);

                    /**
                     * 判断参数 ReportName 是否已赋值
                     * @return ReportName 是否已赋值
                     */
                    bool ReportNameHasBeenSet() const;

                    /**
                     * 获取扫描计划，0-周期任务,1-立即扫描,2-定时扫描,3-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanPlan 扫描计划，0-周期任务,1-立即扫描,2-定时扫描,3-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetScanPlan() const;

                    /**
                     * 设置扫描计划，0-周期任务,1-立即扫描,2-定时扫描,3-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScanPlan 扫描计划，0-周期任务,1-立即扫描,2-定时扫描,3-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScanPlan(const int64_t& _scanPlan);

                    /**
                     * 判断参数 ScanPlan 是否已赋值
                     * @return ScanPlan 是否已赋值
                     */
                    bool ScanPlanHasBeenSet() const;

                    /**
                     * 获取关联的资产数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetCount 关联的资产数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置关联的资产数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AssetCount 关联的资产数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppId APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户主账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UIN 用户主账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUIN() const;

                    /**
                     * 设置用户主账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UIN 用户主账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUIN(const std::string& _uIN);

                    /**
                     * 判断参数 UIN 是否已赋值
                     * @return UIN 是否已赋值
                     */
                    bool UINHasBeenSet() const;

                    /**
                     * 获取用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserName 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * 任务日志Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务日志名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务状态码：1等待开始  2正在扫描  3扫描出错 4扫描完成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 对应的展示时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * 报表id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * 报表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * 扫描计划，0-周期任务,1-立即扫描,2-定时扫描,3-自定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scanPlan;
                    bool m_scanPlanHasBeenSet;

                    /**
                     * 关联的资产数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户主账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uIN;
                    bool m_uINHasBeenSet;

                    /**
                     * 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANTASKINFO_H_
