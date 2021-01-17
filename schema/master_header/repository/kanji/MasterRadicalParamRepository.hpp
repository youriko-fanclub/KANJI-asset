// This file is generated from RadicalParam.toml
#pragma once
#include "Singleton.hpp"
#include "MasterDataRepository.hpp"
#include "MasterRadicalParam.hpp"
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterRadicalParamRepository :
    public dx::md::MasterDataRepository<RadicalID, MasterRadicalParam>,
    public dx::cmp::Singleton<MasterRadicalParamRepository> {
protected: // protected function
    void initialize();
public: // ctor
    MasterRadicalParamRepository() { initialize(); }
};

}
}

