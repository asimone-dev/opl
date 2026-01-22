#include <iostream>
#include "tile.h"

int main ( int argc, char *argv[] )
{

    std::cout << "Lets play longana!\n";

    Tile t1( 3,6 );
    Tile t2 = t1.flipped();
    Tile t3( -1,1);

    std::cout << "Tile t1: " << t1.toString() << "\n";
    std::cout << "Tile t2: " << t2.toString() << " (flipped)\n\n";

    // Note: (-1,1) is not considered a double... interesting!
    std::cout << "Tile t3: " << t3.toString() << "\n";
    std::cout << "Is Tile t3 a double? " << ( t3.isDouble() ? "yes" : "no" ) << "\n\n";

    std::cout << "Pip sum t1: " << t1.pipSum() << "\n";

    return 0;
}
