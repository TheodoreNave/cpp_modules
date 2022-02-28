#include "Karen.hpp"

Karen::Karen( void ) {

	Karen::fct[0] = &Karen::_debug;
	Karen::fct[1] = &Karen::_info;
	Karen::fct[2] = &Karen::_warning;
	Karen::fct[3] = &Karen::_error;
	return ;
}

Karen::~Karen( void ) {

	return ;
}

void Karen::_debug( void ) {

	std::cout << "DEBUG" << std::endl;
}

void Karen::_info( void ) {

	std::cout << "INFO" << std::endl;

}

void Karen::_warning( void ) {

	std::cout << "WARNING" << std::endl;

}


void Karen::_error( void ) {

	std::cout << "KAREN ERROR" << std::endl;

}

void Karen::complain( std::string level) {

	int i = 0;
	const int tab[4]= {

		level.compare("DEBUG"),
		level.compare("INFO"),
		level.compare("WARNING"),
		level.compare("ERROR")
	};
	
	while (i < 4)
	{
		if (tab[i] == 0)
			(this->*fct[i])();
		i++;
	}
	return ;
}