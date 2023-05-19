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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTEMBELLISHREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTEMBELLISHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextEmbellish请求参数结构体
                */
                class TextEmbellishRequest : public AbstractModel
                {
                public:
                    TextEmbellishRequest();
                    ~TextEmbellishRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待润色的文本。中文文本长度需<=50字符；英文文本长度需<=30个单词。
                     * @return Text 待润色的文本。中文文本长度需<=50字符；英文文本长度需<=30个单词。
                     */
                    std::string GetText() const;

                    /**
                     * 设置待润色的文本。中文文本长度需<=50字符；英文文本长度需<=30个单词。
                     * @param Text 待润色的文本。中文文本长度需<=50字符；英文文本长度需<=30个单词。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取待润色文本的语言类型，支持语言如下：
zh：中文
en：英文
                     * @return SourceLang 待润色文本的语言类型，支持语言如下：
zh：中文
en：英文
                     */
                    std::string GetSourceLang() const;

                    /**
                     * 设置待润色文本的语言类型，支持语言如下：
zh：中文
en：英文
                     * @param SourceLang 待润色文本的语言类型，支持语言如下：
zh：中文
en：英文
                     */
                    void SetSourceLang(const std::string& _sourceLang);

                    /**
                     * 判断参数 SourceLang 是否已赋值
                     * @return SourceLang 是否已赋值
                     */
                    bool SourceLangHasBeenSet() const;

                    /**
                     * 获取返回润色结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * @return Number 返回润色结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置返回润色结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     * @param Number 返回润色结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取控制润色类型，类型如下：
both：同时返回改写和扩写
expansion：扩写
rewriting：改写
m2a：从现代文改写为古文
a2m：从古文改写为现代文
默认为both。
                     * @return Style 控制润色类型，类型如下：
both：同时返回改写和扩写
expansion：扩写
rewriting：改写
m2a：从现代文改写为古文
a2m：从古文改写为现代文
默认为both。
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置控制润色类型，类型如下：
both：同时返回改写和扩写
expansion：扩写
rewriting：改写
m2a：从现代文改写为古文
a2m：从古文改写为现代文
默认为both。
                     * @param Style 控制润色类型，类型如下：
both：同时返回改写和扩写
expansion：扩写
rewriting：改写
m2a：从现代文改写为古文
a2m：从古文改写为现代文
默认为both。
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     */
                    bool StyleHasBeenSet() const;

                private:

                    /**
                     * 待润色的文本。中文文本长度需<=50字符；英文文本长度需<=30个单词。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 待润色文本的语言类型，支持语言如下：
zh：中文
en：英文
                     */
                    std::string m_sourceLang;
                    bool m_sourceLangHasBeenSet;

                    /**
                     * 返回润色结果的个数。数量需>=1且<=5。
（注意实际结果可能小于指定个数）
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 控制润色类型，类型如下：
both：同时返回改写和扩写
expansion：扩写
rewriting：改写
m2a：从现代文改写为古文
a2m：从古文改写为现代文
默认为both。
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTEMBELLISHREQUEST_H_
