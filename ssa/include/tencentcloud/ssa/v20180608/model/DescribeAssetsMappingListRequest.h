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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEASSETSMAPPINGLISTREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEASSETSMAPPINGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeAssetsMappingList请求参数结构体
                */
                class DescribeAssetsMappingListRequest : public AbstractModel
                {
                public:
                    DescribeAssetsMappingListRequest();
                    ~DescribeAssetsMappingListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求参数
                     * @return Params 请求参数
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置请求参数
                     * @param _params 请求参数
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 请求参数
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEASSETSMAPPINGLISTREQUEST_H_
