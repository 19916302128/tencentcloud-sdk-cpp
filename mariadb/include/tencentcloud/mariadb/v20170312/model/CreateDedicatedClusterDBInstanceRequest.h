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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEDEDICATEDCLUSTERDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEDEDICATEDCLUSTERDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ResourceTag.h>
#include <tencentcloud/mariadb/v20170312/model/DBParamValue.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDedicatedClusterDBInstance请求参数结构体
                */
                class CreateDedicatedClusterDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateDedicatedClusterDBInstanceRequest();
                    ~CreateDedicatedClusterDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分配实例个数
                     * @return GoodsNum 分配实例个数
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置分配实例个数
                     * @param GoodsNum 分配实例个数
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取內存大小，单位GB
                     * @return Memory 內存大小，单位GB
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置內存大小，单位GB
                     * @param Memory 內存大小，单位GB
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取磁盘大小，单位GB
                     * @return Storage 磁盘大小，单位GB
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置磁盘大小，单位GB
                     * @param Storage 磁盘大小，单位GB
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取独享集群集群uuid
                     * @return ClusterId 独享集群集群uuid
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置独享集群集群uuid
                     * @param ClusterId 独享集群集群uuid
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取（废弃）可用区
                     * @return Zone （废弃）可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置（废弃）可用区
                     * @param Zone （废弃）可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取（废弃）Pid，可通过获取独享集群售卖配置接口得到
                     * @return Pid （废弃）Pid，可通过获取独享集群售卖配置接口得到
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置（废弃）Pid，可通过获取独享集群售卖配置接口得到
                     * @param Pid （废弃）Pid，可通过获取独享集群售卖配置接口得到
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取（废弃）机型
                     * @return Machine （废弃）机型
                     */
                    std::string GetMachine() const;

                    /**
                     * 设置（废弃）机型
                     * @param Machine （废弃）机型
                     */
                    void SetMachine(const std::string& _machine);

                    /**
                     * 判断参数 Machine 是否已赋值
                     * @return Machine 是否已赋值
                     */
                    bool MachineHasBeenSet() const;

                    /**
                     * 获取网络Id
                     * @return VpcId 网络Id
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置网络Id
                     * @param VpcId 网络Id
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网Id
                     * @return SubnetId 子网Id
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
                     * @param SubnetId 子网Id
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取db类型，不传默认0
                     * @return DbVersionId db类型，不传默认0
                     */
                    std::string GetDbVersionId() const;

                    /**
                     * 设置db类型，不传默认0
                     * @param DbVersionId db类型，不传默认0
                     */
                    void SetDbVersionId(const std::string& _dbVersionId);

                    /**
                     * 判断参数 DbVersionId 是否已赋值
                     * @return DbVersionId 是否已赋值
                     */
                    bool DbVersionIdHasBeenSet() const;

                    /**
                     * 获取（废弃）是否手动指定一组服务器分配, 运维使用
                     * @return Manual （废弃）是否手动指定一组服务器分配, 运维使用
                     */
                    int64_t GetManual() const;

                    /**
                     * 设置（废弃）是否手动指定一组服务器分配, 运维使用
                     * @param Manual （废弃）是否手动指定一组服务器分配, 运维使用
                     */
                    void SetManual(const int64_t& _manual);

                    /**
                     * 判断参数 Manual 是否已赋值
                     * @return Manual 是否已赋值
                     */
                    bool ManualHasBeenSet() const;

                    /**
                     * 获取（废弃）DeviceNo参数
                     * @return DeviceNo （废弃）DeviceNo参数
                     */
                    std::string GetDeviceNo() const;

                    /**
                     * 设置（废弃）DeviceNo参数
                     * @param DeviceNo （废弃）DeviceNo参数
                     */
                    void SetDeviceNo(const std::string& _deviceNo);

                    /**
                     * 判断参数 DeviceNo 是否已赋值
                     * @return DeviceNo 是否已赋值
                     */
                    bool DeviceNoHasBeenSet() const;

                    /**
                     * 获取安全组ID
                     * @return SecurityGroupIds 安全组ID
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID
                     * @param SecurityGroupIds 安全组ID
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取DCN源实例ID
                     * @return DcnInstanceId DCN源实例ID
                     */
                    std::string GetDcnInstanceId() const;

                    /**
                     * 设置DCN源实例ID
                     * @param DcnInstanceId DCN源实例ID
                     */
                    void SetDcnInstanceId(const std::string& _dcnInstanceId);

                    /**
                     * 判断参数 DcnInstanceId 是否已赋值
                     * @return DcnInstanceId 是否已赋值
                     */
                    bool DcnInstanceIdHasBeenSet() const;

                    /**
                     * 获取DCN源实例地域名
                     * @return DcnRegion DCN源实例地域名
                     */
                    std::string GetDcnRegion() const;

                    /**
                     * 设置DCN源实例地域名
                     * @param DcnRegion DCN源实例地域名
                     */
                    void SetDcnRegion(const std::string& _dcnRegion);

                    /**
                     * 判断参数 DcnRegion 是否已赋值
                     * @return DcnRegion 是否已赋值
                     */
                    bool DcnRegionHasBeenSet() const;

                    /**
                     * 获取自定义实例名称
                     * @return InstanceName 自定义实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置自定义实例名称
                     * @param InstanceName 自定义实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return ResourceTags 标签
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置标签
                     * @param ResourceTags 标签
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取支持IPv6标志：1 支持， 0 不支持
                     * @return Ipv6Flag 支持IPv6标志：1 支持， 0 不支持
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置支持IPv6标志：1 支持， 0 不支持
                     * @param Ipv6Flag 支持IPv6标志：1 支持， 0 不支持
                     */
                    void SetIpv6Flag(const int64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * @return InitParams 参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     */
                    std::vector<DBParamValue> GetInitParams() const;

                    /**
                     * 设置参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     * @param InitParams 参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     */
                    void SetInitParams(const std::vector<DBParamValue>& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     */
                    bool InitParamsHasBeenSet() const;

                    /**
                     * 获取实例节点数
                     * @return NodeNum 实例节点数
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置实例节点数
                     * @param NodeNum 实例节点数
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取指定主节点uuid，不填随机分配
                     * @return MasterHostId 指定主节点uuid，不填随机分配
                     */
                    std::string GetMasterHostId() const;

                    /**
                     * 设置指定主节点uuid，不填随机分配
                     * @param MasterHostId 指定主节点uuid，不填随机分配
                     */
                    void SetMasterHostId(const std::string& _masterHostId);

                    /**
                     * 判断参数 MasterHostId 是否已赋值
                     * @return MasterHostId 是否已赋值
                     */
                    bool MasterHostIdHasBeenSet() const;

                    /**
                     * 获取指定从节点uuid，不填随机分配
                     * @return SlaveHostIds 指定从节点uuid，不填随机分配
                     */
                    std::vector<std::string> GetSlaveHostIds() const;

                    /**
                     * 设置指定从节点uuid，不填随机分配
                     * @param SlaveHostIds 指定从节点uuid，不填随机分配
                     */
                    void SetSlaveHostIds(const std::vector<std::string>& _slaveHostIds);

                    /**
                     * 判断参数 SlaveHostIds 是否已赋值
                     * @return SlaveHostIds 是否已赋值
                     */
                    bool SlaveHostIdsHasBeenSet() const;

                    /**
                     * 获取需要回档的源实例ID
                     * @return RollbackInstanceId 需要回档的源实例ID
                     */
                    std::string GetRollbackInstanceId() const;

                    /**
                     * 设置需要回档的源实例ID
                     * @param RollbackInstanceId 需要回档的源实例ID
                     */
                    void SetRollbackInstanceId(const std::string& _rollbackInstanceId);

                    /**
                     * 判断参数 RollbackInstanceId 是否已赋值
                     * @return RollbackInstanceId 是否已赋值
                     */
                    bool RollbackInstanceIdHasBeenSet() const;

                    /**
                     * 获取回档时间
                     * @return RollbackTime 回档时间
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置回档时间
                     * @param RollbackTime 回档时间
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     */
                    bool RollbackTimeHasBeenSet() const;

                private:

                    /**
                     * 分配实例个数
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 內存大小，单位GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘大小，单位GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 独享集群集群uuid
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * （废弃）可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * （废弃）Pid，可通过获取独享集群售卖配置接口得到
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * （废弃）机型
                     */
                    std::string m_machine;
                    bool m_machineHasBeenSet;

                    /**
                     * 网络Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * db类型，不传默认0
                     */
                    std::string m_dbVersionId;
                    bool m_dbVersionIdHasBeenSet;

                    /**
                     * （废弃）是否手动指定一组服务器分配, 运维使用
                     */
                    int64_t m_manual;
                    bool m_manualHasBeenSet;

                    /**
                     * （废弃）DeviceNo参数
                     */
                    std::string m_deviceNo;
                    bool m_deviceNoHasBeenSet;

                    /**
                     * 安全组ID
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * DCN源实例ID
                     */
                    std::string m_dcnInstanceId;
                    bool m_dcnInstanceIdHasBeenSet;

                    /**
                     * DCN源实例地域名
                     */
                    std::string m_dcnRegion;
                    bool m_dcnRegionHasBeenSet;

                    /**
                     * 自定义实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 支持IPv6标志：1 支持， 0 不支持
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * 参数列表。本接口的可选值为：character_set_server（字符集，必传），lower_case_table_names（表名大小写敏感，必传，0 - 敏感；1-不敏感），innodb_page_size（innodb数据页，默认16K），sync_mode（同步模式：0 - 异步； 1 - 强同步；2 - 强同步可退化。默认为强同步可退化）。
                     */
                    std::vector<DBParamValue> m_initParams;
                    bool m_initParamsHasBeenSet;

                    /**
                     * 实例节点数
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 指定主节点uuid，不填随机分配
                     */
                    std::string m_masterHostId;
                    bool m_masterHostIdHasBeenSet;

                    /**
                     * 指定从节点uuid，不填随机分配
                     */
                    std::vector<std::string> m_slaveHostIds;
                    bool m_slaveHostIdsHasBeenSet;

                    /**
                     * 需要回档的源实例ID
                     */
                    std::string m_rollbackInstanceId;
                    bool m_rollbackInstanceIdHasBeenSet;

                    /**
                     * 回档时间
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_CREATEDEDICATEDCLUSTERDBINSTANCEREQUEST_H_
