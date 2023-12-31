# ndk16

<img src="https://github.com/itskevin-zz/ndk-keyboards/assets/7293885/e92ee411-dadc-4cd1-abec-c362eb0a1287" width="600">

The ndk16 is a 3d printed handwired numpad with an rotary encoder and oled screen. It runs QMK on a pro micro controller.

* Keyboard Maintainer: [iskevin-zz](https://github.com/itskevin-zz)
* Hardware Supported: ATmega32u4
* Hardware Availability: [STL Files](https://github.com/itskevin-zz/ndk-keyboards/tree/master/ndk16)

The cat oled image [source](https://github.com/codeyfrommars/Gamepad).

Make example for this keyboard (after setting up your build environment):

    make handwired/ndk/ndk16:default

Flashing example for this keyboard:

    make handwired/ndk/ndk16:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

* **Bootmagic reset**: Hold down the rotary encoder and plug in the keyboard
