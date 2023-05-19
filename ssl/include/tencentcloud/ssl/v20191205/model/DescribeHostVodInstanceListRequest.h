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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTVODINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTVODINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Filter.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostVodInstanceList请求参数结构体
                */
                class DescribeHostVodInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeHostVodInstanceListRequest();
                    ~DescribeHostVodInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待部署的证书ID
                     * @return CertificateId 待部署的证书ID
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置待部署的证书ID
                     * @param CertificateId 待部署的证书ID
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取部署资源类型 vod
                     * @return ResourceType 部署资源类型 vod
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置部署资源类型 vod
                     * @param ResourceType 部署资源类型 vod
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * @return IsCache 是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     */
                    uint64_t GetIsCache() const;

                    /**
                     * 设置是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     * @param IsCache 是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     */
                    void SetIsCache(const uint64_t& _isCache);

                    /**
                     * 判断参数 IsCache 是否已赋值
                     * @return IsCache 是否已赋值
                     */
                    bool IsCacheHasBeenSet() const;

                    /**
                     * 获取过滤参数列表
                     * @return Filters 过滤参数列表
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数列表
                     * @param Filters 过滤参数列表
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取已部署的证书ID
                     * @return OldCertificateId 已部署的证书ID
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置已部署的证书ID
                     * @param OldCertificateId 已部署的证书ID
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     */
                    bool OldCertificateIdHasBeenSet() const;

                private:

                    /**
                     * 待部署的证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 部署资源类型 vod
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 是否查询缓存，1：是； 0：否， 默认为查询缓存，缓存半小时
                     */
                    uint64_t m_isCache;
                    bool m_isCacheHasBeenSet;

                    /**
                     * 过滤参数列表
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 已部署的证书ID
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTVODINSTANCELISTREQUEST_H_
