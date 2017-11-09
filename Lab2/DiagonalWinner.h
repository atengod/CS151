//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/1/17>
#ifndef DIAGONALWINNER_H
#define DIAGONALWINNER_H

#include "Archive.h"

bool diagonalWinner()
{
	if ((a == e) && (a == i) && (e == i) && (a != '-') && (e != '-') && (i != '-'))
	return true;
	if ((c == e) && (c == g) && (g == e) && (c != '-') && (e != '-') && (g != '-'))
	return true;

	else
		return false;
}

#endif 