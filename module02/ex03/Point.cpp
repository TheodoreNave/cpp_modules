#include "Point.hpp"
#include <math.h>

Point::Point( void ) : _x(Fixed(0)), _y(Fixed(0)) {

    return ;
}

Point::Point( float const a, float const b ) : _x(Fixed(a)), _y(Fixed(b)) {


    return ;
}

Point::Point( Point const *src) {

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

bool bsp( Point const a, Point const b, Point const c, Point const point ) {


}

int main{

    point a(15, 25);
    point b(15, 25);
    point c(15, 25);
    point point(12, 12);

    bsp(a, b, c, pont);
}