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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EMBEDURLOPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EMBEDURLOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 个性化参数
                */
                class EmbedUrlOption : public AbstractModel
                {
                public:
                    EmbedUrlOption();
                    ~EmbedUrlOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同详情预览，允许展示控件信息
<br/>true：允许在合同详情页展示控件
<br/>false：不允许在合同详情页展示控件
<br/>默认false，合同详情页不展示控件
                     * @return ShowFlowDetailComponent 合同详情预览，允许展示控件信息
<br/>true：允许在合同详情页展示控件
<br/>false：不允许在合同详情页展示控件
<br/>默认false，合同详情页不展示控件
                     * 
                     */
                    bool GetShowFlowDetailComponent() const;

                    /**
                     * 设置合同详情预览，允许展示控件信息
<br/>true：允许在合同详情页展示控件
<br/>false：不允许在合同详情页展示控件
<br/>默认false，合同详情页不展示控件
                     * @param _showFlowDetailComponent 合同详情预览，允许展示控件信息
<br/>true：允许在合同详情页展示控件
<br/>false：不允许在合同详情页展示控件
<br/>默认false，合同详情页不展示控件
                     * 
                     */
                    void SetShowFlowDetailComponent(const bool& _showFlowDetailComponent);

                    /**
                     * 判断参数 ShowFlowDetailComponent 是否已赋值
                     * @return ShowFlowDetailComponent 是否已赋值
                     * 
                     */
                    bool ShowFlowDetailComponentHasBeenSet() const;

                    /**
                     * 获取模板预览，允许展示模板控件信息
<br/>true：允许在模板预览页展示控件
<br/>false：不允许在模板预览页展示控件
<br/>默认false，模板预览页不展示控件
                     * @return ShowTemplateComponent 模板预览，允许展示模板控件信息
<br/>true：允许在模板预览页展示控件
<br/>false：不允许在模板预览页展示控件
<br/>默认false，模板预览页不展示控件
                     * 
                     */
                    bool GetShowTemplateComponent() const;

                    /**
                     * 设置模板预览，允许展示模板控件信息
<br/>true：允许在模板预览页展示控件
<br/>false：不允许在模板预览页展示控件
<br/>默认false，模板预览页不展示控件
                     * @param _showTemplateComponent 模板预览，允许展示模板控件信息
<br/>true：允许在模板预览页展示控件
<br/>false：不允许在模板预览页展示控件
<br/>默认false，模板预览页不展示控件
                     * 
                     */
                    void SetShowTemplateComponent(const bool& _showTemplateComponent);

                    /**
                     * 判断参数 ShowTemplateComponent 是否已赋值
                     * @return ShowTemplateComponent 是否已赋值
                     * 
                     */
                    bool ShowTemplateComponentHasBeenSet() const;

                private:

                    /**
                     * 合同详情预览，允许展示控件信息
<br/>true：允许在合同详情页展示控件
<br/>false：不允许在合同详情页展示控件
<br/>默认false，合同详情页不展示控件
                     */
                    bool m_showFlowDetailComponent;
                    bool m_showFlowDetailComponentHasBeenSet;

                    /**
                     * 模板预览，允许展示模板控件信息
<br/>true：允许在模板预览页展示控件
<br/>false：不允许在模板预览页展示控件
<br/>默认false，模板预览页不展示控件
                     */
                    bool m_showTemplateComponent;
                    bool m_showTemplateComponentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EMBEDURLOPTION_H_
