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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * UploadFiles返回参数结构体
                */
                class UploadFilesResponse : public AbstractModel
                {
                public:
                    UploadFilesResponse();
                    ~UploadFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件id数组，有效期一个小时
                     * @return FileIds 文件id数组，有效期一个小时
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取上传成功文件数量
                     * @return TotalCount 上传成功文件数量
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取文件Url
                     * @return FileUrls 文件Url
                     */
                    std::vector<std::string> GetFileUrls() const;

                    /**
                     * 判断参数 FileUrls 是否已赋值
                     * @return FileUrls 是否已赋值
                     */
                    bool FileUrlsHasBeenSet() const;

                private:

                    /**
                     * 文件id数组，有效期一个小时
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 上传成功文件数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 文件Url
                     */
                    std::vector<std::string> m_fileUrls;
                    bool m_fileUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESRESPONSE_H_
