// Arduino RBD Timer Library v1.2.0 - Manage many timed events.
// https://github.com/alextaujenis/RBD_Timer
// Copyright 2016 Alex Taujenis
// MIT License

#include <Arduino.h>
#include <ATimer.h> // https://github.com/alextaujenis/RBD_Timer


ATimer::ATimer() {
	_timeout = 0;
	_waypoint = 0;
	_has_been_active = false;
	_has_been_expired = false;
	_state = eATimerTypeExpired;
}

ATimer::ATimer(unsigned long value) {
	setTimeout(value);
	_waypoint = 0;
	_has_been_active = false;
	_has_been_expired = false;
	_state = eATimerTypeExpired;
}

void ATimer::setTimeout(unsigned long value) {
	_timeout = (value > 0) ? value : 1;
}

void ATimer::setHertz(int value) {
	// possible to do: manage setHertz in micros() for higher resolution
	int _temp_value = constrain(value, 1, 1000);
	_timeout    = (unsigned long)(1000 / _temp_value);
}

void ATimer::restart() {
	_waypoint         = millis();
	_state            = eATimerTypeActive;
	_has_been_active  = false;
	_has_been_expired = false;
}

void ATimer::stop() {
	_state = eATimerTypeStopped;
}

bool ATimer::isActive() {
	_updateState();
	return _state == eATimerTypeActive;
}

bool ATimer::isExpired() {
	_updateState();
	return _state == eATimerTypeExpired;
}

bool ATimer::isStopped() {
	return _state == eATimerTypeStopped;
}

bool ATimer::onRestart() {
	if(isExpired()) {
		restart();
		return true;
	}
	return false;
}

bool ATimer::onActive() {
	if(!_has_been_active && isActive()) {
		return _has_been_active = true;
	}
	return false;
}

bool ATimer::onExpired() {
	if(!_has_been_expired && isExpired()) {
		return _has_been_expired = true;
	}
	return false;
}

unsigned long ATimer::getValue() {
	return millis() - _waypoint;
}

unsigned long ATimer::getInverseValue() {
	return _timeout - getValue();
}

int ATimer::getPercentValue() {
	if(_timeout == 0) {return 0;}
	return getValue() / float(_timeout) * 100;
}

int ATimer::getInversePercentValue() {
	return 100 - getPercentValue();
}


// private

void ATimer::_updateState() {
	if(_state == eATimerTypeActive && getValue() >= _timeout) {
		_state = eATimerTypeExpired;
	}
}
