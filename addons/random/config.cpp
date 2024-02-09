#include "script_component.hpp"

class ItemInfo;

#include "CfgWeapons.inc"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { CLASSES_WEAPONS };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_field_rations"};
        skipWhenMissingDependencies = TRUE;
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
