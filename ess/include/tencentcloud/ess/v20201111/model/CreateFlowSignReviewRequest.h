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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWSIGNREVIEWREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWSIGNREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowSignReview请求参数结构体
                */
                class CreateFlowSignReviewRequest : public AbstractModel
                {
                public:
                    CreateFlowSignReviewRequest();
                    ~CreateFlowSignReviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，userId 必填
                     * @return Operator 调用方用户信息，userId 必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填
                     * @param _operator 调用方用户信息，userId 必填
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取签署流程编号
                     * @return FlowId 签署流程编号
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置签署流程编号
                     * @param _flowId 签署流程编号
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取企业内部审核结果
PASS: 通过 
REJECT: 拒绝
                     * @return ReviewType 企业内部审核结果
PASS: 通过 
REJECT: 拒绝
                     * 
                     */
                    std::string GetReviewType() const;

                    /**
                     * 设置企业内部审核结果
PASS: 通过 
REJECT: 拒绝
                     * @param _reviewType 企业内部审核结果
PASS: 通过 
REJECT: 拒绝
                     * 
                     */
                    void SetReviewType(const std::string& _reviewType);

                    /**
                     * 判断参数 ReviewType 是否已赋值
                     * @return ReviewType 是否已赋值
                     * 
                     */
                    bool ReviewTypeHasBeenSet() const;

                    /**
                     * 获取审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     * @return ReviewMessage 审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     * 
                     */
                    std::string GetReviewMessage() const;

                    /**
                     * 设置审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     * @param _reviewMessage 审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     * 
                     */
                    void SetReviewMessage(const std::string& _reviewMessage);

                    /**
                     * 判断参数 ReviewMessage 是否已赋值
                     * @return ReviewMessage 是否已赋值
                     * 
                     */
                    bool ReviewMessageHasBeenSet() const;

                    /**
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param _agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取审核签署节点使用 非必填 如果填写则审核该签署节点。给个人审核时必填。
                     * @return RecipientId 审核签署节点使用 非必填 如果填写则审核该签署节点。给个人审核时必填。
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置审核签署节点使用 非必填 如果填写则审核该签署节点。给个人审核时必填。
                     * @param _recipientId 审核签署节点使用 非必填 如果填写则审核该签署节点。给个人审核时必填。
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
                     * 获取操作类型：（接口通过该字段区分操作类型）

SignReview:签署审核
CreateReview:发起审核

默认：SignReview；SignReview:签署审核

该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程
若发起个人审核，则指定该字段为：SignReview（注意，给个人审核时，需联系客户经理开白使用）
                     * @return OperateType 操作类型：（接口通过该字段区分操作类型）

SignReview:签署审核
CreateReview:发起审核

默认：SignReview；SignReview:签署审核

该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程
若发起个人审核，则指定该字段为：SignReview（注意，给个人审核时，需联系客户经理开白使用）
                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置操作类型：（接口通过该字段区分操作类型）

SignReview:签署审核
CreateReview:发起审核

默认：SignReview；SignReview:签署审核

该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程
若发起个人审核，则指定该字段为：SignReview（注意，给个人审核时，需联系客户经理开白使用）
                     * @param _operateType 操作类型：（接口通过该字段区分操作类型）

SignReview:签署审核
CreateReview:发起审核

默认：SignReview；SignReview:签署审核

该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程
若发起个人审核，则指定该字段为：SignReview（注意，给个人审核时，需联系客户经理开白使用）
                     * 
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，userId 必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 签署流程编号
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 企业内部审核结果
PASS: 通过 
REJECT: 拒绝
                     */
                    std::string m_reviewType;
                    bool m_reviewTypeHasBeenSet;

                    /**
                     * 审核原因 
当ReviewType 是REJECT 时此字段必填,字符串长度不超过200
                     */
                    std::string m_reviewMessage;
                    bool m_reviewMessageHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 审核签署节点使用 非必填 如果填写则审核该签署节点。给个人审核时必填。
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 操作类型：（接口通过该字段区分操作类型）

SignReview:签署审核
CreateReview:发起审核

默认：SignReview；SignReview:签署审核

该字段不传或者为空，则默认为SignReview签署审核，走签署审核流程
若发起个人审核，则指定该字段为：SignReview（注意，给个人审核时，需联系客户经理开白使用）
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWSIGNREVIEWREQUEST_H_
