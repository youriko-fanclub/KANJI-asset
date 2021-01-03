// This file is generated from KanjiConsist.toml
#include "MasterKanjiConsistRepository.hpp"
#include "TomlAsset.hpp"

namespace kanji {
namespace md {

void MasterKanjiConsistRepository::initialize() {
    const dx::cmp::TomlAsset toml(U"KanjiConsist");
    const dx::cmp::TomlKey key(U"masterdata");
    s3d::TOMLTableView table = toml[key].tableView();
    for (const s3d::TOMLTableMember& table_member : table) {
        const auto& toml_value = table_member.value;
        m_data.insert(std::make_pair(KanjiID(toml_value[U"composition_id"].get<int>()),
            std::make_unique<kanji::md::MasterKanjiConsist>(
                KanjiID(toml_value[U"stem_id"].get<int>()),
                RadicalID(toml_value[U"radical_id"].get<int>()),
                KanjiID(toml_value[U"composition_id"].get<int>()))));
    }
}

}
}

