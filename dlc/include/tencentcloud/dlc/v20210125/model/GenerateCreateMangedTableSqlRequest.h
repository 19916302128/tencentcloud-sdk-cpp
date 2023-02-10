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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GENERATECREATEMANGEDTABLESQLREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GENERATECREATEMANGEDTABLESQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TableBaseInfo.h>
#include <tencentcloud/dlc/v20210125/model/TColumn.h>
#include <tencentcloud/dlc/v20210125/model/TPartition.h>
#include <tencentcloud/dlc/v20210125/model/Property.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GenerateCreateMangedTableSql请求参数结构体
                */
                class GenerateCreateMangedTableSqlRequest : public AbstractModel
                {
                public:
                    GenerateCreateMangedTableSqlRequest();
                    ~GenerateCreateMangedTableSqlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表基本信息
                     * @return TableBaseInfo 表基本信息
                     */
                    TableBaseInfo GetTableBaseInfo() const;

                    /**
                     * 设置表基本信息
                     * @param TableBaseInfo 表基本信息
                     */
                    void SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo);

                    /**
                     * 判断参数 TableBaseInfo 是否已赋值
                     * @return TableBaseInfo 是否已赋值
                     */
                    bool TableBaseInfoHasBeenSet() const;

                    /**
                     * 获取表字段信息
                     * @return Columns 表字段信息
                     */
                    std::vector<TColumn> GetColumns() const;

                    /**
                     * 设置表字段信息
                     * @param Columns 表字段信息
                     */
                    void SetColumns(const std::vector<TColumn>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取表分区信息
                     * @return Partitions 表分区信息
                     */
                    std::vector<TPartition> GetPartitions() const;

                    /**
                     * 设置表分区信息
                     * @param Partitions 表分区信息
                     */
                    void SetPartitions(const std::vector<TPartition>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取表属性信息
                     * @return Properties 表属性信息
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置表属性信息
                     * @param Properties 表属性信息
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * 表基本信息
                     */
                    TableBaseInfo m_tableBaseInfo;
                    bool m_tableBaseInfoHasBeenSet;

                    /**
                     * 表字段信息
                     */
                    std::vector<TColumn> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 表分区信息
                     */
                    std::vector<TPartition> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 表属性信息
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GENERATECREATEMANGEDTABLESQLREQUEST_H_
