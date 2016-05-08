/*
 * ALowPassFilter.h
 *
 *  Created on: 27.03.2016
 *      Author: Administrator
 */

#ifndef ALOWPASSFILTER_H_
#define ALOWPASSFILTER_H_

class ALowPassFilter {
public:
	ALowPassFilter(float beta);
	virtual ~ALowPassFilter();

	void addNewData(float newData);

	inline float getProcessedData() {return processedData;}
	void resetProcessedData();

	inline float getBeta() {return beta;}
	void setBeta(float beta);


private:
	float processedData;
	float beta;


};

#endif /* ALOWPASSFILTER_H_ */
