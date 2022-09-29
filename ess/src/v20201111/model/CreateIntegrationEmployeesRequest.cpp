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

#include <tencentcloud/ess/v20201111/model/CreateIntegrationEmployeesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateIntegrationEmployeesRequest::CreateIntegrationEmployeesRequest() :
    m_operatorHasBeenSet(false),
    m_employeesHasBeenSet(false)
{
}

string CreateIntegrationEmployeesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_employeesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Employees";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_employees.begin(); itr != m_employees.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateIntegrationEmployeesRequest::GetOperator() const
{
    return m_operator;
}

void CreateIntegrationEmployeesRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateIntegrationEmployeesRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<Staff> CreateIntegrationEmployeesRequest::GetEmployees() const
{
    return m_employees;
}

void CreateIntegrationEmployeesRequest::SetEmployees(const vector<Staff>& _employees)
{
    m_employees = _employees;
    m_employeesHasBeenSet = true;
}

bool CreateIntegrationEmployeesRequest::EmployeesHasBeenSet() const
{
    return m_employeesHasBeenSet;
}


