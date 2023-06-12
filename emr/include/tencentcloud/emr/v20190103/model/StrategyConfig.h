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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STRATEGYCONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STRATEGYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 重启/停止/启动服务/监控的配置
                */
                class StrategyConfig : public AbstractModel
                {
                public:
                    StrategyConfig();
                    ~StrategyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0:关闭滚动重启
1:开启滚动启动
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RollingRestartSwitch 0:关闭滚动重启
1:开启滚动启动
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRollingRestartSwitch() const;

                    /**
                     * 设置0:关闭滚动重启
1:开启滚动启动
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RollingRestartSwitch 0:关闭滚动重启
1:开启滚动启动
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRollingRestartSwitch(const int64_t& _rollingRestartSwitch);

                    /**
                     * 判断参数 RollingRestartSwitch 是否已赋值
                     * @return RollingRestartSwitch 是否已赋值
                     */
                    bool RollingRestartSwitchHasBeenSet() const;

                    /**
                     * 获取滚动重启每批次的重启数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchSize 滚动重启每批次的重启数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBatchSize() const;

                    /**
                     * 设置滚动重启每批次的重启数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BatchSize 滚动重启每批次的重启数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBatchSize(const int64_t& _batchSize);

                    /**
                     * 判断参数 BatchSize 是否已赋值
                     * @return BatchSize 是否已赋值
                     */
                    bool BatchSizeHasBeenSet() const;

                    /**
                     * 获取滚动重启每批停止等待时间 ,最大重启台数为 99999 台，最大间隔为 5 分钟 单位是秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeWait 滚动重启每批停止等待时间 ,最大重启台数为 99999 台，最大间隔为 5 分钟 单位是秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTimeWait() const;

                    /**
                     * 设置滚动重启每批停止等待时间 ,最大重启台数为 99999 台，最大间隔为 5 分钟 单位是秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeWait 滚动重启每批停止等待时间 ,最大重启台数为 99999 台，最大间隔为 5 分钟 单位是秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeWait(const int64_t& _timeWait);

                    /**
                     * 判断参数 TimeWait 是否已赋值
                     * @return TimeWait 是否已赋值
                     */
                    bool TimeWaitHasBeenSet() const;

                    /**
                     * 获取操作失败处理策略，0:失败阻塞, 1:失败自动跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealOnFail 操作失败处理策略，0:失败阻塞, 1:失败自动跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDealOnFail() const;

                    /**
                     * 设置操作失败处理策略，0:失败阻塞, 1:失败自动跳过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DealOnFail 操作失败处理策略，0:失败阻塞, 1:失败自动跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDealOnFail(const int64_t& _dealOnFail);

                    /**
                     * 判断参数 DealOnFail 是否已赋值
                     * @return DealOnFail 是否已赋值
                     */
                    bool DealOnFailHasBeenSet() const;

                private:

                    /**
                     * 0:关闭滚动重启
1:开启滚动启动
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rollingRestartSwitch;
                    bool m_rollingRestartSwitchHasBeenSet;

                    /**
                     * 滚动重启每批次的重启数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * 滚动重启每批停止等待时间 ,最大重启台数为 99999 台，最大间隔为 5 分钟 单位是秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeWait;
                    bool m_timeWaitHasBeenSet;

                    /**
                     * 操作失败处理策略，0:失败阻塞, 1:失败自动跳过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dealOnFail;
                    bool m_dealOnFailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STRATEGYCONFIG_H_
