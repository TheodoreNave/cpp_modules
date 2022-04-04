#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <list>

template <typename T>

typename T::iterator Easyfind( T a, int b ) {

	return std::find(a.begin(), a.end(), b);
}


#endif