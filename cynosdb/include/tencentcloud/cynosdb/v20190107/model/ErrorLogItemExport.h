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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ERRORLOGITEMEXPORT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ERRORLOGITEMEXPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 错误日志导出格式
                */
                class ErrorLogItemExport : public AbstractModel
                {
                public:
                    ErrorLogItemExport();
                    ~ErrorLogItemExport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Timestamp 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取日志等级，可选值note, warning，error
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 日志等级，可选值note, warning，error
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置日志等级，可选值note, warning，error
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 日志等级，可选值note, warning，error
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Content 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 日志等级，可选值note, warning，error
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ERRORLOGITEMEXPORT_H_
