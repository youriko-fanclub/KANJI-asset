// This file is generated from KanjiConsist.toml
#include "MasterKanjiConsistRepository.hpp"
#include "HotReloadManager.hpp"

namespace kanji {
namespace md {

void MasterKanjiConsistRepository::initialize() {
    const auto& param = dx::cmp::HotReloadManager::createParamsWithLoad(U"masterdata/kanji/KanjiConsist");
    const s3d::String key = U"masterdata";
    s3d::TOMLTableView table = param->getTOML(key).tableView();
    for (const s3d::TOMLTableMember& table_member : table) {
        const auto& toml = table_member.value;
        m_data.insert(std::make_pair(KanjiID(toml[U"composition_id"].get<int>()),
            std::make_unique<kanji::md::MasterKanjiConsist>(
                KanjiID(toml[U"stem_id"].get<int>()),
                RadicalID(toml[U"radical_id"].get<int>()),
                KanjiID(toml[U"composition_id"].get<int>()))));
    }
}

}
}

