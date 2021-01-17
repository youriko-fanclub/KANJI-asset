// This file is generated from KanjiParam.toml
#pragma once
#include "Singleton.hpp"
#include "MasterDataRepository.hpp"
#include "MasterKanjiParam.hpp"
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterKanjiParamRepository :
    public dx::md::MasterDataRepository<KanjiID, MasterKanjiParam>,
    public dx::cmp::Singleton<MasterKanjiParamRepository> {
protected: // protected function
    void initialize();
public: // ctor
    MasterKanjiParamRepository() { initialize(); }
};

}
}

