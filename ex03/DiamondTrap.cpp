#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called." << std::endl;
    _name = "(null)";
    _hit = 100;
    _energy = 50;
    _attack = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap name constructor called." << std::endl;
    _name = name;
    _hit = 100;
    _energy = 50;
    _attack = 30;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap default destructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->_name = other._name;
    this->_energy = other._energy;
    this->_attack = other._attack;
    this->_hit = other._hit;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_energy = other._energy;
        this->_attack = other._attack;
        this->_hit = other._hit;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    if (this->_hit > 0)
    {
        std::cout << "DiamondTrap's name is " << _name << "." << std::endl;
        std::cout << "ClapTrap's name is "  << ClapTrap::_name << "." << std::endl;
    }
    else
        std::cout << "DiamonTrap " << _name << " doesnt't have hit points to display it's name." << std::endl;
}