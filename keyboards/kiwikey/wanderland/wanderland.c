/* Copyright 2021 KiwiKey
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "wanderland.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
	// Key Matrix to LED Index
	{ NO_LED, 4     , 4     , 4     , 4     , 3     , 3     , 3     , 3     , 2     , 2     , 2     , 2     },
	{ NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED},
	{ 6     , NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 6     },
	{ 7     , 5     , NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED,},
	{ 7     , NO_LED, NO_LED, 8     , NO_LED, 8     , 9     , NO_LED, 9     , 7     , 10    , 11    , 11    },
    { 7     , NO_LED, NO_LED, 8     , NO_LED, 8     , 9     , NO_LED, 9     , 7     , 10    , 11    , 11    },
}, {
	// LED Index to Physical Position
	{224, 20}, {192, 10}, {160, 10}, {128, 10}, {96, 10}, {64, 10}, {32, 10}, {10, 10},
    {25, 32}, {10, 64}, {35, 64}, {64, 64}, {96, 64}, {128, 64},
    {160, 64}, {192, 64}, {224, 64}, {224, 32}
}, {
	// LED Index to Flag
	LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL,
    LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL,
	LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL, LED_FLAG_ALL
} };
#endif
