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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONGROUPORGANIZATIONSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONGROUPORGANIZATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeOrganizationGroupOrganizations请求参数结构体
                */
                class DescribeOrganizationGroupOrganizationsRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationGroupOrganizationsRequest();
                    ~DescribeOrganizationGroupOrganizationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息，userId必填
                     * @return Operator 操作人信息，userId必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息，userId必填
                     * @param _operator 操作人信息，userId必填
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取指定每页多少条数据，单页最大1000
                     * @return Limit 指定每页多少条数据，单页最大1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置指定每页多少条数据，单页最大1000
                     * @param _limit 指定每页多少条数据，单页最大1000
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0
                     * @return Offset 查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0
                     * @param _offset 查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询成员企业的企业名，模糊匹配
                     * @return Name 查询成员企业的企业名，模糊匹配
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置查询成员企业的企业名，模糊匹配
                     * @param _name 查询成员企业的企业名，模糊匹配
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
                     * 获取成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
                     * @return Status 成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
                     * @param _status 成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否导出当前成员企业数据
                     * @return Export 是否导出当前成员企业数据
                     * 
                     */
                    bool GetExport() const;

                    /**
                     * 设置是否导出当前成员企业数据
                     * @param _export 是否导出当前成员企业数据
                     * 
                     */
                    void SetExport(const bool& _export);

                    /**
                     * 判断参数 Export 是否已赋值
                     * @return Export 是否已赋值
                     * 
                     */
                    bool ExportHasBeenSet() const;

                    /**
                     * 获取成员企业机构 ID，在PC控制台 集团管理可获取
                     * @return Id 成员企业机构 ID，在PC控制台 集团管理可获取
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置成员企业机构 ID，在PC控制台 集团管理可获取
                     * @param _id 成员企业机构 ID，在PC控制台 集团管理可获取
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 操作人信息，userId必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定每页多少条数据，单页最大1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询结果分页返回，此处指定第几页，如果不传默认从第一页返回。页码从 0 开始，即首页为 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询成员企业的企业名，模糊匹配
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 成员企业加入集团的当前状态:1-待授权;2-已授权待激活;3-拒绝授权;4-已解除;5-已加入
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否导出当前成员企业数据
                     */
                    bool m_export;
                    bool m_exportHasBeenSet;

                    /**
                     * 成员企业机构 ID，在PC控制台 集团管理可获取
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONGROUPORGANIZATIONSREQUEST_H_
