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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MULTIAPPLYORDER_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MULTIAPPLYORDER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/MultiApplyDetail.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 分账订单信息
                */
                class MultiApplyOrder : public AbstractModel
                {
                public:
                    MultiApplyOrder();
                    ~MultiApplyOrder() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutDistributeNo 商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOutDistributeNo() const;

                    /**
                     * 设置商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OutDistributeNo 商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutDistributeNo(const std::string& _outDistributeNo);

                    /**
                     * 判断参数 OutDistributeNo 是否已赋值
                     * @return OutDistributeNo 是否已赋值
                     */
                    bool OutDistributeNoHasBeenSet() const;

                    /**
                     * 获取平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DistributeNo 平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDistributeNo() const;

                    /**
                     * 设置平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DistributeNo 平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDistributeNo(const std::string& _distributeNo);

                    /**
                     * 判断参数 DistributeNo 是否已赋值
                     * @return DistributeNo 是否已赋值
                     */
                    bool DistributeNoHasBeenSet() const;

                    /**
                     * 获取平台交易订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderNo 平台交易订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置平台交易订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrderNo 平台交易订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     */
                    bool OrderNoHasBeenSet() const;

                    /**
                     * 获取分账订单状态（0初始1成功2失败3撤销）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 分账订单状态（0初始1成功2失败3撤销）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置分账订单状态（0初始1成功2失败3撤销）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 分账订单状态（0初始1成功2失败3撤销）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取入账日期，格式yyyy-MM-dd
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InDate 入账日期，格式yyyy-MM-dd
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInDate() const;

                    /**
                     * 设置入账日期，格式yyyy-MM-dd
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InDate 入账日期，格式yyyy-MM-dd
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInDate(const std::string& _inDate);

                    /**
                     * 判断参数 InDate 是否已赋值
                     * @return InDate 是否已赋值
                     */
                    bool InDateHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取分账明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Details 分账明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiApplyDetail> GetDetails() const;

                    /**
                     * 设置分账明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Details 分账明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDetails(const std::vector<MultiApplyDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outDistributeNo;
                    bool m_outDistributeNoHasBeenSet;

                    /**
                     * 平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_distributeNo;
                    bool m_distributeNoHasBeenSet;

                    /**
                     * 平台交易订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                    /**
                     * 分账订单状态（0初始1成功2失败3撤销）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 入账日期，格式yyyy-MM-dd
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inDate;
                    bool m_inDateHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 分账明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MultiApplyDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MULTIAPPLYORDER_H_
