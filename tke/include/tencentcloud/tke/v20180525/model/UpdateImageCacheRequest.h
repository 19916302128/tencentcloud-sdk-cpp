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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEIMAGECACHEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEIMAGECACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ImageRegistryCredential.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpdateImageCache请求参数结构体
                */
                class UpdateImageCacheRequest : public AbstractModel
                {
                public:
                    UpdateImageCacheRequest();
                    ~UpdateImageCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像缓存Id
                     * @return ImageCacheId 镜像缓存Id
                     */
                    std::string GetImageCacheId() const;

                    /**
                     * 设置镜像缓存Id
                     * @param ImageCacheId 镜像缓存Id
                     */
                    void SetImageCacheId(const std::string& _imageCacheId);

                    /**
                     * 判断参数 ImageCacheId 是否已赋值
                     * @return ImageCacheId 是否已赋值
                     */
                    bool ImageCacheIdHasBeenSet() const;

                    /**
                     * 获取镜像缓存名称
                     * @return ImageCacheName 镜像缓存名称
                     */
                    std::string GetImageCacheName() const;

                    /**
                     * 设置镜像缓存名称
                     * @param ImageCacheName 镜像缓存名称
                     */
                    void SetImageCacheName(const std::string& _imageCacheName);

                    /**
                     * 判断参数 ImageCacheName 是否已赋值
                     * @return ImageCacheName 是否已赋值
                     */
                    bool ImageCacheNameHasBeenSet() const;

                    /**
                     * 获取镜像仓库凭证数组
                     * @return ImageRegistryCredentials 镜像仓库凭证数组
                     */
                    std::vector<ImageRegistryCredential> GetImageRegistryCredentials() const;

                    /**
                     * 设置镜像仓库凭证数组
                     * @param ImageRegistryCredentials 镜像仓库凭证数组
                     */
                    void SetImageRegistryCredentials(const std::vector<ImageRegistryCredential>& _imageRegistryCredentials);

                    /**
                     * 判断参数 ImageRegistryCredentials 是否已赋值
                     * @return ImageRegistryCredentials 是否已赋值
                     */
                    bool ImageRegistryCredentialsHasBeenSet() const;

                    /**
                     * 获取用于制作镜像缓存的容器镜像列表
                     * @return Images 用于制作镜像缓存的容器镜像列表
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置用于制作镜像缓存的容器镜像列表
                     * @param Images 用于制作镜像缓存的容器镜像列表
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     * @return ImageCacheSize 镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     */
                    uint64_t GetImageCacheSize() const;

                    /**
                     * 设置镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     * @param ImageCacheSize 镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     */
                    void SetImageCacheSize(const uint64_t& _imageCacheSize);

                    /**
                     * 判断参数 ImageCacheSize 是否已赋值
                     * @return ImageCacheSize 是否已赋值
                     */
                    bool ImageCacheSizeHasBeenSet() const;

                    /**
                     * 获取镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     * @return RetentionDays 镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     * @param RetentionDays 镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     */
                    void SetRetentionDays(const uint64_t& _retentionDays);

                    /**
                     * 判断参数 RetentionDays 是否已赋值
                     * @return RetentionDays 是否已赋值
                     */
                    bool RetentionDaysHasBeenSet() const;

                    /**
                     * 获取安全组Id
                     * @return SecurityGroupIds 安全组Id
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组Id
                     * @param SecurityGroupIds 安全组Id
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 镜像缓存Id
                     */
                    std::string m_imageCacheId;
                    bool m_imageCacheIdHasBeenSet;

                    /**
                     * 镜像缓存名称
                     */
                    std::string m_imageCacheName;
                    bool m_imageCacheNameHasBeenSet;

                    /**
                     * 镜像仓库凭证数组
                     */
                    std::vector<ImageRegistryCredential> m_imageRegistryCredentials;
                    bool m_imageRegistryCredentialsHasBeenSet;

                    /**
                     * 用于制作镜像缓存的容器镜像列表
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 镜像缓存的大小。默认为20 GiB。取值范围参考[云硬盘类型](https://cloud.tencent.com/document/product/362/2353)中的高性能云盘类型的大小限制。
                     */
                    uint64_t m_imageCacheSize;
                    bool m_imageCacheSizeHasBeenSet;

                    /**
                     * 镜像缓存保留时间天数，过期将会自动清理，默认为0，永不过期。
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * 安全组Id
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPDATEIMAGECACHEREQUEST_H_
