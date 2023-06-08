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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONDEPARTMENTRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONDEPARTMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateIntegrationDepartment返回参数结构体
                */
                class CreateIntegrationDepartmentResponse : public AbstractModel
                {
                public:
                    CreateIntegrationDepartmentResponse();
                    ~CreateIntegrationDepartmentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取电子签部门ID
                     * @return DeptId 电子签部门ID
                     */
                    std::string GetDeptId() const;

                    /**
                     * 判断参数 DeptId 是否已赋值
                     * @return DeptId 是否已赋值
                     */
                    bool DeptIdHasBeenSet() const;

                private:

                    /**
                     * 电子签部门ID
                     */
                    std::string m_deptId;
                    bool m_deptIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONDEPARTMENTRESPONSE_H_
