# handwired/ndk/ndk15

<img src="https://github.com/itskevin-zz/ndk-keyboards/assets/7293885/d59805fb-0650-43b3-82d1-ca93b9f2e8bb" width="600">

*A short description of the keyboard/project*

* Keyboard Maintainer: [Kevin](https://github.com/Kevin)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make handwired/ndk/ndk15:default

Flashing example for this keyboard:

    make handwired/ndk/ndk15:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
