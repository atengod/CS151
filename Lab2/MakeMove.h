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
			else
			{
				return false;
			}
		}
	}
	return false;
	if (position>= 1 && position<=9)
	{
		if (position == 1)
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
	}
	return false;
	if (position>= 1 && position<=9)
	{
		if (position == 1)
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
	}
	return false;
	if (position>= 1 && position<=9)
	{
		if (position == 1)
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
	}
	return false;
	if (position>= 1 && position<=9)
	{
		if (position == 1)
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
	}
	return false;
	if (position>= 1 && position<=9)
	{
		if (position == 1)
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
	}
	return false;
	if (position>= 1 && position<=9)
	{
		if (position == 1)
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
	}
	return false;
	if (position>= 1 && position<=9)
	{
		if (position == 1)
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
	}
	return false;
	if (position>= 1 && position<=9)
	{
		if (position == 1)
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
