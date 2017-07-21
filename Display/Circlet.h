/*
 * Circlet.h
 *
 *  Created on: 16-Jul-2017
 *      Author: tan
 */

#ifndef CIRCLET_H_
#define CIRCLET_H_
#include "EnumDataTypes_t.h"
class Circle_t {
public:
	Circle_t();
	void drawCircle(float x,float y,float radius,EnumDataTypes_t::color,bool isFill);
	void drawFlag();

};

#endif /* CIRCLET_H_ */
