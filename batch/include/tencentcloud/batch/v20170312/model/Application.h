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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_APPLICATION_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_APPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Docker.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 应用程序信息
                */
                class Application : public AbstractModel
                {
                public:
                    Application();
                    ~Application() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用程序的交付方式，包括PACKAGE、LOCAL 两种取值，分别指远程存储的软件包、计算环境本地。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliveryForm 应用程序的交付方式，包括PACKAGE、LOCAL 两种取值，分别指远程存储的软件包、计算环境本地。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliveryForm() const;

                    /**
                     * 设置应用程序的交付方式，包括PACKAGE、LOCAL 两种取值，分别指远程存储的软件包、计算环境本地。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliveryForm 应用程序的交付方式，包括PACKAGE、LOCAL 两种取值，分别指远程存储的软件包、计算环境本地。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliveryForm(const std::string& _deliveryForm);

                    /**
                     * 判断参数 DeliveryForm 是否已赋值
                     * @return DeliveryForm 是否已赋值
                     * 
                     */
                    bool DeliveryFormHasBeenSet() const;

                    /**
                     * 获取任务执行命令。与Commands不能同时指定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Command 任务执行命令。与Commands不能同时指定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置任务执行命令。与Commands不能同时指定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _command 任务执行命令。与Commands不能同时指定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取应用程序软件包的远程存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackagePath 应用程序软件包的远程存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackagePath() const;

                    /**
                     * 设置应用程序软件包的远程存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packagePath 应用程序软件包的远程存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackagePath(const std::string& _packagePath);

                    /**
                     * 判断参数 PackagePath 是否已赋值
                     * @return PackagePath 是否已赋值
                     * 
                     */
                    bool PackagePathHasBeenSet() const;

                    /**
                     * 获取应用使用Docker的相关配置。在使用Docker配置的情况下，DeliveryForm 为 LOCAL 表示直接使用Docker镜像内部的应用软件，通过Docker方式运行；DeliveryForm 为 PACKAGE，表示将远程应用包注入到Docker镜像后，通过Docker方式运行。为避免Docker不同版本的兼容性问题，Docker安装包及相关依赖由Batch统一负责，对于已安装Docker的自定义镜像，请卸载后再使用Docker特性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Docker 应用使用Docker的相关配置。在使用Docker配置的情况下，DeliveryForm 为 LOCAL 表示直接使用Docker镜像内部的应用软件，通过Docker方式运行；DeliveryForm 为 PACKAGE，表示将远程应用包注入到Docker镜像后，通过Docker方式运行。为避免Docker不同版本的兼容性问题，Docker安装包及相关依赖由Batch统一负责，对于已安装Docker的自定义镜像，请卸载后再使用Docker特性。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Docker GetDocker() const;

                    /**
                     * 设置应用使用Docker的相关配置。在使用Docker配置的情况下，DeliveryForm 为 LOCAL 表示直接使用Docker镜像内部的应用软件，通过Docker方式运行；DeliveryForm 为 PACKAGE，表示将远程应用包注入到Docker镜像后，通过Docker方式运行。为避免Docker不同版本的兼容性问题，Docker安装包及相关依赖由Batch统一负责，对于已安装Docker的自定义镜像，请卸载后再使用Docker特性。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docker 应用使用Docker的相关配置。在使用Docker配置的情况下，DeliveryForm 为 LOCAL 表示直接使用Docker镜像内部的应用软件，通过Docker方式运行；DeliveryForm 为 PACKAGE，表示将远程应用包注入到Docker镜像后，通过Docker方式运行。为避免Docker不同版本的兼容性问题，Docker安装包及相关依赖由Batch统一负责，对于已安装Docker的自定义镜像，请卸载后再使用Docker特性。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocker(const Docker& _docker);

                    /**
                     * 判断参数 Docker 是否已赋值
                     * @return Docker 是否已赋值
                     * 
                     */
                    bool DockerHasBeenSet() const;

                private:

                    /**
                     * 应用程序的交付方式，包括PACKAGE、LOCAL 两种取值，分别指远程存储的软件包、计算环境本地。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliveryForm;
                    bool m_deliveryFormHasBeenSet;

                    /**
                     * 任务执行命令。与Commands不能同时指定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 应用程序软件包的远程存储路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packagePath;
                    bool m_packagePathHasBeenSet;

                    /**
                     * 应用使用Docker的相关配置。在使用Docker配置的情况下，DeliveryForm 为 LOCAL 表示直接使用Docker镜像内部的应用软件，通过Docker方式运行；DeliveryForm 为 PACKAGE，表示将远程应用包注入到Docker镜像后，通过Docker方式运行。为避免Docker不同版本的兼容性问题，Docker安装包及相关依赖由Batch统一负责，对于已安装Docker的自定义镜像，请卸载后再使用Docker特性。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Docker m_docker;
                    bool m_dockerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_APPLICATION_H_
