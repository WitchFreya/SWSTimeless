#include "script_component.hpp"

#include "XtdGearModels.inc"
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
        requiredAddons[] = { "swst_gear" };
        VERSION_CONFIG;
        addonRootClass = QUOTE(ADDON);
    };
};
