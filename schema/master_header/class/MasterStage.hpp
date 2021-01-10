// This file is generated from Stage.toml
#pragma once
#include "IDs.hpp"
#include <Siv3D/Vector2D.hpp>

namespace kanji {
namespace md {

class MasterStage {
public: // public getter
    StageID id() const { return m_id; }
    const s3d::String& name() const { return m_name; }
    const s3d::String& bgm() const { return m_bgm; }
    const s3d::Vec2& initialposition1Players0() const { return m_initialposition_1players_0; }
    const s3d::Vec2& initialposition2Players0() const { return m_initialposition_2players_0; }
    const s3d::Vec2& initialposition2Players1() const { return m_initialposition_2players_1; }
    const s3d::Vec2& initialposition3Players0() const { return m_initialposition_3players_0; }
    const s3d::Vec2& initialposition3Players1() const { return m_initialposition_3players_1; }
    const s3d::Vec2& initialposition3Players2() const { return m_initialposition_3players_2; }
    const s3d::Vec2& initialposition4Players0() const { return m_initialposition_4players_0; }
    const s3d::Vec2& initialposition4Players1() const { return m_initialposition_4players_1; }
    const s3d::Vec2& initialposition4Players2() const { return m_initialposition_4players_2; }
    const s3d::Vec2& initialposition4Players3() const { return m_initialposition_4players_3; }
private: // field
    StageID m_id;
    s3d::String m_name;
    s3d::String m_bgm;
    s3d::Vec2 m_initialposition_1players_0;
    s3d::Vec2 m_initialposition_2players_0;
    s3d::Vec2 m_initialposition_2players_1;
    s3d::Vec2 m_initialposition_3players_0;
    s3d::Vec2 m_initialposition_3players_1;
    s3d::Vec2 m_initialposition_3players_2;
    s3d::Vec2 m_initialposition_4players_0;
    s3d::Vec2 m_initialposition_4players_1;
    s3d::Vec2 m_initialposition_4players_2;
    s3d::Vec2 m_initialposition_4players_3;
public: // ctor
    MasterStage(StageID id, const s3d::String& name, const s3d::String& bgm, const s3d::Vec2& initialposition_1players_0, const s3d::Vec2& initialposition_2players_0, const s3d::Vec2& initialposition_2players_1, const s3d::Vec2& initialposition_3players_0, const s3d::Vec2& initialposition_3players_1, const s3d::Vec2& initialposition_3players_2, const s3d::Vec2& initialposition_4players_0, const s3d::Vec2& initialposition_4players_1, const s3d::Vec2& initialposition_4players_2, const s3d::Vec2& initialposition_4players_3) :
    m_id(id),
    m_name(name),
    m_bgm(bgm),
    m_initialposition_1players_0(initialposition_1players_0),
    m_initialposition_2players_0(initialposition_2players_0),
    m_initialposition_2players_1(initialposition_2players_1),
    m_initialposition_3players_0(initialposition_3players_0),
    m_initialposition_3players_1(initialposition_3players_1),
    m_initialposition_3players_2(initialposition_3players_2),
    m_initialposition_4players_0(initialposition_4players_0),
    m_initialposition_4players_1(initialposition_4players_1),
    m_initialposition_4players_2(initialposition_4players_2),
    m_initialposition_4players_3(initialposition_4players_3) {}
};

}
}

