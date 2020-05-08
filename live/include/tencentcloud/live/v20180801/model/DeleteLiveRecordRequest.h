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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVERECORDREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DeleteLiveRecord请求参数结构体
                */
                class DeleteLiveRecordRequest : public AbstractModel
                {
                public:
                    DeleteLiveRecordRequest();
                    ~DeleteLiveRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param StreamName 流名称。
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取任务ID，全局唯一标识录制任务。
从接口 [CreateLiveRecord](/document/product/267/30148) 的返回值中获取TaskId。
                     * @return TaskId 任务ID，全局唯一标识录制任务。
从接口 [CreateLiveRecord](/document/product/267/30148) 的返回值中获取TaskId。
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID，全局唯一标识录制任务。
从接口 [CreateLiveRecord](/document/product/267/30148) 的返回值中获取TaskId。
                     * @param TaskId 任务ID，全局唯一标识录制任务。
从接口 [CreateLiveRecord](/document/product/267/30148) 的返回值中获取TaskId。
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 任务ID，全局唯一标识录制任务。
从接口 [CreateLiveRecord](/document/product/267/30148) 的返回值中获取TaskId。
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVERECORDREQUEST_H_