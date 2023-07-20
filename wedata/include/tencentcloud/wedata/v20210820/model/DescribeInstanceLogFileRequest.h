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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGFILEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGFILEREQUEST_H_

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
                * DescribeInstanceLogFile请求参数结构体
                */
                class DescribeInstanceLogFileRequest : public AbstractModel
                {
                public:
                    DescribeInstanceLogFileRequest();
                    ~DescribeInstanceLogFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取实例数据时间
                     * @return CurRunDate 实例数据时间
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置实例数据时间
                     * @param _curRunDate 实例数据时间
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取执行机IP
                     * @return BrokerIp 执行机IP
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置执行机IP
                     * @param _brokerIp 执行机IP
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取日志文件名
                     * @return OriginFileName 日志文件名
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置日志文件名
                     * @param _originFileName 日志文件名
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实例数据时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 执行机IP
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 日志文件名
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELOGFILEREQUEST_H_
