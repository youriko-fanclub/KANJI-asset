// This file is generated from RadicalDictionary.toml.
#pragma once
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterRadicalDictionary {
public: // public getter
    RadicalID id() const { return m_id; }
    const s3d::String& character() const { return m_character; }
    const s3d::String& trivia() const { return m_trivia; }
private: // field
    RadicalID m_id;
    s3d::String m_character;
    s3d::String m_trivia;
public: // ctor
    MasterRadicalDictionary(RadicalID id, s3d::String character, s3d::String trivia) :
    m_id(id),
    m_character(character),
    m_trivia(trivia) {}
};

}
}

