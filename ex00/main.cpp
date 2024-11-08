#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Neitor");
	
	claptrap.attack("Peter");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);

	return 0;
}