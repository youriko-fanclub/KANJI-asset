// This file is generated from KanjiDictionary.toml
#include "MasterKanjiDictionaryRepository.hpp"
#include "TomlAsset.hpp"

namespace kanji {
namespace md {

void MasterKanjiDictionaryRepository::initialize() {
    const dx::toml::TomlAsset toml(U"KanjiDictionary");
    const dx::toml::TomlKey key(U"masterdata");
    s3d::TOMLTableView table = toml[key].tableView();
    for (const s3d::TOMLTableMember& table_member : table) {
        const auto& toml_value = table_member.value;
        m_data.insert(std::make_pair(KanjiID(toml_value[U"id"].get<int>()),
            std::make_unique<kanji::md::MasterKanjiDictionary>(
                KanjiID(toml_value[U"id"].get<int>()),
                toml_value[U"character"].get<s3d::String>(),
                toml_value[U"trivia"].get<s3d::String>())));
    }
}

}
}

