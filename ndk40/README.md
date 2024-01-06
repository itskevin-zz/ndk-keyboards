# ndk40

![ndk40-1](https://github.com/itskevin-zz/ndk-keyboards/assets/7293885/ddf343d5-bcbd-4952-9603-62ac8e05d366)
![ndk40-2](https://github.com/itskevin-zz/ndk-keyboards/assets/7293885/4b453015-357c-48c8-80f8-9261736cce83)
![ndk40-3](https://github.com/itskevin-zz/ndk-keyboards/assets/7293885/ab4a61e4-c74e-4774-bff8-24331936bdc0)
![ndk40-4](https://github.com/itskevin-zz/ndk-keyboards/assets/7293885/881eec74-db02-4d8b-ae1e-d16063a6c5ff)

A 3D printed 40% handwired keyboard with two 1u keys under the left thumb to manage layers and combos. Included are firmware and code for both ZMK and QMK (I haven't run this yet). The goal was to design a 40% keyboard that could be printed in one go. 

## Hardware
**Controller**: Nice!nano or Pro Micro
**Breakout Board**: The bottom half has room for you to use a breakout board for the usb-c connection.
**Stabilizer**: 1x 2u stabilizer

## Keycap Support
I designed this to be able to be used with cherry profiles that have commonly available delete, enter, esc 40s support. If you are looking at cherry keycaps this is what you will need:
* Q row: 1u Eec, 1.75u Backspace
* A row: 1.25u Tab, 1.5u Enter
* Z row: 1.75u Shift

## 3D Printing
This was printed on a Prusa MKS3+ and it takes up the maximum possible size of the plate on the x-axis. The bottom half has placeholder for the controller to sit in the centre of the case with a place to wire in a USB-C breakout board, specifically a treedix USB-C board. I didn't implement this in my final build but did test fit it. I've included a small little controller platform and holder if you don't want to use a breakout board.
![ndk40-prusa1](https://github.com/itskevin-zz/ndk-keyboards/assets/7293885/a57a67bd-8a97-4d99-acc2-16add8b6262e