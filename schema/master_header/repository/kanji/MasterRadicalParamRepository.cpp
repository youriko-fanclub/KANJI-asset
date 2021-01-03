// This file is generated from RadicalParam.toml
#include "MasterRadicalParamRepository.hpp"
#include "TomlAsset.hpp"

namespace kanji {
namespace md {

void MasterRadicalParamRepository::initialize() {
    const dx::cmp::TomlAsset toml(U"RadicalParam");
    const dx::cmp::TomlKey key(U"masterdata");
    s3d::TOMLTableView table = toml[key].tableView();
    for (const s3d::TOMLTableMember& table_member : table) {
        const auto& toml_value = table_member.value;
        m_data.insert(std::make_pair(RadicalID(toml_value[U"id"].get<int>()),
            std::make_unique<kanji::md::MasterRadicalParam>(
                RadicalID(toml_value[U"id"].get<int>()),
                toml_value[U"character"].get<s3d::String>(),
                toml_value[U"attack"].get<int>(),
                toml_value[U"defence"].get<int>(),
                toml_value[U"speed"].get<int>(),
                toml_value[U"jump"].get<int>(),
                toml_value[U"weight"].get<int>())));
    }
}

}
}

