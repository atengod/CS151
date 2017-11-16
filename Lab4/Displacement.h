//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/15/17>
#ifndef DISPLACEMENT_H
#define DISPLACEMENT_H

#include "Archive.h"

double displacement(double v,double t,double a)
{
	double s = v*cos(toRad(a))*t;
	return s;
}

#endif 
