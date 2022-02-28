#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie *ptr = new Zombie[N];

	int i = 0;
	while (i < N)
	{
		ptr[i].give_name(name);
		i++;
	}
	return (ptr);
}
