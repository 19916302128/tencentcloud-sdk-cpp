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

#include <tencentcloud/apigateway/v20180808/model/DescribeApisStatusResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

DescribeApisStatusResultInfo::DescribeApisStatusResultInfo() :
    m_totalCountHasBeenSet(false),
    m_apiIdStatusSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApisStatusResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApisStatusResultInfo.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ApiIdStatusSet") && !value["ApiIdStatusSet"].IsNull())
    {
        if (!value["ApiIdStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeApisStatusResultInfo.ApiIdStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ApiIdStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeApisStatusResultApiIdStatusSetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiIdStatusSet.push_back(item);
        }
        m_apiIdStatusSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeApisStatusResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_apiIdStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiIdStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiIdStatusSet.begin(); itr != m_apiIdStatusSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DescribeApisStatusResultInfo::GetTotalCount() const
{
    return m_totalCount;
}

void DescribeApisStatusResultInfo::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DescribeApisStatusResultInfo::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<DescribeApisStatusResultApiIdStatusSetInfo> DescribeApisStatusResultInfo::GetApiIdStatusSet() const
{
    return m_apiIdStatusSet;
}

void DescribeApisStatusResultInfo::SetApiIdStatusSet(const vector<DescribeApisStatusResultApiIdStatusSetInfo>& _apiIdStatusSet)
{
    m_apiIdStatusSet = _apiIdStatusSet;
    m_apiIdStatusSetHasBeenSet = true;
}

bool DescribeApisStatusResultInfo::ApiIdStatusSetHasBeenSet() const
{
    return m_apiIdStatusSetHasBeenSet;
}

