# RP2040 60-Key USB Keyboard II

A hand-wired USB keyboard for Deonte Lamar Merritt, Merritt Robotics Inc. Sixty MX-style keys sit in a 5 by 12 ortholinear grid. A Raspberry Pi Pico (RP2040) scans the matrix and sends USB HID keyboard reports with QMK Firmware.

The Pico's own micro-USB socket is the keyboard cable port. This version is the Pico module plus a wired matrix. It is not a custom PCB built around a bare RP2040.

## What was already in the repository

The repository was inspected before this project was added. The only commit was an empty initialization. These paths were not present:

- `platformio.ini`
- `src/`
- `firmware/`
- `wiring/`
- `schematic/`
- `docs/`
- `firmware/qmk/keyboards/merritt/merritt60`

There was no earlier controller, matrix wiring, keymap, or PlatformIO sketch to preserve or port. Nothing in the empty tree was overwritten. This folder is the new design. It does not include a PlatformIO firmware, so there is not a second implementation beside QMK. QMK is the keyboard firmware. A program that only prints switch states on a serial port is not included and would not be USB keyboard firmware.

## Hardware

| Item | Choice |
| --- | --- |
| Controller | Raspberry Pi Pico, SC0915, RP2040. Pico H (SC0917) is the same board with headers fitted. |
| Keys | 60, every matrix position filled |
| Matrix | 5 rows by 12 columns |
| Diodes | One 1N4148 per switch, band toward the row |
| Firmware diode direction | `COL2ROW` |
| USB | Built-in micro-USB on the Pico |
| QMK | 0.34.6, keyboard `merritt/merritt60ii` |

Rows are GP2, GP3, GP4, GP5, GP6. Columns are GP7 through GP18. All of those pins are on the Pico header. The full pin, layout, and assembly instructions are in `docs/`.

## What the keyboard types

The firmware sends standard USB HID keycodes, including modifiers, function keys, arrows, and navigation on an Fn layer. You can type Seldun, Java, Python, JavaScript, C++, and other source code in an editor. Compiling and running those languages happens on the computer. The keyboard does not compile them.

```
`    1    2    3    4    5    6    7    8    9    0    Backspace
Tab  Q    W    E    R    T    Y    U    I    O    P    \
Esc  A    S    D    F    G    H    J    K    L    ;    '
Shift Z   X    C    V    B    N    M    ,    .    /    Enter
Ctrl Win  Alt  Fn   [    ]    Space -  =    Fn   Del  Shift
```

Hold Fn for F1–F12, arrows on H J K L, and Home, End, Page Up, Page Down, Insert, and Delete. The map is in `docs/key-layout.md`.

## Firmware

QMK is the firmware that becomes the UF2 you copy onto the Pico. The keyboard definition lives at:

`firmware/qmk/keyboards/merritt/merritt60ii/`

QMK 0.34.6 reads `keyboard.json` for the hardware. `rules.mk` intentionally does not repeat those settings. The default keymap is `keymaps/default/keymap.c`.

After QMK is installed, from the QMK tree:

```
qmk compile -kb merritt/merritt60ii -km default
```

The output file is `merritt_merritt60ii_default.uf2`. Hold BOOTSEL on the Pico while plugging in USB, then copy that file to the `RPI-RP2` drive. Windows steps, including the optional WSL note, are in `docs/build-flash-test-guide.md`.

Bootloader entry after the firmware is installed:

- Hold BOOTSEL and plug in USB.
- Hold the top-left key and plug in USB (Bootmagic, matrix `[0, 0]`).
- Hold Fn and tap the top-left key (`QK_BOOT`).

## Documentation

| File | Contents |
| --- | --- |
| `docs/hardware-specification.md` | Board, GPIO suitability, diode direction, scan, USB identity |
| `docs/bill-of-materials.csv` | Quantities and part specifications |
| `docs/wiring-guide.md` | Pin table and assembly order |
| `docs/key-layout.md` | Layout, Fn layer, keycaps, and the 60-position matrix table |
| `docs/build-flash-test-guide.md` | Windows install, build, BOOTSEL, flash, test, and keymap edits |
| `docs/troubleshooting.md` | Cables, unrecognized devices, diodes, GPIO, missing keys, repeat |
| `docs/schematic-specification.md` | Nets for the module schematic, and the CAD work still open |
| `docs/validation-report.md` | What was checked, including what was not flashed on hardware |
| `hardware/kicad/merritt60ii.kicad_sch` | Editable schematic source |

## Check the sources locally

From this folder:

```
python3 tools/validate_design.py
```

The script checks key count, unique matrix positions, GPIO conflicts, diode direction, and agreement between the keymap, `keyboard.json`, and the docs. It does not claim the physical keyboard was tested.

## License

Two licenses apply. They are not interchangeable.

**MIT License.** `LICENSE` covers original independent work that is not combined into the QMK binary: the documentation in `docs/`, this README, `THIRD_PARTY_NOTICES.md`, `hardware/design.json`, `hardware/netlist.csv`, the KiCad schematic, the bill of materials, and the Python tools under `tools/`. The copyright line is:

Copyright (c) 2026 Deonte Lamar Merritt

**GPL-2.0-or-later.** The keyboard definition under `firmware/qmk/keyboards/merritt/merritt60ii/` is original source by Deonte Lamar Merritt and is licensed under the GNU General Public License version 2 or later so it can be compiled with QMK. Those files are marked `SPDX-License-Identifier: GPL-2.0-or-later`. The license text is `firmware/qmk/keyboards/merritt/merritt60ii/COPYING`. Do not treat that directory as MIT-only.

**QMK and other third-party code.** This repository does not contain the QMK Firmware tree. The UF2 you build includes QMK 0.34.6 and the libraries QMK builds with (ChibiOS, the Pico SDK, and others). Those projects keep their own copyright notices and licenses. The QMK license for revision 0.34.6 is at https://github.com/qmk/qmk_firmware/blob/0.34.6/LICENSE . Distributing the UF2 means complying with GPL-2.0-or-later for the combined firmware. Details are in `THIRD_PARTY_NOTICES.md`.
