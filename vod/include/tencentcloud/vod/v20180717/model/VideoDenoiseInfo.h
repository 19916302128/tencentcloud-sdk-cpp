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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODENOISEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODENOISEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频降噪控制参数
                */
                class VideoDenoiseInfo : public AbstractModel
                {
                public:
                    VideoDenoiseInfo();
                    ~VideoDenoiseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频降噪控制开关，可选值：
<li>ON：开启视频降噪；</li>
<li>OFF：关闭视频降噪。</li>
                     * @return Switch 视频降噪控制开关，可选值：
<li>ON：开启视频降噪；</li>
<li>OFF：关闭视频降噪。</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置视频降噪控制开关，可选值：
<li>ON：开启视频降噪；</li>
<li>OFF：关闭视频降噪。</li>
                     * @param Switch 视频降噪控制开关，可选值：
<li>ON：开启视频降噪；</li>
<li>OFF：关闭视频降噪。</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取视频降噪类型，仅当视频降噪控制开关为 ON 时有效，可选值：
<li>weak：轻视频降噪；</li>
<li>strong：强视频降噪。</li>
默认值：weak。
                     * @return Type 视频降噪类型，仅当视频降噪控制开关为 ON 时有效，可选值：
<li>weak：轻视频降噪；</li>
<li>strong：强视频降噪。</li>
默认值：weak。
                     */
                    std::string GetType() const;

                    /**
                     * 设置视频降噪类型，仅当视频降噪控制开关为 ON 时有效，可选值：
<li>weak：轻视频降噪；</li>
<li>strong：强视频降噪。</li>
默认值：weak。
                     * @param Type 视频降噪类型，仅当视频降噪控制开关为 ON 时有效，可选值：
<li>weak：轻视频降噪；</li>
<li>strong：强视频降噪。</li>
默认值：weak。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 视频降噪控制开关，可选值：
<li>ON：开启视频降噪；</li>
<li>OFF：关闭视频降噪。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 视频降噪类型，仅当视频降噪控制开关为 ON 时有效，可选值：
<li>weak：轻视频降噪；</li>
<li>strong：强视频降噪。</li>
默认值：weak。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODENOISEINFO_H_
