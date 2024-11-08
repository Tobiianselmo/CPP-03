#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "//     FRAGTRAP TESTS     //\n" << std::endl;
    FragTrap fragtrap("Neitor");

    fragtrap.attack("Peter");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();

    std::cout << "\n//     SCAVTRAP TESTS     //\n" << std::endl;
    ScavTrap scavtrap("Peter");

    scavtrap.attack("Neitor");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();
    std::cout << "\n//     DESTRUCTORS     //\n" << std::endl;
    return 0;
}