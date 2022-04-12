#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <list>
#include "Span.hpp"

int main()
{
	// {
	// 	std::vector<int> vec;

	// 	std::cout << "vec = " << vec.empty() << std::endl << std::endl;


	// 	std::cout << "vec = " << vec.size() << std::endl << std::endl;

	// 	vec.resize(10);

	// 	std::cout << "vec = " << vec.size() << std::endl << std::endl;

	// 	vec.push_back(3);

	// 	std::cout << "vec = " << vec.size() << std::endl << std::endl;

	// 	vec.push_back(5);

	// 	std::cout << "vec = " << vec.size() << std::endl << std::endl;

	// }
	{

		Span sp = Span(15);
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		sp.addRandomNumber();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;


	}
    return 0;
}