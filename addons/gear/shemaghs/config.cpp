#include "script_component.hpp"

#include "CfgGlasses.inc"

class CfgPatches
{
    class SUBADDON
    {
        name = COMPONENT_NAME;
        units[] = { };
        weapons[] = { };
        magazines[] = { };
        ammo[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "A3_Characters_F" };
        VERSION_CONFIG;
        addonRootClass = QUOTE(ADDON);
    };
};
