# 17b06e

![17b06e](imgur.com)

# 17B06E-Macropad
Simple 4x4 (+1) numpad with 6 rotary encoders. Powered by QMK via Waveshare RP2040-Plus. 

### What does 17B06E mean?
I chose the name 17B06E-Macropad because it describes everything the Macropad has. 17 Buttons + 6 Encoders. It also has RGB and a small OLED display.
The top button is used to switch profiles, giving you 16 x 4 (or more/less) buttons at your disposal, with the current profile shown on the display.

* Keyboard Maintainer: [Simon99de](https://github.com/Simon99de)
* Hardware Supported: Pi Pico compatible RP2040 MCU
* Hardware Availability: https://github.com/Simon99de/17B06E-Macropad

Make example for this keyboard (after setting up your build environment):

    make 17b06e:default

Flashing example for this keyboard:

    make 17b06e:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
