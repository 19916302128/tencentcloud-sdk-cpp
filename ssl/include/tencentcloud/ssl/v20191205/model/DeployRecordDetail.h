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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 部署记录详情
                */
                class DeployRecordDetail : public AbstractModel
                {
                public:
                    DeployRecordDetail();
                    ~DeployRecordDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署记录详情ID
                     * @return Id 部署记录详情ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置部署记录详情ID
                     * @param Id 部署记录详情ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取部署证书ID
                     * @return CertId 部署证书ID
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置部署证书ID
                     * @param CertId 部署证书ID
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取原绑定证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldCertId 原绑定证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOldCertId() const;

                    /**
                     * 设置原绑定证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OldCertId 原绑定证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOldCertId(const std::string& _oldCertId);

                    /**
                     * 判断参数 OldCertId 是否已赋值
                     * @return OldCertId 是否已赋值
                     */
                    bool OldCertIdHasBeenSet() const;

                    /**
                     * 获取部署实例ID
                     * @return InstanceId 部署实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置部署实例ID
                     * @param InstanceId 部署实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取部署实例名称
                     * @return InstanceName 部署实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置部署实例名称
                     * @param InstanceName 部署实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取部署监听器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListenerId 部署监听器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置部署监听器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ListenerId 部署监听器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取部署域名列表
                     * @return Domains 部署域名列表
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置部署域名列表
                     * @param Domains 部署域名列表
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取部署监听器协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Protocol 部署监听器协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置部署监听器协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Protocol 部署监听器协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取部署状态
                     * @return Status 部署状态
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置部署状态
                     * @param Status 部署状态
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取部署错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMsg 部署错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置部署错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorMsg 部署错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取部署记录详情创建时间
                     * @return CreateTime 部署记录详情创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置部署记录详情创建时间
                     * @param CreateTime 部署记录详情创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取部署记录详情最后一次更新时间
                     * @return UpdateTime 部署记录详情最后一次更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置部署记录详情最后一次更新时间
                     * @param UpdateTime 部署记录详情最后一次更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取部署监听器名称
                     * @return ListenerName 部署监听器名称
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置部署监听器名称
                     * @param ListenerName 部署监听器名称
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取是否开启SNI
                     * @return SniSwitch 是否开启SNI
                     */
                    int64_t GetSniSwitch() const;

                    /**
                     * 设置是否开启SNI
                     * @param SniSwitch 是否开启SNI
                     */
                    void SetSniSwitch(const int64_t& _sniSwitch);

                    /**
                     * 判断参数 SniSwitch 是否已赋值
                     * @return SniSwitch 是否已赋值
                     */
                    bool SniSwitchHasBeenSet() const;

                    /**
                     * 获取COS存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket COS存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Bucket COS存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Namespace 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretName secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SecretName secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * 部署记录详情ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 部署证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 原绑定证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldCertId;
                    bool m_oldCertIdHasBeenSet;

                    /**
                     * 部署实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 部署实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 部署监听器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 部署域名列表
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 部署监听器协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 部署状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 部署错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 部署记录详情创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 部署记录详情最后一次更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 部署监听器名称
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 是否开启SNI
                     */
                    int64_t m_sniSwitch;
                    bool m_sniSwitchHasBeenSet;

                    /**
                     * COS存储桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * secret名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYRECORDDETAIL_H_
