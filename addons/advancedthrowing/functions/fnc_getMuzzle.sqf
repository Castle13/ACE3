/*
 * Author: PabstMirror
 * Retrieve muzzle name from config.
 *
 * Arguments:
 * 0: Magazine Classname <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * "magazine" call ace_advancedthrowing_fnc_getMuzzle
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_magazineClassname"];

_magazineClassname = toLower _magazineClassname;
private _throwMuzzles = getArray (configFile >> "CfgWeapons" >> "Throw" >> "muzzles");

_throwMuzzles = _throwMuzzles select {_magazineClassname in ((getArray (configFile >> "CfgWeapons" >> "Throw" >> _x >> "magazines")) apply {toLower _x})};

[_throwMuzzles select 0, ""] select (_throwMuzzles isEqualTo [])
