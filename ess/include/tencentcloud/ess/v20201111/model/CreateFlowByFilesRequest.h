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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWBYFILESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWBYFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/ApproverInfo.h>
#include <tencentcloud/ess/v20201111/model/Component.h>
#include <tencentcloud/ess/v20201111/model/CcInfo.h>
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
                * CreateFlowByFiles请求参数结构体
                */
                class CreateFlowByFilesRequest : public AbstractModel
                {
                public:
                    CreateFlowByFilesRequest();
                    ~CreateFlowByFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。
使用此接口时，必须填写userId。
在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
支持填入集团子公司经办人 userId 代发合同。
                     * @return Operator 执行本接口操作的员工信息。
使用此接口时，必须填写userId。
在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
支持填入集团子公司经办人 userId 代发合同。
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。
使用此接口时，必须填写userId。
在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
支持填入集团子公司经办人 userId 代发合同。
                     * @param _operator 执行本接口操作的员工信息。
使用此接口时，必须填写userId。
在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
支持填入集团子公司经办人 userId 代发合同。
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
                     * 获取合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
                     * @return FlowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
                     * @param _flowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
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
                     * 获取合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。
如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     * @return Approvers 合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。
如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     * 
                     */
                    std::vector<ApproverInfo> GetApprovers() const;

                    /**
                     * 设置合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。
如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     * @param _approvers 合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。
如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     * 
                     */
                    void SetApprovers(const std::vector<ApproverInfo>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取本合同流程需包含的PDF文件资源编号列表，通过UploadFiles接口获取PDF文件资源编号。目前，此接口仅支持单个文件发起。
                     * @return FileIds 本合同流程需包含的PDF文件资源编号列表，通过UploadFiles接口获取PDF文件资源编号。目前，此接口仅支持单个文件发起。
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置本合同流程需包含的PDF文件资源编号列表，通过UploadFiles接口获取PDF文件资源编号。目前，此接口仅支持单个文件发起。
                     * @param _fileIds 本合同流程需包含的PDF文件资源编号列表，通过UploadFiles接口获取PDF文件资源编号。目前，此接口仅支持单个文件发起。
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取合同流程描述信息(可自定义此描述)，最大长度1000个字符。
                     * @return FlowDescription 合同流程描述信息(可自定义此描述)，最大长度1000个字符。
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置合同流程描述信息(可自定义此描述)，最大长度1000个字符。
                     * @param _flowDescription 合同流程描述信息(可自定义此描述)，最大长度1000个字符。
                     * 
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     * 
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     * @return FlowType 合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     * @param _flowType 合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     * 
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     * 
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体
- 单行文本控件
- 多行文本控件
- 勾选框控件
- 数字控件
- 图片控件
- 动态表格等填写控件
                     * @return Components 模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体
- 单行文本控件
- 多行文本控件
- 勾选框控件
- 数字控件
- 图片控件
- 动态表格等填写控件
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体
- 单行文本控件
- 多行文本控件
- 勾选框控件
- 数字控件
- 图片控件
- 动态表格等填写控件
                     * @param _components 模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体
- 单行文本控件
- 多行文本控件
- 勾选框控件
- 数字控件
- 图片控件
- 动态表格等填写控件
                     * 
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。
注:此功能为白名单功能，使用前请联系对接的客户经理沟通。
                     * @return CcInfos 合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。
注:此功能为白名单功能，使用前请联系对接的客户经理沟通。
                     * 
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。
注:此功能为白名单功能，使用前请联系对接的客户经理沟通。
                     * @param _ccInfos 合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。
注:此功能为白名单功能，使用前请联系对接的客户经理沟通。
                     * 
                     */
                    void SetCcInfos(const std::vector<CcInfo>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     * 
                     */
                    bool CcInfosHasBeenSet() const;

                    /**
                     * 获取可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：

- 0：合同发起时通知（默认值）
- 1：签署完成后通知
                     * @return CcNotifyType 可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：

- 0：合同发起时通知（默认值）
- 1：签署完成后通知
                     * 
                     */
                    int64_t GetCcNotifyType() const;

                    /**
                     * 设置可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：

- 0：合同发起时通知（默认值）
- 1：签署完成后通知
                     * @param _ccNotifyType 可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：

- 0：合同发起时通知（默认值）
- 1：签署完成后通知
                     * 
                     */
                    void SetCcNotifyType(const int64_t& _ccNotifyType);

                    /**
                     * 判断参数 CcNotifyType 是否已赋值
                     * @return CcNotifyType 是否已赋值
                     * 
                     */
                    bool CcNotifyTypeHasBeenSet() const;

                    /**
                     * 获取是否为预览模式，取值如下：

false：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。

true：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。
                     * @return NeedPreview 是否为预览模式，取值如下：

false：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。

true：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。
                     * 
                     */
                    bool GetNeedPreview() const;

                    /**
                     * 设置是否为预览模式，取值如下：

false：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。

true：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。
                     * @param _needPreview 是否为预览模式，取值如下：

false：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。

true：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。
                     * 
                     */
                    void SetNeedPreview(const bool& _needPreview);

                    /**
                     * 判断参数 NeedPreview 是否已赋值
                     * @return NeedPreview 是否已赋值
                     * 
                     */
                    bool NeedPreviewHasBeenSet() const;

                    /**
                     * 获取
预览模式下产生的预览链接类型 

- 0 :(默认) 文件流 ,点开后后下载预览的合同PDF文件 

- 1 :H5链接 ,点开后在浏览器中展示合同的样子

注意: 此参数在NeedPreview 为true时有效
                     * @return PreviewType 
预览模式下产生的预览链接类型 

- 0 :(默认) 文件流 ,点开后后下载预览的合同PDF文件 

- 1 :H5链接 ,点开后在浏览器中展示合同的样子

注意: 此参数在NeedPreview 为true时有效
                     * 
                     */
                    int64_t GetPreviewType() const;

                    /**
                     * 设置
预览模式下产生的预览链接类型 

- 0 :(默认) 文件流 ,点开后后下载预览的合同PDF文件 

- 1 :H5链接 ,点开后在浏览器中展示合同的样子

注意: 此参数在NeedPreview 为true时有效
                     * @param _previewType 
预览模式下产生的预览链接类型 

- 0 :(默认) 文件流 ,点开后后下载预览的合同PDF文件 

- 1 :H5链接 ,点开后在浏览器中展示合同的样子

注意: 此参数在NeedPreview 为true时有效
                     * 
                     */
                    void SetPreviewType(const int64_t& _previewType);

                    /**
                     * 判断参数 PreviewType 是否已赋值
                     * @return PreviewType 是否已赋值
                     * 
                     */
                    bool PreviewTypeHasBeenSet() const;

                    /**
                     * 获取合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     * @return Deadline 合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     * @param _deadline 合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取合同到期提醒时间，为Unix标准时间戳（秒）格式，支持的范围是从发起时间开始到后10年内。
到达提醒时间后，腾讯电子签会短信通知发起方企业合同提醒，可用于处理合同到期事务，如合同续签等事宜。
                     * @return RemindedOn 合同到期提醒时间，为Unix标准时间戳（秒）格式，支持的范围是从发起时间开始到后10年内。
到达提醒时间后，腾讯电子签会短信通知发起方企业合同提醒，可用于处理合同到期事务，如合同续签等事宜。
                     * 
                     */
                    int64_t GetRemindedOn() const;

                    /**
                     * 设置合同到期提醒时间，为Unix标准时间戳（秒）格式，支持的范围是从发起时间开始到后10年内。
到达提醒时间后，腾讯电子签会短信通知发起方企业合同提醒，可用于处理合同到期事务，如合同续签等事宜。
                     * @param _remindedOn 合同到期提醒时间，为Unix标准时间戳（秒）格式，支持的范围是从发起时间开始到后10年内。
到达提醒时间后，腾讯电子签会短信通知发起方企业合同提醒，可用于处理合同到期事务，如合同续签等事宜。
                     * 
                     */
                    void SetRemindedOn(const int64_t& _remindedOn);

                    /**
                     * 判断参数 RemindedOn 是否已赋值
                     * @return RemindedOn 是否已赋值
                     * 
                     */
                    bool RemindedOnHasBeenSet() const;

                    /**
                     * 获取
合同流程的签署顺序类型：
- false：(默认)有序签署, 本合同多个参与人需要依次签署
- true：无序签署, 本合同多个参与人没有先后签署限制
                     * @return Unordered 
合同流程的签署顺序类型：
- false：(默认)有序签署, 本合同多个参与人需要依次签署
- true：无序签署, 本合同多个参与人没有先后签署限制
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置
合同流程的签署顺序类型：
- false：(默认)有序签署, 本合同多个参与人需要依次签署
- true：无序签署, 本合同多个参与人没有先后签署限制
                     * @param _unordered 
合同流程的签署顺序类型：
- false：(默认)有序签署, 本合同多个参与人需要依次签署
- true：无序签署, 本合同多个参与人没有先后签署限制
                     * 
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     * 
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：

- {合同名称}
- {发起方企业}
- {发起方姓名}
- {签署方N企业}
- {签署方N姓名}

其中，N表示签署方的编号，从1开始，不能超过签署人的数量。

例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：
合同名称:`合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}`

则小程序中列表页展示此合同为以下样子
```
合同名称：租房合同 
发起方：腾讯公司(张三) 
签署方：李四
```
                     * @return CustomShowMap 您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：

- {合同名称}
- {发起方企业}
- {发起方姓名}
- {签署方N企业}
- {签署方N姓名}

其中，N表示签署方的编号，从1开始，不能超过签署人的数量。

例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：
合同名称:`合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}`

则小程序中列表页展示此合同为以下样子
```
合同名称：租房合同 
发起方：腾讯公司(张三) 
签署方：李四
```
                     * 
                     */
                    std::string GetCustomShowMap() const;

                    /**
                     * 设置您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：

- {合同名称}
- {发起方企业}
- {发起方姓名}
- {签署方N企业}
- {签署方N姓名}

其中，N表示签署方的编号，从1开始，不能超过签署人的数量。

例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：
合同名称:`合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}`

则小程序中列表页展示此合同为以下样子
```
合同名称：租房合同 
发起方：腾讯公司(张三) 
签署方：李四
```
                     * @param _customShowMap 您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：

- {合同名称}
- {发起方企业}
- {发起方姓名}
- {签署方N企业}
- {签署方N姓名}

其中，N表示签署方的编号，从1开始，不能超过签署人的数量。

例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：
合同名称:`合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}`

则小程序中列表页展示此合同为以下样子
```
合同名称：租房合同 
发起方：腾讯公司(张三) 
签署方：李四
```
                     * 
                     */
                    void SetCustomShowMap(const std::string& _customShowMap);

                    /**
                     * 判断参数 CustomShowMap 是否已赋值
                     * @return CustomShowMap 是否已赋值
                     * 
                     */
                    bool CustomShowMapHasBeenSet() const;

                    /**
                     * 获取
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     * @return NeedSignReview 
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     * @param _needSignReview 
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     * 
                     */
                    void SetNeedSignReview(const bool& _needSignReview);

                    /**
                     * 判断参数 NeedSignReview 是否已赋值
                     * @return NeedSignReview 是否已赋值
                     * 
                     */
                    bool NeedSignReviewHasBeenSet() const;

                    /**
                     * 获取调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的"回调通知"模块。
                     * @return UserData 调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的"回调通知"模块。
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的"回调通知"模块。
                     * @param _userData 调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的"回调通知"模块。
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取指定个人签署方查看合同的校验方式

- VerifyCheck :（默认）人脸识别,人脸识别后才能合同内容
- MobileCheck:  手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容
                     * @return ApproverVerifyType 指定个人签署方查看合同的校验方式

- VerifyCheck :（默认）人脸识别,人脸识别后才能合同内容
- MobileCheck:  手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容
                     * 
                     */
                    std::string GetApproverVerifyType() const;

                    /**
                     * 设置指定个人签署方查看合同的校验方式

- VerifyCheck :（默认）人脸识别,人脸识别后才能合同内容
- MobileCheck:  手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容
                     * @param _approverVerifyType 指定个人签署方查看合同的校验方式

- VerifyCheck :（默认）人脸识别,人脸识别后才能合同内容
- MobileCheck:  手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容
                     * 
                     */
                    void SetApproverVerifyType(const std::string& _approverVerifyType);

                    /**
                     * 判断参数 ApproverVerifyType 是否已赋值
                     * @return ApproverVerifyType 是否已赋值
                     * 
                     */
                    bool ApproverVerifyTypeHasBeenSet() const;

                    /**
                     * 获取签署方签署控件（印章/签名等）的生成方式：

- 0：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。
- 1：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。
                     * @return SignBeanTag 签署方签署控件（印章/签名等）的生成方式：

- 0：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。
- 1：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。
                     * 
                     */
                    int64_t GetSignBeanTag() const;

                    /**
                     * 设置签署方签署控件（印章/签名等）的生成方式：

- 0：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。
- 1：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。
                     * @param _signBeanTag 签署方签署控件（印章/签名等）的生成方式：

- 0：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。
- 1：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。
                     * 
                     */
                    void SetSignBeanTag(const int64_t& _signBeanTag);

                    /**
                     * 判断参数 SignBeanTag 是否已赋值
                     * @return SignBeanTag 是否已赋值
                     * 
                     */
                    bool SignBeanTagHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 获取个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：

- E_PRESCRIPTION_AUTO_SIGN：处方单（医疗自动签） 

注: 个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。
                     * @return AutoSignScene 个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：

- E_PRESCRIPTION_AUTO_SIGN：处方单（医疗自动签） 

注: 个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。
                     * 
                     */
                    std::string GetAutoSignScene() const;

                    /**
                     * 设置个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：

- E_PRESCRIPTION_AUTO_SIGN：处方单（医疗自动签） 

注: 个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。
                     * @param _autoSignScene 个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：

- E_PRESCRIPTION_AUTO_SIGN：处方单（医疗自动签） 

注: 个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。
                     * 
                     */
                    void SetAutoSignScene(const std::string& _autoSignScene);

                    /**
                     * 判断参数 AutoSignScene 是否已赋值
                     * @return AutoSignScene 是否已赋值
                     * 
                     */
                    bool AutoSignSceneHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
使用此接口时，必须填写userId。
在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。
支持填入集团子公司经办人 userId 代发合同。
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 合同流程的参与方列表，最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，具体定义可以参考开发者中心的ApproverInfo结构体。
如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序，请确保列表中参与人的顺序符合实际签署顺序。
                     */
                    std::vector<ApproverInfo> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 本合同流程需包含的PDF文件资源编号列表，通过UploadFiles接口获取PDF文件资源编号。目前，此接口仅支持单个文件发起。
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 合同流程描述信息(可自定义此描述)，最大长度1000个字符。
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体
- 单行文本控件
- 多行文本控件
- 勾选框控件
- 数字控件
- 图片控件
- 动态表格等填写控件
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。
注:此功能为白名单功能，使用前请联系对接的客户经理沟通。
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：

- 0：合同发起时通知（默认值）
- 1：签署完成后通知
                     */
                    int64_t m_ccNotifyType;
                    bool m_ccNotifyTypeHasBeenSet;

                    /**
                     * 是否为预览模式，取值如下：

false：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。

true：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。
                     */
                    bool m_needPreview;
                    bool m_needPreviewHasBeenSet;

                    /**
                     * 
预览模式下产生的预览链接类型 

- 0 :(默认) 文件流 ,点开后后下载预览的合同PDF文件 

- 1 :H5链接 ,点开后在浏览器中展示合同的样子

注意: 此参数在NeedPreview 为true时有效
                     */
                    int64_t m_previewType;
                    bool m_previewTypeHasBeenSet;

                    /**
                     * 合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。
如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 合同到期提醒时间，为Unix标准时间戳（秒）格式，支持的范围是从发起时间开始到后10年内。
到达提醒时间后，腾讯电子签会短信通知发起方企业合同提醒，可用于处理合同到期事务，如合同续签等事宜。
                     */
                    int64_t m_remindedOn;
                    bool m_remindedOnHasBeenSet;

                    /**
                     * 
合同流程的签署顺序类型：
- false：(默认)有序签署, 本合同多个参与人需要依次签署
- true：无序签署, 本合同多个参与人没有先后签署限制
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：

- {合同名称}
- {发起方企业}
- {发起方姓名}
- {签署方N企业}
- {签署方N姓名}

其中，N表示签署方的编号，从1开始，不能超过签署人的数量。

例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：
合同名称:`合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}`

则小程序中列表页展示此合同为以下样子
```
合同名称：租房合同 
发起方：腾讯公司(张三) 
签署方：李四
```
                     */
                    std::string m_customShowMap;
                    bool m_customShowMapHasBeenSet;

                    /**
                     * 
发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：

- false：（默认）不需要审批，直接签署。
- true：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。

企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果

- 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。
- 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。

注：此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * 调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 20480长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
回调的相关说明可参考开发者中心的"回调通知"模块。
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 指定个人签署方查看合同的校验方式

- VerifyCheck :（默认）人脸识别,人脸识别后才能合同内容
- MobileCheck:  手机号验证, 用户手机号和参与方手机号(ApproverMobile)相同即可查看合同内容
                     */
                    std::string m_approverVerifyType;
                    bool m_approverVerifyTypeHasBeenSet;

                    /**
                     * 签署方签署控件（印章/签名等）的生成方式：

- 0：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。
- 1：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。
                     */
                    int64_t m_signBeanTag;
                    bool m_signBeanTagHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：

- E_PRESCRIPTION_AUTO_SIGN：处方单（医疗自动签） 

注: 个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。
                     */
                    std::string m_autoSignScene;
                    bool m_autoSignSceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWBYFILESREQUEST_H_
