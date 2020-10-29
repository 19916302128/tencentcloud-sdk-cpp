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

#include <tencentcloud/ssl/v20191205/model/UploadConfirmLetterResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace rapidjson;
using namespace std;

UploadConfirmLetterResponse::UploadConfirmLetterResponse() :
    m_certificateIdHasBeenSet(false),
    m_isSuccessHasBeenSet(false)
{
}

CoreInternalOutcome UploadConfirmLetterResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CertificateId") && !rsp["CertificateId"].IsNull())
    {
        if (!rsp["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(rsp["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (rsp.HasMember("IsSuccess") && !rsp["IsSuccess"].IsNull())
    {
        if (!rsp["IsSuccess"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IsSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSuccess = rsp["IsSuccess"].GetBool();
        m_isSuccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string UploadConfirmLetterResponse::GetCertificateId() const
{
    return m_certificateId;
}

bool UploadConfirmLetterResponse::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

bool UploadConfirmLetterResponse::GetIsSuccess() const
{
    return m_isSuccess;
}

bool UploadConfirmLetterResponse::IsSuccessHasBeenSet() const
{
    return m_isSuccessHasBeenSet;
}

