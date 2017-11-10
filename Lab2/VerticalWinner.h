//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/4/17>
#ifndef VERTICALWINNER_H
#define VERTICALWINNER_H

#include "Archive.h"

bool verticalWinner()
{
	bool val1 = (a == d) && (a == g) && (d == g);
	return true;
	bool val2 = (c == e) && (c == h) && (e == h);
	return true;
	bool val3 = (c == i) && (c == f) && (f == i);
	return true;
}

#endif 
