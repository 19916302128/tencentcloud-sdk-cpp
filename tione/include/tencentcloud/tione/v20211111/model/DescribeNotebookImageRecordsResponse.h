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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKIMAGERECORDSRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKIMAGERECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/NotebookImageRecord.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeNotebookImageRecords返回参数结构体
                */
                class DescribeNotebookImageRecordsResponse : public AbstractModel
                {
                public:
                    DescribeNotebookImageRecordsResponse();
                    ~DescribeNotebookImageRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取镜像保存记录
                     * @return NotebookImageRecords 镜像保存记录
                     * 
                     */
                    std::vector<NotebookImageRecord> GetNotebookImageRecords() const;

                    /**
                     * 判断参数 NotebookImageRecords 是否已赋值
                     * @return NotebookImageRecords 是否已赋值
                     * 
                     */
                    bool NotebookImageRecordsHasBeenSet() const;

                private:

                    /**
                     * 总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 镜像保存记录
                     */
                    std::vector<NotebookImageRecord> m_notebookImageRecords;
                    bool m_notebookImageRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKIMAGERECORDSRESPONSE_H_
