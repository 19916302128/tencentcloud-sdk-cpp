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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DRINSTANCEOPSDTOPAGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DRINSTANCEOPSDTOPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DrInstanceOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 试运行记录
                */
                class DrInstanceOpsDtoPage : public AbstractModel
                {
                public:
                    DrInstanceOpsDtoPage();
                    ~DrInstanceOpsDtoPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DrInstanceOpsDto> GetItems() const;

                    /**
                     * 设置记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<DrInstanceOpsDto>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 记录总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DrInstanceOpsDto> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DRINSTANCEOPSDTOPAGE_H_
