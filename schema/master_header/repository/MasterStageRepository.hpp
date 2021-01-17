// This file is generated from Stage.toml
#pragma once
#include "Singleton.hpp"
#include "MasterDataRepository.hpp"
#include "MasterStage.hpp"
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterStageRepository :
    public dx::md::MasterDataRepository<StageID, MasterStage>,
    public dx::cmp::Singleton<MasterStageRepository> {
protected: // protected function
    void initialize();
public: // ctor
    MasterStageRepository() { initialize(); }
};

}
}

