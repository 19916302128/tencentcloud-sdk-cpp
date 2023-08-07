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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/GatewayVersion.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询网关信息返回结果
                */
                class DescribeGatewayData : public AbstractModel
                {
                public:
                    DescribeGatewayData();
                    ~DescribeGatewayData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关索引ID，用于网关查询，更新，删除操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayId 网关索引ID，用于网关查询，更新，删除操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关索引ID，用于网关查询，更新，删除操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayId 网关索引ID，用于网关查询，更新，删除操作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取网关编码，由网关设备生成的唯一编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GwId 网关编码，由网关设备生成的唯一编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGwId() const;

                    /**
                     * 设置网关编码，由网关设备生成的唯一编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gwId 网关编码，由网关设备生成的唯一编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGwId(const std::string& _gwId);

                    /**
                     * 判断参数 GwId 是否已赋值
                     * @return GwId 是否已赋值
                     * 
                     */
                    bool GwIdHasBeenSet() const;

                    /**
                     * 获取网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取服务节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 服务节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置服务节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 服务节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取服务节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 服务节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置服务节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 服务节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取网关状态，0：离线，1:在线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 网关状态，0：离线，1:在线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置网关状态，0：离线，1:在线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 网关状态，0：离线，1:在线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取网关版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 网关版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GatewayVersion> GetVersion() const;

                    /**
                     * 设置网关版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 网关版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::vector<GatewayVersion>& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取网关下挂设备数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceNum 网关下挂设备数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeviceNum() const;

                    /**
                     * 设置网关下挂设备数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceNum 网关下挂设备数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceNum(const int64_t& _deviceNum);

                    /**
                     * 判断参数 DeviceNum 是否已赋值
                     * @return DeviceNum 是否已赋值
                     * 
                     */
                    bool DeviceNumHasBeenSet() const;

                    /**
                     * 获取激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 网关索引ID，用于网关查询，更新，删除操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关编码，由网关设备生成的唯一编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gwId;
                    bool m_gwIdHasBeenSet;

                    /**
                     * 网关名称，仅支持中文、英文、数字、_、-，长度不超过32个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 网关描述，仅支持中文、英文、数字、_、-，长度不超过128个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 服务节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 服务节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 网关状态，0：离线，1:在线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 网关版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GatewayVersion> m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 网关下挂设备数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deviceNum;
                    bool m_deviceNumHasBeenSet;

                    /**
                     * 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 所属地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYDATA_H_
