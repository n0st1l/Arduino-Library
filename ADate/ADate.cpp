/*
 * ADate.cpp
 *
 *  Created on: 13.07.2015
 *      Author: Administrator
 */

#include "ADate.h"

ADate::ADate()
: year(2000),
  month(1),
  day(1)
{}

ADate::ADate(unsigned int p_year, unsigned int p_month, unsigned int p_day)
: year(p_year),
  month(p_month),
  day(p_day)
{}

ADate::~ADate() {
	// TODO Auto-generated destructor stub
}

void ADate::setValuesFrom(ADate* date) {
	this->year = date->getYear();
	this->month = date->getMonth();
	this->day = date->getDay();
}

void ADate::setYear(unsigned int year) {
	this->year = year;
}

void ADate::setMonth(unsigned int month) {
	this->month = month;
}

void ADate::setDay(unsigned int day) {
	this->day = day;
}

String ADate::getDateString() {
	String tempString;
	tempString = this->getYearString() + "-" + this->getMonthString() + "-" + this->getDateString();
	return tempString;
}

String ADate::getYearString() {
	return String(this->year);
}

String ADate::getMonthString() {
	String tempString;
	if(this->month < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->month));
}

String ADate::getDayString() {
	String tempString;
	if(this->day < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->day));
}
