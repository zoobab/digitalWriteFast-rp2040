digitalWriteFast for RP2040 (Arduino IDE)
===========================

Found those 2 lines to your file.ino to speed up pin toggling on an RP2040:

```
#define digitalWriteFast(pin,val) (val ? sio_hw->gpio_set = (1 << pin) : sio_hw->gpio_clr = (1 << pin))
#define digitalReadFast(pin) ((1 << pin) & sio_hw->gpio_in)
```

Timings
=======

Should be able to produce 8ns blocks.

Here is a capture of the ```digitalWriteFast-rp2040.ino``` loaded into Wowki simulator, and
the VCD captured file loaded into ```https://vc.drom.io``` :

![rp2040-wowki-8ns)](rp2040-wowki-8ns.png)

Links
=====

* VCD online visualisator: https://vc.drom.io
* Wowki rp2040 simulator with a Logic Analyzer capable to output VCD files: https://wokwi.com/projects/438276508708540417
* Inspired from: https://academy.cba.mit.edu/classes/input_devices/step/hello.txrx2.RP2040.ino
* digitalWriteFast library (for AVR only): https://github.com/ArminJo/digitalWriteFast
* FastPin for ESP32: https://github.com/jzolee/FastPin
