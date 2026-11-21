#include "Geode/modify/Modify.hpp"
#include "Geode/binding/Bind.hpp"
#include "Geode/utils/Result.hpp"
#include "Geode/include/geode.hpp"

using namespace geode;

class GDXExtension : public Mod {
public:
    static ModInfo createModInfo() {
        ModInfo result;
        result.m_id = "gdx.extension";
        result.m_name = "GDX Extension";
        result.m_author = "danadavydenko47-cmd";
        result.m_version = "1.0.0";
        return result;
    }

    void onLoad() override {
        CCLOG("GDX Extension loaded!");
    }
};

GEOMETRY_DASH_MOD_CLASS(GDXExtension)
