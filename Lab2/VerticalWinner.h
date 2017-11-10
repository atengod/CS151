//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/4/17>
#ifndef VERTICALWINNER_H
#define VERTICALWINNER_H

#include "Archive.h"

bool verticalWinner()
{
	if ((a == d) && (a == g) && (d == g) && a != '-')
		return true;
	if ((c == e) && (c == h) && (e == h) && c != '-')
		return true;
	if ((c == i) && (c == f) && (f == i) && f != '-')
	return true;
	
	return false;
}

#endif 
