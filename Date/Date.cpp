/*
 * Date.cpp
 *
 *  Created on: 13.07.2015
 *      Author: Administrator
 */

#include "Date.h"

Date::Date() {
	this->year = 2000;
	this->month = 1;
	this->day = 1;
}

Date::Date(unsigned int year, unsigned int month, unsigned int day) {
	this->year = year;
	this->month = month;
	this->day = day;
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}

void Date::setValuesFrom(Date* date) {
	this->year = date->getYear();
	this->month = date->getMonth();
	this->day = date->getDay();
}

void Date::setYear(unsigned int year) {
	this->year = year;
}

void Date::setMonth(unsigned int month) {
	this->month = month;
}

void Date::setDay(unsigned int day) {
	this->day = day;
}

String Date::getDateString() {
	String tempString;
	tempString = this->getYearString() + "-" + this->getMonthString() + "-" + this->getDateString();
	return tempString;
}

String Date::getYearString() {
	return String(this->year);
}

String Date::getMonthString() {
	String tempString;
	if(this->month < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->month));
}

String Date::getDayString() {
	String tempString;
	if(this->day < 10)
	{
		tempString = "0";
	}
	return (tempString + String(this->day));
}
