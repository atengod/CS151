//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/1/17>
#ifndef MAKEMOVE_H
#define MAKEMOVE_H

#include "Archive.h"

bool makeMove(int position,char token)
{
	if (position >= 1 && position <= 9)
	{
		if (position == 1)
		{
			if (a == '-')
			{
				a = token;
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (position == 2)
		{
			if (b == '-')
			{
				b = token;
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (position == 3)
		{
			if (c == '-')
			{
				c = token;
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (position == 4)
		{
			if (d == '-')
			{
				d = token;
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (position == 5)
		{
			if (e == '-')
			{
				e = token;
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (position == 6)
		{
			if (f == '-')
			{
				f = token;
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (position == 7)
		{
			if (g == '-')
			{
				g = token;
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (position == 8)
		{
			if (h == '-')
			{
				h = token;
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (position == 9)
		{
			if (i == '-')
			{
				i = token;
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}


#endif 