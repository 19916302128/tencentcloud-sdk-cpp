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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PTNM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PTNM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * pTNM
                */
                class PTNM : public AbstractModel
                {
                public:
                    PTNM();
                    ~PTNM() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取归一化值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 归一化值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置归一化值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 归一化值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取pT
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PT pT
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPT() const;

                    /**
                     * 设置pT
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PT pT
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPT(const std::string& _pT);

                    /**
                     * 判断参数 PT 是否已赋值
                     * @return PT 是否已赋值
                     */
                    bool PTHasBeenSet() const;

                    /**
                     * 获取pN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PN pN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPN() const;

                    /**
                     * 设置pN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PN pN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPN(const std::string& _pN);

                    /**
                     * 判断参数 PN 是否已赋值
                     * @return PN 是否已赋值
                     */
                    bool PNHasBeenSet() const;

                    /**
                     * 获取pM
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PM pM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPM() const;

                    /**
                     * 设置pM
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PM pM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPM(const std::string& _pM);

                    /**
                     * 判断参数 PM 是否已赋值
                     * @return PM 是否已赋值
                     */
                    bool PMHasBeenSet() const;

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
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 归一化值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * pT
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pT;
                    bool m_pTHasBeenSet;

                    /**
                     * pN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pN;
                    bool m_pNHasBeenSet;

                    /**
                     * pM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pM;
                    bool m_pMHasBeenSet;

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

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PTNM_H_
