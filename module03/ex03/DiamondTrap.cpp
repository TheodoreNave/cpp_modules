#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {

	std::cout << "Constructor DiamondTrap 3 without name has been called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) {

	this->set_name(name);
	this->setValue();
	std::cout << "Constructor DiamondTrap 3 with name has been called" << std::endl;
	return ;

}

void DiamondTrap::setValue( void ) {

	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap( void ) {

	std::cout << "Destructor DiamondTrap 3 has been called" << std::endl;
	return ;
}

void DiamondTrap::whoAmI() {

	std::cout << this->_name << std::endl;
	std::cout << ClapTrap::_name << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) {

	*this = src;
	return ;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &rhs ) {

	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return *this;
}

void DiamondTrap::attack(const std::string &target) {

	if (this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << " " << "attacks "
		<< target << ", causing " << this->_attack_damage
		<< " points of damage!" << std::endl;
		// target->_hit_points -= this->_attack_damage;
		this->_energy_points--;
	}
	else
		std::cout << "Cannot attack" << std::endl;
	return ;
}
