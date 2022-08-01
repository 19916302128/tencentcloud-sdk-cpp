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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BAASPACKAGEINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BAASPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 新套餐套餐详情
                */
                class BaasPackageInfo : public AbstractModel
                {
                public:
                    BaasPackageInfo();
                    ~BaasPackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DAU产品套餐ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName DAU产品套餐ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置DAU产品套餐ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageName DAU产品套餐ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取DAU套餐中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageTitle DAU套餐中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageTitle() const;

                    /**
                     * 设置DAU套餐中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageTitle DAU套餐中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageTitle(const std::string& _packageTitle);

                    /**
                     * 判断参数 PackageTitle 是否已赋值
                     * @return PackageTitle 是否已赋值
                     */
                    bool PackageTitleHasBeenSet() const;

                    /**
                     * 获取套餐分组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 套餐分组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置套餐分组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupName 套餐分组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取套餐分组中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupTitle 套餐分组中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupTitle() const;

                    /**
                     * 设置套餐分组中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupTitle 套餐分组中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupTitle(const std::string& _groupTitle);

                    /**
                     * 判断参数 GroupTitle 是否已赋值
                     * @return GroupTitle 是否已赋值
                     */
                    bool GroupTitleHasBeenSet() const;

                    /**
                     * 获取json格式化计费标签，例如：
{"pid":2, "cids":{"create": 2, "renew": 2, "modify": 2}, "productCode":"p_tcb_mp", "subProductCode":"sp_tcb_mp_cloudbase_dau"}
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillTags json格式化计费标签，例如：
{"pid":2, "cids":{"create": 2, "renew": 2, "modify": 2}, "productCode":"p_tcb_mp", "subProductCode":"sp_tcb_mp_cloudbase_dau"}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBillTags() const;

                    /**
                     * 设置json格式化计费标签，例如：
{"pid":2, "cids":{"create": 2, "renew": 2, "modify": 2}, "productCode":"p_tcb_mp", "subProductCode":"sp_tcb_mp_cloudbase_dau"}
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BillTags json格式化计费标签，例如：
{"pid":2, "cids":{"create": 2, "renew": 2, "modify": 2}, "productCode":"p_tcb_mp", "subProductCode":"sp_tcb_mp_cloudbase_dau"}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBillTags(const std::string& _billTags);

                    /**
                     * 判断参数 BillTags 是否已赋值
                     * @return BillTags 是否已赋值
                     */
                    bool BillTagsHasBeenSet() const;

                    /**
                     * 获取json格式化用户资源限制，例如：
{"Qps":1000,"InvokeNum":{"TimeUnit":"m", "Unit":"万次", "MaxSize": 100},"Capacity":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "Cdn":{"Flux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "BackFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}},"Scf":{"Concurrency":1000,"OutFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100},"MemoryUse":{"TimeUnit":"m", "Unit":"WGBS", "MaxSize": 100000}}}
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceLimit json格式化用户资源限制，例如：
{"Qps":1000,"InvokeNum":{"TimeUnit":"m", "Unit":"万次", "MaxSize": 100},"Capacity":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "Cdn":{"Flux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "BackFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}},"Scf":{"Concurrency":1000,"OutFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100},"MemoryUse":{"TimeUnit":"m", "Unit":"WGBS", "MaxSize": 100000}}}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceLimit() const;

                    /**
                     * 设置json格式化用户资源限制，例如：
{"Qps":1000,"InvokeNum":{"TimeUnit":"m", "Unit":"万次", "MaxSize": 100},"Capacity":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "Cdn":{"Flux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "BackFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}},"Scf":{"Concurrency":1000,"OutFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100},"MemoryUse":{"TimeUnit":"m", "Unit":"WGBS", "MaxSize": 100000}}}
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceLimit json格式化用户资源限制，例如：
{"Qps":1000,"InvokeNum":{"TimeUnit":"m", "Unit":"万次", "MaxSize": 100},"Capacity":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "Cdn":{"Flux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "BackFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}},"Scf":{"Concurrency":1000,"OutFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100},"MemoryUse":{"TimeUnit":"m", "Unit":"WGBS", "MaxSize": 100000}}}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceLimit(const std::string& _resourceLimit);

                    /**
                     * 判断参数 ResourceLimit 是否已赋值
                     * @return ResourceLimit 是否已赋值
                     */
                    bool ResourceLimitHasBeenSet() const;

                    /**
                     * 获取json格式化高级限制，例如：
{"CMSEnable":false,"ProvisionedConcurrencyMem":512000, "PictureProcessing":false, "SecurityAudit":false, "RealTimePush":false, "TemplateMessageBatchPush":false, "Payment":false}
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvanceLimit json格式化高级限制，例如：
{"CMSEnable":false,"ProvisionedConcurrencyMem":512000, "PictureProcessing":false, "SecurityAudit":false, "RealTimePush":false, "TemplateMessageBatchPush":false, "Payment":false}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAdvanceLimit() const;

                    /**
                     * 设置json格式化高级限制，例如：
{"CMSEnable":false,"ProvisionedConcurrencyMem":512000, "PictureProcessing":false, "SecurityAudit":false, "RealTimePush":false, "TemplateMessageBatchPush":false, "Payment":false}
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AdvanceLimit json格式化高级限制，例如：
{"CMSEnable":false,"ProvisionedConcurrencyMem":512000, "PictureProcessing":false, "SecurityAudit":false, "RealTimePush":false, "TemplateMessageBatchPush":false, "Payment":false}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAdvanceLimit(const std::string& _advanceLimit);

                    /**
                     * 判断参数 AdvanceLimit 是否已赋值
                     * @return AdvanceLimit 是否已赋值
                     */
                    bool AdvanceLimitHasBeenSet() const;

                    /**
                     * 获取套餐描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageDescription 套餐描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageDescription() const;

                    /**
                     * 设置套餐描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageDescription 套餐描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageDescription(const std::string& _packageDescription);

                    /**
                     * 判断参数 PackageDescription 是否已赋值
                     * @return PackageDescription 是否已赋值
                     */
                    bool PackageDescriptionHasBeenSet() const;

                    /**
                     * 获取是否对外展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsExternal 是否对外展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsExternal() const;

                    /**
                     * 设置是否对外展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsExternal 是否对外展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsExternal(const bool& _isExternal);

                    /**
                     * 判断参数 IsExternal 是否已赋值
                     * @return IsExternal 是否已赋值
                     */
                    bool IsExternalHasBeenSet() const;

                private:

                    /**
                     * DAU产品套餐ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * DAU套餐中文名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageTitle;
                    bool m_packageTitleHasBeenSet;

                    /**
                     * 套餐分组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 套餐分组中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupTitle;
                    bool m_groupTitleHasBeenSet;

                    /**
                     * json格式化计费标签，例如：
{"pid":2, "cids":{"create": 2, "renew": 2, "modify": 2}, "productCode":"p_tcb_mp", "subProductCode":"sp_tcb_mp_cloudbase_dau"}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billTags;
                    bool m_billTagsHasBeenSet;

                    /**
                     * json格式化用户资源限制，例如：
{"Qps":1000,"InvokeNum":{"TimeUnit":"m", "Unit":"万次", "MaxSize": 100},"Capacity":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "Cdn":{"Flux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}, "BackFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100}},"Scf":{"Concurrency":1000,"OutFlux":{"TimeUnit":"m", "Unit":"GB", "MaxSize": 100},"MemoryUse":{"TimeUnit":"m", "Unit":"WGBS", "MaxSize": 100000}}}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceLimit;
                    bool m_resourceLimitHasBeenSet;

                    /**
                     * json格式化高级限制，例如：
{"CMSEnable":false,"ProvisionedConcurrencyMem":512000, "PictureProcessing":false, "SecurityAudit":false, "RealTimePush":false, "TemplateMessageBatchPush":false, "Payment":false}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_advanceLimit;
                    bool m_advanceLimitHasBeenSet;

                    /**
                     * 套餐描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageDescription;
                    bool m_packageDescriptionHasBeenSet;

                    /**
                     * 是否对外展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isExternal;
                    bool m_isExternalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BAASPACKAGEINFO_H_
