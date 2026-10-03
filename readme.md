# RP2040 60-Key USB Keyboard II

USB HID keyboard for a hand-wired 5×12 matrix on a Raspberry Pi Pico (RP2040).

* Keyboard Maintainer: Deonte Lamar Merritt, Merritt Robotics Inc.
* Hardware Supported: Raspberry Pi Pico (SC0915) or Pico H (SC0917)
* Hardware Availability: Raspberry Pi Pico module plus a hand-wired switch matrix

The `url` field in `keyboard.json` is `https://qmk.fm` because QMK requires a URL and this hand-wired project has no product page. The USB product string is `RP2040 60-Key USB Keyboard II`. The USB manufacturer string is `Merritt Robotics Inc.`

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb merritt/merritt60ii -km default

Flashing example for this keyboard:

    qmk flash -kb merritt/merritt60ii -km default

The build writes `merritt_merritt60ii_default.uf2`. Copy that file to the `RPI-RP2` drive.

See the [QMK build environment setup](https://docs.qmk.fm/newbs_getting_started) and the project guide `docs/build-flash-test-guide.md`.

## Bootloader

Enter the RP2040 UF2 bootloader in either of these ways:

* **BOOTSEL:** unplug the Pico, hold the BOOTSEL button, and plug in the micro-USB cable. Release BOOTSEL when the `RPI-RP2` drive appears. This is the RP2040 ROM bootloader and works even if the application firmware is missing or broken.
* **Bootmagic:** after this firmware has been flashed, unplug the keyboard, hold the top-left key (matrix row 0, column 0, the grave key), and plug the cable back in.
* **Keycode:** hold either Fn key and tap the top-left key. That position is `QK_BOOT` on the Fn layer.

A brand-new Pico with empty flash also appears as `RPI-RP2` the first time it is plugged in.

Double-tap reset is not enabled. The Pico has no reset button.

## License

The keyboard definition in this directory is original work copyright 2026 Deonte Lamar Merritt and is licensed under GPL-2.0-or-later so it can be combined with QMK Firmware. See `COPYING`. It is not MIT-only. QMK Firmware itself remains under its own license.
