//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/15/17>
#ifndef HEIGHT_H
#define HEIGHT_H

#include "Archive.h"

double height(double v,double t,double a)
{
	double h = v * sin(toRad(a))*t + 0.5*G*t*t;
	return h;}

#endif 
