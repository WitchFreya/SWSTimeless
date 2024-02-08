#include "script_component.hpp"

/*
 * Author: Maid
 * Establishes the event handlers for the UAV connection scripts.
 *
 * Arguments: None
 *
 * Return Value:
 * Exit code <NUMBER>
 *
 * Public: No
 */


[QGVAR(uavConnectabilityChanged), {
    TRACE_1(QGVAR(uavConnectabilityChanged),_this);
}] call CBA_fnc_addEventHandler;

if (isDedicated) exitWith {
    TRACE_1("Not running on dedicated server",isDedicated);
    EXIT_OK;
};

[QGVAR(uavConnectabilityChanged), {
    params ["_uav", "_canConnect"];

    if (_canConnect) then {
        player enableUAVConnectability [_uav, false];
    } else {
        player disableUAVConnectability [_uav, false];
    };
}] call CBA_fnc_addEventHandler;

[QGVARMAIN(uavTerminalSlotted), {
    params ["_unit", "_item"];
    private _unblockedUAVs = missionNamespace getVariable QGVAR(unblockedUAVs);
    if (isNil "_unblockedUAVs") exitWith {
        TRACE_1("No UAVs presently unblocked",_unit);
        EXIT_OK;
    };

    {
        _unit enableUAVConnectability [_x, false];
    } forEach _unblockedUAVs;
}] call CBA_fnc_addEventHandler;

[QGVARMAIN(uavTerminalSlotted), {
    params ["_unit", "_item"];
    private _blockedUAVs = missionNamespace getVariable QGVAR(blockedUAVs);
    if (isNil "_blockedUAVs") exitWith {
        TRACE_1("No UAVs presently blocked",_unit);
        EXIT_OK;
    };

    {
        _unit disableUAVConnectability [_x, false];
    } forEach _blockedUAVs;
}] call CBA_fnc_addEventHandler;

EXIT_OK;
