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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/OrganizationInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateFlowSignUrl请求参数结构体
                */
                class ChannelCreateFlowSignUrlRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowSignUrlRequest();
                    ~ChannelCreateFlowSignUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填
                     * @param _agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填
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
                     * 获取流程编号
                     * @return FlowId 流程编号
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程编号
                     * @param _flowId 流程编号
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
                     * 获取流程签署人，其中Name和Mobile必传，其他可不传，ApproverType目前只支持PERSON类型的签署人，如果不传默认为该值。还需注意签署人只能有手写签名和时间类型的签署控件，其他类型的填写控件和签署控件暂时都未支持。
                     * @return FlowApproverInfos 流程签署人，其中Name和Mobile必传，其他可不传，ApproverType目前只支持PERSON类型的签署人，如果不传默认为该值。还需注意签署人只能有手写签名和时间类型的签署控件，其他类型的填写控件和签署控件暂时都未支持。
                     * 
                     */
                    std::vector<FlowApproverInfo> GetFlowApproverInfos() const;

                    /**
                     * 设置流程签署人，其中Name和Mobile必传，其他可不传，ApproverType目前只支持PERSON类型的签署人，如果不传默认为该值。还需注意签署人只能有手写签名和时间类型的签署控件，其他类型的填写控件和签署控件暂时都未支持。
                     * @param _flowApproverInfos 流程签署人，其中Name和Mobile必传，其他可不传，ApproverType目前只支持PERSON类型的签署人，如果不传默认为该值。还需注意签署人只能有手写签名和时间类型的签署控件，其他类型的填写控件和签署控件暂时都未支持。
                     * 
                     */
                    void SetFlowApproverInfos(const std::vector<FlowApproverInfo>& _flowApproverInfos);

                    /**
                     * 判断参数 FlowApproverInfos 是否已赋值
                     * @return FlowApproverInfos 是否已赋值
                     * 
                     */
                    bool FlowApproverInfosHasBeenSet() const;

                    /**
                     * 获取用户信息，暂未开放
                     * @return Operator 用户信息，暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置用户信息，暂未开放
                     * @param _operator 用户信息，暂未开放
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取机构信息，暂未开放
                     * @return Organization 机构信息，暂未开放
                     * @deprecated
                     */
                    OrganizationInfo GetOrganization() const;

                    /**
                     * 设置机构信息，暂未开放
                     * @param _organization 机构信息，暂未开放
                     * @deprecated
                     */
                    void SetOrganization(const OrganizationInfo& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * @deprecated
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取签署完之后的H5页面的跳转链接，此链接支持http://和https://，最大长度1000个字符。
                     * @return JumpUrl 签署完之后的H5页面的跳转链接，此链接支持http://和https://，最大长度1000个字符。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完之后的H5页面的跳转链接，此链接支持http://和https://，最大长度1000个字符。
                     * @param _jumpUrl 签署完之后的H5页面的跳转链接，此链接支持http://和https://，最大长度1000个字符。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 流程编号
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 流程签署人，其中Name和Mobile必传，其他可不传，ApproverType目前只支持PERSON类型的签署人，如果不传默认为该值。还需注意签署人只能有手写签名和时间类型的签署控件，其他类型的填写控件和签署控件暂时都未支持。
                     */
                    std::vector<FlowApproverInfo> m_flowApproverInfos;
                    bool m_flowApproverInfosHasBeenSet;

                    /**
                     * 用户信息，暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 机构信息，暂未开放
                     */
                    OrganizationInfo m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * 签署完之后的H5页面的跳转链接，此链接支持http://和https://，最大长度1000个字符。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWSIGNURLREQUEST_H_
