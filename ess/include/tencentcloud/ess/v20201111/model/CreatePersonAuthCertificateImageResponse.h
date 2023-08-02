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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreatePersonAuthCertificateImage返回参数结构体
                */
                class CreatePersonAuthCertificateImageResponse : public AbstractModel
                {
                public:
                    CreatePersonAuthCertificateImageResponse();
                    ~CreatePersonAuthCertificateImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取个人用户证明证书的下载链接
                     * @return AuthCertUrl 个人用户证明证书的下载链接
                     * 
                     */
                    std::string GetAuthCertUrl() const;

                    /**
                     * 判断参数 AuthCertUrl 是否已赋值
                     * @return AuthCertUrl 是否已赋值
                     * 
                     */
                    bool AuthCertUrlHasBeenSet() const;

                private:

                    /**
                     * 个人用户证明证书的下载链接
                     */
                    std::string m_authCertUrl;
                    bool m_authCertUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGERESPONSE_H_
