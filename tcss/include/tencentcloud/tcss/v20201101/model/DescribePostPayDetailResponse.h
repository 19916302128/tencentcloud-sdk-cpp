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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPOSTPAYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPOSTPAYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/SoftQuotaDayInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribePostPayDetail返回参数结构体
                */
                class DescribePostPayDetailResponse : public AbstractModel
                {
                public:
                    DescribePostPayDetailResponse();
                    ~DescribePostPayDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性计费扣费详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoftQuotaDayDetail 弹性计费扣费详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SoftQuotaDayInfo> GetSoftQuotaDayDetail() const;

                    /**
                     * 判断参数 SoftQuotaDayDetail 是否已赋值
                     * @return SoftQuotaDayDetail 是否已赋值
                     */
                    bool SoftQuotaDayDetailHasBeenSet() const;

                private:

                    /**
                     * 弹性计费扣费详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SoftQuotaDayInfo> m_softQuotaDayDetail;
                    bool m_softQuotaDayDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPOSTPAYDETAILRESPONSE_H_