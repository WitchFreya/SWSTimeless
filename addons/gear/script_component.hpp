#define COMPONENT gear
#define COMPONENT_BEAUTIFIED Gear
#include "\x\swst\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_GEAR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\swst\addons\main\script_macros.hpp"

#define GLASSES(var0) DOUBLES(GVAR(Glasses),var0)
#define QGLASSES(var0) QUOTE(GLASSES(var0))
