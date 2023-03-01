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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_CREATEIMAGEMODERATIONASYNCTASKRESPONSE_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_CREATEIMAGEMODERATIONASYNCTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CreateImageModerationAsyncTask返回参数结构体
                */
                class CreateImageModerationAsyncTaskResponse : public AbstractModel
                {
                public:
                    CreateImageModerationAsyncTaskResponse();
                    ~CreateImageModerationAsyncTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该字段用于返回检测对象对应请求参数中的DataId。
                     * @return DataId 该字段用于返回检测对象对应请求参数中的DataId。
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回检测对象对应请求参数中的DataId。
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_CREATEIMAGEMODERATIONASYNCTASKRESPONSE_H_
