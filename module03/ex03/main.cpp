#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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




	ScavTrap scav = ScavTrap("Laura");
	ScavTrap scavenger("Greg");

	scav.guardGate();
	scavenger.attack("theo");

	FragTrap frag = FragTrap("elliott");
	FragTrap frage("elliott");
	frag.attack("theo");
	frage.attack("theo");

	DiamondTrap diamond("Jul");

	diamond.attack("theo");
	diamond.whoAmI();
	diamond.beRepaired(4);


	return (0);
}
