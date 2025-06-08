# w25q128 serial flash memory library

This library is structured of both **low-level** and **littlefs-level** drivers. It is designed for systems using STM32 microcontrollers and is written on top of the STM32 HAL. It uses SPI interface to interract with serial flash memory.

## low-level-drivers

These drivers provide the "bare-metal" access to the serial flash memory(reading ID, reading data, reading status registers, writing pages, erasing sectors, etc).

## littlefs-level-drivers

These drivers provide functions needed by littlefs filesystem to work: prog, erase, read and sync. Refer to the official **littlefs** Github if you want to learn more about littlefs itself: https://github.com/littlefs-project/littlefs .

# library implementation demos
The implementation of this library can be found here: https://github.com/filipembedded/stm32-nvs-demos. It features low-level demo and littlefs demo for w25q128 flash.
