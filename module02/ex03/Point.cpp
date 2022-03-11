#include "Point.hpp"
#include <math.h>

Point::Point( void ){

    return ;
}

Point::Point( float const a, float const b ) : _x(a), _y(b) {

    return ;
}

Point::Point( Point const &src) {

    *this = src;
    return ;
}

// Point &Point::operator=( Point const &rhs ) {

// 	this->_rawBits = rhs.x;
// 	this->_rawBits = rhs.y;
// 	return (*this);
// }

Point::~Point(void) {
    return ;
}


