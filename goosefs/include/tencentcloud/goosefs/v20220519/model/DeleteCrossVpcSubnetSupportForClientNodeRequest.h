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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DELETECROSSVPCSUBNETSUPPORTFORCLIENTNODEREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DELETECROSSVPCSUBNETSUPPORTFORCLIENTNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/SubnetInfo.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * DeleteCrossVpcSubnetSupportForClientNode请求参数结构体
                */
                class DeleteCrossVpcSubnetSupportForClientNodeRequest : public AbstractModel
                {
                public:
                    DeleteCrossVpcSubnetSupportForClientNodeRequest();
                    ~DeleteCrossVpcSubnetSupportForClientNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取子网信息
                     * @return SubnetInfo 子网信息
                     * 
                     */
                    SubnetInfo GetSubnetInfo() const;

                    /**
                     * 设置子网信息
                     * @param _subnetInfo 子网信息
                     * 
                     */
                    void SetSubnetInfo(const SubnetInfo& _subnetInfo);

                    /**
                     * 判断参数 SubnetInfo 是否已赋值
                     * @return SubnetInfo 是否已赋值
                     * 
                     */
                    bool SubnetInfoHasBeenSet() const;

                private:

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 子网信息
                     */
                    SubnetInfo m_subnetInfo;
                    bool m_subnetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DELETECROSSVPCSUBNETSUPPORTFORCLIENTNODEREQUEST_H_
