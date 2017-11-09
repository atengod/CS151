//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/1/17>
#ifndef HASMOVE_H
#define HASMOVE_H

#include "Archive.h"

bool hasMove()
{
	if ((a == '-') || (b == '-') || (c == '-') || (d == '-') || (e == '-') || (f == '-') || (g == '-') || (h == '-') || (i == '-'))
	{
		return true;
	}
	return false;
}

#endif 