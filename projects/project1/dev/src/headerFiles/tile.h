#pragma once
#include <string>

class Tile {

public:

        // main constructor
        Tile( int a, int b );
        // desctructor required
        //~Tile();

        // consider making left and right const?
        int left() { return a_left; }
        int right() { return a_right; }

        // Should this create a new tile or modify
        // In theory this is only going to be put into play when tiles are chosen for placement.
        Tile flipped();

        bool isDouble() { return a_left == a_right; }

        int pipSum() { return a_left + a_right; }

        std::string toString();

private:

        int a_left{0};
        int a_right{0};

};