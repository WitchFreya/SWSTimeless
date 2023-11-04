#include "script_component.hpp"

/*
 * Author: Maid
 * Set UAV connectability; this does it globally rather than for a single unit with a single terminal.
 *
 * Arguments:
 * 0: UAV <UAV OBJECT>
 * 1: TRUE to enable connection, FALSE to disable connection <BOOLEAN>
 *
 * Return Value:
 * None
 *
 * Public: Yes
 */

params ["_uav", "_canConnect"];

private _blockedUAVs = missionNamespace getVariable  [QGVAR(blockedUAVs), []];
// this is explictly any UAVs that were blocked at one point and no longer are, because there's no way to enableUAVConnectability for a terminal dropped on the ground.
private _unblockedUAVs = missionNamespace getVariable [QGVAR(unblockedUAVs), []];

private _alreadyDone = if (_canConnect) then { !(_uav in _blockedUAVs); } else { _uav in _blockedUAVs; };

if (_alreadyDone) exitWith {
    #ifdef DEBUG_MODE_FULL
        private _message = format ["UAV %1 is already %2", _uav, if (_canConnect) then { "blocked"; } else { "connectable"; }];
        TRACE_1(_message, _canConnect);
    #endif
    EXIT_OK;
};

private _fn_disable = {
    missionNamespace setVariable [QGVAR(blockedUAVs), _blockedUAVs + [_uav], true];
    missionNamespace setVariable [QGVAR(unblockedUAVs), _unblockedUAVs - [_uav], true];
    [QGVAR(uavConnectabilityChanged), [_uav, _canConnect]] call CBA_fnc_globalEvent;
};

private _fn_enable = {
    missionNamespace setVariable [QGVAR(blockedUAVs), _blockedUAV - [_uav], true];
    missionNamespace setVariable [QGVAR(unblockedUAVs), _unblockedUAVs + [_uav], true];
    [QGVAR(uavConnectabilityChanged), [_uav, _canConnect]] call CBA_fnc_globalEvent;
};

if (_canConnect) then {
    call _fn_enable;
} else {
    call _fn_disable;
};

EXIT_OK;
