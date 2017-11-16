//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/9/17>
#ifndef WINNER_H
#define WINNER_H

#include "Archive.h"

bool winner()
{
	if (horizontalWinner() || verticalWinner() || diagonalWinner())
		return true; 
	return false;
}

#endif 
