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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_WAFSUBRULESTATUS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_WAFSUBRULESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 门神子规则开关状态
                */
                class WafSubRuleStatus : public AbstractModel
                {
                public:
                    WafSubRuleStatus();
                    ~WafSubRuleStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子规则状态，on|off
                     * @return Switch 子规则状态，on|off
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置子规则状态，on|off
                     * @param Switch 子规则状态，on|off
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取规则id列表
                     * @return SubIds 规则id列表
                     */
                    std::vector<int64_t> GetSubIds() const;

                    /**
                     * 设置规则id列表
                     * @param SubIds 规则id列表
                     */
                    void SetSubIds(const std::vector<int64_t>& _subIds);

                    /**
                     * 判断参数 SubIds 是否已赋值
                     * @return SubIds 是否已赋值
                     */
                    bool SubIdsHasBeenSet() const;

                private:

                    /**
                     * 子规则状态，on|off
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 规则id列表
                     */
                    std::vector<int64_t> m_subIds;
                    bool m_subIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_WAFSUBRULESTATUS_H_
