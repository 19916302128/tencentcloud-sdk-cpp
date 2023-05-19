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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CLB证书详情
                */
                class Certificate : public AbstractModel
                {
                public:
                    Certificate();
                    ~Certificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书ID
                     * @return CertId 证书ID
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书ID
                     * @param CertId 证书ID
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取证书绑定的域名
                     * @return DnsNames 证书绑定的域名
                     */
                    std::vector<std::string> GetDnsNames() const;

                    /**
                     * 设置证书绑定的域名
                     * @param DnsNames 证书绑定的域名
                     */
                    void SetDnsNames(const std::vector<std::string>& _dnsNames);

                    /**
                     * 判断参数 DnsNames 是否已赋值
                     * @return DnsNames 是否已赋值
                     */
                    bool DnsNamesHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书绑定的域名
                     */
                    std::vector<std::string> m_dnsNames;
                    bool m_dnsNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATE_H_
