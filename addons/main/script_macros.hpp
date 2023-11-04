#include "\x\cba\addons\main\script_macros_common.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define SCOPE(var0)      \
    scope = var0;        \
    scopeCurator = var0; \
    scopeArsenal = var0

#define META                \
    dlc = QUOTE(PREFIX);    \
    author = QUOTE(AUTHOR)

#define ITEM_META(var0) \
    META;                   \
    SCOPE(var0)

#define NAME(var0) [SWST] var0
#define QNAME(var0) QUOTE(NAME(var0))

#define EXIT_OK 0
#define EXIT_ERROR_CODE(varError,varCode) \
    ERROR_2(format ["Exiting: Error code %1", varCode],varError); \
    varCode
#define EXIT_ERROR(varError) EXIT_ERROR_CODE(varError,-1);
