# Third-party notices

Copyright (c) 2026 Deonte Lamar Merritt

This file explains which parts of the RP2040 60-Key USB Keyboard II are original MIT-licensed work and which parts keep another license. The root `LICENSE` file does not relicense QMK.

## MIT License

The MIT License in `LICENSE`, and the copy at the repository root, covers original independent material written for this project:

- Documentation in `docs/`
- `README.md` and this file
- `hardware/design.json` and `hardware/netlist.csv`
- The KiCad schematic under `hardware/kicad/`
- `tools/generate_firmware.py`, `tools/generate_kicad.py`, and `tools/validate_design.py`
- `docs/bill-of-materials.csv`

Those files are original. They do not contain QMK source.

## GPL-2.0-or-later keyboard definition

These files are original source written for this keyboard, and they are licensed under the GNU General Public License, version 2 or later, so they can be compiled together with QMK Firmware:

- `firmware/qmk/keyboards/merritt/merritt60ii/keyboard.json`
- `firmware/qmk/keyboards/merritt/merritt60ii/keymap` files, including `keymaps/default/keymap.c`
- `firmware/qmk/keyboards/merritt/merritt60ii/rules.mk`
- `firmware/qmk/keyboards/merritt/merritt60ii/config.h`
- `firmware/qmk/keyboards/merritt/merritt60ii/readme.md`
- `firmware/qmk/keyboards/merritt/merritt60ii/keymaps/default/readme.md`

Each of those source files carries `SPDX-License-Identifier: GPL-2.0-or-later` and `Copyright 2026 Deonte Lamar Merritt`. The license text is `firmware/qmk/keyboards/merritt/merritt60ii/COPYING`. That directory is not MIT-only.

## QMK Firmware and its dependencies

This repository does not vendor the QMK Firmware tree. Building the UF2 requires a separate checkout of QMK. The supported revision used for this project is QMK Firmware **0.34.6**, git commit `d9f6dd215f2c4d295c6ad85b1f602125c2d81db1`, tag `0.34.6`.

QMK Firmware is licensed under the GNU General Public License. Current keyboard files in that tree use `SPDX-License-Identifier: GPL-2.0-or-later`. The repository license text is:

https://github.com/qmk/qmk_firmware/blob/0.34.6/LICENSE

QMK builds pull in other projects with their own copyright notices and licenses, including ChibiOS, ChibiOS-Contrib, the Raspberry Pi Pico SDK, and others under `qmk_firmware/lib/`. Those notices stay with those projects. Do not strip them, and do not describe a UF2 built from QMK as MIT-only.

The compiled `merritt_merritt60ii_default.uf2` is a combined work. If you distribute that file, comply with GPL-2.0-or-later for the combined firmware. Corresponding source is this keyboard definition plus the QMK revision you compiled.

## What was not copied

No QMK core source, ChibiOS source, or Pico SDK source is included in this repository. The KiCad schematic uses original symbol graphics drawn for this project rather than copied KiCad library symbols.
