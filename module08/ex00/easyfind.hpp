#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <list>
#include <stdio.h>

template <typename T>

typename T::iterator easyfind( T &a, int b ){

	return std::find(a.begin(), a.end(), b);
}

#endif