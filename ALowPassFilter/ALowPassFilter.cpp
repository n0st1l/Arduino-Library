/*
 * ALowPassFilter.cpp
 *
 *  Created on: 27.03.2016
 *      Author: Administrator
 */

#include "ALowPassFilter.h"

ALowPassFilter::ALowPassFilter(float beta) {
	// TODO Auto-generated constructor stub
	this->processedData = 0;
	this->beta = 0;
	this->setBeta(beta);
}

ALowPassFilter::~ALowPassFilter() {
	// TODO Auto-generated destructor stub
}

void ALowPassFilter::addNewData(float newData) {
	// LPF: Y(n) = (1-Beta) * Y(n-1) + Beta * X(n)
	this->processedData = this->processedData - (this->beta * (this->processedData - newData));
}

void ALowPassFilter::resetProcessedData() {
	this->processedData = 0;
}

void ALowPassFilter::setBeta(float beta) {
	if(beta <= 0)
	{
		this->beta = 0;
	}
	else if(beta >= 1)
	{
		this->beta = 1;
	}
	else
	{
		this->beta = beta;
	}
}
