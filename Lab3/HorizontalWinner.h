//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/9/17>
#ifndef HORIZONTALWINNER_H
#define HORIZONTALWINNER_H

#include "Archive.h"

bool horizontalWinner()
{
	if ((grid[0] == grid[1] && grid[0] == grid[2] && grid[1] == grid[2]) && (grid[0] != '-') && (grid[1] != '-') && (grid[2] != '-'))
	{
		return true;
	}
	else if ((grid[3] == grid[4] && grid[3] == grid[5] && grid[4] == grid[5]) && (grid[3] != '-') && (grid[4] != '-') && (grid[5] != '-'))
	{
		return true;
	}
	else if ((grid[6] == grid[7] && grid[6] == grid[8] && grid[7] == grid[8]) && (grid[6] != '-') && (grid[7] != '-') && (grid[8] != '-'))
	{
		return true;
	}
	return false;}

#endif 
