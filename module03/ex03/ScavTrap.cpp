#include "ScavTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {

	std::cout << "Constructor ScavTrap 2 without name has been called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name ) {

	this->set_name(name);
	this->setValue();
	std::cout << "Constructor ScavTrap 2 with name has been called" << std::endl;
	return ;

}

void ScavTrap::setValue( void ) {

	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap( void ) {

	std::cout << "Destructor ScavTrap 2 has been called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const &src ) {

	*this = src;
	return ;
}

void ScavTrap::guardGate() {

	std::cout << "Entering mode : Gate Keeper" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=( ScavTrap const &rhs ) {

	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return *this;
}

