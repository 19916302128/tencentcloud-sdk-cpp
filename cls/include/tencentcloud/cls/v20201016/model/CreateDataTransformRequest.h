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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>
#include <tencentcloud/cls/v20201016/model/PreviewLogStatistic.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateDataTransform请求参数结构体
                */
                class CreateDataTransformRequest : public AbstractModel
                {
                public:
                    CreateDataTransformRequest();
                    ~CreateDataTransformRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型. 1: 指定主题；2:动态创建
                     * @return FuncType 任务类型. 1: 指定主题；2:动态创建
                     * 
                     */
                    int64_t GetFuncType() const;

                    /**
                     * 设置任务类型. 1: 指定主题；2:动态创建
                     * @param _funcType 任务类型. 1: 指定主题；2:动态创建
                     * 
                     */
                    void SetFuncType(const int64_t& _funcType);

                    /**
                     * 判断参数 FuncType 是否已赋值
                     * @return FuncType 是否已赋值
                     * 
                     */
                    bool FuncTypeHasBeenSet() const;

                    /**
                     * 获取源日志主题
                     * @return SrcTopicId 源日志主题
                     * 
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置源日志主题
                     * @param _srcTopicId 源日志主题
                     * 
                     */
                    void SetSrcTopicId(const std::string& _srcTopicId);

                    /**
                     * 判断参数 SrcTopicId 是否已赋值
                     * @return SrcTopicId 是否已赋值
                     * 
                     */
                    bool SrcTopicIdHasBeenSet() const;

                    /**
                     * 获取加工任务名称
                     * @return Name 加工任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置加工任务名称
                     * @param _name 加工任务名称
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
                     * 获取加工语句
                     * @return EtlContent 加工语句
                     * 
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置加工语句
                     * @param _etlContent 加工语句
                     * 
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     * 
                     */
                    bool EtlContentHasBeenSet() const;

                    /**
                     * 获取加工类型  1 使用源日志主题中的随机数据，进行加工预览 :2 使用用户自定义测试数据，进行加工预览 3 创建真实加工任务
                     * @return TaskType 加工类型  1 使用源日志主题中的随机数据，进行加工预览 :2 使用用户自定义测试数据，进行加工预览 3 创建真实加工任务
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置加工类型  1 使用源日志主题中的随机数据，进行加工预览 :2 使用用户自定义测试数据，进行加工预览 3 创建真实加工任务
                     * @param _taskType 加工类型  1 使用源日志主题中的随机数据，进行加工预览 :2 使用用户自定义测试数据，进行加工预览 3 创建真实加工任务
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务启动状态.   默认为1:开启,  2:关闭
                     * @return EnableFlag 任务启动状态.   默认为1:开启,  2:关闭
                     * 
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置任务启动状态.   默认为1:开启,  2:关闭
                     * @param _enableFlag 任务启动状态.   默认为1:开启,  2:关闭
                     * 
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     * 
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取加工任务目的topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写
                     * @return DstResources 加工任务目的topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写
                     * 
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置加工任务目的topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写
                     * @param _dstResources 加工任务目的topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写
                     * 
                     */
                    void SetDstResources(const std::vector<DataTransformResouceInfo>& _dstResources);

                    /**
                     * 判断参数 DstResources 是否已赋值
                     * @return DstResources 是否已赋值
                     * 
                     */
                    bool DstResourcesHasBeenSet() const;

                    /**
                     * 获取用于预览加工结果的测试数据
                     * @return PreviewLogStatistics 用于预览加工结果的测试数据
                     * 
                     */
                    std::vector<PreviewLogStatistic> GetPreviewLogStatistics() const;

                    /**
                     * 设置用于预览加工结果的测试数据
                     * @param _previewLogStatistics 用于预览加工结果的测试数据
                     * 
                     */
                    void SetPreviewLogStatistics(const std::vector<PreviewLogStatistic>& _previewLogStatistics);

                    /**
                     * 判断参数 PreviewLogStatistics 是否已赋值
                     * @return PreviewLogStatistics 是否已赋值
                     * 
                     */
                    bool PreviewLogStatisticsHasBeenSet() const;

                private:

                    /**
                     * 任务类型. 1: 指定主题；2:动态创建
                     */
                    int64_t m_funcType;
                    bool m_funcTypeHasBeenSet;

                    /**
                     * 源日志主题
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * 加工任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 加工语句
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * 加工类型  1 使用源日志主题中的随机数据，进行加工预览 :2 使用用户自定义测试数据，进行加工预览 3 创建真实加工任务
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务启动状态.   默认为1:开启,  2:关闭
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * 加工任务目的topic_id以及别名,当FuncType=1时，该参数必填，当FuncType=2时，无需填写
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * 用于预览加工结果的测试数据
                     */
                    std::vector<PreviewLogStatistic> m_previewLogStatistics;
                    bool m_previewLogStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
