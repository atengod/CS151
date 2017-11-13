//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/4/17>
#ifndef VERTICALWINNER_H
#define VERTICALWINNER_H

#include "Archive.h"

bool verticalWinner()
{
	if ((a == d) && (a == g) && (d == g) && (a != '-') && (d != '-') && (g != '-'))
		return true;
	if ((b == e) && (b == h) && (e == h) && (b != '-') && (e != '-') && (h != '-'))
		return true;
	if ((c == f) && (c == i) && (f == i) && (c != '-') && (f != '-') && (i != '-'))
		return true;
	
	else
		return false;
}

#endif 
