#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap("Neitor");

	scavtrap.attack("Marcelito");
	scavtrap.takeDamage(50);
	scavtrap.beRepaired(20);
	scavtrap.takeDamage(100);
	scavtrap.beRepaired(20);
	scavtrap.attack("Peter");
	scavtrap.guardGate();

	return 0;
}