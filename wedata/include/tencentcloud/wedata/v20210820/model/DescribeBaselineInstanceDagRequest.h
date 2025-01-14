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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINEINSTANCEDAGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINEINSTANCEDAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeBaselineInstanceDag请求参数结构体
                */
                class DescribeBaselineInstanceDagRequest : public AbstractModel
                {
                public:
                    DescribeBaselineInstanceDagRequest();
                    ~DescribeBaselineInstanceDagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基线实例id
                     * @return BaselineInstanceId 基线实例id
                     * 
                     */
                    int64_t GetBaselineInstanceId() const;

                    /**
                     * 设置基线实例id
                     * @param _baselineInstanceId 基线实例id
                     * 
                     */
                    void SetBaselineInstanceId(const int64_t& _baselineInstanceId);

                    /**
                     * 判断参数 BaselineInstanceId 是否已赋值
                     * @return BaselineInstanceId 是否已赋值
                     * 
                     */
                    bool BaselineInstanceIdHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取要展开的上游实例id，格式为 taskIdA_curRunDate1,taskIdB_curRunDate2
                     * @return UpstreamInstanceIds 要展开的上游实例id，格式为 taskIdA_curRunDate1,taskIdB_curRunDate2
                     * 
                     */
                    std::string GetUpstreamInstanceIds() const;

                    /**
                     * 设置要展开的上游实例id，格式为 taskIdA_curRunDate1,taskIdB_curRunDate2
                     * @param _upstreamInstanceIds 要展开的上游实例id，格式为 taskIdA_curRunDate1,taskIdB_curRunDate2
                     * 
                     */
                    void SetUpstreamInstanceIds(const std::string& _upstreamInstanceIds);

                    /**
                     * 判断参数 UpstreamInstanceIds 是否已赋值
                     * @return UpstreamInstanceIds 是否已赋值
                     * 
                     */
                    bool UpstreamInstanceIdsHasBeenSet() const;

                    /**
                     * 获取向上展开层级
                     * @return Level 向上展开层级
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置向上展开层级
                     * @param _level 向上展开层级
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 基线实例id
                     */
                    int64_t m_baselineInstanceId;
                    bool m_baselineInstanceIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 要展开的上游实例id，格式为 taskIdA_curRunDate1,taskIdB_curRunDate2
                     */
                    std::string m_upstreamInstanceIds;
                    bool m_upstreamInstanceIdsHasBeenSet;

                    /**
                     * 向上展开层级
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINEINSTANCEDAGREQUEST_H_
