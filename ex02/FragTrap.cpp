#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called." << std::endl;
    _hit = 100;
    _energy = 100;
    _attack = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap name constructor called." << std::endl;
    _hit = 100;
    _energy = 100;
    _attack = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	this->_name = other._name;
    this->_energy = other._energy;
    this->_attack = other._attack;
    this->_hit = other._hit;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_energy = other._energy;
        this->_attack = other._attack;
        this->_hit = other._hit;
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    if (this->_hit > 0)
        std::cout << "FragTrap " << _name << " request a positive high fives." << std::endl;
    else
        std::cout << "FragTrap " << _name << " doesn't have hit points to request a positive high fives." << std::endl;
}
