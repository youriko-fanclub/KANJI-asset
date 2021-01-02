// This file is generated from KanjiParam.toml
#include "MasterKanjiParamRepository.hpp"
#include "HotReloadManager.hpp"

namespace kanji {
namespace md {

void MasterKanjiParamRepository::initialize() {
    const auto& param = dx::cmp::HotReloadManager::createParamsWithLoad(U"masterdata/kanji/KanjiParam");
    const s3d::String key = U"masterdata";
    s3d::TOMLTableView table = param->getTOML(key).tableView();
    for (const s3d::TOMLTableMember& table_member : table) {
        const auto& toml = table_member.value;
        m_data.insert(std::make_pair(KanjiID(toml[U"id"].get<int>()),
            std::make_unique<kanji::md::MasterKanjiParam>(
                KanjiID(toml[U"id"].get<int>()),
                toml[U"character"].get<s3d::String>(),
                toml[U"attack"].get<int>(),
                toml[U"defence"].get<int>(),
                toml[U"speed"].get<int>(),
                toml[U"jump"].get<int>(),
                toml[U"weight"].get<int>())));
    }
}

}
}

