#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap& operator=(const ScavTrap& other);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();

		void guardGate(void);
		void attack(const std::string& target);
};

#endif