#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int main( void ) {

	{
		Point point(2, 369);

		Point a(2,369);
		Point b(93,318);
		Point c(473,407);

		bool boule = bsp(a, b, c, point);
		std::cout << boule << std::endl;
	}
	// {
	// 	Point point(2, 369);

	// 	Point a(2,369);
	// 	Point b(93,318);
	// 	Point c(473,407);

	// 	bool boule = bsp(a, b, c, point);
	// 	std::cout << boule << std::endl;
	// }
	// {
	// 	Point point(2, 369);

	// 	Point a(2,369);
	// 	Point b(93,318);
	// 	Point c(473,407);

	// 	bool boule = bsp(a, b, c, point);
	// 	std::cout << boule << std::endl;
	// }
}