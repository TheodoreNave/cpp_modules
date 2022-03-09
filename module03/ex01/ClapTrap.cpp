#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _hit_points(10), _energy_points(10), _attack_damage(0) {

	std::cout << "Constructor ClapTrap without name has been called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {

	std::cout << "Constructor ClapTrap with name has been called" << std::endl;
	return ;

}

ClapTrap::~ClapTrap( void ) {

	std::cout << "Destructor ClapTrap has been called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const &src ) {

	*this = src;
	return ;
}

void	ClapTrap::set_name(std::string name) {

	this->_name = name;
	return ;
}

ClapTrap &ClapTrap::operator=( ClapTrap const &rhs ) {

	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return *this;
}

void ClapTrap::attack(const std::string &target) {

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

void ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << this->_name << " " << "get attacked "
		<< "he lost " << this->_hit_points
		<< " life points!" << std::endl;
	this->_hit_points -= amount;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energy_points)
	{
		std::cout << "ClapTrap " << this->_name << "repaired himself"
		<< ", he gain " << amount
		<< " life points!" << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
	else
		std::cout << "Can't repair himself" << std::endl;
	return ;
}
