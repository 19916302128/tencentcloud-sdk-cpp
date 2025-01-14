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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_STOPCREATINGIMAGEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_STOPCREATINGIMAGEREQUEST_H_

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
                * StopCreatingImage请求参数结构体
                */
                class StopCreatingImageRequest : public AbstractModel
                {
                public:
                    StopCreatingImageRequest();
                    ~StopCreatingImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像保存记录ID
                     * @return RecordId 镜像保存记录ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置镜像保存记录ID
                     * @param _recordId 镜像保存记录ID
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                private:

                    /**
                     * 镜像保存记录ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_STOPCREATINGIMAGEREQUEST_H_
