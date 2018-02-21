#include "Arduino.h"
#include "Actuator.h"

#include <Servo.h>


Actuator::Actuator() {}

Actuator::Actuator(struct Config config) {
  init(config);
}

void Actuator::init(struct Config config) {
  if (_servo.attached()) {
    _servo.detach();
  }
  _config = config;
  _servo.attach(_config.pin);
}
