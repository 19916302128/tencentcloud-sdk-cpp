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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_BATCHDESCRIBEKTVMUSICDETAILSREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_BATCHDESCRIBEKTVMUSICDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * BatchDescribeKTVMusicDetails请求参数结构体
                */
                class BatchDescribeKTVMusicDetailsRequest : public AbstractModel
                {
                public:
                    BatchDescribeKTVMusicDetailsRequest();
                    ~BatchDescribeKTVMusicDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param AppName 应用名称。
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param UserId 用户标识。
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取歌曲 Id 列表。
                     * @return MusicIds 歌曲 Id 列表。
                     */
                    std::vector<std::string> GetMusicIds() const;

                    /**
                     * 设置歌曲 Id 列表。
                     * @param MusicIds 歌曲 Id 列表。
                     */
                    void SetMusicIds(const std::vector<std::string>& _musicIds);

                    /**
                     * 判断参数 MusicIds 是否已赋值
                     * @return MusicIds 是否已赋值
                     */
                    bool MusicIdsHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 歌曲 Id 列表。
                     */
                    std::vector<std::string> m_musicIds;
                    bool m_musicIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_BATCHDESCRIBEKTVMUSICDETAILSREQUEST_H_
