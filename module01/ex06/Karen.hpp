// ************************************************************************** //
//                                                                            //
//                		karen.hpp for 42 School			              	  	  //
//                Created on  : Thu Feb 24 13:45:02 2022                      //
//                Last update : Thu Feb 24 13:45:02 2022                      //
//                Made by : Theodore "tnave" Nave <tnave@student.42.fr>       //
//                                                                            //
// ************************************************************************** //

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
