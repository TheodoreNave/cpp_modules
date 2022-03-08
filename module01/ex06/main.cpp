#include "Karen.hpp"

int main (int ac, char **av) {

	int i;
	i = 0;

	if (ac != 2)
		return (0);

	Karen instance;

	instance.complain(av[1]);
}
