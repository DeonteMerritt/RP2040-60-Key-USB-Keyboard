// Copyright 2026 Deonte Lamar Merritt
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Matrix pins, diode direction, debounce, USB identity, and features live in
 * keyboard.json. Do not redefine them here.
 *
 * The Raspberry Pi Pico stores firmware in a Winbond W25Q16JV. QMK's default
 * W25Q080-compatible second-stage bootloader talks to that chip. Do not define
 * an RP2040_FLASH_* override for this board.
 *
 * Double-tap reset is not enabled. This Pico has a BOOTSEL button and no
 * reset button. Bootloader entry is documented in readme.md.
 */
