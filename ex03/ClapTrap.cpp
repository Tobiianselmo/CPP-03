#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("(null)"), _hit(10), _energy(10), _attack(0)
{
    std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
    std::cout << "ClapTrap name constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap default destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->_name = other._name;
    this->_energy = other._energy;
    this->_attack = other._attack;
    this->_hit = other._hit;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_energy = other._energy;
        this->_attack = other._attack;
        this->_hit = other._hit;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy > 0 && _hit > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
        _energy -= 1;
    }
    else
    {
        if (_energy <= 0 && _hit <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have energy and hit points" << std::endl;
        else if (_energy <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have energy points" << std::endl;
        else if (_hit <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have hit points" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_energy > 0 && _hit > 0)
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage." << std::endl;
        _hit -= amount;
    }
    else
    {
        if (_energy <= 0 && _hit <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have energy and hit points" << std::endl;
        else if (_energy <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have energy points" << std::endl;
        else if (_hit <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have hit points" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy > 0 && _hit > 0)
    {
        std::cout << "ClapTrap " << _name << " repairs " << amount << " points of hit." << std::endl;
        _energy -= 1;
    }
    else
    {
        if (_energy <= 0 && _hit <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have energy and hit points" << std::endl;
        else if (_energy <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have energy points" << std::endl;
        else if (_hit <= 0)
            std::cout << "ClapTrap " << _name << " doesn't have hit points" << std::endl;
    }
}
