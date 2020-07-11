/*
 * ATime.h
 *
 *  Created on: 13.07.2015
 *      Author: Administrator
 */

#ifndef LIBRARIES_ATIME_H_
#define LIBRARIES_ATIME_H_

#include "WString.h"


class ATime {
public:
	ATime();
	ATime(unsigned int p_hour, unsigned int p_minutes, unsigned int p_seconds = 0);
	virtual ~ATime();

	void setValuesFrom(ATime* time);

	bool setTime(unsigned int hour, unsigned int minutes, unsigned int seconds);

	inline unsigned int getHour() { return hour; }
	bool setHour(unsigned int hour);

	inline unsigned int getMinutes() { return minutes; }
	bool setMinutes(unsigned int minutes);

	inline unsigned int getSeconds() { return seconds; }
	bool setSeconds(unsigned int seconds);

	bool isValid();

	long secsTo(const ATime *otherTime) const;

	String getTimeString(String format);
	String getHourString();
	String getMinutesString();
	String getSecondsString();

	/*Operators*/
	inline bool operator < (const ATime &otherTime) const
	{
		if(this->hour != otherTime.hour)
		{
		return this->hour < otherTime.hour;
		}
		else if(this->minutes != otherTime.minutes)
		{
			return this->minutes < otherTime.minutes;
		}
		else
		{
			return this->seconds < otherTime.seconds;
		}
	}


private:
	unsigned int hour;
	unsigned int minutes;
	unsigned int seconds;
};


#endif /* LIBRARIES_ATIME_H_ */
