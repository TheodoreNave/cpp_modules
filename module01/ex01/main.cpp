#include "Zombie.hpp"

int main ( void )
{
	Zombie *ptr;

	int i = 0;
	ptr = zombieHorde(14, "bob");
	while (i < 14)
	{
		ptr[i].announce();
		i++;
	}
	delete [] ptr;
	return (0);
}
