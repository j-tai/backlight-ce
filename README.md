# backlight-ce

Adjust your screen brightness beyond the OS limits.

(Note: I have no idea if setting the brightness too high can cause damage to the calculator. I do not claim any responsibility if any such damage occurs.)

## Installation

* Download the [C libraries](https://github.com/CE-Programming/libraries/releases) and send it to your calculator.
* Download the [latest release of backlight-ce](https://github.com/j-tai/backlight-ce/releases) and send it to your calculator.
* Run `prgmBCKLIGHT`.
  * If your calculator OS is older than 5.3, then you will need to unarchive the program and run `Asm(prgmBCKLIGHT`.

## Usage

The current backlight level is represented as a hexadecimal number from 00 to FF, where 00 is the darkest and FF is the brightest.

* Press up or down to change by 0x10
* Press left or right to change by 1
* Press del or clear to exit

## License

[MIT License](LICENSE)
