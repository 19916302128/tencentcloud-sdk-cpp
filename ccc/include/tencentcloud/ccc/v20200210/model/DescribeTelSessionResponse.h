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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELSESSIONRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELSESSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/PSTNSession.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeTelSession返回参数结构体
                */
                class DescribeTelSessionResponse : public AbstractModel
                {
                public:
                    DescribeTelSessionResponse();
                    ~DescribeTelSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取会话信息
                     * @return Session 会话信息
                     */
                    PSTNSession GetSession() const;

                    /**
                     * 判断参数 Session 是否已赋值
                     * @return Session 是否已赋值
                     */
                    bool SessionHasBeenSet() const;

                private:

                    /**
                     * 会话信息
                     */
                    PSTNSession m_session;
                    bool m_sessionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELSESSIONRESPONSE_H_
