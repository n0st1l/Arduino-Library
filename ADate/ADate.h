/*
 * ADate.h
 *
 *  Created on: 13.07.2015
 *      Author: Administrator
 */

#ifndef LIBRARIES_ADATE_H_
#define LIBRARIES_ADATE_H_

#include "WString.h"


class ADate {
public:
	ADate();
	ADate(unsigned int p_year, unsigned int p_month, unsigned int p_day);
	virtual ~ADate();

	void setValuesFrom(ADate* date);

	inline unsigned int getYear() { return year; }
	void setYear(unsigned int year);

	inline unsigned int getMonth() { return month; }
	void setMonth(unsigned int month);

	inline unsigned int getDay() { return day; }
	void setDay(unsigned int day);

	String getDateString();
	String getYearString();
	String getMonthString();
	String getDayString();

	/*Operators*/
	inline bool operator < (const ADate &otherDate) const
	{
		if(this->year != otherDate.year)
		{
		return this->year < otherDate.year;
		}
		else if(this->month != otherDate.month)
		{
			return this->month < otherDate.month;
		}
		else
		{
			return this->day < otherDate.day;
		}
	}


private:
	unsigned int year;
	unsigned int month;
	unsigned int day;


};


#endif /* LIBRARIES_ADATE_H_ */
