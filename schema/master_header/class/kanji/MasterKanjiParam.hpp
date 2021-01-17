// This file is generated from KanjiParam.toml
#pragma once
#include "IDs.hpp"

namespace kanji {
namespace md {

class MasterKanjiParam {
public: // public getter
    KanjiID id() const { return m_id; }
    const s3d::String& character() const { return m_character; }
    int attack() const { return m_attack; }
    int defence() const { return m_defence; }
    int speed() const { return m_speed; }
    int jump() const { return m_jump; }
    int weight() const { return m_weight; }
private: // field
    KanjiID m_id;
    s3d::String m_character;
    int m_attack;
    int m_defence;
    int m_speed;
    int m_jump;
    int m_weight;
public: // ctor
    MasterKanjiParam(KanjiID id, const s3d::String& character, int attack, int defence, int speed, int jump, int weight) :
    m_id(id),
    m_character(character),
    m_attack(attack),
    m_defence(defence),
    m_speed(speed),
    m_jump(jump),
    m_weight(weight) {}
};

}
}

