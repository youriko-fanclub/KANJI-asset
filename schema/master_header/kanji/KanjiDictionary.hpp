// This file is generated from KanjiDictionary.toml.
#pragma once
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterKanjiDictionary {
public: // public getter
    KanjiID id() const { return m_id; }
    const s3d::String& character() const { return m_character; }
    const s3d::String& trivia() const { return m_trivia; }
private: // field
    KanjiID m_id;
    s3d::String m_character;
    s3d::String m_trivia;
public: // ctor
    MasterKanjiDictionary(KanjiID id, s3d::String character, s3d::String trivia) :
    m_id(id),
    m_character(character),
    m_trivia(trivia) {}
};

}
}

