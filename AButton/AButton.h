// Arduino RBD Button Library v2.1.0 - Read and debounce buttons and switches.
// https://github.com/alextaujenis/RBD_Button
// Copyright 2016 Alex Taujenis
// MIT License

#ifndef ABUTTON_H
#define ABUTTON_H

#include <Arduino.h>
#include "../ATimer/ATimer.h"  // https://github.com/alextaujenis/RBD_Timer

  class AButton {
    public:
      AButton(int pin);                    // constructor: input pullup enabled by default
      AButton(int pin, bool input_pullup); // overloaded constructor: flag available to disable input pullup
      void setDebounceTimeout(unsigned long value);
      bool isPressed();
      bool isReleased();
      bool onPressed();
      bool onReleased();
      void invertReading();
    private:
      int _pin;
      unsigned long _debounce_timeout; // ms
      bool _has_been_pressed;
      bool _has_been_released;
      bool _invert;
      bool _temp_reading;
      void _inputPullup();
      void _disableInputPullup();
      ATimer _pressed_debounce;
      ATimer _released_debounce;
  };
#endif
