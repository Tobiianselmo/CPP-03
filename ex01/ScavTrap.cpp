#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called." << std::endl;
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_energy = other._energy;
        this->_attack = other._attack;
        this->_hit = other._hit;
    }
    return *this;
}

void ScavTrap::guardGate()
{
	if (this->_hit > 0)
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << _name << " doesn't have hit points to be in Gate keeper." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energy > 0 && _hit > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
        _energy -= 1;
    }
    else
    {
        if (_energy <= 0 && _hit <= 0)
            std::cout << "ScavTrap " << _name << " doesn't have energy and hit points" << std::endl;
        else if (_energy <= 0)
            std::cout << "ScavTrap " << _name << " doesn't have energy points" << std::endl;
        else if (_hit <= 0)
            std::cout << "ScavTrap " << _name << " doesn't have hit points" << std::endl;
    }
}