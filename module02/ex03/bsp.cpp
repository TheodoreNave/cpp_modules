#include "Point.hpp"



float Point::signe (Point const p1, Point const p2, Point const p3)
{
	return (p1._x - p3._x) * (p2._y - p3._y) - (p2._x - p3._x) * (p1._y - p3._y);
}

bool bsp( Point const a, Point const b, Point const c, Point const point ) {

	Point poin;
	float d1, d2, d3;
	bool has_neg, has_pos;

	// d0 = poin.signe()
	d1 = poin.signe(point, b, c);
	d2 = poin.signe(point, c, a);
	d3 = poin.signe(point, a, b);

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	if (has_neg) {
		printf("NOTGOOD\n");
		return (0);
	}
	if (has_pos) {
		printf("GOOOOOOOOOOD\n");
		return (1);
	}
	return (3);
}
