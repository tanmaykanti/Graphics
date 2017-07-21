/*
 * Ellipset.h
 *
 *  Created on: 21-Jul-2017
 *      Author: tan
 */

#ifndef ELLIPSET_H_
#define ELLIPSET_H_

class Ellipse_t {
	float x,y,a,b;
	float theta;
	float calculateR();

public:
	Ellipse_t(float xc,float yc,float ac,float bc);
	void drawEllipse();
};

#endif /* ELLIPSET_H_ */
