#include "DiamondTrap.hpp"

int main()
{
    std::cout << "//     CONSTRUCTORS     //\n" << std::endl;
    DiamondTrap diamond("Neitor");

    std::cout << "\n//     TESTS     //\n" << std::endl;
    diamond.attack("Peter");
    diamond.takeDamage(40);
    diamond.beRepaired(10);
    diamond.guardGate();
    diamond.highFivesGuys();
    diamond.whoAmI();

    std::cout << "\n//     DESTRUCTORS     //\n" << std::endl;
    return 0;
}