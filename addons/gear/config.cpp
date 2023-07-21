#include "script_component.hpp"

#include "CfgGlasses.inc"
#include "XtdGearModels.inc"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"SWST_Main"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
