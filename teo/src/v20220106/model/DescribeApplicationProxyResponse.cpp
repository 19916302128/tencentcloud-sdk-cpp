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

#include <tencentcloud/teo/v20220106/model/DescribeApplicationProxyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeApplicationProxyResponse::DescribeApplicationProxyResponse() :
    m_dataHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_ipCountHasBeenSet(false),
    m_domainCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationProxyResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Data` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Data"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationProxy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_data.push_back(item);
        }
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("Quota") && !rsp["Quota"].IsNull())
    {
        if (!rsp["Quota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = rsp["Quota"].GetInt64();
        m_quotaHasBeenSet = true;
    }

    if (rsp.HasMember("IpCount") && !rsp["IpCount"].IsNull())
    {
        if (!rsp["IpCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipCount = rsp["IpCount"].GetUint64();
        m_ipCountHasBeenSet = true;
    }

    if (rsp.HasMember("DomainCount") && !rsp["DomainCount"].IsNull())
    {
        if (!rsp["DomainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_domainCount = rsp["DomainCount"].GetUint64();
        m_domainCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeApplicationProxyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

    if (m_ipCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipCount, allocator);
    }

    if (m_domainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domainCount, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<ApplicationProxy> DescribeApplicationProxyResponse::GetData() const
{
    return m_data;
}

bool DescribeApplicationProxyResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t DescribeApplicationProxyResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeApplicationProxyResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DescribeApplicationProxyResponse::GetQuota() const
{
    return m_quota;
}

bool DescribeApplicationProxyResponse::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

uint64_t DescribeApplicationProxyResponse::GetIpCount() const
{
    return m_ipCount;
}

bool DescribeApplicationProxyResponse::IpCountHasBeenSet() const
{
    return m_ipCountHasBeenSet;
}

uint64_t DescribeApplicationProxyResponse::GetDomainCount() const
{
    return m_domainCount;
}

bool DescribeApplicationProxyResponse::DomainCountHasBeenSet() const
{
    return m_domainCountHasBeenSet;
}


