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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINEBYIDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINEBYIDREQUEST_H_

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
                * DescribeBaselineById请求参数结构体
                */
                class DescribeBaselineByIdRequest : public AbstractModel
                {
                public:
                    DescribeBaselineByIdRequest();
                    ~DescribeBaselineByIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return BaselineId 无
                     * 
                     */
                    std::string GetBaselineId() const;

                    /**
                     * 设置无
                     * @param _baselineId 无
                     * 
                     */
                    void SetBaselineId(const std::string& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

                    /**
                     * 获取1
                     * @return ProjectId 1
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置1
                     * @param _projectId 1
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::string m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * 1
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINEBYIDREQUEST_H_
