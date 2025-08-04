const int pin = 13; // Replace with your pin number

#define digitalWriteFast(pin,val) (val ? sio_hw->gpio_set = (1 << pin) : sio_hw->gpio_clr = (1 << pin))
#define digitalReadFast(pin) ((1 << pin) & sio_hw->gpio_in)

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWriteFast(pin, HIGH);
  digitalWriteFast(pin, LOW);
  digitalWriteFast(pin, HIGH);
  digitalWriteFast(pin, LOW);
  digitalWriteFast(pin, HIGH);
  digitalWriteFast(pin, LOW);
  digitalWriteFast(pin, HIGH);
  digitalWriteFast(pin, LOW);
  digitalWriteFast(pin, HIGH);
  digitalWriteFast(pin, LOW);
  digitalWriteFast(pin, HIGH);
  digitalWriteFast(pin, LOW);
  digitalWriteFast(pin, HIGH);
  digitalWriteFast(pin, LOW);
}
