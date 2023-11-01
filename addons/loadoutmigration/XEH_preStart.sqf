#include "script_component.hpp"
#include "XEH_PREP.hpp"

private _migrations = createHashMap;

_migrations set ["SWST_Gear_Glasses_Shemagh", "SWST_Shemagh_Pink"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Up", "SWST_Shemagh_Pink_Up"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Blue", "SWST_Shemagh_Blue"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Blue_Up", "SWST_Shemagh_Blue_Up"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Green", "SWST_Shemagh_Green"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Green_Up", "SWST_Shemagh_Green_Up"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Orange", "SWST_Shemagh_Orange"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Orange_Up", "SWST_Shemagh_Orange_Up"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Purple", "SWST_Shemagh_Purple"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Purple_Up", "SWST_Shemagh_Purple_Up"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Gold", "SWST_Shemagh_Gold"];
_migrations set ["SWST_Gear_Glasses_Shemagh_Gold_Up", "SWST_Shemagh_Gold_Up"];

uiNamespace setVariable [QGVARMAIN(migrations), _migrations];
