#include "Zombie.hpp"

void randomChump( std:: string name ) {

	Zombie	pile = Zombie(name);
	pile.announce();
	return ;
}