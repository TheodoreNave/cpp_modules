#include "ClapTrap.hpp"

int main() {

	ClapTrap Trap = ClapTrap("Theo");
	ClapTrap Trap_two("tim");
	ClapTrap Trap_three(Trap);
	ClapTrap Trap_four;
	Trap_four = Trap_two;

	Trap.attack("tim");
	Trap_two.takeDamage(7);
	Trap_three.attack("theo");
	Trap_four.beRepaired(3);
	return (0);
}
