/*
 * Time.cpp
 *
 *  Created on: 13.07.2015
 *      Author: Administrator
 */

#include "Time.h"

#define HOURS_TO_SECONDS(x)		((x) * 3600)
#define MINUTES_TO_SECONDS(x)	((x) * 60)


Time::Time() {
	this->hour = 0;
	this->minutes = 0;
	this->seconds = 0;
}

Time::Time(unsigned int hour, unsigned int minutes, unsigned int seconds) {
	this->hour = hour;
	this->minutes = minutes;
	this->seconds = seconds;
}

Time::~Time() {
	// TODO Auto-generated destructor stub
}

void Time::setValuesFrom(Time* time) {
	this->hour = time->getHour();
	this->minutes = time->getMinutes();
	this->seconds = time->getSeconds();
}


bool Time::setTime(unsigned int hour, unsigned int minutes,
		unsigned int seconds) {
	Time tempTime(hour, minutes, seconds);
	if( tempTime.isValid() == false ) {
		return false;
	}
	else
	{
		this->setValuesFrom(&tempTime);
		return true;
	}
}


bool Time::setHour(unsigned int hour) {
	if(this->isUIntInRange(hour, 0, 23)) {
		this->hour = hour;
		return true;
	}
	return false;
}

bool Time::setMinutes(unsigned int minutes) {
	if(this->isUIntInRange(minutes, 0, 59)) {
		this->minutes = minutes;
		return true;
	}
	return false;
}

bool Time::setSeconds(unsigned int seconds) {
	if(this->isUIntInRange(seconds, 0, 59)) {
	this->seconds = seconds;
	return true;
	}
	return false;
}

bool Time::isValid() {
	if((this->hour < 0) || (this->hour > 23) ||
			(this->minutes < 0) || (this->minutes > 59) ||
			(this->seconds < 0) || (this->seconds > 59) ||
			((this->hour == 0) && (this->minutes == 0) && (this->seconds == 0))) {
		return false;
	}
	else {
		return true;
	}
}

long Time::secsTo(const Time *otherTime) const {
	long thisSeconds = this->seconds + MINUTES_TO_SECONDS(this->minutes) + HOURS_TO_SECONDS((long)this->hour);
	long otherSeconds = otherTime->seconds + MINUTES_TO_SECONDS(otherTime->minutes) + HOURS_TO_SECONDS((long)otherTime->hour);

	return otherSeconds - thisSeconds;
}

String Time::getTimeString(String format) {
	String tempString;
	if(format == "hh:mm")
	{
		tempString = this->getHourString() + ":" + this->getMinutesString();
	}
	else
	{
		tempString = this->getHourString() + ":" + this->getMinutesString() + ":" + this->getSecondsString();
	}
	return tempString;
}

String Time::getHourString() {
	String tempString;
	if(this->hour < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->hour));
}

String Time::getMinutesString() {
	String tempString;
	if(this->minutes < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->minutes));
}

String Time::getSecondsString() {
	String tempString;
	if(this->seconds < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->seconds));
}

bool Time::isUIntInRange(unsigned int value, unsigned int min, unsigned int max) {

	if( ((value) >= (min)) && ((value) <= (max)) )
		return true;
	else
		return false;
}
