#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <list>
#include <ctime>

class Span {

	public:

		Span( unsigned int n );
		Span( Span const &src );
		~Span( void );

		Span &operator=(Span const &rhs);
		void addNumber( int num );
		int shortestSpan( void );
		int longestSpan( void );
		// int randomNumber( void );
		void addRandomNumber(void);

		class notFound : public std::exception {

			public :

				virtual const char* what() const throw() {

					return ("NO");
				}
		};

	private:

		Span( void );
		unsigned int 		_n;
		std::vector<int> 	vec;

};

#endif