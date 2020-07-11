/*
 * ATime.cpp
 *
 *  Created on: 13.07.2015
 *      Author: Administrator
 */

#include "ATime.h"

#define HOURS_TO_SECONDS(x)		((x) * 3600)
#define MINUTES_TO_SECONDS(x)	((x) * 60)


ATime::ATime()
: hour(0),
  minutes(0),
  seconds(0)
{}

ATime::ATime(unsigned int p_hour, unsigned int p_minutes, unsigned int p_seconds)
: hour(p_hour),
  minutes(p_minutes),
  seconds(p_seconds)
{}

ATime::~ATime() {
	// TODO Auto-generated destructor stub
}

void ATime::setValuesFrom(ATime* time) {
	this->hour = time->getHour();
	this->minutes = time->getMinutes();
	this->seconds = time->getSeconds();
}


bool ATime::setTime(unsigned int hour, unsigned int minutes,
		unsigned int seconds) {
	ATime tempTime(hour, minutes, seconds);
	if( tempTime.isValid() == false ) {
		return false;
	}
	else
	{
		this->setValuesFrom(&tempTime);
		return true;
	}
}


bool ATime::setHour(unsigned int hour) {
	ATime tempTime(hour, this->getMinutes(), this->getSeconds());
	if( tempTime.isValid() == false ) {
		return false;
	}
	else
	{
		this->setValuesFrom(&tempTime);
		return true;
	}
}

bool ATime::setMinutes(unsigned int minutes) {
	ATime tempTime(this->getHour(), minutes, this->getSeconds());
	if( tempTime.isValid() == false ) {
		return false;
	}
	else
	{
		this->setValuesFrom(&tempTime);
		return true;
	}
}

bool ATime::setSeconds(unsigned int seconds) {
	ATime tempTime(this->getHour(), this->getMinutes(), seconds);
	if( tempTime.isValid() == false ) {
		return false;
	}
	else
	{
		this->setValuesFrom(&tempTime);
		return true;
	}
}

bool ATime::isValid() {
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

long ATime::secsTo(const ATime *otherTime) const {
	long thisSeconds = this->seconds + MINUTES_TO_SECONDS(this->minutes) + HOURS_TO_SECONDS((long)this->hour);
	long otherSeconds = otherTime->seconds + MINUTES_TO_SECONDS(otherTime->minutes) + HOURS_TO_SECONDS((long)otherTime->hour);

	return otherSeconds - thisSeconds;
}

String ATime::getTimeString(String format) {
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

String ATime::getHourString() {
	String tempString;
	if(this->hour < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->hour));
}

String ATime::getMinutesString() {
	String tempString;
	if(this->minutes < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->minutes));
}

String ATime::getSecondsString() {
	String tempString;
	if(this->seconds < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->seconds));
}
