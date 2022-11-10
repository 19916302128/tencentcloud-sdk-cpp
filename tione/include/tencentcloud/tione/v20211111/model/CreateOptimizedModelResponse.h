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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEOPTIMIZEDMODELRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEOPTIMIZEDMODELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateOptimizedModel返回参数结构体
                */
                class CreateOptimizedModelResponse : public AbstractModel
                {
                public:
                    CreateOptimizedModelResponse();
                    ~CreateOptimizedModelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelId() const;

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取模型版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelVersionId 模型版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetModelVersionId() const;

                    /**
                     * 判断参数 ModelVersionId 是否已赋值
                     * @return ModelVersionId 是否已赋值
                     */
                    bool ModelVersionIdHasBeenSet() const;

                private:

                    /**
                     * 模型ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型版本ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelVersionId;
                    bool m_modelVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEOPTIMIZEDMODELRESPONSE_H_
