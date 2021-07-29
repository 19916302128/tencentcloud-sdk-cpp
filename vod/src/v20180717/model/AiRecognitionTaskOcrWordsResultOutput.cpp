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

#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskOcrWordsResultOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AiRecognitionTaskOcrWordsResultOutput::AiRecognitionTaskOcrWordsResultOutput() :
    m_resultSetHasBeenSet(false),
    m_resultSetFileUrlHasBeenSet(false),
    m_resultSetFileUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome AiRecognitionTaskOcrWordsResultOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultSet") && !value["ResultSet"].IsNull())
    {
        if (!value["ResultSet"].IsArray())
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrWordsResultOutput.ResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiRecognitionTaskOcrWordsResultItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultSet.push_back(item);
        }
        m_resultSetHasBeenSet = true;
    }

    if (value.HasMember("ResultSetFileUrl") && !value["ResultSetFileUrl"].IsNull())
    {
        if (!value["ResultSetFileUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrWordsResultOutput.ResultSetFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultSetFileUrl = string(value["ResultSetFileUrl"].GetString());
        m_resultSetFileUrlHasBeenSet = true;
    }

    if (value.HasMember("ResultSetFileUrlExpireTime") && !value["ResultSetFileUrlExpireTime"].IsNull())
    {
        if (!value["ResultSetFileUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AiRecognitionTaskOcrWordsResultOutput.ResultSetFileUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultSetFileUrlExpireTime = string(value["ResultSetFileUrlExpireTime"].GetString());
        m_resultSetFileUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiRecognitionTaskOcrWordsResultOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultSet.begin(); itr != m_resultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resultSetFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSetFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultSetFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resultSetFileUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSetFileUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultSetFileUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

}


vector<AiRecognitionTaskOcrWordsResultItem> AiRecognitionTaskOcrWordsResultOutput::GetResultSet() const
{
    return m_resultSet;
}

void AiRecognitionTaskOcrWordsResultOutput::SetResultSet(const vector<AiRecognitionTaskOcrWordsResultItem>& _resultSet)
{
    m_resultSet = _resultSet;
    m_resultSetHasBeenSet = true;
}

bool AiRecognitionTaskOcrWordsResultOutput::ResultSetHasBeenSet() const
{
    return m_resultSetHasBeenSet;
}

string AiRecognitionTaskOcrWordsResultOutput::GetResultSetFileUrl() const
{
    return m_resultSetFileUrl;
}

void AiRecognitionTaskOcrWordsResultOutput::SetResultSetFileUrl(const string& _resultSetFileUrl)
{
    m_resultSetFileUrl = _resultSetFileUrl;
    m_resultSetFileUrlHasBeenSet = true;
}

bool AiRecognitionTaskOcrWordsResultOutput::ResultSetFileUrlHasBeenSet() const
{
    return m_resultSetFileUrlHasBeenSet;
}

string AiRecognitionTaskOcrWordsResultOutput::GetResultSetFileUrlExpireTime() const
{
    return m_resultSetFileUrlExpireTime;
}

void AiRecognitionTaskOcrWordsResultOutput::SetResultSetFileUrlExpireTime(const string& _resultSetFileUrlExpireTime)
{
    m_resultSetFileUrlExpireTime = _resultSetFileUrlExpireTime;
    m_resultSetFileUrlExpireTimeHasBeenSet = true;
}

bool AiRecognitionTaskOcrWordsResultOutput::ResultSetFileUrlExpireTimeHasBeenSet() const
{
    return m_resultSetFileUrlExpireTimeHasBeenSet;
}

