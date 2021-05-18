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

#include <tencentcloud/sms/v20210111/model/AddSignStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sms::V20210111::Model;
using namespace rapidjson;
using namespace std;

AddSignStatus::AddSignStatus() :
    m_signIdHasBeenSet(false)
{
}

CoreInternalOutcome AddSignStatus::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SignId") && !value["SignId"].IsNull())
    {
        if (!value["SignId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AddSignStatus.SignId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_signId = value["SignId"].GetUint64();
        m_signIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddSignStatus::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_signIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SignId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_signId, allocator);
    }

}


uint64_t AddSignStatus::GetSignId() const
{
    return m_signId;
}

void AddSignStatus::SetSignId(const uint64_t& _signId)
{
    m_signId = _signId;
    m_signIdHasBeenSet = true;
}

bool AddSignStatus::SignIdHasBeenSet() const
{
    return m_signIdHasBeenSet;
}

