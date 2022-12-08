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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERPENDINGRELEASESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERPENDINGRELEASESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PendingRelease.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterPendingReleases返回参数结构体
                */
                class DescribeClusterPendingReleasesResponse : public AbstractModel
                {
                public:
                    DescribeClusterPendingReleasesResponse();
                    ~DescribeClusterPendingReleasesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取正在安装中应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseSet 正在安装中应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PendingRelease> GetReleaseSet() const;

                    /**
                     * 判断参数 ReleaseSet 是否已赋值
                     * @return ReleaseSet 是否已赋值
                     */
                    bool ReleaseSetHasBeenSet() const;

                    /**
                     * 获取每页返回数量限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Limit 每页返回数量限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取页偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 页偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取总数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 正在安装中应用列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PendingRelease> m_releaseSet;
                    bool m_releaseSetHasBeenSet;

                    /**
                     * 每页返回数量限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 总数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERPENDINGRELEASESRESPONSE_H_
