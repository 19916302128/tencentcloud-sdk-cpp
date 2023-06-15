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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 域名资产
                */
                class DomainAssetVO : public AbstractModel
                {
                public:
                    DomainAssetVO();
                    ~DomainAssetVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetId() const;

                    /**
                     * 设置资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetId 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetId(const std::vector<std::string>& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetName() const;

                    /**
                     * 设置资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetName(const std::vector<std::string>& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAssetType() const;

                    /**
                     * 设置资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::vector<std::string>& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::vector<std::string>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WAFStatus Waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWAFStatus() const;

                    /**
                     * 设置Waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wAFStatus Waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWAFStatus(const uint64_t& _wAFStatus);

                    /**
                     * 判断参数 WAFStatus 是否已赋值
                     * @return WAFStatus 是否已赋值
                     * 
                     */
                    bool WAFStatusHasBeenSet() const;

                    /**
                     * 获取资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetCreateTime 资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetCreateTime() const;

                    /**
                     * 设置资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetCreateTime 资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetCreateTime(const std::string& _assetCreateTime);

                    /**
                     * 判断参数 AssetCreateTime 是否已赋值
                     * @return AssetCreateTime 是否已赋值
                     * 
                     */
                    bool AssetCreateTimeHasBeenSet() const;

                    /**
                     * 获取Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NickName 账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nickName 账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCore 是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsCore() const;

                    /**
                     * 设置是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCore 是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCore(const uint64_t& _isCore);

                    /**
                     * 判断参数 IsCore 是否已赋值
                     * @return IsCore 是否已赋值
                     * 
                     */
                    bool IsCoreHasBeenSet() const;

                    /**
                     * 获取是否云上资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCloud 是否云上资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIsCloud() const;

                    /**
                     * 设置是否云上资产
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCloud 是否云上资产
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCloud(const uint64_t& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attack 网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attack 网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Access 网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _access 网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Intercept 网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntercept() const;

                    /**
                     * 设置网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intercept 网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntercept(const uint64_t& _intercept);

                    /**
                     * 判断参数 Intercept 是否已赋值
                     * @return Intercept 是否已赋值
                     * 
                     */
                    bool InterceptHasBeenSet() const;

                    /**
                     * 获取入站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InBandwidth 入站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInBandwidth() const;

                    /**
                     * 设置入站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inBandwidth 入站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInBandwidth(const std::string& _inBandwidth);

                    /**
                     * 判断参数 InBandwidth 是否已赋值
                     * @return InBandwidth 是否已赋值
                     * 
                     */
                    bool InBandwidthHasBeenSet() const;

                    /**
                     * 获取出站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutBandwidth 出站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutBandwidth() const;

                    /**
                     * 设置出站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outBandwidth 出站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutBandwidth(const std::string& _outBandwidth);

                    /**
                     * 判断参数 OutBandwidth 是否已赋值
                     * @return OutBandwidth 是否已赋值
                     * 
                     */
                    bool OutBandwidthHasBeenSet() const;

                    /**
                     * 获取入站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InFlow 入站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInFlow() const;

                    /**
                     * 设置入站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inFlow 入站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInFlow(const std::string& _inFlow);

                    /**
                     * 判断参数 InFlow 是否已赋值
                     * @return InFlow 是否已赋值
                     * 
                     */
                    bool InFlowHasBeenSet() const;

                    /**
                     * 获取出站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutFlow 出站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutFlow() const;

                    /**
                     * 设置出站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outFlow 出站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutFlow(const std::string& _outFlow);

                    /**
                     * 判断参数 OutFlow 是否已赋值
                     * @return OutFlow 是否已赋值
                     * 
                     */
                    bool OutFlowHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastScanTime 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastScanTime 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PortRisk 端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPortRisk() const;

                    /**
                     * 设置端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _portRisk 端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPortRisk(const uint64_t& _portRisk);

                    /**
                     * 判断参数 PortRisk 是否已赋值
                     * @return PortRisk 是否已赋值
                     * 
                     */
                    bool PortRiskHasBeenSet() const;

                    /**
                     * 获取漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulnerabilityRisk 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVulnerabilityRisk() const;

                    /**
                     * 设置漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulnerabilityRisk 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulnerabilityRisk(const uint64_t& _vulnerabilityRisk);

                    /**
                     * 判断参数 VulnerabilityRisk 是否已赋值
                     * @return VulnerabilityRisk 是否已赋值
                     * 
                     */
                    bool VulnerabilityRiskHasBeenSet() const;

                    /**
                     * 获取配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigurationRisk 配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConfigurationRisk() const;

                    /**
                     * 设置配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configurationRisk 配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigurationRisk(const uint64_t& _configurationRisk);

                    /**
                     * 判断参数 ConfigurationRisk 是否已赋值
                     * @return ConfigurationRisk 是否已赋值
                     * 
                     */
                    bool ConfigurationRiskHasBeenSet() const;

                    /**
                     * 获取扫描任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanTask 扫描任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScanTask() const;

                    /**
                     * 设置扫描任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scanTask 扫描任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScanTask(const uint64_t& _scanTask);

                    /**
                     * 判断参数 ScanTask 是否已赋值
                     * @return ScanTask 是否已赋值
                     * 
                     */
                    bool ScanTaskHasBeenSet() const;

                    /**
                     * 获取域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubDomain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subDomain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubDomain(const std::string& _subDomain);

                    /**
                     * 判断参数 SubDomain 是否已赋值
                     * @return SubDomain 是否已赋值
                     * 
                     */
                    bool SubDomainHasBeenSet() const;

                    /**
                     * 获取解析ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SeverIp 解析ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSeverIp() const;

                    /**
                     * 设置解析ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _severIp 解析ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeverIp(const std::vector<std::string>& _severIp);

                    /**
                     * 判断参数 SeverIp 是否已赋值
                     * @return SeverIp 是否已赋值
                     * 
                     */
                    bool SeverIpHasBeenSet() const;

                    /**
                     * 获取boi访问数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BotCount boi访问数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBotCount() const;

                    /**
                     * 设置boi访问数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _botCount boi访问数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBotCount(const uint64_t& _botCount);

                    /**
                     * 判断参数 BotCount 是否已赋值
                     * @return BotCount 是否已赋值
                     * 
                     */
                    bool BotCountHasBeenSet() const;

                    /**
                     * 获取弱口令风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeakPassword 弱口令风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeakPassword() const;

                    /**
                     * 设置弱口令风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weakPassword 弱口令风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeakPassword(const uint64_t& _weakPassword);

                    /**
                     * 判断参数 WeakPassword 是否已赋值
                     * @return WeakPassword 是否已赋值
                     * 
                     */
                    bool WeakPasswordHasBeenSet() const;

                    /**
                     * 获取内容风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebContentRisk 内容风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWebContentRisk() const;

                    /**
                     * 设置内容风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webContentRisk 内容风险
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebContentRisk(const uint64_t& _webContentRisk);

                    /**
                     * 判断参数 WebContentRisk 是否已赋值
                     * @return WebContentRisk 是否已赋值
                     * 
                     */
                    bool WebContentRiskHasBeenSet() const;

                    /**
                     * 获取tag标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag tag标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置tag标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag tag标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取关联实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType 关联实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置关联实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceType 关联实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取memberiD
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberId memberiD
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置memberiD
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberId memberiD
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取cc攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CCAttack cc攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCCAttack() const;

                    /**
                     * 设置cc攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cCAttack cc攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCCAttack(const int64_t& _cCAttack);

                    /**
                     * 判断参数 CCAttack 是否已赋值
                     * @return CCAttack 是否已赋值
                     * 
                     */
                    bool CCAttackHasBeenSet() const;

                    /**
                     * 获取web攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebAttack web攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWebAttack() const;

                    /**
                     * 设置web攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webAttack web攻击
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebAttack(const int64_t& _webAttack);

                    /**
                     * 判断参数 WebAttack 是否已赋值
                     * @return WebAttack 是否已赋值
                     * 
                     */
                    bool WebAttackHasBeenSet() const;

                private:

                    /**
                     * 资产id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 资产类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Waf状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_wAFStatus;
                    bool m_wAFStatusHasBeenSet;

                    /**
                     * 资产创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetCreateTime;
                    bool m_assetCreateTimeHasBeenSet;

                    /**
                     * Appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 账号id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 是否核心
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isCore;
                    bool m_isCoreHasBeenSet;

                    /**
                     * 是否云上资产
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * 网络攻击
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * 网络访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * 网络拦截
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intercept;
                    bool m_interceptHasBeenSet;

                    /**
                     * 入站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inBandwidth;
                    bool m_inBandwidthHasBeenSet;

                    /**
                     * 出站峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outBandwidth;
                    bool m_outBandwidthHasBeenSet;

                    /**
                     * 入站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inFlow;
                    bool m_inFlowHasBeenSet;

                    /**
                     * 出站累计流量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outFlow;
                    bool m_outFlowHasBeenSet;

                    /**
                     * 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 端口风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_portRisk;
                    bool m_portRiskHasBeenSet;

                    /**
                     * 漏洞风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_vulnerabilityRisk;
                    bool m_vulnerabilityRiskHasBeenSet;

                    /**
                     * 配置风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * 扫描任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scanTask;
                    bool m_scanTaskHasBeenSet;

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subDomain;
                    bool m_subDomainHasBeenSet;

                    /**
                     * 解析ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_severIp;
                    bool m_severIpHasBeenSet;

                    /**
                     * boi访问数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_botCount;
                    bool m_botCountHasBeenSet;

                    /**
                     * 弱口令风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weakPassword;
                    bool m_weakPasswordHasBeenSet;

                    /**
                     * 内容风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_webContentRisk;
                    bool m_webContentRiskHasBeenSet;

                    /**
                     * tag标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 关联实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * memberiD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * cc攻击
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cCAttack;
                    bool m_cCAttackHasBeenSet;

                    /**
                     * web攻击
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_webAttack;
                    bool m_webAttackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DOMAINASSETVO_H_
