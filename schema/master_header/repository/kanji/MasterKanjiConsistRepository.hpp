// This file is generated from KanjiConsist.toml
#pragma once
#include "Singleton.hpp"
#include "MasterDataRepository.hpp"
#include "MasterKanjiConsist.hpp"
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterKanjiConsistRepository :
    public dx::md::MasterDataRepository<KanjiID, MasterKanjiConsist>,
    public dx::cmp::Singleton<MasterKanjiConsistRepository> {
protected: // protected function
    void initialize();
public: // ctor
    MasterKanjiConsistRepository() { initialize(); }
};

}
}

