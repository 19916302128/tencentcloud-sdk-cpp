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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INVASIVEV2_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INVASIVEV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Part.h>
#include <tencentcloud/mrs/v20200910/model/Coord.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 侵犯
                */
                class InvasiveV2 : public AbstractModel
                {
                public:
                    InvasiveV2();
                    ~InvasiveV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetIndex() const;

                    /**
                     * 设置索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Index 索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndex(const std::vector<int64_t>& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part GetPart() const;

                    /**
                     * 设置部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPart(const Part& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取阴性或阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Positive 阴性或阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPositive() const;

                    /**
                     * 设置阴性或阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Positive 阴性或阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPositive(const std::string& _positive);

                    /**
                     * 判断参数 Positive 是否已赋值
                     * @return Positive 是否已赋值
                     */
                    bool PositiveHasBeenSet() const;

                    /**
                     * 获取原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取原文对应坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Coords 原文对应坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> GetCoords() const;

                    /**
                     * 设置原文对应坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Coords 原文对应坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCoords(const std::vector<Coord>& _coords);

                    /**
                     * 判断参数 Coords 是否已赋值
                     * @return Coords 是否已赋值
                     */
                    bool CoordsHasBeenSet() const;

                private:

                    /**
                     * 索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 阴性或阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_positive;
                    bool m_positiveHasBeenSet;

                    /**
                     * 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 原文对应坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> m_coords;
                    bool m_coordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INVASIVEV2_H_
