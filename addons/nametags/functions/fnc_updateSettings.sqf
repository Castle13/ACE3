/*
 * Author: Jonpas
 * Dynamically adds and removes Draw3D based on settings on run-time.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call ace_nametags_fnc_updateSettings
 *
 * Public: No
 */
#include "script_component.hpp"

if (isNil QGVAR(drawHandler) && {GVAR(showNames) != 0}) then {
    GVAR(drawHandler) = addMissionEventHandler ["Draw3D", {_this call FUNC(onDraw3d);}];
} else {
    if (!isNil QGVAR(drawHandler) && {GVAR(showNames) == 0}) then {
        removeMissionEventHandler ["Draw3D", GVAR(drawHandler)];
        GVAR(drawHandler) = nil;
    };
};
