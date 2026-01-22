#include "tile.h"
#include <iostream>

// Tile class constructor  : initialize member vars
Tile::Tile( int a, int b ) : a_left( a ), a_right( b ) {

	// document which tile is returning the error
	if ( a < 0 || b < 0 ) {

		std::cerr << "Tile pips cannot be negative." << std::endl;

	}

	/*
	else if ( a == null || b == null ) {
		std:perror("ti")
	}
*/

}

std::string Tile::toString() {
	
	// std::to_string function: converts numerical values into string
	return std::to_string( a_left ) + "-" + std::to_string( a_right );

}

Tile Tile::flipped() {

	return Tile( a_right, a_left );

}
