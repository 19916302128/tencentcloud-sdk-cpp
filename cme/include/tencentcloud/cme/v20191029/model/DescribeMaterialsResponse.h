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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEMATERIALSRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEMATERIALSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MaterialInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeMaterials返回参数结构体
                */
                class DescribeMaterialsResponse : public AbstractModel
                {
                public:
                    DescribeMaterialsResponse();
                    ~DescribeMaterialsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取素材列表信息。
                     * @return MaterialInfoSet 素材列表信息。
                     */
                    std::vector<MaterialInfo> GetMaterialInfoSet() const;

                    /**
                     * 判断参数 MaterialInfoSet 是否已赋值
                     * @return MaterialInfoSet 是否已赋值
                     */
                    bool MaterialInfoSetHasBeenSet() const;

                private:

                    /**
                     * 素材列表信息。
                     */
                    std::vector<MaterialInfo> m_materialInfoSet;
                    bool m_materialInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEMATERIALSRESPONSE_H_