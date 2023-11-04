#include "script_component.hpp"

// emit an event whenever a uavTerminal is slotted
player addEventHandler ["SlotItemChanged", {
    params ["_unit", "_item", "_slot", "_assigned"];
    if (
        _slot != SLOT_GPS
        || { !_assigned }
        || { _item isKindOf ["UavTerminal_base", configFile >> "CfgWeapons"]; }
    ) exitWith {
        TRACE_4("Nothing to do",_unit,_item,_slot,_assigned);
        EXIT_OK;
    };
    [QGVARMAIN(uavTerminalSlotted), [_unit, _item]] call CBA_fnc_localEvent;
}];

call FUNC(listenForUAVConnectability);
