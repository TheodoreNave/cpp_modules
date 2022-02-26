#include "Class.test.hpp"
#include <iostream>

Sample::Sample( int q ) : j(q){

	std::cout << "this->j = " << q << std::endl;
	std::cout << "constructer has been placed" << std::endl;
	return ;
}

Sample::~Sample( void ) {

	std::cout << "constructer has been defused" << std::endl;
	return ;
}

void Sample::Bar( int i ) {

	this->j = 42;
	std::cout << "this->j = " << this->j << std::endl;
	std::cout << "constructer has been defused" << std::endl;
	return ;
}