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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCESTATEINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCESTATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 集群状态抽象后的结构体
                */
                class InstanceStateInfo : public AbstractModel
                {
                public:
                    InstanceStateInfo();
                    ~InstanceStateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群状态，例如：Serving
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceState 集群状态，例如：Serving
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置集群状态，例如：Serving
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceState 集群状态，例如：Serving
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取集群操作创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowCreateTime 集群操作创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlowCreateTime() const;

                    /**
                     * 设置集群操作创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowCreateTime 集群操作创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowCreateTime(const std::string& _flowCreateTime);

                    /**
                     * 判断参数 FlowCreateTime 是否已赋值
                     * @return FlowCreateTime 是否已赋值
                     * 
                     */
                    bool FlowCreateTimeHasBeenSet() const;

                    /**
                     * 获取集群操作名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowName 集群操作名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置集群操作名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowName 集群操作名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取集群操作进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowProgress 集群操作进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFlowProgress() const;

                    /**
                     * 设置集群操作进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowProgress 集群操作进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowProgress(const int64_t& _flowProgress);

                    /**
                     * 判断参数 FlowProgress 是否已赋值
                     * @return FlowProgress 是否已赋值
                     * 
                     */
                    bool FlowProgressHasBeenSet() const;

                    /**
                     * 获取集群状态描述，例如：运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStateDesc 集群状态描述，例如：运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceStateDesc() const;

                    /**
                     * 设置集群状态描述，例如：运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStateDesc 集群状态描述，例如：运行中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStateDesc(const std::string& _instanceStateDesc);

                    /**
                     * 判断参数 InstanceStateDesc 是否已赋值
                     * @return InstanceStateDesc 是否已赋值
                     * 
                     */
                    bool InstanceStateDescHasBeenSet() const;

                    /**
                     * 获取集群流程错误信息，例如：“创建失败，资源不足”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowMsg 集群流程错误信息，例如：“创建失败，资源不足”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlowMsg() const;

                    /**
                     * 设置集群流程错误信息，例如：“创建失败，资源不足”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowMsg 集群流程错误信息，例如：“创建失败，资源不足”
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowMsg(const std::string& _flowMsg);

                    /**
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                    /**
                     * 获取当前步骤的名称，例如：”购买资源中“
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessName 当前步骤的名称，例如：”购买资源中“
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置当前步骤的名称，例如：”购买资源中“
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processName 当前步骤的名称，例如：”购买资源中“
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取请求id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestId 请求id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestId 请求id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取流程的二级名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessSubName 流程的二级名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessSubName() const;

                    /**
                     * 设置流程的二级名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processSubName 流程的二级名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessSubName(const std::string& _processSubName);

                    /**
                     * 判断参数 ProcessSubName 是否已赋值
                     * @return ProcessSubName 是否已赋值
                     * 
                     */
                    bool ProcessSubNameHasBeenSet() const;

                private:

                    /**
                     * 集群状态，例如：Serving
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 集群操作创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowCreateTime;
                    bool m_flowCreateTimeHasBeenSet;

                    /**
                     * 集群操作名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 集群操作进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_flowProgress;
                    bool m_flowProgressHasBeenSet;

                    /**
                     * 集群状态描述，例如：运行中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceStateDesc;
                    bool m_instanceStateDescHasBeenSet;

                    /**
                     * 集群流程错误信息，例如：“创建失败，资源不足”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowMsg;
                    bool m_flowMsgHasBeenSet;

                    /**
                     * 当前步骤的名称，例如：”购买资源中“
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 请求id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 流程的二级名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processSubName;
                    bool m_processSubNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCESTATEINFO_H_
