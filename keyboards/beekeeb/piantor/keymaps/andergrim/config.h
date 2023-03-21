/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define MASTER_LEFT

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD // https://precondition.github.io/home-row-mods#tapping-force-hold
#define TAPPING_TERM 170
#define TAPPING_TOGGLE 3

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define COMBO_COUNT 13
#define COMBO_MUST_HOLD_PER_COMBO

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE

