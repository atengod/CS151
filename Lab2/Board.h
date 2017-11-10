//Team: <Creators>
//Author: <Michael Olorode>
//Creation: <11/4/17>
#ifndef BOARD_H
#define BOARD_H

#include "Archive.h"

std::string board()
{	
	std::stringstream out;
	out << "\n" << a << " " << b << " " << c << "\n";
	out << d << " " << e << " " << f << "\n";
	out << g << " " << h << " " << i << "\n";
	
	return out.str();
}

#endif 
