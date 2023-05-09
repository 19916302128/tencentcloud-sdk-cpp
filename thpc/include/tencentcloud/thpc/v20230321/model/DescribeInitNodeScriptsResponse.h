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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEINITNODESCRIPTSRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEINITNODESCRIPTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/NodeScript.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeInitNodeScripts返回参数结构体
                */
                class DescribeInitNodeScriptsResponse : public AbstractModel
                {
                public:
                    DescribeInitNodeScriptsResponse();
                    ~DescribeInitNodeScriptsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节点初始化脚本列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitNodeScriptSet 节点初始化脚本列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeScript> GetInitNodeScriptSet() const;

                    /**
                     * 判断参数 InitNodeScriptSet 是否已赋值
                     * @return InitNodeScriptSet 是否已赋值
                     */
                    bool InitNodeScriptSetHasBeenSet() const;

                private:

                    /**
                     * 节点初始化脚本列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeScript> m_initNodeScriptSet;
                    bool m_initNodeScriptSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEINITNODESCRIPTSRESPONSE_H_
