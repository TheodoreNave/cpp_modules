#include "Zombie.hpp"

int main( void ) {

	Zombie zombie("rob");
	zombie.announce();

	Zombie *ptr = newZombie("theo");
	ptr->announce();

	randomChump("tim");

	delete ptr;
	return (0);
}