/*
 * Shapet.cpp
 *
 *  Created on: 16-Jul-2017
 *      Author: tan
 */
#include "Build.h"
#include "Shapet.h"

#include <math.h>
Shape_t::Shape_t() {
	// TODO Auto-generated constructor stub

}
void Shape_t::colorDraw(EnumDataTypes_t::color cid)
{
	switch(cid)
	{
	case EnumDataTypes_t::BLACK:
		glColor3f(0,0,0);
		break;

	case EnumDataTypes_t::WHITE:
		glColor3f(1,1,1);
		break;

	case EnumDataTypes_t::RED:
		glColor3f(1,0,0);
		break;

	case EnumDataTypes_t::GREEN:
		glColor3f(0,1,0);
		break;

	case EnumDataTypes_t::BLUE:
		glColor3f(0,0,1);
		break;

	case EnumDataTypes_t::YELLOW:
		glColor3f(1,1,0);
		break;

	case EnumDataTypes_t::CYAN:
		glColor3f(0,1,1);
		break;

	case EnumDataTypes_t::MAGENTA:
		glColor3f(1,0,1);
		break;

	case EnumDataTypes_t::SAFFRON:
		glColor3f(0.957,0.769,0.188);
		break;

	default:
		glColor3f(1,1,1);
		break;
	}
}
