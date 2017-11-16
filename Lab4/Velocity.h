//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/15/17>
#ifndef VELOCITY_H
#define VELOCITY_H

#include "Archive.h"

double velocity(double v,double t,double a)
{	
	double vy = v*sin(toRad(a)) + (-9.8*t);
	return vy;
}

#endif 
