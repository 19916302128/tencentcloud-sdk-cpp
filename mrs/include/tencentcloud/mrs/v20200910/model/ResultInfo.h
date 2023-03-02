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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_RESULTINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_RESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BaseInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 结论信息
                */
                class ResultInfo : public AbstractModel
                {
                public:
                    ResultInfo();
                    ~ResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取段落文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 段落文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseInfo GetText() const;

                    /**
                     * 设置段落文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Text 段落文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetText(const BaseInfo& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取结论详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 结论详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaseInfo> GetItems() const;

                    /**
                     * 设置结论详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Items 结论详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetItems(const std::vector<BaseInfo>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 段落文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseInfo m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 结论详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaseInfo> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_RESULTINFO_H_
