/*
 * AMonth.h
 *
 *  Created on: 20.06.2016
 *      Author: Lukas Koepfli
 */

#ifndef AMONTH_H_
#define AMONTH_H_

class AMonth {
public:
	static AMonth Jan() { return AMonth(1); }
	static AMonth Feb() { return AMonth(2); }
	static AMonth Mar() { return AMonth(3); }
	static AMonth Apr() { return AMonth(4); }
	static AMonth May() { return AMonth(5); }
	static AMonth Jun() { return AMonth(6); }
	static AMonth Jul() { return AMonth(7); }
	static AMonth Aug() { return AMonth(8); }
	static AMonth Sept() { return AMonth(9); }
	static AMonth Oct() { return AMonth(10); }
	static AMonth Nov() { return AMonth(11); }
	static AMonth Dec() { return AMonth(12); }

	virtual ~AMonth();


private:
	explicit AMonth(int p_month);
	int value;


};

#endif /* AMONTH_H_ */
