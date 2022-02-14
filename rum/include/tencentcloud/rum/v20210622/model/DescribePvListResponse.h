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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPVLISTRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPVLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/RumPvInfo.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribePvList返回参数结构体
                */
                class DescribePvListResponse : public AbstractModel
                {
                public:
                    DescribePvListResponse();
                    ~DescribePvListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取pv列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectPvSet pv列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RumPvInfo> GetProjectPvSet() const;

                    /**
                     * 判断参数 ProjectPvSet 是否已赋值
                     * @return ProjectPvSet 是否已赋值
                     */
                    bool ProjectPvSetHasBeenSet() const;

                private:

                    /**
                     * pv列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RumPvInfo> m_projectPvSet;
                    bool m_projectPvSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPVLISTRESPONSE_H_
