#include "Span.hpp"

Span::Span( unsigned int n ) : _n(n) {

	std::fill(vec.begin(), vec.end(), 0);
	return ;
}

Span::Span( Span const &src ) {

	*this = src;
	return ;
}

Span::~Span ( void ) {

	return ;
}

Span &Span::operator=( Span const &rhs ) {

	(void)rhs;
	return *this;
}

void Span::addNumber( int num ) {

	if (vec.size() == _n)
		throw Span::notFound();
	vec.push_back(num);
	// std::cout << "num = " << num << std::endl;
	return ;
}

int Span::shortestSpan( void ) {


	// 1 2 3
	std::vector<int> tmp = vec;
	if (vec.size() == 0 || vec.size() == 1)
		throw Span::notFound();
	sort(tmp.begin(), tmp.end());

	int i = 1;
	std::vector<int>::const_iterator itb = tmp.begin();
	std::vector<int>::const_iterator ite = tmp.end();
	std::vector<int>::const_iterator itz = itb;

	// std::cout << "itb = " <<  *itb << std::endl;
	// std::cout << "itz = " << *itz << std::endl;
	int small = std::numeric_limits<int>::max();

	// std::cout << "Small = " << small << std::endl;
	while (itb != ite)
	{
		// std::cout << "itb = " << *itb << std::endl;
		// std::cout << "itz = " << *itz << std::endl;
		if (itz != ite)
			std::advance(itz, i);
		if ((*itz - *itb) <= small)
		{
			if (itz != ite)
				small = *itz - *itb;
			// std::cout << "small2 = " << small << std::endl;
		}
		itb++;
	}
	return small;
}

int RandomNumber( void ) {

	return (std::rand() % 150);
}

void Span::addRandomNumber(void) {
		  std::srand ( unsigned ( std::time(0) ) );

	vec.resize(_n);
	std::generate(vec.begin(), vec.end(), RandomNumber);
}

int Span::longestSpan( void ) {

	int big = 0;

	std::vector<int> tmp = vec;
	if (vec.size() == 0 || vec.size() == 1)
		throw Span::notFound();
	std::sort(tmp.begin(), tmp.end());

	std::vector<int>::const_iterator itb = tmp.begin();
	std::vector<int>::const_iterator ite = tmp.end();
	std::vector<int>::const_iterator itz = itb;
	while (itb != ite)
	{
		// if (itz != ite)
		// 	std::advance(itz, 1);
		// std::cout << "itb = " << *itb << std::endl;
		// std::cout << "itz = " << *itz << std::endl;
		if ((*itb - *itz) >= big)
		{
			if (itz != ite)
				big = *itb - *itz;
			// std::cout << "big = " << big << std::endl;
		}
		itb++;
	}
	// std::cout << "big = " << big << std::endl;
	return big;
}
