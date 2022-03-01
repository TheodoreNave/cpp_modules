#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>


class Karen {

	public:
		void complain( std::string level );
		Karen( void );
		~Karen( void );
	private:
		void _debug( void );
		void _info( void );
		void _warning( void );
		void _error( void );
		void _default( void );

};

#endif