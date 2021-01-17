// This file is generated from KanjiDictionary.toml
#pragma once
#include "Singleton.hpp"
#include "MasterDataRepository.hpp"
#include "MasterKanjiDictionary.hpp"
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterKanjiDictionaryRepository :
    public dx::md::MasterDataRepository<KanjiID, MasterKanjiDictionary>,
    public dx::cmp::Singleton<MasterKanjiDictionaryRepository> {
protected: // protected function
    void initialize();
public: // ctor
    MasterKanjiDictionaryRepository() { initialize(); }
};

}
}

