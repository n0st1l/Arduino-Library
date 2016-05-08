// Arduino RBD Button Library v2.1.0 - Read and debounce buttons and switches.
// https://github.com/alextaujenis/RBD_Button
// Copyright 2016 Alex Taujenis
// MIT License

#include <Arduino.h>
#include <ATimer.h>  // https://github.com/alextaujenis/RBD_Timer
#include <AButton.h> // https://github.com/alextaujenis/RBD_Button


// input pullup enabled by default
AButton::AButton(int pin) {
	_pin = pin;
	_debounce_timeout = 50; // ms
	_has_been_pressed  = false;
	_has_been_released = false;
	_invert = true;
	_inputPullup();
	setDebounceTimeout(_debounce_timeout);
}

// overloaded constructor to disable input pullup
AButton::AButton(int pin, bool input_pullup) {
	_pin = pin;
	_debounce_timeout = 50; // ms
	_has_been_pressed  = false;
	_has_been_released = false;
	_invert = true;
	if(input_pullup) {
		_inputPullup();
	}
	else {
		_disableInputPullup();
	}
	setDebounceTimeout(_debounce_timeout);
}

void AButton::setDebounceTimeout(unsigned long value) {
	_debounce_timeout = value;
	_pressed_debounce.setTimeout(_debounce_timeout);
	_released_debounce.setTimeout(_debounce_timeout);
}

bool AButton::isPressed() {
	_temp_reading = digitalRead(_pin);
	if(_invert) {return !_temp_reading;}
	else {return _temp_reading;}
}

bool AButton::isReleased() {
	return !isPressed();
}

bool AButton::onPressed() {
	if(isPressed()) {
		_pressed_debounce.restart();
		if(!_has_been_pressed) {
			return _has_been_pressed = true;
		}
		return false;
	}
	// else
	if(_pressed_debounce.isExpired()) {
		return _has_been_pressed = false;
	}
	else {
		return false;
	}
}

bool AButton::onReleased() {
	if(isReleased()) {
		_released_debounce.restart();
		if(!_has_been_released) {
			return _has_been_released = true;
		}
		return false;
	}
	// else isPressed()
	if(_released_debounce.isExpired()) {
		return _has_been_released = false;
	}
	else {
		return false;
	}
}

void AButton::invertReading() {
	_invert = !_invert;
}


// private

void AButton::_inputPullup() {
	pinMode(_pin, INPUT_PULLUP);
}

void AButton::_disableInputPullup() {
	pinMode(_pin, INPUT);
}
