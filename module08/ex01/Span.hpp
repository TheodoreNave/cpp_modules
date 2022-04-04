#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <list>

class Span {

	public:

		Span( unsigned int n );
		Span( Span const &src );
		~Span( void );

		Span &operator=(Span const &rhs);
		void addNumber( int num );
		int shortestSpan( void );
		int longestSpan( void );


		class notFound : public std::exception {

			public :

				virtual const char* what() const throw();
		};

	private:

		Span( void );
		std::vector<int> vec;

};

#endif