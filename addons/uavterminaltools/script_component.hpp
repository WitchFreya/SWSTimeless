#define COMPONENT uavterminaltools
#define COMPONENT_BEAUTIFIED UAV Terminal Tools
#include "\x\swst\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_INGAME
    #define DEBUG_MODE_FULL
#endif
#ifdef DEBUG_SETTINGS_UAVTERMINALTOOLS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_INGAME
#endif

#include "\x\swst\addons\main\script_macros.hpp"

#define SLOT_GPS 612
