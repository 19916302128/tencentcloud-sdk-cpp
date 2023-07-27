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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_MODEL_METADATA_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_MODEL_METADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            namespace Model
            {
                /**
                * MetaData数据结构，Key/Value格式
                */
                class MetaData : public AbstractModel
                {
                public:
                    MetaData();
                    ~MetaData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MetaData的Key
                     * @return MetaKey MetaData的Key
                     * 
                     */
                    std::string GetMetaKey() const;

                    /**
                     * 设置MetaData的Key
                     * @param _metaKey MetaData的Key
                     * 
                     */
                    void SetMetaKey(const std::string& _metaKey);

                    /**
                     * 判断参数 MetaKey 是否已赋值
                     * @return MetaKey 是否已赋值
                     * 
                     */
                    bool MetaKeyHasBeenSet() const;

                    /**
                     * 获取MetaData的Value
                     * @return MetaValue MetaData的Value
                     * 
                     */
                    std::string GetMetaValue() const;

                    /**
                     * 设置MetaData的Value
                     * @param _metaValue MetaData的Value
                     * 
                     */
                    void SetMetaValue(const std::string& _metaValue);

                    /**
                     * 判断参数 MetaValue 是否已赋值
                     * @return MetaValue 是否已赋值
                     * 
                     */
                    bool MetaValueHasBeenSet() const;

                private:

                    /**
                     * MetaData的Key
                     */
                    std::string m_metaKey;
                    bool m_metaKeyHasBeenSet;

                    /**
                     * MetaData的Value
                     */
                    std::string m_metaValue;
                    bool m_metaValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_MODEL_METADATA_H_
