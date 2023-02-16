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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGEXTRACTRULE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGEXTRACTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 日志采集的导出规则配置
                */
                class LogConfigExtractRule : public AbstractModel
                {
                public:
                    LogConfigExtractRule();
                    ~LogConfigExtractRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取首行正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginningRegex 首行正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBeginningRegex() const;

                    /**
                     * 设置首行正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BeginningRegex 首行正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBeginningRegex(const std::string& _beginningRegex);

                    /**
                     * 判断参数 BeginningRegex 是否已赋值
                     * @return BeginningRegex 是否已赋值
                     */
                    bool BeginningRegexHasBeenSet() const;

                    /**
                     * 获取提取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys 提取结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置提取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Keys 提取结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取过滤键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterKeys 过滤键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetFilterKeys() const;

                    /**
                     * 设置过滤键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FilterKeys 过滤键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilterKeys(const std::vector<std::string>& _filterKeys);

                    /**
                     * 判断参数 FilterKeys 是否已赋值
                     * @return FilterKeys 是否已赋值
                     */
                    bool FilterKeysHasBeenSet() const;

                    /**
                     * 获取过滤值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterRegex 过滤值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetFilterRegex() const;

                    /**
                     * 设置过滤值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FilterRegex 过滤值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilterRegex(const std::vector<std::string>& _filterRegex);

                    /**
                     * 判断参数 FilterRegex 是否已赋值
                     * @return FilterRegex 是否已赋值
                     */
                    bool FilterRegexHasBeenSet() const;

                    /**
                     * 获取日志正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogRegex 日志正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogRegex() const;

                    /**
                     * 设置日志正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogRegex 日志正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogRegex(const std::string& _logRegex);

                    /**
                     * 判断参数 LogRegex 是否已赋值
                     * @return LogRegex 是否已赋值
                     */
                    bool LogRegexHasBeenSet() const;

                    /**
                     * 获取时间字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeKey 时间字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置时间字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeKey 时间字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeFormat 时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTimeFormat() const;

                    /**
                     * 设置时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeFormat 时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeFormat(const std::string& _timeFormat);

                    /**
                     * 判断参数 TimeFormat 是否已赋值
                     * @return TimeFormat 是否已赋值
                     */
                    bool TimeFormatHasBeenSet() const;

                    /**
                     * 获取是否上传解析失败日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnMatchUpload 是否上传解析失败日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUnMatchUpload() const;

                    /**
                     * 设置是否上传解析失败日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnMatchUpload 是否上传解析失败日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnMatchUpload(const std::string& _unMatchUpload);

                    /**
                     * 判断参数 UnMatchUpload 是否已赋值
                     * @return UnMatchUpload 是否已赋值
                     */
                    bool UnMatchUploadHasBeenSet() const;

                    /**
                     * 获取解析失败日志的键名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnMatchedKey 解析失败日志的键名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUnMatchedKey() const;

                    /**
                     * 设置解析失败日志的键名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnMatchedKey 解析失败日志的键名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnMatchedKey(const std::string& _unMatchedKey);

                    /**
                     * 判断参数 UnMatchedKey 是否已赋值
                     * @return UnMatchedKey 是否已赋值
                     */
                    bool UnMatchedKeyHasBeenSet() const;

                    /**
                     * 获取tracking
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Backtracking tracking
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBacktracking() const;

                    /**
                     * 设置tracking
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Backtracking tracking
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBacktracking(const std::string& _backtracking);

                    /**
                     * 判断参数 Backtracking 是否已赋值
                     * @return Backtracking 是否已赋值
                     */
                    bool BacktrackingHasBeenSet() const;

                    /**
                     * 获取分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Delimiter 分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Delimiter 分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     */
                    bool DelimiterHasBeenSet() const;

                private:

                    /**
                     * 首行正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginningRegex;
                    bool m_beginningRegexHasBeenSet;

                    /**
                     * 提取结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 过滤键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_filterKeys;
                    bool m_filterKeysHasBeenSet;

                    /**
                     * 过滤值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_filterRegex;
                    bool m_filterRegexHasBeenSet;

                    /**
                     * 日志正则表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logRegex;
                    bool m_logRegexHasBeenSet;

                    /**
                     * 时间字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * 时间格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeFormat;
                    bool m_timeFormatHasBeenSet;

                    /**
                     * 是否上传解析失败日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unMatchUpload;
                    bool m_unMatchUploadHasBeenSet;

                    /**
                     * 解析失败日志的键名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unMatchedKey;
                    bool m_unMatchedKeyHasBeenSet;

                    /**
                     * tracking
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backtracking;
                    bool m_backtrackingHasBeenSet;

                    /**
                     * 分隔符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIGEXTRACTRULE_H_
