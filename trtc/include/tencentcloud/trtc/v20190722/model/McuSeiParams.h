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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUSEIPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUSEIPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/McuLayoutVolume.h>
#include <tencentcloud/trtc/v20190722/model/McuPassThrough.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 混流SEI参数
                */
                class McuSeiParams : public AbstractModel
                {
                public:
                    McuSeiParams();
                    ~McuSeiParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音量布局SEI
                     * @return LayoutVolume 音量布局SEI
                     */
                    McuLayoutVolume GetLayoutVolume() const;

                    /**
                     * 设置音量布局SEI
                     * @param LayoutVolume 音量布局SEI
                     */
                    void SetLayoutVolume(const McuLayoutVolume& _layoutVolume);

                    /**
                     * 判断参数 LayoutVolume 是否已赋值
                     * @return LayoutVolume 是否已赋值
                     */
                    bool LayoutVolumeHasBeenSet() const;

                    /**
                     * 获取透传SEI
                     * @return PassThrough 透传SEI
                     */
                    McuPassThrough GetPassThrough() const;

                    /**
                     * 设置透传SEI
                     * @param PassThrough 透传SEI
                     */
                    void SetPassThrough(const McuPassThrough& _passThrough);

                    /**
                     * 判断参数 PassThrough 是否已赋值
                     * @return PassThrough 是否已赋值
                     */
                    bool PassThroughHasBeenSet() const;

                private:

                    /**
                     * 音量布局SEI
                     */
                    McuLayoutVolume m_layoutVolume;
                    bool m_layoutVolumeHasBeenSet;

                    /**
                     * 透传SEI
                     */
                    McuPassThrough m_passThrough;
                    bool m_passThroughHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUSEIPARAMS_H_
