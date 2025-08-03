digitalWriteFast for RP2040
===========================

Found those 2 lines to speed pin toggling on an RP2040:

```
#define digitalWriteFast(pin,val) (val ? sio_hw->gpio_set = (1 << pin) : sio_hw->gpio_clr = (1 << pin))
#define digitalReadFast(pin) ((1 << pin) & sio_hw->gpio_in)
```

Timings
=======

Should be 16ns at default 120mhz speed.
Should be 8ns at default 240mhz speed. (untested)

Links
=====

* Inspired from: https://academy.cba.mit.edu/classes/input_devices/step/hello.txrx2.RP2040.ino
* digitalWriteFast library (for AVR only): https://github.com/ArminJo/digitalWriteFast
