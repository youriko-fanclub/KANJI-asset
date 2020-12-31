// This file is generated from KanjiConsist.toml.
#pragma once
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterKanjiConsist {
public: // public getter
    KanjiID stemId() const { return m_stem_id; }
    RadicalID radicalId() const { return m_radical_id; }
    KanjiID compositionId() const { return m_composition_id; }
private: // field
    KanjiID m_stem_id;
    RadicalID m_radical_id;
    KanjiID m_composition_id;
public: // ctor
    MasterKanjiConsist(KanjiID stem_id, RadicalID radical_id, KanjiID composition_id) :
    m_stem_id(stem_id),
    m_radical_id(radical_id),
    m_composition_id(composition_id) {}
};

}
}

