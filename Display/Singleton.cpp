/*
 * Singleton.cpp
 *
 *  Created on: 16-Jul-2017
 *      Author: tan
 */
#include <iostream>
#include "Singleton.h"

using namespace std;
Singleton::Singleton() {
	// TODO Auto-generated constructor stub
// Constructor is private
}
bool Singleton::createFLAG=false;
Singleton* Singleton::stptr=NULL;
Singleton* Singleton::getInstance()
{

	if(!createFLAG)
	{
		stptr= new Singleton;
		createFLAG=true;
	}

	return stptr;
}

void Singleton::show()
{
	cout<<"st pointer is "<<stptr<<endl;
}
Singleton::~Singleton() {
	// TODO Auto-generated destructor stub
}

