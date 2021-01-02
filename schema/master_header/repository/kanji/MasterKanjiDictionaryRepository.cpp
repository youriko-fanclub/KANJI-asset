// This file is generated from KanjiDictionary.toml
#include "MasterKanjiDictionaryRepository.hpp"
#include "HotReloadManager.hpp"

namespace kanji {
namespace md {

void MasterKanjiDictionaryRepository::initialize() {
    const auto& param = dx::cmp::HotReloadManager::createParamsWithLoad(U"masterdata/kanji/KanjiDictionary");
    const s3d::String key = U"masterdata";
    s3d::TOMLTableView table = param->getTOML(key).tableView();
    for (const s3d::TOMLTableMember& table_member : table) {
        const auto& toml = table_member.value;
        m_data.insert(std::make_pair(KanjiID(toml[U"id"].get<int>()),
            std::make_unique<kanji::md::MasterKanjiDictionary>(
                KanjiID(toml[U"id"].get<int>()),
                toml[U"character"].get<s3d::String>(),
                toml[U"trivia"].get<s3d::String>())));
    }
}

}
}

