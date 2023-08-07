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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEORGANIZATIONDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEORGANIZATIONDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询组织数据返回结果
                */
                class DescribeOrganizationData : public AbstractModel
                {
                public:
                    DescribeOrganizationData();
                    ~DescribeOrganizationData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组织 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationId 组织 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置组织 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationId 组织 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取组织名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 组织名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置组织名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 组织名称
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
                     * 获取组织父节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 组织父节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置组织父节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 组织父节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取组织层级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 组织层级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置组织层级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 组织层级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取组织结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentIds 组织结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentIds() const;

                    /**
                     * 设置组织结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentIds 组织结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentIds(const std::string& _parentIds);

                    /**
                     * 判断参数 ParentIds 是否已赋值
                     * @return ParentIds 是否已赋值
                     * 
                     */
                    bool ParentIdsHasBeenSet() const;

                    /**
                     * 获取设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取设备在线数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Online 设备在线数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOnline() const;

                    /**
                     * 设置设备在线数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _online 设备在线数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnline(const int64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                private:

                    /**
                     * 组织 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * 组织名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 组织父节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 组织层级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 组织结构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentIds;
                    bool m_parentIdsHasBeenSet;

                    /**
                     * 设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 设备在线数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_online;
                    bool m_onlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEORGANIZATIONDATA_H_
