//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/9/17>
#ifndef MAKEMOVE_H
#define MAKEMOVE_H

#include "Archive.h"

bool makeMove(int position,char token)
{	
	if (position >= 1 && position <= 9)
	{
		if (grid[position-1] == '-')
		{
			grid[position - 1] = token;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

#endif 
