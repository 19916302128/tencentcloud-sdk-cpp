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

#include <tencentcloud/goosefs/v20220519/model/MappedBucket.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

MappedBucket::MappedBucket() :
    m_bucketNameHasBeenSet(false),
    m_fileSystemPathHasBeenSet(false),
    m_dataRepositoryTaskAutoStrategyHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome MappedBucket::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappedBucket.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("FileSystemPath") && !value["FileSystemPath"].IsNull())
    {
        if (!value["FileSystemPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappedBucket.FileSystemPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemPath = string(value["FileSystemPath"].GetString());
        m_fileSystemPathHasBeenSet = true;
    }

    if (value.HasMember("DataRepositoryTaskAutoStrategy") && !value["DataRepositoryTaskAutoStrategy"].IsNull())
    {
        if (!value["DataRepositoryTaskAutoStrategy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MappedBucket.DataRepositoryTaskAutoStrategy` is not array type"));

        const rapidjson::Value &tmpValue = value["DataRepositoryTaskAutoStrategy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataRepositoryTaskAutoStrategy.push_back((*itr).GetString());
        }
        m_dataRepositoryTaskAutoStrategyHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappedBucket.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleDescription") && !value["RuleDescription"].IsNull())
    {
        if (!value["RuleDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappedBucket.RuleDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDescription = string(value["RuleDescription"].GetString());
        m_ruleDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MappedBucket::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemPath.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRepositoryTaskAutoStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRepositoryTaskAutoStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataRepositoryTaskAutoStrategy.begin(); itr != m_dataRepositoryTaskAutoStrategy.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleDescription.c_str(), allocator).Move(), allocator);
    }

}


string MappedBucket::GetBucketName() const
{
    return m_bucketName;
}

void MappedBucket::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool MappedBucket::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string MappedBucket::GetFileSystemPath() const
{
    return m_fileSystemPath;
}

void MappedBucket::SetFileSystemPath(const string& _fileSystemPath)
{
    m_fileSystemPath = _fileSystemPath;
    m_fileSystemPathHasBeenSet = true;
}

bool MappedBucket::FileSystemPathHasBeenSet() const
{
    return m_fileSystemPathHasBeenSet;
}

vector<string> MappedBucket::GetDataRepositoryTaskAutoStrategy() const
{
    return m_dataRepositoryTaskAutoStrategy;
}

void MappedBucket::SetDataRepositoryTaskAutoStrategy(const vector<string>& _dataRepositoryTaskAutoStrategy)
{
    m_dataRepositoryTaskAutoStrategy = _dataRepositoryTaskAutoStrategy;
    m_dataRepositoryTaskAutoStrategyHasBeenSet = true;
}

bool MappedBucket::DataRepositoryTaskAutoStrategyHasBeenSet() const
{
    return m_dataRepositoryTaskAutoStrategyHasBeenSet;
}

string MappedBucket::GetRuleId() const
{
    return m_ruleId;
}

void MappedBucket::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool MappedBucket::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string MappedBucket::GetRuleDescription() const
{
    return m_ruleDescription;
}

void MappedBucket::SetRuleDescription(const string& _ruleDescription)
{
    m_ruleDescription = _ruleDescription;
    m_ruleDescriptionHasBeenSet = true;
}

bool MappedBucket::RuleDescriptionHasBeenSet() const
{
    return m_ruleDescriptionHasBeenSet;
}

