//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/4/17>
#ifndef HORIZONTALWINNER_H
#define HORIZONTALWINNER_H

#include "Archive.h"

bool horizontalWinner()
{
	if ((a == b) && (a == c) && (b == c) && (a != '-') && (b != '-') && (c != '-'))
		return true;
	if ((d == e) && (d == f) && (e == f) && (d != '-') && (e != '-') && (f != '-'))
		return true;
	if ((g == h) && (g == i) && (h == i) && (g != '-') && (h != '-') && (i != '-'))
		return true;
	
	else
		return false;
}

#endif 
