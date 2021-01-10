// This file is generated from Stage.toml
#include "MasterStageRepository.hpp"
#include "TomlAsset.hpp"

namespace kanji {
namespace md {

void MasterStageRepository::initialize() {
    const dx::toml::TomlAsset toml(U"Stage");
    const dx::toml::TomlKey key(U"masterdata");
    s3d::TOMLTableView table = toml[key].tableView();
    for (const s3d::TOMLTableMember& table_member : table) {
        const auto& toml_value = table_member.value;
        m_data.insert(std::make_pair(StageID(toml_value[U"id"].get<int>()),
            std::make_unique<kanji::md::MasterStage>(
                StageID(toml_value[U"id"].get<int>()),
                toml_value[U"name"].get<s3d::String>(),
                dx::toml::vec2(toml_value[U"initialposition_1players_0"]),
                dx::toml::vec2(toml_value[U"initialposition_2players_0"]),
                dx::toml::vec2(toml_value[U"initialposition_2players_1"]),
                dx::toml::vec2(toml_value[U"initialposition_3players_0"]),
                dx::toml::vec2(toml_value[U"initialposition_3players_1"]),
                dx::toml::vec2(toml_value[U"initialposition_3players_2"]),
                dx::toml::vec2(toml_value[U"initialposition_4players_0"]),
                dx::toml::vec2(toml_value[U"initialposition_4players_1"]),
                dx::toml::vec2(toml_value[U"initialposition_4players_2"]),
                dx::toml::vec2(toml_value[U"initialposition_4players_3"]))));
    }
}

}
}

