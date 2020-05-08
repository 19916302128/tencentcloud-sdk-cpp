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

#include <tencentcloud/tbm/v20180129/model/DescribeBrandSocialOpinionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace rapidjson;
using namespace std;

DescribeBrandSocialOpinionResponse::DescribeBrandSocialOpinionResponse() :
    m_articleCountHasBeenSet(false),
    m_fromCountHasBeenSet(false),
    m_adverseCountHasBeenSet(false),
    m_articleSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBrandSocialOpinionResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ArticleCount") && !rsp["ArticleCount"].IsNull())
    {
        if (!rsp["ArticleCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ArticleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_articleCount = rsp["ArticleCount"].GetUint64();
        m_articleCountHasBeenSet = true;
    }

    if (rsp.HasMember("FromCount") && !rsp["FromCount"].IsNull())
    {
        if (!rsp["FromCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `FromCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fromCount = rsp["FromCount"].GetUint64();
        m_fromCountHasBeenSet = true;
    }

    if (rsp.HasMember("AdverseCount") && !rsp["AdverseCount"].IsNull())
    {
        if (!rsp["AdverseCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AdverseCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_adverseCount = rsp["AdverseCount"].GetUint64();
        m_adverseCountHasBeenSet = true;
    }

    if (rsp.HasMember("ArticleSet") && !rsp["ArticleSet"].IsNull())
    {
        if (!rsp["ArticleSet"].IsArray())
            return CoreInternalOutcome(Error("response `ArticleSet` is not array type"));

        const Value &tmpValue = rsp["ArticleSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BrandReportArticle item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_articleSet.push_back(item);
        }
        m_articleSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeBrandSocialOpinionResponse::GetArticleCount() const
{
    return m_articleCount;
}

bool DescribeBrandSocialOpinionResponse::ArticleCountHasBeenSet() const
{
    return m_articleCountHasBeenSet;
}

uint64_t DescribeBrandSocialOpinionResponse::GetFromCount() const
{
    return m_fromCount;
}

bool DescribeBrandSocialOpinionResponse::FromCountHasBeenSet() const
{
    return m_fromCountHasBeenSet;
}

uint64_t DescribeBrandSocialOpinionResponse::GetAdverseCount() const
{
    return m_adverseCount;
}

bool DescribeBrandSocialOpinionResponse::AdverseCountHasBeenSet() const
{
    return m_adverseCountHasBeenSet;
}

vector<BrandReportArticle> DescribeBrandSocialOpinionResponse::GetArticleSet() const
{
    return m_articleSet;
}

bool DescribeBrandSocialOpinionResponse::ArticleSetHasBeenSet() const
{
    return m_articleSetHasBeenSet;
}

