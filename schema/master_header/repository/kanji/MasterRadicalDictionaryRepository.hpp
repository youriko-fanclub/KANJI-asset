// This file is generated from RadicalDictionary.toml
#pragma once
#include "Singleton.hpp"
#include "MasterDataRepository.hpp"
#include "MasterRadicalDictionary.hpp"
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterRadicalDictionaryRepository :
    public dx::md::MasterDataRepository<RadicalID, MasterRadicalDictionary>,
    public dx::cmp::Singleton<MasterRadicalDictionaryRepository> {
protected: // protected function
    void initialize();
public: // ctor
    MasterRadicalDictionaryRepository() { initialize(); }
};

}
}

