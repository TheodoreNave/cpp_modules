#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


class Point {

	public:

        Point( void );
        Point( float const a, float const b);
        Point( Point const &src );
        // Point &operator=( Point const &rhs );
        ~Point ( void );
		float signe (Point const p1, Point const p2, Point const p3);

    private:

        Fixed const _x;
        Fixed const _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point ); // a b c sommet / Point -> point a evaluer

// return true or false

#endif