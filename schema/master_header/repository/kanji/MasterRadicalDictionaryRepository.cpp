// This file is generated from RadicalDictionary.toml
#include "MasterRadicalDictionaryRepository.hpp"
#include "HotReloadManager.hpp"

namespace kanji {
namespace md {

void MasterRadicalDictionaryRepository::initialize() {
    const auto& param = dx::cmp::HotReloadManager::createParamsWithLoad(U"masterdata/kanji/RadicalDictionary");
    const s3d::String key = U"masterdata";
    s3d::TOMLTableView table = param->getTOML(key).tableView();
    for (const s3d::TOMLTableMember& table_member : table) {
        const auto& toml = table_member.value;
        m_data.insert(std::make_pair(RadicalID(toml[U"id"].get<int>()),
            std::make_unique<kanji::md::MasterRadicalDictionary>(
                RadicalID(toml[U"id"].get<int>()),
                toml[U"character"].get<s3d::String>(),
                toml[U"trivia"].get<s3d::String>())));
    }
}

}
}

