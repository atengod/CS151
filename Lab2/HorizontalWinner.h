//Team: <Creator>
//Author: <Michael Olorode>
//Creation: <11/1/17>
#ifndef HORIZONTALWINNER_H
#define HORIZONTALWINNER_H

#include "Archive.h"

bool horizontalWinner()
{
	if ((a == b) && (a == c) && (b == c) && (a != '-') && (b != '-') && (c != '-'))
	return true;
	if ((d == e) && (d == f) && (e == f) && (d != '-') && (e != '-') && (f != '-'))
	return true;
	if ((g == i) && (g == h) && (h == i) && (g != '-') && (h != '-') && (i != '-'))
	return true;

	else
		return false;
}

#endif 