#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {

	std::cout << "Constructor FragTrap 3 without name has been called" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name ) {

	this->set_name(name);
	this->setValue();
	std::cout << "Constructor FragTrap 3 with name has been called" << std::endl;
	return ;

}

void FragTrap::setValue( void ) {

	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap( void ) {

	std::cout << "Destructor FragTrap 3 has been called" << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const &src ) {

	*this = src;
	return ;
}

void FragTrap::highFivesGuys(void) {

	std::cout << "High-Five! That's what I'm talking about!" << std::endl;
	return ;
}

FragTrap &FragTrap::operator=( FragTrap const &rhs ) {

	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return *this;
}

