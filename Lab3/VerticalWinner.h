//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/9/17>
#ifndef VERTICALWINNER_H
#define VERTICALWINNER_H

#include "Archive.h"

bool verticalWinner()
{
	if ((grid[c] == grid[e] && grid[c] == grid[g] && grid[g] == grid[e]) && (grid[c] != '-') && (grid[e] != '-') && (grid[g] != '-'))
	{
		return true;
	}
	else if ((grid[a] == grid[e] && grid[a] == grid[i] && grid[e] == grid[i]) && (grid[e] != '-') && (grid[a] != '-') && (grid[i] != '-'))
	{
		return true;
	}

	return false;
}

#endif 
