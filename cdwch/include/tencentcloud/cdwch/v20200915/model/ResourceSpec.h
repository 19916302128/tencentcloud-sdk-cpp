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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_RESOURCESPEC_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_RESOURCESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/DiskSpec.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 资源规格描述信息
                */
                class ResourceSpec : public AbstractModel
                {
                public:
                    ResourceSpec();
                    ~ResourceSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格名称，例如“SCH1"
                     * @return Name 规格名称，例如“SCH1"
                     */
                    std::string GetName() const;

                    /**
                     * 设置规格名称，例如“SCH1"
                     * @param Name 规格名称，例如“SCH1"
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取cpu核数
                     * @return Cpu cpu核数
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置cpu核数
                     * @param Cpu cpu核数
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存大小，单位G
                     * @return Mem 内存大小，单位G
                     */
                    int64_t GetMem() const;

                    /**
                     * 设置内存大小，单位G
                     * @param Mem 内存大小，单位G
                     */
                    void SetMem(const int64_t& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO
                     * @return Type 分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO
                     */
                    std::string GetType() const;

                    /**
                     * 设置分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO
                     * @param Type 分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取系统盘描述信息
                     * @return SystemDisk 系统盘描述信息
                     */
                    DiskSpec GetSystemDisk() const;

                    /**
                     * 设置系统盘描述信息
                     * @param SystemDisk 系统盘描述信息
                     */
                    void SetSystemDisk(const DiskSpec& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取数据盘描述信息
                     * @return DataDisk 数据盘描述信息
                     */
                    DiskSpec GetDataDisk() const;

                    /**
                     * 设置数据盘描述信息
                     * @param DataDisk 数据盘描述信息
                     */
                    void SetDataDisk(const DiskSpec& _dataDisk);

                    /**
                     * 判断参数 DataDisk 是否已赋值
                     * @return DataDisk 是否已赋值
                     */
                    bool DataDiskHasBeenSet() const;

                    /**
                     * 获取最大节点数目限制
                     * @return MaxNodeSize 最大节点数目限制
                     */
                    int64_t GetMaxNodeSize() const;

                    /**
                     * 设置最大节点数目限制
                     * @param MaxNodeSize 最大节点数目限制
                     */
                    void SetMaxNodeSize(const int64_t& _maxNodeSize);

                    /**
                     * 判断参数 MaxNodeSize 是否已赋值
                     * @return MaxNodeSize 是否已赋值
                     */
                    bool MaxNodeSizeHasBeenSet() const;

                    /**
                     * 获取是否可用，false代表售罄
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Available 是否可用，false代表售罄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置是否可用，false代表售罄
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Available 是否可用，false代表售罄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取规格描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputeSpecDesc 规格描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetComputeSpecDesc() const;

                    /**
                     * 设置规格描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ComputeSpecDesc 规格描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComputeSpecDesc(const std::string& _computeSpecDesc);

                    /**
                     * 判断参数 ComputeSpecDesc 是否已赋值
                     * @return ComputeSpecDesc 是否已赋值
                     */
                    bool ComputeSpecDescHasBeenSet() const;

                    /**
                     * 获取规格名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 规格名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置规格名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DisplayName 规格名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取库存数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceQuota 库存数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetInstanceQuota() const;

                    /**
                     * 设置库存数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceQuota 库存数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceQuota(const int64_t& _instanceQuota);

                    /**
                     * 判断参数 InstanceQuota 是否已赋值
                     * @return InstanceQuota 是否已赋值
                     */
                    bool InstanceQuotaHasBeenSet() const;

                private:

                    /**
                     * 规格名称，例如“SCH1"
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * cpu核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存大小，单位G
                     */
                    int64_t m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * 分类标记，STANDARD/BIGDATA/HIGHIO分别表示标准型/大数据型/高IO
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 系统盘描述信息
                     */
                    DiskSpec m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 数据盘描述信息
                     */
                    DiskSpec m_dataDisk;
                    bool m_dataDiskHasBeenSet;

                    /**
                     * 最大节点数目限制
                     */
                    int64_t m_maxNodeSize;
                    bool m_maxNodeSizeHasBeenSet;

                    /**
                     * 是否可用，false代表售罄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 规格描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computeSpecDesc;
                    bool m_computeSpecDescHasBeenSet;

                    /**
                     * 规格名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 库存数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceQuota;
                    bool m_instanceQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_RESOURCESPEC_H_
