#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Characters_F"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
