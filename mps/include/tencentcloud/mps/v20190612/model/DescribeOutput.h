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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/OutputAddress.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputSRTSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRTPSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRTMPSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRTMPPullSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRTSPPullSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputHLSPullSettings.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询输出的配置信息。
                */
                class DescribeOutput : public AbstractModel
                {
                public:
                    DescribeOutput();
                    ~DescribeOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出Id。
                     * @return OutputId 输出Id。
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置输出Id。
                     * @param OutputId 输出Id。
                     */
                    void SetOutputId(const std::string& _outputId);

                    /**
                     * 判断参数 OutputId 是否已赋值
                     * @return OutputId 是否已赋值
                     */
                    bool OutputIdHasBeenSet() const;

                    /**
                     * 获取输出名称。
                     * @return OutputName 输出名称。
                     */
                    std::string GetOutputName() const;

                    /**
                     * 设置输出名称。
                     * @param OutputName 输出名称。
                     */
                    void SetOutputName(const std::string& _outputName);

                    /**
                     * 判断参数 OutputName 是否已赋值
                     * @return OutputName 是否已赋值
                     */
                    bool OutputNameHasBeenSet() const;

                    /**
                     * 获取输出类型。
                     * @return OutputType 输出类型。
                     */
                    std::string GetOutputType() const;

                    /**
                     * 设置输出类型。
                     * @param OutputType 输出类型。
                     */
                    void SetOutputType(const std::string& _outputType);

                    /**
                     * 判断参数 OutputType 是否已赋值
                     * @return OutputType 是否已赋值
                     */
                    bool OutputTypeHasBeenSet() const;

                    /**
                     * 获取输出描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 输出描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置输出描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 输出描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取输出协议。
                     * @return Protocol 输出协议。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置输出协议。
                     * @param Protocol 输出协议。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取输出的出口地址信息列表。
                     * @return OutputAddressList 输出的出口地址信息列表。
                     */
                    std::vector<OutputAddress> GetOutputAddressList() const;

                    /**
                     * 设置输出的出口地址信息列表。
                     * @param OutputAddressList 输出的出口地址信息列表。
                     */
                    void SetOutputAddressList(const std::vector<OutputAddress>& _outputAddressList);

                    /**
                     * 判断参数 OutputAddressList 是否已赋值
                     * @return OutputAddressList 是否已赋值
                     */
                    bool OutputAddressListHasBeenSet() const;

                    /**
                     * 获取输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputRegion 输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOutputRegion() const;

                    /**
                     * 设置输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OutputRegion 输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutputRegion(const std::string& _outputRegion);

                    /**
                     * 判断参数 OutputRegion 是否已赋值
                     * @return OutputRegion 是否已赋值
                     */
                    bool OutputRegionHasBeenSet() const;

                    /**
                     * 获取输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SRTSettings 输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SRTSettings 输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSRTSettings(const DescribeOutputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTPSettings 输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RTPSettings 输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRTPSettings(const DescribeOutputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTMPSettings 输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RTMPSettings 输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRTMPSettings(const DescribeOutputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTMPPullSettings 输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RTMPPullSettings 输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRTMPPullSettings(const DescribeOutputRTMPPullSettings& _rTMPPullSettings);

                    /**
                     * 判断参数 RTMPPullSettings 是否已赋值
                     * @return RTMPPullSettings 是否已赋值
                     */
                    bool RTMPPullSettingsHasBeenSet() const;

                    /**
                     * 获取CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowIpList CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AllowIpList CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAllowIpList(const std::vector<std::string>& _allowIpList);

                    /**
                     * 判断参数 AllowIpList 是否已赋值
                     * @return AllowIpList 是否已赋值
                     */
                    bool AllowIpListHasBeenSet() const;

                    /**
                     * 获取输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTSPPullSettings 输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RTSPPullSettings 输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRTSPPullSettings(const DescribeOutputRTSPPullSettings& _rTSPPullSettings);

                    /**
                     * 判断参数 RTSPPullSettings 是否已赋值
                     * @return RTSPPullSettings 是否已赋值
                     */
                    bool RTSPPullSettingsHasBeenSet() const;

                    /**
                     * 获取输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HLSPullSettings 输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HLSPullSettings 输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHLSPullSettings(const DescribeOutputHLSPullSettings& _hLSPullSettings);

                    /**
                     * 判断参数 HLSPullSettings 是否已赋值
                     * @return HLSPullSettings 是否已赋值
                     */
                    bool HLSPullSettingsHasBeenSet() const;

                    /**
                     * 获取最大拉流并发数，最大为4，默认4。
                     * @return MaxConcurrent 最大拉流并发数，最大为4，默认4。
                     */
                    uint64_t GetMaxConcurrent() const;

                    /**
                     * 设置最大拉流并发数，最大为4，默认4。
                     * @param MaxConcurrent 最大拉流并发数，最大为4，默认4。
                     */
                    void SetMaxConcurrent(const uint64_t& _maxConcurrent);

                    /**
                     * 判断参数 MaxConcurrent 是否已赋值
                     * @return MaxConcurrent 是否已赋值
                     */
                    bool MaxConcurrentHasBeenSet() const;

                private:

                    /**
                     * 输出Id。
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * 输出名称。
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * 输出类型。
                     */
                    std::string m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * 输出描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 输出协议。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 输出的出口地址信息列表。
                     */
                    std::vector<OutputAddress> m_outputAddressList;
                    bool m_outputAddressListHasBeenSet;

                    /**
                     * 输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputRegion;
                    bool m_outputRegionHasBeenSet;

                    /**
                     * 输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * 输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * 输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * 输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * 输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * 输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * 最大拉流并发数，最大为4，默认4。
                     */
                    uint64_t m_maxConcurrent;
                    bool m_maxConcurrentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUT_H_
