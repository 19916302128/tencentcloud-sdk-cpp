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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FILLEDCOMPONENT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FILLEDCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 文档内的填充控件返回结构体，返回控件的基本信息和填写内容值
                */
                class FilledComponent : public AbstractModel
                {
                public:
                    FilledComponent();
                    ~FilledComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取控件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComponentId 控件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComponentId() const;

                    /**
                     * 设置控件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _componentId 控件Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponentId(const std::string& _componentId);

                    /**
                     * 判断参数 ComponentId 是否已赋值
                     * @return ComponentId 是否已赋值
                     * 
                     */
                    bool ComponentIdHasBeenSet() const;

                    /**
                     * 获取控件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComponentName 控件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置控件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _componentName 控件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取控件填写状态；0-未填写；1-已填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComponentFillStatus 控件填写状态；0-未填写；1-已填写
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComponentFillStatus() const;

                    /**
                     * 设置控件填写状态；0-未填写；1-已填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _componentFillStatus 控件填写状态；0-未填写；1-已填写
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponentFillStatus(const std::string& _componentFillStatus);

                    /**
                     * 判断参数 ComponentFillStatus 是否已赋值
                     * @return ComponentFillStatus 是否已赋值
                     * 
                     */
                    bool ComponentFillStatusHasBeenSet() const;

                    /**
                     * 获取控件填写内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComponentValue 控件填写内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComponentValue() const;

                    /**
                     * 设置控件填写内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _componentValue 控件填写内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponentValue(const std::string& _componentValue);

                    /**
                     * 判断参数 ComponentValue 是否已赋值
                     * @return ComponentValue 是否已赋值
                     * 
                     */
                    bool ComponentValueHasBeenSet() const;

                    /**
                     * 获取图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageUrl 图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageUrl 图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * 控件Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_componentId;
                    bool m_componentIdHasBeenSet;

                    /**
                     * 控件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * 控件填写状态；0-未填写；1-已填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_componentFillStatus;
                    bool m_componentFillStatusHasBeenSet;

                    /**
                     * 控件填写内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_componentValue;
                    bool m_componentValueHasBeenSet;

                    /**
                     * 图片填充控件下载链接，如果是图片填充控件时，这里返回图片的下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FILLEDCOMPONENT_H_
