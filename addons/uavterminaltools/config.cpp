#include "script_component.hpp"

#include "CfgEventHandlers.hpp"

class CfgPatches
{
    class ADDON
    {
        name = QUOTE(COMPONENT);
        units[] = { };
        weapons[] = { };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Drones_F_Weapons_F_Gamma_Items"};
        author = QUOTE(AUTHOR);
        VERSION_CONFIG;
    };
};
