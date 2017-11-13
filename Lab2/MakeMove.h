//Team: <Team Name>
//Author: <Names>
//Creation: <Date>
#ifndef MAKEMOVE_H
#define MAKEMOVE_H

#include "Archive.h"

bool makeMove(int position,char token)
{
	if (position>= 1 && position<=9)
	{
		if (position == 1)
		{
			if (a == '-')
			{
				a = token;
				return true;
			}
			esle
			{
				return false;
			}
		}
	}
	return false;
}

#endif 
