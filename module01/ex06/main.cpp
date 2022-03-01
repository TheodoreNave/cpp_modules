#include "Karen.hpp"

int main (int ac, char **av) {

	int i;
	if (ac != 2)
		return (0);
	i = 0;
	Karen instance;

	instance.complain(av[1]);
}
