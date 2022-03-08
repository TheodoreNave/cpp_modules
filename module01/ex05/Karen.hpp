#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen {

	public:

		Karen( void );
		~Karen( void );

		void complain( std::string level );

	private:

		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
		void (Karen::*fct[4])(void);

};

#endif