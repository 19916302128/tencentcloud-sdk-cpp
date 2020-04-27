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

#include <tencentcloud/vod/v20180717/model/MediaBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaBasicInfo::MediaBasicInfo() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_classPathHasBeenSet(false),
    m_coverUrlHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_mediaUrlHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_vidHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

CoreInternalOutcome MediaBasicInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ClassId") && !value["ClassId"].IsNull())
    {
        if (!value["ClassId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.ClassId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_classId = value["ClassId"].GetInt64();
        m_classIdHasBeenSet = true;
    }

    if (value.HasMember("ClassName") && !value["ClassName"].IsNull())
    {
        if (!value["ClassName"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.ClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_className = string(value["ClassName"].GetString());
        m_classNameHasBeenSet = true;
    }

    if (value.HasMember("ClassPath") && !value["ClassPath"].IsNull())
    {
        if (!value["ClassPath"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.ClassPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classPath = string(value["ClassPath"].GetString());
        m_classPathHasBeenSet = true;
    }

    if (value.HasMember("CoverUrl") && !value["CoverUrl"].IsNull())
    {
        if (!value["CoverUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.CoverUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverUrl = string(value["CoverUrl"].GetString());
        m_coverUrlHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MediaUrl") && !value["MediaUrl"].IsNull())
    {
        if (!value["MediaUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.MediaUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaUrl = string(value["MediaUrl"].GetString());
        m_mediaUrlHasBeenSet = true;
    }

    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.SourceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceInfo.Deserialize(value["SourceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceInfoHasBeenSet = true;
    }

    if (value.HasMember("StorageRegion") && !value["StorageRegion"].IsNull())
    {
        if (!value["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(value["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaBasicInfo.TagSet` is not array type"));

        const Value &tmpValue = value["TagSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagSet.push_back((*itr).GetString());
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("Vid") && !value["Vid"].IsNull())
    {
        if (!value["Vid"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.Vid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vid = string(value["Vid"].GetString());
        m_vidHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Error("response `MediaBasicInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaBasicInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classId, allocator);
    }

    if (m_classNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_className.c_str(), allocator).Move(), allocator);
    }

    if (m_classPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_classPath.c_str(), allocator).Move(), allocator);
    }

    if (m_coverUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_coverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_mediaUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_sourceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vid.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_category.c_str(), allocator).Move(), allocator);
    }

}


string MediaBasicInfo::GetName() const
{
    return m_name;
}

void MediaBasicInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MediaBasicInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MediaBasicInfo::GetDescription() const
{
    return m_description;
}

void MediaBasicInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool MediaBasicInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string MediaBasicInfo::GetCreateTime() const
{
    return m_createTime;
}

void MediaBasicInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MediaBasicInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MediaBasicInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void MediaBasicInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MediaBasicInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string MediaBasicInfo::GetExpireTime() const
{
    return m_expireTime;
}

void MediaBasicInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool MediaBasicInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t MediaBasicInfo::GetClassId() const
{
    return m_classId;
}

void MediaBasicInfo::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool MediaBasicInfo::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string MediaBasicInfo::GetClassName() const
{
    return m_className;
}

void MediaBasicInfo::SetClassName(const string& _className)
{
    m_className = _className;
    m_classNameHasBeenSet = true;
}

bool MediaBasicInfo::ClassNameHasBeenSet() const
{
    return m_classNameHasBeenSet;
}

string MediaBasicInfo::GetClassPath() const
{
    return m_classPath;
}

void MediaBasicInfo::SetClassPath(const string& _classPath)
{
    m_classPath = _classPath;
    m_classPathHasBeenSet = true;
}

bool MediaBasicInfo::ClassPathHasBeenSet() const
{
    return m_classPathHasBeenSet;
}

string MediaBasicInfo::GetCoverUrl() const
{
    return m_coverUrl;
}

void MediaBasicInfo::SetCoverUrl(const string& _coverUrl)
{
    m_coverUrl = _coverUrl;
    m_coverUrlHasBeenSet = true;
}

bool MediaBasicInfo::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

string MediaBasicInfo::GetType() const
{
    return m_type;
}

void MediaBasicInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaBasicInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MediaBasicInfo::GetMediaUrl() const
{
    return m_mediaUrl;
}

void MediaBasicInfo::SetMediaUrl(const string& _mediaUrl)
{
    m_mediaUrl = _mediaUrl;
    m_mediaUrlHasBeenSet = true;
}

bool MediaBasicInfo::MediaUrlHasBeenSet() const
{
    return m_mediaUrlHasBeenSet;
}

MediaSourceData MediaBasicInfo::GetSourceInfo() const
{
    return m_sourceInfo;
}

void MediaBasicInfo::SetSourceInfo(const MediaSourceData& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool MediaBasicInfo::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

string MediaBasicInfo::GetStorageRegion() const
{
    return m_storageRegion;
}

void MediaBasicInfo::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool MediaBasicInfo::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

vector<string> MediaBasicInfo::GetTagSet() const
{
    return m_tagSet;
}

void MediaBasicInfo::SetTagSet(const vector<string>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool MediaBasicInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

string MediaBasicInfo::GetVid() const
{
    return m_vid;
}

void MediaBasicInfo::SetVid(const string& _vid)
{
    m_vid = _vid;
    m_vidHasBeenSet = true;
}

bool MediaBasicInfo::VidHasBeenSet() const
{
    return m_vidHasBeenSet;
}

string MediaBasicInfo::GetCategory() const
{
    return m_category;
}

void MediaBasicInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool MediaBasicInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

